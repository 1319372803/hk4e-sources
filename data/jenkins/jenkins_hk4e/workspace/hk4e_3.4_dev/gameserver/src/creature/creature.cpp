// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/creature.cpp

// Line 44: range 0000000014F39768-0000000014F3978C
bool __cdecl DieCreatureRecord::hasGlobalValue(DieCreatureRecord *const this, const std::string *key)
{
  return common::tools::MiscUtils::isContains<std::unordered_map<std::string,float>,std::string>(
           &this->global_value_map_,
           key);
};

// Line 48: range 0000000014F3978E-0000000014F398CC
float __cdecl DieCreatureRecord::getGlobalValue(DieCreatureRecord *const this, const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float result; // xmm0_4
  std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:49";
  *(_QWORD *)(v2 + 16) = DieCreatureRecord::getGlobalValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,float>::iterator *)(v2 + 32) = std::unordered_map<std::string,float>::find(
                                                                    &this->global_value_map_,
                                                                    key);
  __y._M_cur = std::unordered_map<std::string,float>::end(&this->global_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,float>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)(v2 + 32),
         &__y) )
  {
    result = 0.0;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->second);
    }
    result = v6->second;
  }
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

// Line 58: range 0000000014F398CE-0000000014F39945
void __cdecl DieCreatureRecord::setGlobalValue(DieCreatureRecord *const this, const std::string *key, float value)
{
  std::unordered_map<std::string,float>::mapped_type *v3; // rax
  float *v4; // rdx

  v3 = std::unordered_map<std::string,float>::operator[](&this->global_value_map_, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = value;
};

// Line 64: range 0000000014F39946-0000000014F399A6
proto::PlayerDieType __cdecl getPlayerDieTypeFromHpReason(proto::ChangHpReason reason)
{
  proto::PlayerDieType result; // eax

  switch ( reason )
  {
    case CHANGE_HP_SUB_MONSTER:
      result = PLAYER_DIE_KILL_BY_MONSTER;
      break;
    case CHANGE_HP_SUB_GEAR:
      result = PLAYER_DIE_KILL_BY_GEAR;
      break;
    case CHANGE_HP_SUB_FALL:
      result = PLAYER_DIE_FALL;
      break;
    case CHANGE_HP_SUB_DRAWN:
      result = PLAYER_DIE_DRAWN;
      break;
    case CHANGE_HP_SUB_ABYSS:
      result = PLAYER_DIE_ABYSS;
      break;
    case CHANGE_HP_SUB_GM:
      result = PLAYER_DIE_GM;
      break;
    default:
      result = PLAYER_DIE_NONE;
      break;
  }
  return result;
};

// Line 85: range 0000000014F399A8-0000000014F3A3A3
int32_t __cdecl Creature::changeLifeState(
        Creature *const this,
        data::LifeState life_state,
        ChangeHpContext *context_ptr,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t result; // eax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  BuffComp *BuffComp; // rax
  GameserverService *v11; // rax
  GameThreadLocal *GameThreadLocal; // rax
  Creature *v13; // rdx
  unsigned __int64 v14; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint64_t Guid; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::string *v18; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  BuffComp *v20; // rax
  Scene *v21; // rax
  Entity *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  common::milog::MiLogStream *v26; // rdx
  data::LifeState old_life_state; // [rsp+20h] [rbp-1D0h]
  uint32_t move_reliable_seq; // [rsp+24h] [rbp-1CCh]
  google::protobuf::uint32 source_entity_id; // [rsp+28h] [rbp-1C8h]
  google::protobuf::uint32 source_entity_id_0; // [rsp+2Ch] [rbp-1C4h]
  char *val; // [rsp+30h] [rbp-1C0h] BYREF
  char *v34; // [rsp+38h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ServerBuff> *server_buff_list; // [rsp+40h] [rbp-1B0h]
  google::protobuf::RepeatedPtrField<proto::ServerBuff> *server_buff_list_0; // [rsp+48h] [rbp-1A8h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-1A0h] BYREF
  char v38[384]; // [rsp+70h] [rbp-180h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 16 14 avatar_ptr:110 64 16 14 avatar_ptr:126 96 16 13 scene_ptr:147 128 72 16 change_notify"
                        ":95 240 80 24 avatar_change_notify:129";
  *(_QWORD *)(v4 + 16) = Creature::changeLifeState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  if ( life_state == this->life_state_ )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->life_state_);
    }
    old_life_state = this->life_state_;
    this->life_state_ = life_state;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[416] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[416] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[416]);
    }
    move_reliable_seq = *(_DWORD *)&this->baseclass_0[416] + 50;
    if ( is_notify )
    {
      proto::LifeStateChangeNotify::LifeStateChangeNotify((proto::LifeStateChangeNotify *const)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->baseclass_0[256]);
      }
      proto::LifeStateChangeNotify::set_entity_id(
        (proto::LifeStateChangeNotify *const)(v4 + 128),
        *(_DWORD *)&this->baseclass_0[256]);
      if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->life_state_);
      }
      proto::LifeStateChangeNotify::set_life_state((proto::LifeStateChangeNotify *const)(v4 + 128), this->life_state_);
      if ( context_ptr )
      {
        if ( std::operator!=<Creature>(&context_ptr->attacker_ptr, 0LL) )
        {
          v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context_ptr->attacker_ptr);
          source_entity_id = Entity::getEntityId((const Entity *const)v8);
          proto::LifeStateChangeNotify::set_source_entity_id(
            (proto::LifeStateChangeNotify *const)(v4 + 128),
            source_entity_id);
        }
        proto::LifeStateChangeNotify::set_attack_tag(
          (proto::LifeStateChangeNotify *const)(v4 + 128),
          &context_ptr->attack_tag);
        if ( *(_BYTE *)(((unsigned __int64)&context_ptr->die_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context_ptr->die_type >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&context_ptr->die_type);
        }
        proto::LifeStateChangeNotify::set_die_type(
          (proto::LifeStateChangeNotify *const)(v4 + 128),
          context_ptr->die_type);
        proto::LifeStateChangeNotify::set_move_reliable_seq(
          (proto::LifeStateChangeNotify *const)(v4 + 128),
          move_reliable_seq);
      }
      toPtr<Avatar,Creature>((Creature *)(v4 + 32));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 32), 0LL) )
      {
        server_buff_list = proto::LifeStateChangeNotify::mutable_server_buff_list((proto::LifeStateChangeNotify *const)(v4 + 128));
        v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        BuffComp = Avatar::getBuffComp(v9);
        BuffComp::toClient(BuffComp, server_buff_list);
      }
      v11 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = GameserverService::getGameThreadLocal(v11);
      PlayerSendPacketController::forceFlushAll(&GameThreadLocal->player_send_packet_controller);
      if ( Entity::isOnScene((const Entity *const)this) )
      {
        Entity::notifyViewingPlayers<proto::LifeStateChangeNotify>(
          (Entity *const)this,
          (proto::LifeStateChangeNotify *)(v4 + 128),
          1);
      }
      else
      {
        v13 = this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v14 = *(_QWORD *)this->baseclass_0 + 24LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
        if ( (*(unsigned int (__fastcall **)(Creature *))v14)(v13) == 1 )
        {
          toPtr<Avatar,Creature>((Creature *)(v4 + 64));
          if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 64), 0LL) )
          {
            proto::AvatarLifeStateChangeNotify::AvatarLifeStateChangeNotify((proto::AvatarLifeStateChangeNotify *const)(v4 + 240));
            v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            Guid = Avatar::getGuid(v15);
            proto::AvatarLifeStateChangeNotify::set_avatar_guid(
              (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
              Guid);
            if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&this->life_state_);
            }
            proto::AvatarLifeStateChangeNotify::set_life_state(
              (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
              this->life_state_);
            if ( context_ptr )
            {
              if ( std::operator!=<Creature>(&context_ptr->attacker_ptr, 0LL) )
              {
                v17 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context_ptr->attacker_ptr);
                source_entity_id_0 = Entity::getEntityId((const Entity *const)v17);
                proto::AvatarLifeStateChangeNotify::set_source_entity_id(
                  (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
                  source_entity_id_0);
              }
              v18 = std::move<std::string &>(&context_ptr->attack_tag);
              proto::AvatarLifeStateChangeNotify::set_attack_tag(
                (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
                v18);
              if ( *(_BYTE *)(((unsigned __int64)&context_ptr->die_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)context_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context_ptr->die_type >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&context_ptr->die_type);
              }
              proto::AvatarLifeStateChangeNotify::set_die_type(
                (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
                context_ptr->die_type);
              proto::AvatarLifeStateChangeNotify::set_move_reliable_seq(
                (proto::AvatarLifeStateChangeNotify *const)(v4 + 240),
                move_reliable_seq);
            }
            server_buff_list_0 = proto::AvatarLifeStateChangeNotify::mutable_server_buff_list((proto::AvatarLifeStateChangeNotify *const)(v4 + 240));
            v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v20 = Avatar::getBuffComp(v19);
            BuffComp::toClient(v20, server_buff_list_0);
            Entity::getScene((const Entity *const)(v4 + 96));
            if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
            {
              v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              Scene::notifyAllPlayer<proto::AvatarLifeStateChangeNotify>(
                v21,
                (proto::AvatarLifeStateChangeNotify *)(v4 + 240),
                0);
            }
            else
            {
              v22 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              Entity::notifySelf<proto::AvatarLifeStateChangeNotify>(
                v22,
                (proto::AvatarLifeStateChangeNotify *)(v4 + 240));
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
            proto::AvatarLifeStateChangeNotify::~AvatarLifeStateChangeNotify((proto::AvatarLifeStateChangeNotify *const)(v4 + 240));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
        }
        else
        {
          Entity::notifySelf<proto::LifeStateChangeNotify>(
            (Entity *const)this,
            (proto::LifeStateChangeNotify *)(v4 + 128));
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
      proto::LifeStateChangeNotify::~LifeStateChangeNotify((proto::LifeStateChangeNotify *const)(v4 + 128));
    }
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "changeLifeState",
      166);
    v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v37,
            (const char (*)[37])"[LIFE_STATE] life state change from:");
    val = (char *)data::enumValToStr(old_life_state);
    v24 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)&val);
    v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" to:");
    if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->life_state_);
    }
    v34 = (char *)data::enumValToStr(this->life_state_);
    v26 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v25, (const char *const *)&v34);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v26, this);
    common::milog::MiLogStream::~MiLogStream(&v37);
    result = 0;
  }
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 173: range 0000000014F3A3A4-0000000014F3A427
int32_t __cdecl Creature::onAfterEnterScene(Creature *const this, Scene *scene, const VisionContext *context)
{
  ScenePtr p_scene_ptr; // [rsp+20h] [rbp-20h] BYREF

  toThisPtr<Scene>((Scene *)&p_scene_ptr);
  CreatureBuffComp::onEnterScene(&this->creature_buff_comp_, &p_scene_ptr);
  std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
  Creature::addSubEntityIdToGroupOriginOwnerMap(this);
  return 0;
};

// Line 180: range 0000000014F3A428-0000000014F3A92C
int32_t __cdecl Creature::onBeforeLeaveScene(Creature *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::weak_ptr<Creature> *v5; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // al
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(Creature *const, _QWORD, std::vector<std::shared_ptr<Player>> *, _QWORD); // r14
  Scene *v12; // r14
  uint32_t AuthorityPeerId; // edx
  int32_t result; // eax
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *__for_range; // [rsp+28h] [rbp-118h]
  std::vector<std::shared_ptr<Player>> v18; // [rsp+30h] [rbp-110h] BYREF
  char v19[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 20 sub_creature_wtr:185 80 16 13 scene_ptr:201 112 48 20 sub_creature_set:182";
  *(_QWORD *)(v2 + 16) = Creature::onBeforeLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set((std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 112));
  std::swap<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>(
    (std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *)(v2 + 112),
    &this->sub_creature_set_);
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::clear(&this->sub_creature_set_);
  __for_range = (std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *)(v2 + 112);
  __for_begin._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::begin((const std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 112))._M_node;
  __for_end._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::end((const std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 112))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator*(&__for_begin);
    std::weak_ptr<Creature>::weak_ptr((std::weak_ptr<Creature> *const)(v2 + 48), v5);
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 80));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 80), 0LL) )
    {
      v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( Creature::getIsAliveByOwner(v6) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 128LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, const VisionContext *))v8)(v7, context);
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 80));
    std::weak_ptr<Creature>::~weak_ptr((std::weak_ptr<Creature> *const)(v2 + 48));
    std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator++(&__for_begin);
  }
  if ( Creature::getLifeState(this) != LIFE_DEAD )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(context);
  }
  if ( context->type == VISION_DIE && Entity::getDeadClearTime((const Entity *const)this) )
    v9 = 0;
  else
LABEL_19:
    v9 = 1;
  if ( v9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = *(_QWORD *)this->baseclass_0 + 344LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 344LL);
    v11 = *(void (__fastcall **)(Creature *const, _QWORD, std::vector<std::shared_ptr<Player>> *, _QWORD))v10;
    memset(&v18, 0, sizeof(v18));
    std::vector<std::shared_ptr<Player>>::vector(&v18);
    v11(this, 0LL, &v18, 0LL);
    std::vector<std::shared_ptr<Player>>::~vector(&v18);
  }
  Entity::getScene((const Entity *const)(v2 + 80));
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
  {
    v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    AuthorityPeerId = Creature::getAuthorityPeerId(this);
    Scene::recordCreatureAuthorityPeerChange(v12, this, AuthorityPeerId, 0);
    Creature::removeSubEntityIdFromGroupOriginOwnerMap(this);
  }
  CreatureBuffComp::onLevelScene(&this->creature_buff_comp_);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::~set((std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 112));
  result = 0;
  if ( v19 == (char *)v2 )
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

// Line 214: range 0000000014F3A92E-0000000014F3AC83
int32_t __cdecl Creature::toClient(const Creature *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  proto::EntityAuthorityInfo *v4; // rax
  const Creature *v5; // rdx
  unsigned __int64 v6; // rax
  std::set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  proto::AbilitySyncStateInfo *ability_info; // [rsp+30h] [rbp-50h]
  const std::set<std::string> *__for_range; // [rsp+38h] [rbp-48h]
  proto::PropPair *prop_pair; // [rsp+40h] [rbp-40h]
  const std::string *tag; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  if ( Entity::toClient((const Entity *const)this, entity_info, player) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "toClient",
      217);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    v4 = proto::SceneEntityInfo::mutable_entity_authority_info(entity_info);
    ability_info = proto::EntityAuthorityInfo::mutable_ability_info(v4);
    if ( AbilityComp::toClient(&this->ability_comp_, ability_info) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "toClient",
        223);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"toClient fails");
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->life_state_);
      }
      proto::SceneEntityInfo::set_life_state(entity_info, this->life_state_);
      __for_range = &this->tag_set_;
      __for_begin._M_node = std::set<std::string>::begin(&this->tag_set_)._M_node;
      __for_end._M_node = std::set<std::string>::end(&this->tag_set_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        tag = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
        proto::SceneEntityInfo::add_tag_list(entity_info, tag);
        std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
      }
      v5 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v6 = *(_QWORD *)this->baseclass_0 + 32LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 32LL);
      if ( (*(unsigned int (__fastcall **)(const Creature *))v6)(v5) == 3 && Creature::getIsClientGadget(this) )
      {
        return 0;
      }
      else
      {
        prop_pair = proto::SceneEntityInfo::add_prop_list(entity_info);
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        appendIntPropValue(prop_pair, 0xFA1u, this->level_);
        FightPropComp::getFightPropValueList(&this->fight_prop_comp_, entity_info, 0);
        CreatureBuffComp::toClient(&this->creature_buff_comp_, entity_info);
        return 0;
      }
    }
  }
};

// Line 251: range 0000000014F3AC84-0000000014F3AD16
void __cdecl Creature::onKill(Creature *const this, Creature *target)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/creature/creature.cpp",
    "onKill",
    252);
  v2 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v3, (const char (*)[13])"kill target:");
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v2, target);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 257: range 0000000014F3AD18-0000000014F3AD2B
void __cdecl Creature::onChangeHp(Creature *const this, float old_hp, ChangeHpContext *context)
{
  ;
};

// Line 262: range 0000000014F3ADC6-0000000014F3B2EA
void __cdecl Creature::onDie(Creature *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *v5; // rcx
  const std::weak_ptr<Creature> *v6; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Creature *v9; // rax
  Scene *v10; // r14
  Creature *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  Creature *v14; // rdx
  AbilityComp *AbilityComp; // r14
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  uint64_t time_ms; // [rsp+20h] [rbp-140h]
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *__for_range; // [rsp+28h] [rbp-138h]
  std::function<ForeachPolicy(BaseAbilityMixin&)> p_func; // [rsp+30h] [rbp-130h] BYREF
  char v21[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 13 scene_ptr:264 80 16 20 sub_creature_wtr:272 112 16 13 owner_ptr:294 144 48 20 sub_creature_set:269";
  *(_QWORD *)(v2 + 16) = Creature::onDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  time_ms = common::tools::TimeUtils::getNowMs();
  Entity::getScene((const Entity *const)(v2 + 48));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 48), 0LL) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Scene::addDieCreatureRecord(v5, this, time_ms);
  }
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set((std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 144));
  std::swap<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>(
    (std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *)(v2 + 144),
    &this->sub_creature_set_);
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::clear(&this->sub_creature_set_);
  __for_range = (std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *)(v2 + 144);
  __for_begin._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::begin((const std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 144))._M_node;
  __for_end._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::end((const std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 144))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator*(&__for_begin);
    std::weak_ptr<Creature>::weak_ptr((std::weak_ptr<Creature> *const)(v2 + 80), v6);
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 112));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 112), 0LL) )
    {
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( Creature::getIsAliveByOwner(v7) )
      {
        v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( Creature::getLifeState(v8) == LIFE_ALIVE )
        {
          v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          Creature::subCurHpToZero(v9, CHANGE_HP_SUB_SUMMON, 1);
        }
        else
        {
          if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 48), 0LL) )
          {
            v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            Scene::addDieCreatureRecord(v10, v11, time_ms);
          }
          v12 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(v12);
          v13 = *(_QWORD *)v12 + 128LL;
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(*(_QWORD *)v12 + 128LL);
          (*(void (__fastcall **)(unsigned __int64, VisionContext *))v13)(v12, &VisionContext::miss_context);
        }
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
    std::weak_ptr<Creature>::~weak_ptr((std::weak_ptr<Creature> *const)(v2 + 80));
    std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator++(&__for_begin);
  }
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 112));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 112), 0LL) )
  {
    v14 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    Creature::onSubCreatureDie(v14, this);
  }
  AbilityComp = Creature::getAbilityComp(this);
  std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<Creature::onDie(ChangeHpContext &)::{lambda(BaseAbilityMixin &)#1},void,void>(
    &p_func,
    (Creature::onDie::<lambda(BaseAbilityMixin&)>)context);
  AbilityComp::foreachMixin(AbilityComp, &p_func);
  std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function(&p_func);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::~set((std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *const)(v2 + 144));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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
};

// Line 299: range 0000000014F3AD2C-0000000014F3ADC5
ForeachPolicy __cdecl Creature::onDie(ChangeHpContext &)::{lambda(BaseAbilityMixin &)#1}::operator()(
        const Creature::onDie::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(BaseAbilityMixin *, ChangeHpContext *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)mixin >> 3) + 0x7FFF8000) )
    __asan_report_load8(mixin);
  v2 = (unsigned __int64)(mixin->_vptr_BaseAbilityMixin + 8);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(mixin->_vptr_BaseAbilityMixin + 8);
  v3 = *(void (__fastcall **)(BaseAbilityMixin *, ChangeHpContext *))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(mixin, __closure->__context);
  return 0;
};

// Line 308: range 0000000014F3B2EC-0000000014F3B844
int32_t __cdecl Creature::beforeEnterPlayerView(Creature *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  Creature *v6; // rdx
  unsigned __int64 v7; // rax
  PlayerGmComp *GmComp; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(Creature *const, __int64, std::vector<std::shared_ptr<Player>> *, _QWORD); // rbx
  PlayerSceneComp *SceneComp; // rax
  __int64 PeerId; // rsi
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::shared_ptr<Player> p_authority_player_ptr; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<Player>> v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:326 64 16 14 player_ptr:329";
  *(_QWORD *)(v2 + 16) = Creature::beforeEnterPlayerView;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  ret = Entity::beforeEnterPlayerView((Entity *const)this, player);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "beforeEnterPlayerView",
      312);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"beforeEnterPlayerView fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = ret;
  }
  else
  {
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = *(_QWORD *)this->baseclass_0 + 216LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 216LL);
    if ( (*(unsigned __int8 (__fastcall **)(Creature *))v7)(v6) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&this->authority_peer_id_);
      }
      if ( !this->authority_peer_id_ || (GmComp = Player::getGmComp(player), PlayerGmComp::getIsForceAuthority(GmComp)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v10 = *(_QWORD *)this->baseclass_0 + 344LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 344LL);
        v11 = *(void (__fastcall **)(Creature *const, __int64, std::vector<std::shared_ptr<Player>> *, _QWORD))v10;
        memset(&v21, 0, sizeof(v21));
        std::vector<std::shared_ptr<Player>>::vector(&v21);
        SceneComp = Player::getSceneComp(player);
        PeerId = PlayerSceneComp::getPeerId(SceneComp);
        v11(this, PeerId, &v21, 0LL);
        std::vector<std::shared_ptr<Player>>::~vector(&v21);
      }
      else if ( Creature::getIsForceRefreshAuthToSceneOwner(this) )
      {
        Entity::getScene((const Entity *const)(v2 + 32));
        if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          OwnerUid = Scene::getOwnerUid(v14);
          if ( OwnerUid == Player::getUid(player) )
          {
            toPtr<Player,Player>((Player *)(v2 + 64));
            if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
            {
              std::shared_ptr<Player>::shared_ptr(&p_authority_player_ptr, (const std::shared_ptr<Player> *)(v2 + 64));
              Creature::refreshAuthority(this, &p_authority_player_ptr, 0);
              std::shared_ptr<Player>::~shared_ptr(&p_authority_player_ptr);
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/creature/creature.cpp",
                "beforeEnterPlayerView",
                333);
              v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v22,
                      (const char (*)[40])"refresh auth to scene owner, entity_id:");
              val = Entity::getEntityId((const Entity *const)this);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
              common::milog::MiLogStream::~MiLogStream(&v22);
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
      }
    }
    result = 0;
  }
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

// Line 343: range 0000000014F3B846-0000000014F3B8EC
int32_t __cdecl Creature::onEnterPlayerView(Creature *const this, Player *player)
{
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = Entity::onEnterPlayerView((Entity *const)this, player);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/creature/creature.cpp",
    "onEnterPlayerView",
    347);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"onEnterPlayerView fails");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return ret;
};

// Line 355: range 0000000014F3B8EE-0000000014F3BAB6
int32_t __cdecl Creature::onExitPlayerView(Creature *const this, Player *player)
{
  Creature *v3; // rdx
  unsigned __int64 v4; // rax
  uint32_t authority_peer_id; // ebx
  PlayerSceneComp *SceneComp; // rax
  char v7; // al
  int32_t ret; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Player> p_authority_player_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ret = Entity::onExitPlayerView((Entity *const)this, player);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "onExitPlayerView",
      359);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v10, (const char (*)[23])"onExitPlayerView fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return ret;
  }
  else
  {
    v3 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v4 = *(_QWORD *)this->baseclass_0 + 216LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 216LL);
    if ( !(*(unsigned __int8 (__fastcall **)(Creature *))v4)(v3) )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->authority_peer_id_);
    }
    authority_peer_id = this->authority_peer_id_;
    SceneComp = Player::getSceneComp(player);
    if ( authority_peer_id == PlayerSceneComp::getPeerId(SceneComp) )
      v7 = 1;
    else
LABEL_12:
      v7 = 0;
    if ( v7 )
    {
      std::shared_ptr<Player>::shared_ptr(&p_authority_player_ptr, 0LL);
      Creature::refreshAuthority(this, &p_authority_player_ptr, 0);
      std::shared_ptr<Player>::~shared_ptr(&p_authority_player_ptr);
    }
    return 0;
  }
};

// Line 371: range 0000000014F3BAB8-0000000014F3BCD0
data::ConfigAttackEvent *__cdecl Creature::findAttackEventConfig(
        Creature *const this,
        const std::string *anim_event_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  data::ConfigAttackEvent *p_second; // r14
  data::ConfigAttackEvent *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackEvent>,true> __y; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<std::string,data::ConfigAttackEvent> *anim_events; // [rsp+18h] [rbp-98h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:376 64 16 24 config_character_ptr:372";
  *(_QWORD *)(v2 + 16) = Creature::findAttackEventConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 264LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 264LL);
  (*(void (__fastcall **)(unsigned __int64, Creature *const))v5)(v2 + 64, this);
  if ( std::operator!=<data::ConfigCharacter>((const std::shared_ptr<data::ConfigCharacter> *)(v2 + 64), 0LL)
    && (anim_events = &std::__shared_ptr_access<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->combat.anim_events,
        *(std::unordered_map<std::string,data::ConfigAttackEvent>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::ConfigAttackEvent>::find(
                                                                                            anim_events,
                                                                                            anim_event_id),
        __y._M_cur = std::unordered_map<std::string,data::ConfigAttackEvent>::end(anim_events)._M_cur,
        std::__detail::operator!=<std::pair<std::string const,data::ConfigAttackEvent>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackEvent>,true> *)(v2 + 32),
          &__y)) )
  {
    p_second = &std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigAttackEvent>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigAttackEvent>,false,true> *const)(v2 + 32))->second;
  }
  else
  {
    p_second = 0LL;
  }
  std::shared_ptr<data::ConfigCharacter>::~shared_ptr((std::shared_ptr<data::ConfigCharacter> *const)(v2 + 64));
  result = p_second;
  if ( v10 == (char *)v2 )
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

// Line 387: range 0000000014F3BCD2-0000000014F3BFA8
int32_t __cdecl Creature::assignProp(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int32_t result; // eax
  std::map<data::FightPropType,float> __args_0; // [rsp+10h] [rbp-C0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 16 prop_map_vec:388";
  *(_QWORD *)(v1 + 16) = Creature::assignProp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<std::map<data::FightPropType,float>>::vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 304LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 304LL);
  (*(void (__fastcall **)(std::map<data::FightPropType,float> *, Creature *const))v4)(&__args_0, this);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 32),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 296LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 296LL);
  (*(void (__fastcall **)(std::map<data::FightPropType,float> *, Creature *const))v5)(&__args_0, this);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 32),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  Creature::getAbilityProp(&__args_0, this);
  FightPropComp::refreshCalProp(
    &this->fight_prop_comp_,
    (const std::vector<std::map<data::FightPropType,float>> *)(v1 + 32),
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  std::vector<std::map<data::FightPropType,float>>::~vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 32));
  result = 0;
  if ( v8 == (char *)v1 )
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

// Line 397: range 0000000014F3BFAA-0000000014F3C4FE
FightPropMap *__cdecl Creature::getLevelProp(FightPropMap *retstr, Creature *const this)
{
  std::map<data::FightPropType,float> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  Creature *v6; // rdx
  unsigned __int64 v7; // rax
  Creature *v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // al
  std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >::reference v11; // rax
  std::pair<const data::FightPropType,float> *v12; // rdx
  std::map<data::FightPropType,float>::mapped_type *v13; // rax
  float v14; // xmm1_4
  std::map<data::FightPropType,float>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<data::FightPropType,float>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const FightPropMap *base_prop_ptr; // [rsp+28h] [rbp-E8h]
  std::map<data::FightPropType,float> *__for_range; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<const data::FightPropType,float> >::type *prop_type; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *delta_value; // [rsp+40h] [rbp-D0h]
  std::pair<const data::FightPropType,float> __in; // [rsp+48h] [rbp-C8h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-C0h] BYREF
  char v24[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<data::FightPropType,float> *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<data::FightPropType,float> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 18 fight_prop_map:412";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)Creature::getLevelProp;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<data::FightPropType,float>::map(retstr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 384LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 384LL);
  base_prop_ptr = (const FightPropMap *)(*(__int64 (__fastcall **)(Creature *const))v5)(this);
  if ( base_prop_ptr )
  {
    std::map<data::FightPropType,float>::operator=(retstr, base_prop_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    Creature::calcDeltaLevelProp(v2 + 1, this, 0, this->level_);
    __for_range = v2 + 1;
    __for_begin._M_node = std::map<data::FightPropType,float>::begin(v2 + 1)._M_node;
    __for_end._M_node = std::map<data::FightPropType,float>::end(v2 + 1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __in = *v12;
      prop_type = std::get<0ul,data::FightPropType const,float>(&__in);
      delta_value = std::get<1ul,data::FightPropType const,float>(&__in);
      v13 = std::map<data::FightPropType,float>::operator[](retstr, prop_type);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)delta_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)delta_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(delta_value);
      }
      *v13 = *delta_value + v14;
      std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
    }
    std::map<data::FightPropType,float>::~map(v2 + 1);
  }
  else
  {
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = *(_QWORD *)this->baseclass_0 + 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
    if ( (*(unsigned int (__fastcall **)(Creature *))v7)(v6) == 11 )
      goto LABEL_20;
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = *(_QWORD *)this->baseclass_0 + 24LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
    if ( (*(unsigned int (__fastcall **)(Creature *))v9)(v8) == 8 )
LABEL_20:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "getLevelProp",
        406);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v23,
        (const char (*)[23])"getBaseLevelProp fails");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v2 )
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
  return retstr;
};

// Line 423: range 0000000014F3C500-0000000014F3C601
FightPropMap *__cdecl Creature::getStableProp(FightPropMap *retstr, Creature *const this)
{
  std::map<data::FightPropType,float>::mapped_type *v2; // rax
  _DWORD *v3; // rdx
  std::map<data::FightPropType,float>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  std::map<data::FightPropType,float>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  std::map<data::FightPropType,float>::map(retstr);
  __k[0] = FIGHT_PROP_BASE_ELEM_REACT_CRITICAL;
  v2 = std::map<data::FightPropType,float>::operator[](retstr, __k);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2);
  }
  *v3 = 0;
  __k[0] = FIGHT_PROP_BASE_ELEM_REACT_CRITICAL_HURT;
  v4 = std::map<data::FightPropType,float>::operator[](retstr, __k);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = 1065353216;
  return retstr;
};

// Line 433: range 0000000014F3C602-0000000014F3CB94
FightPropMap *__cdecl Creature::calcDeltaLevelProp(
        FightPropMap *retstr,
        Creature *const this,
        uint32_t level1,
        uint32_t level2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >::reference v8; // rax
  std::pair<const data::FightPropType,float> *v9; // rdx
  float *v10; // rax
  double v11; // xmm0_8
  std::map<data::FightPropType,float>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::map<data::FightPropType,float>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::map<data::FightPropType,float> *__for_range; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<const data::FightPropType,float> >::type *prop_type; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *old_prop_value; // [rsp+48h] [rbp-F8h]
  float *prop_value; // [rsp+50h] [rbp-F0h]
  std::pair<const data::FightPropType,float> __in; // [rsp+58h] [rbp-E8h] BYREF
  char v22[224]; // [rsp+60h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 48 18 delta_prop_map:439 112 48 16 old_prop_map:440";
  *(_QWORD *)(v4 + 16) = Creature::calcDeltaLevelProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  if ( level1 == level2 )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 48LL);
    }
    *(_QWORD *)retstr->_M_t._M_impl.gap0 = 0LL;
    *(_QWORD *)&retstr->_M_t._M_impl._M_header._M_color = 0LL;
    retstr->_M_t._M_impl._M_header._M_parent = 0LL;
    retstr->_M_t._M_impl._M_header._M_left = 0LL;
    retstr->_M_t._M_impl._M_header._M_right = 0LL;
    retstr->_M_t._M_impl._M_node_count = 0LL;
    std::map<data::FightPropType,float>::map(retstr);
  }
  else
  {
    std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v4 + 32));
    std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v4 + 112));
    if ( Creature::calcLevelPropByLevel(this, level1, (FightPropMap *)(v4 + 112))
      || Creature::calcLevelPropByLevel(this, level2, (FightPropMap *)(v4 + 32)) )
    {
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 48LL);
      }
      *(_QWORD *)retstr->_M_t._M_impl.gap0 = 0LL;
      *(_QWORD *)&retstr->_M_t._M_impl._M_header._M_color = 0LL;
      retstr->_M_t._M_impl._M_header._M_parent = 0LL;
      retstr->_M_t._M_impl._M_header._M_left = 0LL;
      retstr->_M_t._M_impl._M_header._M_right = 0LL;
      retstr->_M_t._M_impl._M_node_count = 0LL;
      std::map<data::FightPropType,float>::map(retstr);
    }
    else
    {
      __for_range = (std::map<data::FightPropType,float> *)(v4 + 112);
      __for_begin._M_node = std::map<data::FightPropType,float>::begin((std::map<data::FightPropType,float> *const)(v4 + 112))._M_node;
      __for_end._M_node = std::map<data::FightPropType,float>::end((std::map<data::FightPropType,float> *const)(v4 + 112))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v8 = std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
        v9 = v8;
        if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v8, 8LL);
        }
        __in = *v9;
        prop_type = std::get<0ul,data::FightPropType const,float>(&__in);
        old_prop_value = std::get<1ul,data::FightPropType const,float>(&__in);
        v10 = std::map<data::FightPropType,float>::operator[](
                (std::map<data::FightPropType,float> *const)(v4 + 32),
                prop_type);
        prop_value = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(float *)&v11 = *prop_value;
        if ( *(_BYTE *)(((unsigned __int64)old_prop_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)old_prop_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_prop_value >> 3)
                                                                           + 0x7FFF8000) )
        {
          v11 = __asan_report_load4(old_prop_value);
        }
        *prop_value = *(float *)&v11 - *old_prop_value;
        if ( std::fabs(*prop_value) <= 0.00000011920929 )
          std::map<data::FightPropType,float>::erase((std::map<data::FightPropType,float> *const)(v4 + 32), prop_type);
        std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
      }
      std::map<data::FightPropType,float>::map(retstr, (std::map<data::FightPropType,float> *)(v4 + 32));
    }
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v4 + 112));
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v4 + 32));
  }
  if ( v22 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 462: range 0000000014F3CB96-0000000014F3CC28
FightPropMap *__cdecl Creature::getAbilityProp(FightPropMap *retstr, Creature *const this)
{
  AbilityComp *p_ability_comp; // rsi

  p_ability_comp = &this->ability_comp_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_ability_comp = (AbilityComp *)48;
    __asan_report_store_n(retstr, 48LL);
  }
  AbilityComp::getAbilityCompProp(retstr, p_ability_comp);
  return retstr;
};

// Line 468: range 0000000014F3CC2A-0000000014F3CD27
int32_t __cdecl Creature::calcProp(Creature *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = *(_QWORD *)this->baseclass_0 + 288LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 288LL);
  if ( !(*(unsigned int (__fastcall **)(Creature *const))v1)(this) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/creature/creature.cpp",
    "calcProp",
    471);
  v2 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v4, (const char (*)[17])"assignProp fails");
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v2, this);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 478: range 0000000014F3CD28-0000000014F3CD93
float __cdecl Creature::getProp(const Creature *const this, data::FightPropType prop_type)
{
  bool IsUseAbilityProperty; // al

  if ( prop_type == FIGHT_PROP_MAX_HP )
    return FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_MAX_HP, 1);
  IsUseAbilityProperty = FightPropComp::getIsUseAbilityProperty(&this->fight_prop_comp_);
  return FightPropComp::getPropValue(&this->fight_prop_comp_, prop_type, IsUseAbilityProperty);
};

// Line 488: range 0000000014F3CD94-0000000014F3CDE8
float __cdecl Creature::tryGetAbilityProp(const Creature *const this, const std::string *prop_name)
{
  __m128i v2; // xmm0

  if ( !FightPropComp::getIsUseAbilityProperty(&this->fight_prop_comp_) )
    return 0.0;
  *(float *)v2.m128i_i32 = AbilityComp::getProperty(&this->ability_comp_, prop_name);
  return COERCE_FLOAT(_mm_cvtsi128_si32(v2));
};

// Line 497: range 0000000014F3CDEA-0000000014F3CE09
float __cdecl Creature::getCurHp(const Creature *const this)
{
  return FightPropComp::getCurHp(&this->fight_prop_comp_);
};

// Line 502: range 0000000014F3CE0A-0000000014F3CE33
float __cdecl Creature::getMaxHp(const Creature *const this)
{
  return FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_MAX_HP, 1);
};

// Line 508: range 0000000014F3CE34-0000000014F3CEB0
void __cdecl Creature::setCurHp(Creature *const this, float hp, bool is_notify)
{
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
  FightPropComp::setCurHp(&this->fight_prop_comp_, hp, is_notify, &p_param_ptr);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
};

// Line 514: range 0000000014F3CEB2-0000000014F3CF35
void __cdecl Creature::setCurHpFull(Creature *const this, bool is_notify)
{
  float MaxHp; // xmm0_4
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
  MaxHp = Creature::getMaxHp(this);
  FightPropComp::setCurHp(&this->fight_prop_comp_, MaxHp, is_notify, &p_param_ptr);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
};

// Line 519: range 0000000014F3CF36-0000000014F3CF55
float __cdecl Creature::getCurEnergy(const Creature *const this)
{
  return FightPropComp::getCurEnergy(&this->fight_prop_comp_);
};

// Line 524: range 0000000014F3CF56-0000000014F3CF75
float __cdecl Creature::getMaxEnergy(const Creature *const this)
{
  return FightPropComp::getMaxEnergy(&this->fight_prop_comp_);
};

// Line 529: range 0000000014F3CF76-0000000014F3CFF8
void __cdecl Creature::setCurEnergy(
        Creature *const this,
        float energy,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  std::shared_ptr<FightPropNtfParam> v4; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<FightPropNtfParam>::shared_ptr(&v4, p_param_ptr);
  FightPropComp::setCurEnergy(&this->fight_prop_comp_, energy, is_notify, &v4);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&v4);
};

// Line 534: range 0000000014F3CFFA-0000000014F3D068
data::FightPropType __cdecl Creature::getCurEnergyType(Creature *const this)
{
  unsigned __int64 v1; // rax
  data::ElementType v2; // eax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = *(_QWORD *)this->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 280LL);
  v2 = (*(unsigned int (__fastcall **)(Creature *const))v1)(this);
  return FightPropComp::getCurEnergyType(v2);
};

// Line 539: range 0000000014F3D06A-0000000014F3D3E5
__int64 __fastcall Creature::changeCurEnergy(
        Creature *const this,
        float delta_energy,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __m128i v7; // xmm0
  AbilityComp *AbilityComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  float *v14; // rax
  float *v15; // rdx
  unsigned __int64 v16; // rax
  float __a; // [rsp+24h] [rbp-9Ch] BYREF
  float __b; // [rsp+28h] [rbp-98h] BYREF
  float cur_energy; // [rsp+2Ch] [rbp-94h]
  std::shared_ptr<FightPropNtfParam> v21; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 16 delta_energy:538";
  *(_QWORD *)(v4 + 16) = Creature::changeCurEnergy;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(float *)(v4 + 32) = delta_energy;
  v7 = (__m128i)*(unsigned int *)(v4 + 32);
  if ( *(float *)v7.m128i_i32 > 0.00000011920929
    && (AbilityComp = Creature::getAbilityComp(this), AbilityComp::containsState(AbilityComp, IgnoreAddEnergy)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "changeCurEnergy",
      543);
    v10 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            &v22,
            (const char (*)[60])"containsAbilityState::IgnoreAddEnergy, ignore delta_energy:");
    v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, (const float *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", creature_:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v12, this);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
  }
  else
  {
    *(float *)v7.m128i_i32 = Creature::getCurEnergy(this);
    cur_energy = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    *(float *)v7.m128i_i32 = FightPropComp::getMaxEnergy(&this->fight_prop_comp_);
    LODWORD(__b) = _mm_cvtsi128_si32(v7);
    __a = *(float *)(v4 + 32) + cur_energy;
    v14 = (float *)std::min<float>(&__a, &__b);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    cur_energy = *v15;
    if ( cur_energy < 0.0 )
      cur_energy = 0.0;
    std::shared_ptr<FightPropNtfParam>::shared_ptr(&v21, p_param_ptr);
    FightPropComp::setCurEnergy(&this->fight_prop_comp_, cur_energy, is_notify, &v21);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr(&v21);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v16 = *(_QWORD *)this->baseclass_0 + 328LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 328LL);
    (*(void (__fastcall **)(Creature *const, bool))v16)(this, is_notify);
    result = 0LL;
  }
  if ( v23 == (char *)v4 )
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

// Line 559: range 0000000014F3D3E6-0000000014F3D59B
int32_t __cdecl Creature::changeCurHp(
        Creature *const this,
        float delta,
        proto::ChangHpReason reason,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t v8; // r14d
  int32_t result; // eax
  std::shared_ptr<FightPropNtfParam> v12; // [rsp+20h] [rbp-E0h] BYREF
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 96 11 context:560";
  *(_QWORD *)(v5 + 16) = Creature::changeCurHp;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450896) = -202116109;
  ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v5 + 32));
  *(_DWORD *)(v5 + 32) = reason;
  std::shared_ptr<FightPropNtfParam>::shared_ptr(&v12, p_param_ptr);
  v8 = Creature::changeCurHp(this, delta, (ChangeHpContext *)(v5 + 32), is_notify, &v12);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&v12);
  ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v5 + 32));
  result = v8;
  if ( v13 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 567: range 0000000014F3D59C-0000000014F3D7F5
bool __cdecl Creature::isSubHpLimbo(Creature *const this, const ChangeHpContext *context)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::ChangHpReason reason; // eax
  Creature *v6; // rdx
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_abyss_kill_limbo_monster; // rax
  char v10; // al
  bool result; // al
  bool reason_support_limbo; // [rsp+1Fh] [rbp-61h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:583";
  *(_QWORD *)(v2 + 16) = Creature::isSubHpLimbo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  reason_support_limbo = 1;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(context);
  }
  reason = context->reason;
  if ( context->reason == CHANGE_HP_SUB_KILL_SELF )
    goto LABEL_11;
  if ( reason <= CHANGE_HP_SUB_KILL_SELF )
  {
    if ( reason == CHANGE_HP_SUB_ABYSS )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v7)(v6) == 2 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 32));
        if ( !std::operator!=<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 32)) )
          goto LABEL_22;
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_is_abyss_kill_limbo_monster = &v8->is_abyss_kill_limbo_monster;
        if ( *(_BYTE *)(((unsigned __int64)p_is_abyss_kill_limbo_monster >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_abyss_kill_limbo_monster & 7) >= *(_BYTE *)(((unsigned __int64)p_is_abyss_kill_limbo_monster >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_abyss_kill_limbo_monster);
        }
        if ( v8->is_abyss_kill_limbo_monster )
          v10 = 1;
        else
LABEL_22:
          v10 = 0;
        if ( v10 )
          reason_support_limbo = 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
      }
    }
    else if ( reason >= CHANGE_HP_SUB_ABYSS && (unsigned int)(reason - 9) <= 1 )
    {
LABEL_11:
      reason_support_limbo = 0;
    }
  }
  result = AbilityComp::containsState(&this->ability_comp_, Limbo) && reason_support_limbo;
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

// Line 598: range 0000000014F3D7F6-0000000014F3DA5C
bool __cdecl Creature::checkDrownWithLimboAndNotDie(Creature *const this, const ChangeHpContext *context)
{
  __m128i v2; // xmm0
  common::milog::MiLogStream *v3; // rdx
  unsigned __int64 v5; // rax
  char v6; // al
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  float val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( !Creature::isSubHpLimbo(this, context) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "checkDrownWithLimboAndNotDie",
      601);
    v3 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v11,
           (const char (*)[52])"checkDrownWithLimboAndNotDie is not limbo creature:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4(&this->life_state_);
    }
    if ( this->life_state_ != LIFE_ALIVE
      || FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_CUR_HP, 1) >= 0.0099999998 )
    {
      goto LABEL_13;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = *(_QWORD *)this->baseclass_0 + 392LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 392LL);
    if ( (*(unsigned __int8 (__fastcall **)(Creature *const, const ChangeHpContext *))v5)(this, context) )
      v6 = 1;
    else
LABEL_13:
      v6 = 0;
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "checkDrownWithLimboAndNotDie",
        607);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v11,
             (const char (*)[53])"checkDrownWithLimboAndNotDie creature is die, curhp:");
      *(float *)v2.m128i_i32 = Creature::getCurHp(this);
      LODWORD(val) = _mm_cvtsi128_si32(v2);
      v8 = common::milog::MiLogStream::operator<<<float,(float *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" creature:");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return 0;
    }
    else
    {
      return 1;
    }
  }
};

// Line 615: range 0000000014F3DA5E-0000000014F3EA89
__int64 __fastcall Creature::changeCurHp(
        Creature *const this,
        __m128 delta,
        ChangeHpContext *context,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __m128i v9; // xmm0
  Creature *v10; // rdx
  unsigned __int64 v11; // rax
  Creature *v12; // rdx
  unsigned __int64 v13; // rax
  Player *v14; // rax
  PlayerGmComp *GmComp; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  __m128i v20; // xmm0
  GameserverService *v21; // rax
  float *v22; // rax
  float *v23; // rdx
  __m128i v24; // xmm0
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float *v29; // rax
  float *v30; // rdx
  proto::ChangHpReason reason; // r14d
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  proto::ChangHpReason *p_change_hp_reason; // rax
  unsigned __int64 v35; // rax
  char v36; // al
  float v37; // xmm0_4
  unsigned __int64 v38; // rax
  __m128i v39; // xmm0
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  common::milog::MiLogStream *v51; // rbx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  Creature *v53; // rdx
  unsigned __int64 v54; // rax
  Creature *v55; // rdx
  unsigned __int64 v56; // rax
  Creature *v57; // rdx
  unsigned __int64 v58; // rax
  char v59; // al
  proto::PlayerDieType PlayerDieTypeFromHpReason; // ecx
  proto::PlayerDieType die_type; // ecx
  unsigned __int64 v62; // rax
  __int64 result; // rax
  float CurHp; // [rsp+Ch] [rbp-104h]
  float v65; // [rsp+Ch] [rbp-104h]
  bool is_die; // [rsp+3Fh] [rbp-D1h]
  float __a; // [rsp+40h] [rbp-D0h] BYREF
  float __val; // [rsp+44h] [rbp-CCh] BYREF
  float __lo; // [rsp+48h] [rbp-C8h] BYREF
  float __hi; // [rsp+4Ch] [rbp-C4h] BYREF
  float real_delta; // [rsp+50h] [rbp-C0h]
  float hp_threshold_ratio; // [rsp+54h] [rbp-BCh]
  float max_hp; // [rsp+58h] [rbp-B8h]
  float max_sub_hp; // [rsp+5Ch] [rbp-B4h]
  common::milog::MiLogStream v77; // [rsp+60h] [rbp-B0h] BYREF
  char v78[144]; // [rsp+80h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 10 old_hp:627 48 4 9 delta:614 64 16 14 player_ptr:618";
  *(_QWORD *)(v6 + 16) = Creature::changeCurHp;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202178560;
  delta = (__m128)delta.m128_u32[0];
  *(_DWORD *)(v6 + 48) = delta.m128_i32[0];
  v10 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v11 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Creature *))v11)(v6 + 64, v10);
  if ( !std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v6 + 64)) )
    goto LABEL_17;
  v12 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v13 = *(_QWORD *)this->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v13 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
  if ( (*(unsigned int (__fastcall **)(Creature *))v13)(v12) == 1
    && (v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64)),
        GmComp = Player::getGmComp(v14),
        PlayerGmComp::getIsGlobalAvatarInvincible(GmComp))
    && (v9 = (__m128i)0x34000000u, *(float *)(v6 + 48) < 0.00000011920929) )
  {
    v16 = 1;
  }
  else
  {
LABEL_17:
    v16 = 0;
  }
  if ( v16 )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "changeCurHp",
      621);
    v17 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
            &v77,
            (const char (*)[71])"changeCurHp delta set to zero for global avatar invincible, creature_:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v17, this);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v5 = 0;
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 64));
  if ( v18 == 1 )
  {
    *(float *)v9.m128i_i32 = Creature::getCurHp(this);
    *(_DWORD *)(v6 + 32) = _mm_cvtsi128_si32(v9);
    real_delta = *(float *)(v6 + 48);
    if ( *(float *)(v6 + 48) < 0.0 && Creature::isSubHpLimbo(this, context) )
    {
      __hi = 1.0;
      v20 = 0LL;
      __lo = 0.0;
      v21 = ServiceBox::findService<GameserverService>();
      *(float *)v20.m128i_i32 = AbilityComp::getProperty(
                                  &this->ability_comp_,
                                  &v21->ability_data_mgr.ACTOR_HP_THRESHOLD_RATIO);
      __val = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
      v22 = (float *)std::clamp<float>(&__val, &__lo, &__hi);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      hp_threshold_ratio = *v23;
      v24 = (__m128i)LODWORD(hp_threshold_ratio);
      *(float *)v24.m128i_i32 = Creature::getMaxHp(this);
      max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
      CurHp = Creature::getCurHp(this);
      __val = hp_threshold_ratio * max_hp;
      __a = 1.0;
      v25 = (float *)std::max<float>(&__a, &__val);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      __hi = CurHp - *v26;
      __lo = 0.0;
      v27 = (float *)std::max<float>(&__lo, &__hi);
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      max_sub_hp = *v28;
      __hi = -max_sub_hp;
      v29 = (float *)std::max<float>((const float *)(v6 + 48), &__hi);
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      real_delta = *v30;
    }
    if ( is_notify && Creature::isNeedChangeHpReason(this) )
    {
      if ( std::operator==<FightPropNtfParam>(p_param_ptr, 0LL) )
      {
        common::tools::perf::make_shared<FightPropNtfParam>();
        std::shared_ptr<FightPropNtfParam>::operator=(p_param_ptr, (std::shared_ptr<FightPropNtfParam> *)(v6 + 64));
        std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v6 + 64));
      }
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(context);
      }
      reason = context->reason;
      v33 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr);
      p_change_hp_reason = &v33->change_hp_reason;
      if ( *(_BYTE *)(((unsigned __int64)p_change_hp_reason >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_change_hp_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_change_hp_reason >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_change_hp_reason);
      }
      v33->change_hp_reason = reason;
    }
    std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v6 + 64), p_param_ptr);
    FightPropComp::changeCurHp(&this->fight_prop_comp_, real_delta, is_notify, (FightPropNtfParamPtr *)(v6 + 64));
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v6 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->life_state_);
    }
    if ( this->life_state_ != LIFE_ALIVE
      || FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_CUR_HP, 1) >= 0.0099999998 )
    {
      goto LABEL_58;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v35 = *(_QWORD *)this->baseclass_0 + 392LL;
    if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      v35 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 392LL);
    if ( (*(unsigned __int8 (__fastcall **)(Creature *const, ChangeHpContext *))v35)(this, context) )
      v36 = 1;
    else
LABEL_58:
      v36 = 0;
    is_die = v36;
    if ( *(char *)(((unsigned __int64)&context->is_die >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&context->is_die);
    context->is_die = is_die;
    v37 = Creature::getCurHp(this) - *(float *)(v6 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&context->delta_hp);
    }
    context->delta_hp = v37;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v38 = *(_QWORD *)this->baseclass_0 + 248LL;
    if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
      v38 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 248LL);
    v39 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 32));
    (*(void (__fastcall **)(Creature *const, ChangeHpContext *, double))v38)(this, context, *(double *)v39.m128i_i64);
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "changeCurHp",
      655);
    v40 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v77, (const char (*)[17])"changeCurHp old:");
    v41 = common::milog::MiLogStream::operator<<<float,(float *)0>(v40, (const float *)(v6 + 32));
    v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v41, (const char (*)[19])" context.delta_hp:");
    v43 = common::milog::MiLogStream::operator<<<float,(float *)0>(v42, &context->delta_hp);
    v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" curhp:");
    *(float *)v39.m128i_i32 = Creature::getCurHp(this);
    __hi = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
    v45 = common::milog::MiLogStream::operator<<<float,(float *)0>(v44, &__hi);
    v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" is_die:");
    v47 = common::milog::MiLogStream::operator<<(v46, is_die);
    v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])" creature:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v48, this);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v65 = -real_delta;
    std::shared_ptr<HurtContext>::shared_ptr((std::shared_ptr<HurtContext> *const)(v6 + 64), &this->hurt_context_ptr_);
    Creature::tryTriggerElementReactionByHurt(this, (HurtContextPtr *)(v6 + 64), v65, is_die);
    std::shared_ptr<HurtContext>::~shared_ptr((std::shared_ptr<HurtContext> *const)(v6 + 64));
    if ( is_die )
    {
      if ( std::operator!=<Creature>(&context->attacker_ptr, 0LL) )
      {
        v49 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
        if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
          v49 = __asan_report_load8(v49);
        v50 = *(_QWORD *)v49 + 240LL;
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          v49 = __asan_report_load8(*(_QWORD *)v49 + 240LL);
        (*(void (__fastcall **)(unsigned __int64, Creature *const))v50)(v49, this);
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/creature.cpp",
          "changeCurHp",
          665);
        v51 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v77,
                (const char (*)[18])"killed by killer:");
        v52 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v51, v52);
        common::milog::MiLogStream::~MiLogStream(&v77);
      }
      v53 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v54 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
        v54 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v54)(v53) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&context->die_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->die_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&context->die_type);
        }
        if ( context->die_type == PLAYER_DIE_NONE )
          goto LABEL_98;
      }
      v55 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v56 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        v56 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v56)(v55) == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(context);
        }
        if ( context->reason == CHANGE_HP_SUB_DRAWN )
          goto LABEL_98;
      }
      v57 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v58 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
        v58 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v58)(v57) != 2 )
        goto LABEL_99;
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(context);
      }
      if ( context->reason == CHANGE_HP_SUB_ABYSS )
LABEL_98:
        v59 = 1;
      else
LABEL_99:
        v59 = 0;
      if ( v59 )
      {
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(context);
        }
        PlayerDieTypeFromHpReason = getPlayerDieTypeFromHpReason(context->reason);
        if ( *(_BYTE *)(((unsigned __int64)&context->die_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->die_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store4(&context->die_type);
        }
        context->die_type = PlayerDieTypeFromHpReason;
      }
      if ( *(_BYTE *)(((unsigned __int64)&context->die_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->die_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&context->die_type);
      }
      die_type = context->die_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->die_type_);
      }
      this->die_type_ = die_type;
      Creature::changeLifeState(this, LIFE_DEAD, context, 1);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v62 = *(_QWORD *)this->baseclass_0 + 256LL;
      if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
        v62 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 256LL);
      (*(void (__fastcall **)(Creature *const, ChangeHpContext *))v62)(this, context);
    }
    v5 = 0;
  }
  result = v5;
  if ( v78 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 685: range 0000000014F3EA8A-0000000014F3EC58
bool __cdecl Creature::isNeedChangeHpReason(Creature *const this)
{
  unsigned __int64 p_M_end_of_storage; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Creature *v4; // rdx
  unsigned __int64 v5; // rax
  bool v6; // r14
  bool result; // al
  uint32_t entity_type; // [rsp+1Ch] [rbp-84h]
  EcsBase<Gadget,GadgetCompBase,28> v9; // [rsp+20h] [rbp-80h] BYREF

  p_M_end_of_storage = (unsigned __int64)&v9.comp_vec_._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_end_of_storage = v2;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "1 32 16 14 gadget_ptr:695";
  *(_QWORD *)(p_M_end_of_storage + 16) = Creature::isNeedChangeHpReason;
  v3 = p_M_end_of_storage >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
  entity_type = (*(__int64 (__fastcall **)(Creature *))v5)(v4);
  if ( entity_type == 1 )
  {
    v6 = 1;
  }
  else if ( entity_type == 4 )
  {
    toPtr<Gadget,Creature>((Creature *)(p_M_end_of_storage + 32));
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(p_M_end_of_storage + 32)) )
    {
      v6 = 0;
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>(&v9);
      v6 = std::operator!=<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)&v9);
      std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)&v9);
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_M_end_of_storage + 32));
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  if ( &v9.comp_vec_._M_impl._M_end_of_storage == (std::_Vector_base<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 705: range 0000000014F3EC5A-0000000014F3EE55
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Creature::changeCurHpPercent(
        Creature *const this,
        float percent_delta,
        proto::ChangHpReason reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __m128i v7; // xmm0
  int32_t v8; // r14d
  int32_t result; // eax
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+30h] [rbp-E0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 96 11 context:706";
  *(_QWORD *)(v4 + 16) = Creature::changeCurHpPercent;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450896) = -202116109;
  ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v4 + 32));
  *(_DWORD *)(v4 + 32) = reason;
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_MAX_HP, 1);
  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
  v8 = Creature::changeCurHp(
         this,
         (__m128)_mm_cvtsi32_si128(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_cvtsi128_si32(v7)) * percent_delta) / 100.0)),
         (ChangeHpContext *)(v4 + 32),
         is_notify,
         &p_param_ptr);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
  ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v4 + 32));
  result = v8;
  if ( v13 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 715: range 0000000014F3EE56-0000000014F3F07C
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Creature::setCurHpPercent(
        Creature *const this,
        float percent,
        proto::ChangHpReason reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __m128i v7; // xmm0
  int32_t result; // eax
  float delta; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+30h] [rbp-E0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 96 11 context:716";
  *(_QWORD *)(v4 + 16) = Creature::setCurHpPercent;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450896) = -202116109;
  ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v4 + 32));
  *(_DWORD *)(v4 + 32) = reason;
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_MAX_HP, 1);
  delta = (float)((float)(COERCE_FLOAT(_mm_cvtsi128_si32(v7)) * percent) / 100.0) - Creature::getCurHp(this);
  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
  Creature::changeCurHp(this, delta, reason, is_notify, &p_param_ptr);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
  ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v4 + 32));
  result = 0;
  if ( v13 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 727: range 0000000014F3F07E-0000000014F3F1E7
int32_t __cdecl Creature::subCurHpToZero(Creature *const this, ChangeHpContext *context, bool is_notify)
{
  __m128i v3; // xmm0
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // ebx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int ConfigId; // [rsp+28h] [rbp-48h] BYREF
  float cur_hp; // [rsp+2Ch] [rbp-44h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  *(float *)v3.m128i_i32 = FightPropComp::getCurHp(&this->fight_prop_comp_);
  cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( cur_hp > 0.0 )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
    v7 = Creature::changeCurHp(
           this,
           _mm_xor_ps((__m128)LODWORD(cur_hp), (__m128)0x80000000),
           context,
           is_notify,
           &p_param_ptr);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "subCurHpToZero",
      731);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"subCurHpToZero cur_hp <= 10: ");
    val = Entity::getEntityId((const Entity *const)this);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])" config_id: ");
    ConfigId = Entity::getConfigId((const Entity *const)this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &ConfigId);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 1;
  }
  return v7;
};

// Line 738: range 0000000014F3F1E8-0000000014F3F35E
int32_t __cdecl Creature::subCurHpToZero(Creature *const this, proto::ChangHpReason reason, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 96 11 context:742";
  *(_QWORD *)(v3 + 16) = Creature::subCurHpToZero;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450896) = -202116109;
  std::__shared_ptr<HurtContext,(__gnu_cxx::_Lock_policy)2>::reset(&this->hurt_context_ptr_);
  ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v3 + 32));
  *(_DWORD *)(v3 + 32) = reason;
  v6 = Creature::subCurHpToZero(this, (ChangeHpContext *)(v3 + 32), is_notify);
  ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 749: range 0000000014F3F360-0000000014F3F38C
void __cdecl Creature::setOwner(Creature *const this, CreaturePtr *p_owner_ptr)
{
  std::weak_ptr<Creature>::operator=<Creature>(&this->owner_wtr_, p_owner_ptr);
};

// Line 755: range 0000000014F3F38E-0000000014F3F3DF
CreaturePtr __cdecl Creature::getOwner(const Creature *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 761: range 0000000014F3F3E0-0000000014F3F4F4
uint32_t __cdecl Creature::getOwnerEntityId(const Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t EntityId; // r14d
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
  *(_QWORD *)(v1 + 8) = "1 32 16 13 owner_ptr:762";
  *(_QWORD *)(v1 + 16) = Creature::getOwnerEntityId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 32));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EntityId = Entity::getEntityId((const Entity *const)v4);
  }
  else
  {
    EntityId = 0;
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  result = EntityId;
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

// Line 772: range 0000000014F3F4F6-0000000014F3F766
PlayerPtr __cdecl Creature::getAncestryOwnerPlayer(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  PlayerPtr result; // rax
  uint32_t idx; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<Player> __r; // [rsp+20h] [rbp-80h] BYREF
  std::shared_ptr<Creature> v9; // [rsp+30h] [rbp-70h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 creature_ptr:773";
  *(_QWORD *)(v1 + 16) = Creature::getAncestryOwnerPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toPtr<Creature,Creature>((Creature *)(v1 + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  *(_QWORD *)this->baseclass_0 = 0LL;
  *(_QWORD *)&this->baseclass_0[8] = 0LL;
  for ( idx = 0; idx <= 3 && !std::operator==<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL); ++idx )
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    (*(void (__fastcall **)(std::shared_ptr<Player> *, unsigned __int64))v5)(&__r, v4);
    std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)this, &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)this, 0LL) )
      break;
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Creature::getOwner((const Creature *const)&v9);
    std::shared_ptr<Creature>::operator=((std::shared_ptr<Creature> *const)(v1 + 32), &v9);
    std::shared_ptr<Creature>::~shared_ptr(&v9);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 793: range 0000000014F3F768-0000000014F3F7BD
bool __cdecl Creature::isHpFull(const Creature *const this)
{
  __m128i v1; // xmm0
  float cur_hp; // [rsp+18h] [rbp-8h]

  *(float *)v1.m128i_i32 = FightPropComp::getCurHp(&this->fight_prop_comp_);
  cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(&this->fight_prop_comp_, FIGHT_PROP_MAX_HP, 1);
  return cur_hp >= COERCE_FLOAT(_mm_cvtsi128_si32(v1));
};

// Line 801: range 0000000014F3F98C-0000000014F43FCC
int32_t __cdecl Creature::onBeingHit(Creature *const this, Creature *attacker, HurtContext *context)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PileBoolValue *IsInvincible; // rax
  PileBoolValue *IsLockHp; // rax
  common::milog::MiLogStream *v10; // rdx
  Creature *v11; // rdx
  unsigned __int64 v12; // rax
  Creature *v13; // rdx
  unsigned __int64 v14; // rax
  Player *v15; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // r15d
  Creature *v20; // rdx
  unsigned __int64 v21; // rax
  Creature *v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // al
  float client_damage; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  float *p_anti_cheat_max_damage_percentage; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  float *p_anti_cheat_max_damage_extra; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  bool *p_is_anti_cheat_damage_check_open; // rax
  Creature *v34; // rax
  AbilityComp *AbilityComp; // r14
  Creature *v36; // rax
  AbilityComp *v37; // r14
  AbilityComp *v38; // rax
  AbilityComp *v39; // r14
  __m128i v40; // xmm0
  float v41; // ecx
  float total_damage_extra; // xmm0_4
  float *v43; // rax
  float *v44; // rdx
  float v45; // xmm0_4
  std::array<float,3>::value_type *v46; // rax
  float *v47; // rdx
  std::array<float,3>::value_type *v48; // rax
  float *v49; // rdx
  __m128i v50; // xmm0
  std::array<float,3>::value_type *v51; // rax
  float *v52; // rdx
  __m128i v53; // xmm0
  float v54; // ecx
  const float *v55; // rax
  float *v56; // rax
  float *v57; // rdx
  __m128i v58; // xmm0
  float *v59; // rax
  float *v60; // rdx
  __m128i v61; // xmm0
  const float *v62; // rax
  _DWORD *v63; // rdx
  float v64; // xmm0_4
  float *v65; // rax
  float *v66; // rdx
  int32_t v67; // eax
  uint32_t v68; // edx
  bool v69; // cl
  float v70; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v71; // r14
  Creature *v72; // rdx
  void (__fastcall **v73)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v74; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v75; // r14
  Creature *v76; // rdx
  void (__fastcall **v77)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v78; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v79; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v80; // r14
  float BonusElementReactionCritical; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v82; // r14
  float BonusElementReactionCriticalHurt; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v84; // rax
  bool v85; // al
  float v86; // eax
  const float *v87; // rax
  _DWORD *v88; // rdx
  __m128i level_suppress_damage_co_low; // xmm0
  int32_t Level; // eax
  uint32_t *p_level; // rcx
  int32_t v92; // eax
  int32_t v93; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  char v95; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  float v97; // xmm0_4
  float *v98; // rax
  float *v99; // rdx
  float *v100; // rax
  float *v101; // rdx
  __m128i v102; // xmm0
  const float *v103; // rax
  float *v104; // rax
  float *v105; // rdx
  int32_t v106; // eax
  uint32_t v107; // edx
  bool v108; // si
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  float Prop; // xmm0_4
  float v113; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v114; // r14
  Creature *v115; // rdx
  void (__fastcall **v116)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v117; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v118; // r14
  Creature *v119; // rdx
  void (__fastcall **v120)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v121; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v122; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v123; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v124; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v125; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v126; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v127; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v128; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v129; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v130; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v131; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v132; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v133; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v134; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v135; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v136; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v137; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v138; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v139; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v140; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v141; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v142; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v143; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v144; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v145; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v146; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v147; // rax
  __m128i v148; // xmm0
  AbilityComp *v149; // r14
  GameserverService *v150; // rax
  AbilityComp *v151; // r14
  GameserverService *v152; // rax
  float v153; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v154; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v155; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v156; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v157; // rax
  float server_damage; // xmm0_4
  __m128i server_damage_low; // xmm0
  float v160; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v161; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v162; // rcx
  __m128i v163; // xmm0
  common::milog::MiLogStream *v164; // rax
  data::DamageClampType damage_clamp_type; // eax
  float *v166; // rax
  float *v167; // rdx
  float v168; // xmm0_4
  const float *v169; // rax
  _DWORD *v170; // rdx
  float v171; // xmm0_4
  const float *v172; // rax
  _DWORD *v173; // rdx
  float v174; // xmm0_4
  common::milog::MiLogStream *v175; // rax
  double v176; // xmm0_8
  double v177; // xmm0_8
  unsigned __int64 v178; // rax
  unsigned __int64 v179; // rdx
  bool v180; // al
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v181; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v182; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v183; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v184; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v185; // r14
  Creature *v186; // rdx
  void (__fastcall **v187)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v188; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v189; // r14
  Creature *v190; // rdx
  void (__fastcall **v191)(__int64, Creature *); // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v192; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v193; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v194; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v195; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v196; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v197; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v198; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v199; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v200; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v201; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v202; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v203; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v204; // r14
  float v205; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v206; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v207; // r14
  float BonusCritical; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v209; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v210; // r14
  float v211; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v212; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v213; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v214; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v215; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v216; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v217; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v218; // r14
  float v219; // xmm0_4
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v220; // rax
  GameserverService *v221; // rax
  uint32_t v222; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v223; // rax
  Player *v224; // r14
  float v225; // xmm0_4
  float v226; // xmm0_4
  float v227; // xmm0_4
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v229; // rax
  proto_log::AttackEntityLog *v230; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v231; // rax
  proto_log::AttackEntityLog *v232; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v233; // rax
  ActorAbility *v234; // rax
  data::ConfigAbility *ConfigRef; // rax
  ActorModifier *v236; // rax
  data::ConfigAbilityModifier *v237; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v239; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v240; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v241; // r14
  float DamagePercentage; // xmm0_4
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v243; // r14
  float DamagePercentageRatio; // xmm0_4
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v245; // r14
  float DamageExtra; // xmm0_4
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v247; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v248; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v249; // rax
  Player *v250; // r14
  float v251; // xmm0_4
  int32_t result; // eax
  float damage_base; // [rsp+14h] [rbp-33Ch]
  float v254; // [rsp+14h] [rbp-33Ch]
  float v255; // [rsp+14h] [rbp-33Ch]
  std::allocator<char> v258; // [rsp+30h] [rbp-320h] BYREF
  bool is_anti_cheat_damage_check_open; // [rsp+31h] [rbp-31Fh]
  bool is_hit_head; // [rsp+32h] [rbp-31Eh]
  bool is_in_mp; // [rsp+33h] [rbp-31Dh]
  float __a; // [rsp+34h] [rbp-31Ch] BYREF
  float anti_cheat_max_damage_percentage; // [rsp+38h] [rbp-318h]
  float anti_cheat_max_damage_percentage_ratio; // [rsp+3Ch] [rbp-314h]
  float anti_cheat_max_damage_extra; // [rsp+40h] [rbp-310h]
  float anti_cheat_max_damage; // [rsp+44h] [rbp-30Ch]
  float critical_hurt; // [rsp+48h] [rbp-308h]
  float damage; // [rsp+4Ch] [rbp-304h]
  float level_factor; // [rsp+50h] [rbp-300h]
  float attack_elem_by_rock_ratio; // [rsp+54h] [rbp-2FCh]
  float defense_elem_by_rock_ratio; // [rsp+58h] [rbp-2F8h]
  int32_t ret; // [rsp+5Ch] [rbp-2F4h]
  float A1; // [rsp+60h] [rbp-2F0h]
  float B1; // [rsp+64h] [rbp-2ECh]
  float C; // [rsp+68h] [rbp-2E8h]
  float damage_attenuation; // [rsp+6Ch] [rbp-2E4h]
  float defense_ignore_ratio; // [rsp+70h] [rbp-2E0h]
  float defense_ignore_delta; // [rsp+74h] [rbp-2DCh]
  float defense; // [rsp+78h] [rbp-2D8h]
  float damage_percentage_base; // [rsp+7Ch] [rbp-2D4h]
  float damage_percentage_ratio; // [rsp+80h] [rbp-2D0h]
  float damage_percentage_wane_ratio; // [rsp+84h] [rbp-2CCh]
  float bonus_critical; // [rsp+88h] [rbp-2C8h]
  float bonus_critical_hurt; // [rsp+8Ch] [rbp-2C4h]
  float hit_head_damage_ratio; // [rsp+90h] [rbp-2C0h]
  int32_t level_a; // [rsp+94h] [rbp-2BCh]
  int32_t level_b; // [rsp+98h] [rbp-2B8h]
  int32_t level_diff; // [rsp+9Ch] [rbp-2B4h]
  float attack; // [rsp+A0h] [rbp-2B0h]
  float attack_add_hurt; // [rsp+A4h] [rbp-2ACh]
  float defense_sub_hurt; // [rsp+A8h] [rbp-2A8h]
  float anti_critical; // [rsp+ACh] [rbp-2A4h]
  float critical; // [rsp+B0h] [rbp-2A0h]
  float critical_probability_0; // [rsp+B4h] [rbp-29Ch]
  float critical_probability; // [rsp+B8h] [rbp-298h]
  uint32_t critical_probability_uint32; // [rsp+BCh] [rbp-294h]
  float amplify_ratio; // [rsp+C0h] [rbp-290h]
  float DAMAGE_CLAMP_MAX; // [rsp+C4h] [rbp-28Ch]
  float cur_hp; // [rsp+C8h] [rbp-288h]
  float max_hp; // [rsp+CCh] [rbp-284h]
  AttackResult *attack_result; // [rsp+D0h] [rbp-280h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+D8h] [rbp-278h]
  const std::array<float,3> *defense_resist_ratios; // [rsp+E0h] [rbp-270h]
  const data::LevelSuppressExcelConfig *level_supp_config_ptr; // [rsp+E8h] [rbp-268h]
  std::tuple<float,float> __in; // [rsp+F0h] [rbp-260h] BYREF
  std::tuple<float,float> v306; // [rsp+F8h] [rbp-258h] BYREF
  char v307[592]; // [rsp+100h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v307;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 48 4 21 attack_elem_ratio:888 64 4 22 defense_elem_ratio:889 80 4 21 defense_elem_mute:890 96"
                        " 4 6 A2:904 112 4 6 B2:905 128 4 17 damage_resist:968 144 4 17 damage_resist:920 160 4 28 source"
                        "_element_critical:1165 176 4 33 source_element_critical_hurt:1166 192 16 14 config_ptr:836 224 1"
                        "6 13 owner_ptr:847 256 16 7 oss:884 288 16 14 scene_ptr:1168 320 16 19 cur_player_ptr:1198 352 1"
                        "6 12 log_ptr:1206 384 16 14 player_ptr:813 416 32 16 ability_str:1210 480 32 17 modifier_str:1211";
  *(_QWORD *)(v4 + 16) = Creature::onBeingHit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862734] = -218959118;
  v6[536862736] = -202116109;
  IsInvincible = FightPropComp::getIsInvincible(&this->fight_prop_comp_);
  if ( PileBoolValue::getValue(IsInvincible)
    || (IsLockHp = FightPropComp::getIsLockHp(&this->fight_prop_comp_), PileBoolValue::getValue(IsLockHp)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "onBeingHit",
      805);
    v10 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
            (common::milog::MiLogStream *const)(v4 + 480),
            (const char (*)[77])"onBeingHit final_damage is set to zero for invincible or lock hp, creature_:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
    if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(&context->final_damage);
    }
    context->final_damage = 0.0;
    v3 = 0;
  }
  else
  {
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v12 = *(_QWORD *)this->baseclass_0 + 24LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
    if ( (*(unsigned int (__fastcall **)(Creature *))v12)(v11) != 1 )
      goto LABEL_31;
    v13 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v14 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Creature *))v14)(v4 + 384, v13);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 384))
      && (v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384)),
          AvatarComp = Player::getAvatarComp(v15),
          PlayerAvatarComp::isDieInvincible(AvatarComp)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "onBeingHit",
        816);
      v18 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v4 + 480),
              (const char (*)[69])"onBeingHit final_damage is set to zero for die invincible creature_:");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v18, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store4(&context->final_damage);
      }
      context->final_damage = 0.0;
      v3 = 0;
      v19 = 0;
    }
    else
    {
      v19 = 1;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 384));
    if ( v19 == 1 )
    {
LABEL_31:
      v20 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v21 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v21)(v20) == 6 )
        goto LABEL_41;
      v22 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v23 = *(_QWORD *)this->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
      if ( (*(unsigned int (__fastcall **)(Creature *))v23)(v22) == 10 )
LABEL_41:
        v24 = 1;
      else
        v24 = 0;
      if ( v24 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/creature.cpp",
          "onBeingHit",
          827);
        common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
          (common::milog::MiLogStream *const)(v4 + 480),
          (const char (*)[71])"onBeingHit final_damage is set to client for waepon and massive entity");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(context);
        }
        client_damage = context->attack_result.client_damage;
        if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store4(&context->final_damage);
        }
        context->final_damage = client_damage;
        v3 = 0;
      }
      else
      {
        anti_cheat_max_damage_percentage = 100.0;
        anti_cheat_max_damage_percentage_ratio = 100.0;
        anti_cheat_max_damage_extra = 100000.0;
        anti_cheat_max_damage = 10000000.0;
        is_anti_cheat_damage_check_open = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 192));
        if ( std::operator!=<Config>((const std::shared_ptr<Config> *)(v4 + 192), 0LL) )
        {
          v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          p_anti_cheat_max_damage_percentage = &v26->anti_cheat_max_damage_percentage;
          if ( *(_BYTE *)(((unsigned __int64)p_anti_cheat_max_damage_percentage >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_anti_cheat_max_damage_percentage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_anti_cheat_max_damage_percentage >> 3)
                                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(p_anti_cheat_max_damage_percentage);
          }
          anti_cheat_max_damage_percentage = v26->anti_cheat_max_damage_percentage;
          v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&v28->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v28->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v28->anti_cheat_max_damage_percentage_ratio);
          }
          anti_cheat_max_damage_percentage_ratio = v28->anti_cheat_max_damage_percentage_ratio;
          v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          p_anti_cheat_max_damage_extra = &v29->anti_cheat_max_damage_extra;
          if ( *(_BYTE *)(((unsigned __int64)p_anti_cheat_max_damage_extra >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_anti_cheat_max_damage_extra & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_anti_cheat_max_damage_extra >> 3)
                                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(p_anti_cheat_max_damage_extra);
          }
          anti_cheat_max_damage_extra = v29->anti_cheat_max_damage_extra;
          v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&v31->anti_cheat_max_damage >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v31->anti_cheat_max_damage >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v31->anti_cheat_max_damage);
          }
          anti_cheat_max_damage = v31->anti_cheat_max_damage;
          v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          p_is_anti_cheat_damage_check_open = &v32->is_anti_cheat_damage_check_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_anti_cheat_damage_check_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_anti_cheat_damage_check_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_anti_cheat_damage_check_open >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_anti_cheat_damage_check_open);
          }
          is_anti_cheat_damage_check_open = v32->is_anti_cheat_damage_check_open;
        }
        attack_result = &context->attack_result;
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v4 + 224), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->can_be_modified_by >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_result->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&attack_result->can_be_modified_by);
        }
        if ( attack_result->can_be_modified_by == Owner_0 )
        {
          Creature::getOwner((const Creature *const)(v4 + 320));
          std::shared_ptr<Creature>::operator=(
            (std::shared_ptr<Creature> *const)(v4 + 224),
            (std::shared_ptr<Creature> *)(v4 + 320));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 320));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->can_be_modified_by >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&attack_result->can_be_modified_by);
          }
          if ( attack_result->can_be_modified_by == OriginOwner_0 )
          {
            Creature::findTopOwner((const Creature *const)(v4 + 352));
            std::shared_ptr<Creature>::operator=(
              (std::shared_ptr<Creature> *const)(v4 + 224),
              (std::shared_ptr<Creature> *)(v4 + 352));
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 352));
          }
        }
        if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v4 + 224), 0LL) )
        {
          v34 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
          AbilityComp = Creature::getAbilityComp(v34);
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#1},void,void>(
            (std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480),
            (Creature::onBeingHit::<lambda(BaseAbilityMixin&)>)attack_result);
          AbilityComp::foreachMixin(AbilityComp, (std::function<ForeachPolicy(BaseAbilityMixin&)> *)(v4 + 480));
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function((std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480));
          v36 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
          Creature::applyModifiedAttackPropertyByMixin(v36, attack_result);
        }
        v37 = Creature::getAbilityComp(attacker);
        std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#2},void,void>(
          (std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480),
          (Creature::onBeingHit::<lambda(BaseAbilityMixin&)>)attack_result);
        AbilityComp::foreachMixin(v37, (std::function<ForeachPolicy(BaseAbilityMixin&)> *)(v4 + 480));
        std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function((std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480));
        Creature::applyModifiedAttackPropertyByMixin(attacker, attack_result);
        v38 = Creature::getAbilityComp(this);
        if ( AbilityComp::isMixinFuncTypeRegistered(v38, MIXIN_FUNC_TYPE_ON_BE_HITTING_OTHER) )
        {
          v39 = Creature::getAbilityComp(this);
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#3},void,void>(
            (std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480),
            (Creature::onBeingHit::<lambda(BaseAbilityMixin&)>)attack_result);
          AbilityComp::foreachMixin(v39, (std::function<ForeachPolicy(BaseAbilityMixin&)> *)(v4 + 480));
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function((std::function<ForeachPolicy(BaseAbilityMixin&)> *const)(v4 + 480));
        }
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256));
        critical_hurt = 0.0;
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        v40 = 0LL;
        *(_DWORD *)(v4 + 80) = 0;
        Creature::calcElementRatio(
          this,
          attack_result,
          attacker,
          (float *)(v4 + 48),
          (float *)(v4 + 64),
          (float *)(v4 + 80));
        if ( AttackResult::getTrueDamage(attack_result) )
        {
          *(float *)v40.m128i_i32 = AttackResult::getDamageExtra(attack_result);
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(&attack_result->total_damage_extra);
          }
          attack_result->total_damage_extra = v41;
          total_damage_extra = attack_result->total_damage_extra;
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&attack_result->damage_base);
          }
          attack_result->damage_base = total_damage_extra;
          damage_base = attack_result->damage_base;
          *(float *)(v4 + 176) = 1.0 - *(float *)(v4 + 80);
          *(_DWORD *)(v4 + 160) = 0;
          v43 = (float *)std::max<float>((const float *)(v4 + 160), (const float *)(v4 + 176));
          v44 = v43;
          if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v43);
          }
          v45 = *v44 * damage_base;
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_store4(&attack_result->server_damage);
          }
          attack_result->server_damage = v45;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 384));
          const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.const_value_config_mgr;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
          defense_resist_ratios = ConstValueExcelConfigMgr::getDefenseResistRatios(const_value_config_mgr);
          v46 = (std::array<float,3>::value_type *)std::array<float,3ul>::operator[](defense_resist_ratios, 0LL);
          v47 = v46;
          if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v46);
          }
          A1 = *v47;
          v48 = (std::array<float,3>::value_type *)std::array<float,3ul>::operator[](defense_resist_ratios, 1uLL);
          v49 = v48;
          if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v48);
          }
          B1 = *v49;
          v50 = (__m128i)LODWORD(B1);
          *(float *)v50.m128i_i32 = ConstValueExcelConfigMgr::getCriticalLimitMin(const_value_config_mgr);
          *(_DWORD *)(v4 + 96) = _mm_cvtsi128_si32(v50);
          *(float *)v50.m128i_i32 = ConstValueExcelConfigMgr::getCriticalLimitMax(const_value_config_mgr);
          *(_DWORD *)(v4 + 112) = _mm_cvtsi128_si32(v50);
          v51 = (std::array<float,3>::value_type *)std::array<float,3ul>::operator[](defense_resist_ratios, 2uLL);
          v52 = v51;
          if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v51);
          }
          C = *v52;
          v53 = (__m128i)LODWORD(C);
          *(float *)v53.m128i_i32 = AttackResult::getDamageAttenuation(attack_result);
          damage_attenuation = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
          *(float *)v53.m128i_i32 = Creature::calcDamageExtra(
                                      this,
                                      attacker,
                                      attack_result,
                                      &attack_result->damage_extra_overdose);
          v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(&attack_result->total_damage_extra);
          }
          attack_result->total_damage_extra = v54;
          *(float *)(v4 + 160) = 1.0 - AttackResult::getDefenseIgnoreRatio(attack_result);
          *(_DWORD *)(v4 + 144) = 0;
          v55 = std::max<float>((const float *)(v4 + 144), (const float *)(v4 + 160));
          *(_DWORD *)(v4 + 176) = 1065353216;
          v56 = (float *)std::min<float>((const float *)(v4 + 176), v55);
          v57 = v56;
          if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v56);
          }
          defense_ignore_ratio = *v57;
          v58 = (__m128i)LODWORD(defense_ignore_ratio);
          *(float *)v58.m128i_i32 = AttackResult::getDefenseIgnoreDelta(attack_result);
          defense_ignore_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v58));
          *(float *)(v4 + 176) = (float)(Creature::getProp(this, FIGHT_PROP_CUR_DEFENSE) * defense_ignore_ratio)
                               - defense_ignore_delta;
          *(_DWORD *)(v4 + 160) = 0;
          v59 = (float *)std::max<float>((const float *)(v4 + 160), (const float *)(v4 + 176));
          v60 = v59;
          if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v59);
          }
          defense = *v60;
          v61 = 0LL;
          damage = 0.0;
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_attacker_property.ignore_attacker_property >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_attacker_property.ignore_attacker_property >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load1(&attack_result->server_attacker_property.ignore_attacker_property);
          }
          if ( attack_result->server_attacker_property.ignore_attacker_property )
          {
            *(float *)(v4 + 144) = C / (float)(defense + C);
            *(_DWORD *)(v4 + 176) = 0;
            v62 = std::max<float>((const float *)(v4 + 144), (const float *)(v4 + 176));
            v63 = v62;
            if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v62);
            }
            *(_DWORD *)(v4 + 144) = *v63;
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&attack_result->total_damage_extra);
            }
            v64 = attack_result->total_damage_extra;
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&attack_result->damage_base);
            }
            attack_result->damage_base = v64;
            *(_DWORD *)(v4 + 176) = 0;
            *(float *)(v4 + 160) = *(float *)(v4 + 144)
                                 * (float)((float)((float)(1.0 - *(float *)(v4 + 80))
                                                 * (float)(attack_result->damage_base
                                                         * (float)(1.0 - *(float *)(v4 + 64))))
                                         * damage_attenuation);
            v65 = (float *)std::max<float>((const float *)(v4 + 160), (const float *)(v4 + 176));
            v66 = v65;
            if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v65);
            }
            damage = *v66;
            if ( AttackResult::getElementReactionTypeByAttackTag(attack_result) )
            {
              *(_DWORD *)(v4 + 160) = 0;
              *(_DWORD *)(v4 + 176) = 1065353216;
              AttackResult::getElementReactionCriticalAndCriticalHurt((const AttackResult *const)&__in);
              std::tie<float,float>((float *)(v4 + 384), (float *)(v4 + 160), (float *)(v4 + 176), (float *)(v4 + 160));
              std::tuple<float &,float &>::operator=<float,float>((std::tuple<float&,float&> *const)(v4 + 384), &__in);
              critical_probability = AttackResult::getBonusElementReactionCritical(attack_result) + *(float *)(v4 + 160);
              critical_probability_uint32 = (int)(float)(10000.0 * critical_probability);
              v67 = AttackResult::genCriticHash(attack_result);
              v68 = CommonMiscs::genRandomByXorShiftRNG32(v67, 0x2710u);
              if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&attack_result->server_critical_rand);
              }
              attack_result->server_critical_rand = v68;
              v69 = critical_probability_uint32 > attack_result->server_critical_rand;
              if ( *(char *)(((unsigned __int64)&attack_result->is_critical >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&attack_result->is_critical);
              attack_result->is_critical = v69;
              if ( attack_result->is_critical )
                v70 = AttackResult::getBonusElementReactionCriticalHurt(attack_result) + *(float *)(v4 + 176);
              else
                v70 = 0.0;
              critical_hurt = v70;
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                aCombatCheck);
              v71 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      &byte_2562F4E0);
              v72 = attacker;
              if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
                __asan_report_load8(attacker);
              v73 = *(void (__fastcall ***)(__int64, Creature *))attacker->baseclass_0;
              if ( *(_BYTE *)((*(_QWORD *)attacker->baseclass_0 >> 3) + 0x7FFF8000LL) )
                v73 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)attacker->baseclass_0);
              (*v73)(v4 + 416, v72);
              v74 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      v71,
                      (const std::string *)(v4 + 416));
              v75 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v74, asc_2562F520);
              v76 = this;
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              v77 = *(void (__fastcall ***)(__int64, Creature *))this->baseclass_0;
              if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
                v77 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
              (*v77)(v4 + 480, v76);
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v75,
                (const std::string *)(v4 + 480));
              std::string::~string((void *)(v4 + 480));
              std::string::~string((void *)(v4 + 416));
              v78 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      asc_2562F560);
              if ( *(char *)(((unsigned __int64)&attack_result->is_critical >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&attack_result->is_critical);
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v78, attack_result->is_critical);
              v79 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      " ElementCritical:");
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v79, *(float *)(v4 + 160));
              v80 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      " bonusElementCritical:");
              BonusElementReactionCritical = AttackResult::getBonusElementReactionCritical(attack_result);
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v80,
                BonusElementReactionCritical);
              v82 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      " bonusElementCriticalHurt:");
              BonusElementReactionCriticalHurt = AttackResult::getBonusElementReactionCriticalHurt(attack_result);
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v82,
                BonusElementReactionCriticalHurt);
              v84 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                      " critical_hurt:");
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v84, critical_hurt);
            }
          }
          else
          {
            *(float *)v61.m128i_i32 = AttackResult::getDamagePercentage(attack_result);
            damage_percentage_base = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            *(float *)v61.m128i_i32 = AttackResult::getDamagePercentageRatio(attack_result);
            damage_percentage_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            *(float *)v61.m128i_i32 = AttackResult::getDamagePercentageWaneRatio(attack_result);
            damage_percentage_wane_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            *(float *)v61.m128i_i32 = AttackResult::getBonusCritical(attack_result);
            bonus_critical = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            *(float *)v61.m128i_i32 = AttackResult::getBonusCriticalHurt(attack_result);
            bonus_critical_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            if ( *(char *)(((unsigned __int64)&attack_result->can_hit_head >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&attack_result->can_hit_head);
            if ( !attack_result->can_hit_head )
              goto LABEL_132;
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->hit_pos_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&attack_result->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
            {
              *(double *)v61.m128i_i64 = __asan_report_load4(&attack_result->hit_pos_type);
            }
            if ( attack_result->hit_pos_type == 1 )
              v85 = 1;
            else
LABEL_132:
              v85 = 0;
            is_hit_head = v85;
            if ( v85 )
            {
              *(float *)v61.m128i_i32 = Creature::getProp(attacker, FIGHT_PROP_HIT_HEAD_ADD_HURT);
              v86 = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
            }
            else
            {
              v86 = 0.0;
            }
            hit_head_damage_ratio = v86;
            *(float *)(v4 + 128) = defense
                                 / (float)((float)((float)((float)(int)Creature::getLevel(attacker) * A1) + defense) + B1);
            *(_DWORD *)(v4 + 176) = 0;
            v87 = std::max<float>((const float *)(v4 + 128), (const float *)(v4 + 176));
            v88 = v87;
            if ( *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v87 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v87);
            }
            *(_DWORD *)(v4 + 128) = *v88;
            level_suppress_damage_co_low = (__m128i)0x3F800000u;
            level_factor = 1.0;
            if ( Creature::getLevel(attacker) > 0x50 )
              Level = 80;
            else
              Level = Creature::getLevel(attacker);
            level_a = Level;
            if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
            {
              *(double *)level_suppress_damage_co_low.m128i_i64 = __asan_report_load4(&this->level_);
            }
            if ( this->level_ > 0x50 )
            {
              v92 = 80;
            }
            else
            {
              p_level = &this->level_;
              if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
              {
                *(double *)level_suppress_damage_co_low.m128i_i64 = __asan_report_load4(&this->level_);
              }
              v92 = *p_level;
            }
            level_b = v92;
            if ( *(char *)(((unsigned __int64)&attack_result->server_attacker_property.ignore_level_diff >> 3)
                         + 0x7FFF8000) < 0 )
              __asan_report_load1(&attack_result->server_attacker_property.ignore_level_diff);
            if ( attack_result->server_attacker_property.ignore_level_diff )
              v93 = 0;
            else
              v93 = level_a - level_b;
            level_diff = v93;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v4 + 384));
            v94 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
            level_supp_config_ptr = data::LevelSuppressExcelConfigMgrBase::findLevelSuppressExcelConfig(
                                      &v94->design_config.txt_config_mgr.level_suppress_config_mgr,
                                      level_diff);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
            if ( level_supp_config_ptr )
            {
              if ( Creature::checkEntityAndOwnerType(attacker, PROT_ENTITY_AVATAR) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->is_attacker_player >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)level_supp_config_ptr + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->is_attacker_player >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&level_supp_config_ptr->is_attacker_player);
                }
                if ( !level_supp_config_ptr->is_attacker_player )
                  goto LABEL_163;
              }
              if ( !Creature::checkEntityAndOwnerType(this, PROT_ENTITY_AVATAR) )
                goto LABEL_162;
              if ( *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->is_defenser_player >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)level_supp_config_ptr + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->is_defenser_player >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&level_supp_config_ptr->is_defenser_player);
              }
              if ( level_supp_config_ptr->is_defenser_player )
LABEL_162:
                v95 = 1;
              else
LABEL_163:
                v95 = 0;
              if ( v95 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->level_suppress_damage_co >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)level_supp_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->level_suppress_damage_co >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&level_supp_config_ptr->level_suppress_damage_co);
                }
                level_suppress_damage_co_low = (__m128i)LODWORD(level_supp_config_ptr->level_suppress_damage_co);
                level_factor = level_supp_config_ptr->level_suppress_damage_co;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v4 + 384));
                v96 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                level_supp_config_ptr = data::LevelSuppressExcelConfigMgrBase::findLevelSuppressExcelConfig(
                                          &v96->design_config.txt_config_mgr.level_suppress_config_mgr,
                                          0);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
                if ( level_supp_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->level_suppress_damage_co >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)level_supp_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_supp_config_ptr->level_suppress_damage_co >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&level_supp_config_ptr->level_suppress_damage_co);
                  }
                  level_suppress_damage_co_low = (__m128i)LODWORD(level_supp_config_ptr->level_suppress_damage_co);
                  level_factor = level_supp_config_ptr->level_suppress_damage_co;
                }
              }
            }
            *(float *)level_suppress_damage_co_low.m128i_i32 = Creature::getProp(attacker, FIGHT_PROP_CUR_ATTACK);
            attack = COERCE_FLOAT(_mm_cvtsi128_si32(level_suppress_damage_co_low));
            *(float *)level_suppress_damage_co_low.m128i_i32 = Creature::getProp(attacker, FIGHT_PROP_ADD_HURT);
            attack_add_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(level_suppress_damage_co_low));
            *(float *)level_suppress_damage_co_low.m128i_i32 = Creature::getProp(this, FIGHT_PROP_SUB_HURT);
            defense_sub_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(level_suppress_damage_co_low));
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&attack_result->total_damage_extra);
            }
            v97 = attack_result->total_damage_extra + (float)(attack * damage_percentage_base);
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&attack_result->damage_base >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&attack_result->damage_base);
            }
            attack_result->damage_base = v97;
            v254 = attack_result->damage_base;
            *(float *)(v4 + 144) = (float)((float)(*(float *)(v4 + 48) + (float)(damage_percentage_ratio + 1.0))
                                         + attack_add_hurt)
                                 - defense_sub_hurt;
            __a = 0.0;
            v98 = (float *)std::max<float>(&__a, (const float *)(v4 + 144));
            v99 = v98;
            if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v98);
            }
            v255 = *v99 * v254;
            *(float *)(v4 + 176) = 1.0 - *(float *)(v4 + 64);
            *(_DWORD *)(v4 + 160) = 0;
            v100 = (float *)std::max<float>((const float *)(v4 + 160), (const float *)(v4 + 176));
            v101 = v100;
            if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v100 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v100);
            }
            v102 = (__m128i)0x3F800000u;
            damage = (float)(hit_head_damage_ratio + 1.0)
                   * (float)((float)((float)((float)((float)(1.0 - *(float *)(v4 + 128))
                                                   * (float)((float)(*v101 * v255) * damage_percentage_wane_ratio))
                                           * level_factor)
                                   * damage_attenuation)
                           * (float)(1.0 - *(float *)(v4 + 80)));
            *(float *)v102.m128i_i32 = Creature::getProp(this, FIGHT_PROP_ANTI_CRITICAL);
            anti_critical = COERCE_FLOAT(_mm_cvtsi128_si32(v102));
            *(float *)v102.m128i_i32 = Creature::getProp(attacker, FIGHT_PROP_CRITICAL);
            critical = *(float *)v102.m128i_i32 + bonus_critical;
            *(float *)(v4 + 176) = (float)(*(float *)v102.m128i_i32 + bonus_critical) - anti_critical;
            v103 = std::min<float>((const float *)(v4 + 112), (const float *)(v4 + 176));
            v104 = (float *)std::max<float>((const float *)(v4 + 96), v103);
            v105 = v104;
            if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v104 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v104);
            }
            critical_probability_0 = *v105;
            *(_DWORD *)(v4 + 176) = (int)(float)(10000.0 * critical_probability_0);
            v106 = AttackResult::genCriticHash(attack_result);
            v107 = CommonMiscs::genRandomByXorShiftRNG32(v106, 0x2710u);
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&attack_result->server_critical_rand);
            }
            attack_result->server_critical_rand = v107;
            v108 = is_hit_head || attack_result->server_critical_rand < *(_DWORD *)(v4 + 176);
            if ( *(char *)(((unsigned __int64)&attack_result->is_critical >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&attack_result->is_critical);
            attack_result->is_critical = v108;
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/creature/creature.cpp",
              "onBeingHit",
              1032);
            v109 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                     (common::milog::MiLogStream *const)(v4 + 480),
                     (const char (*)[31])"[CRITICAL_RAND] critical_rand:");
            v110 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v109,
                     &attack_result->server_critical_rand);
            v111 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                     v110,
                     (const char (*)[30])" critical_probability_uint32:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v111,
              (const unsigned int *)(v4 + 176));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
            if ( *(char *)(((unsigned __int64)&attack_result->is_critical >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&attack_result->is_critical);
            if ( attack_result->is_critical )
            {
              Prop = Creature::getProp(attacker, FIGHT_PROP_CRITICAL_HURT);
              v113 = Prop + bonus_critical_hurt;
            }
            else
            {
              v113 = 0.0;
            }
            critical_hurt = v113;
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
              aCombatCheck);
            v114 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     &byte_2562F4E0);
            v115 = attacker;
            if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
              __asan_report_load8(attacker);
            v116 = *(void (__fastcall ***)(__int64, Creature *))attacker->baseclass_0;
            if ( *(_BYTE *)((*(_QWORD *)attacker->baseclass_0 >> 3) + 0x7FFF8000LL) )
              v116 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)attacker->baseclass_0);
            (*v116)(v4 + 416, v115);
            v117 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     v114,
                     (const std::string *)(v4 + 416));
            v118 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v117, asc_2562F520);
            v119 = this;
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v120 = *(void (__fastcall ***)(__int64, Creature *))this->baseclass_0;
            if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
              v120 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
            (*v120)(v4 + 480, v119);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              v118,
              (const std::string *)(v4 + 480));
            std::string::~string((void *)(v4 + 480));
            std::string::~string((void *)(v4 + 416));
            v121 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " attack_elem_ratio:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v121, *(float *)(v4 + 48));
            v122 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense_elem_ratio:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v122, *(float *)(v4 + 64));
            v123 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense_elem_mute:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v123, *(float *)(v4 + 80));
            v124 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damage_extra:");
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&attack_result->total_damage_extra);
            }
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              v124,
              attack_result->total_damage_extra);
            v125 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " C:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v125, C);
            v126 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damage_attenuation:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v126, damage_attenuation);
            v127 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damage_resist:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v127, *(float *)(v4 + 128));
            v128 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense_ignore_ratio:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v128, defense_ignore_ratio);
            v129 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense_ignore_delta:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v129, defense_ignore_delta);
            v130 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " attack:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v130, attack);
            v131 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v131, defense);
            v132 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " level_a:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v132, level_a);
            v133 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " level_b:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v133, level_b);
            v134 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " attack_add_hurt:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v134, attack_add_hurt);
            v135 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " defense_sub_hurt:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v135, defense_sub_hurt);
            v136 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " level_factor:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v136, level_factor);
            v137 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damagePercentage:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v137, damage_percentage_base);
            v138 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damagePercentageWaneRatio:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              v138,
              damage_percentage_wane_ratio);
            v139 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damagePercentageRatio:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v139, damage_percentage_ratio);
            v140 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " damageExtra:");
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->total_damage_extra >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&attack_result->total_damage_extra);
            }
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              v140,
              attack_result->total_damage_extra);
            v141 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     asc_2562FC20);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v141, is_hit_head);
            v142 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     asc_2562FC60);
            if ( *(char *)(((unsigned __int64)&attack_result->can_hit_head >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&attack_result->can_hit_head);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v142, attack_result->can_hit_head);
            v143 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     asc_2562FCA0);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v143, hit_head_damage_ratio);
            v144 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     asc_2562F560);
            if ( *(char *)(((unsigned __int64)&attack_result->is_critical >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&attack_result->is_critical);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v144, attack_result->is_critical);
            v145 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " bonusCritical:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v145, bonus_critical);
            v146 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " bonusCriticalHurt:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v146, bonus_critical_hurt);
            v147 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                     (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                     " critical_hurt:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v147, critical_hurt);
          }
          attack_elem_by_rock_ratio = 0.0;
          v148 = 0LL;
          defense_elem_by_rock_ratio = 0.0;
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3)
                                                                         + 0x7FFF8000) )
          {
            *(double *)v148.m128i_i64 = __asan_report_load4(&attack_result->element_type);
          }
          if ( attack_result->element_type != Rock )
          {
            v149 = Creature::getAbilityComp(attacker);
            v150 = ServiceBox::findService<GameserverService>();
            *(float *)v148.m128i_i32 = AbilityComp::getProperty(
                                         v149,
                                         &v150->ability_data_mgr.ACTOR_ELEM_ATTACK_ROCK_RATIO);
            attack_elem_by_rock_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v148));
            v151 = Creature::getAbilityComp(this);
            v152 = ServiceBox::findService<GameserverService>();
            *(float *)v148.m128i_i32 = AbilityComp::getProperty(
                                         v151,
                                         &v152->ability_data_mgr.ACTOR_ELEM_DEFENSE_ROCK_RATIO);
            defense_elem_by_rock_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v148));
          }
          v153 = (float)((float)(1.0 - attack_elem_by_rock_ratio) - defense_elem_by_rock_ratio)
               * (float)((float)(critical_hurt + 1.0) * damage);
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_store4(&attack_result->server_damage);
          }
          attack_result->server_damage = v153;
          v154 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                   " damage:");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v154, damage);
          v155 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                   " damage1:");
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&attack_result->server_damage);
          }
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v155, attack_result->server_damage);
          v156 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                   " attack_elem_by_rock_ratio:");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v156, attack_elem_by_rock_ratio);
          v157 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                   " defense_elem_by_rock_ratio:");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v157, defense_elem_by_rock_ratio);
        }
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        if ( attack_result->server_damage >= 0.000099999997 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&attack_result->server_damage);
          }
          if ( attack_result->server_damage < 0.0099999998 )
            attack_result->server_damage = 0.0099999998;
        }
        else
        {
          attack_result->server_damage = 0.0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        server_damage = attack_result->server_damage;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&attack_result->ori_server_damage);
        }
        attack_result->ori_server_damage = server_damage;
        AbilityComp::onBeingHit(&this->ability_comp_, attack_result);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        server_damage_low = (__m128i)LODWORD(attack_result->server_damage);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->block_shield_hurt >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->block_shield_hurt >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_store4(&attack_result->block_shield_hurt);
        }
        LODWORD(attack_result->block_shield_hurt) = server_damage_low.m128i_i32[0];
        *(float *)server_damage_low.m128i_i32 = AttackResult::getElementAmplifyRatio(attack_result);
        amplify_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(server_damage_low));
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        attack_result->server_damage = (float)(amplify_ratio + 1.0) * attack_result->server_damage;
        DAMAGE_CLAMP_MAX = 9999999.0;
        if ( attack_result->server_damage <= 9999999.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&attack_result->server_damage);
          }
          v160 = attack_result->server_damage;
        }
        else
        {
          v160 = DAMAGE_CLAMP_MAX;
        }
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&attack_result->server_damage);
        }
        attack_result->server_damage = v160;
        v161 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                 (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                 " amplify_ratio:");
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v161, amplify_ratio);
        v162 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                 (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256),
                 " damage2:");
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        v163 = _mm_cvtsi32_si128(LODWORD(attack_result->server_damage));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v162, *(float *)v163.m128i_i32);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/creature.cpp",
          "onBeingHit",
          1116);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          (std::string *)(v4 + 480),
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          (common::milog::MiLogStream *const)(v4 + 416),
          (const std::string *)(v4 + 480));
        std::string::~string((void *)(v4 + 480));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)attack_result - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load1(&attack_result->need_clamp_damage);
        }
        if ( attack_result->need_clamp_damage )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/creature/creature.cpp",
            "onBeingHit",
            1123);
          v164 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                   (common::milog::MiLogStream *const)(v4 + 480),
                   (const char (*)[63])"onBeingHit before after_damage_calc_handle_func server_damage:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v164, &attack_result->server_damage);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->damage_clamp_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
          {
            *(double *)v163.m128i_i64 = __asan_report_load4(&attack_result->damage_clamp_type);
          }
          damage_clamp_type = attack_result->damage_clamp_type;
          if ( damage_clamp_type == DamageConstant )
          {
            v166 = (float *)std::clamp<float>(
                              &attack_result->server_damage,
                              &attack_result->clamp_damage_min_value,
                              &attack_result->clamp_damage_max_value);
            v167 = v166;
            if ( *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v166 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v166);
            }
            v168 = *v167;
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_store4(&attack_result->server_damage);
            }
            attack_result->server_damage = v168;
          }
          else if ( damage_clamp_type <= DamageConstant )
          {
            if ( damage_clamp_type )
            {
              if ( damage_clamp_type == HPCurPercent )
              {
                *(float *)v163.m128i_i32 = Creature::getCurHp(this);
                cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v163));
                if ( std::abs(cur_hp) > 0.00000011920929 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(&attack_result->server_damage);
                  }
                  *(float *)(v4 + 176) = attack_result->server_damage / cur_hp;
                  v169 = std::clamp<float>(
                           (const float *)(v4 + 176),
                           &attack_result->clamp_damage_min_value,
                           &attack_result->clamp_damage_max_value);
                  v170 = v169;
                  if ( *(_BYTE *)(((unsigned __int64)v169 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v169 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v169 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v169);
                  }
                  *(_DWORD *)(v4 + 176) = *v170;
                  v171 = *(float *)(v4 + 176) * cur_hp;
                  if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_store4(&attack_result->server_damage);
                  }
                  attack_result->server_damage = v171;
                }
              }
            }
            else
            {
              *(float *)v163.m128i_i32 = Creature::getMaxHp(this);
              max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v163));
              if ( std::abs(max_hp) > 0.00000011920929 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&attack_result->server_damage);
                }
                *(float *)(v4 + 176) = attack_result->server_damage / max_hp;
                v172 = std::clamp<float>(
                         (const float *)(v4 + 176),
                         &attack_result->clamp_damage_min_value,
                         &attack_result->clamp_damage_max_value);
                v173 = v172;
                if ( *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v172 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v172);
                }
                *(_DWORD *)(v4 + 176) = *v173;
                v174 = *(float *)(v4 + 176) * max_hp;
                if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_store4(&attack_result->server_damage);
                }
                attack_result->server_damage = v174;
              }
            }
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/creature/creature.cpp",
            "onBeingHit",
            1158);
          v175 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                   (common::milog::MiLogStream *const)(v4 + 480),
                   (const char (*)[62])"onBeingHit after after_damage_calc_handle_func server_damage:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v175, &attack_result->server_damage);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        }
        ret = 0;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        *(float *)&v176 = attack_result->server_damage;
        if ( *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) <= 3 )
        {
          v176 = __asan_report_load4(attack_result);
        }
        if ( std::abs(*(float *)&v176 - attack_result->client_damage) > 0.0099999998 )
        {
          *(_DWORD *)(v4 + 160) = 0;
          *(_DWORD *)(v4 + 176) = 0;
          *(std::tuple<float,float> *)&v177 = AttackResult::getElementReactionCriticalAndCriticalHurt((const AttackResult *const)&v306);
          std::tie<float,float>((float *)(v4 + 384), (float *)(v4 + 160), (float *)(v4 + 176), (float *)(v4 + 160));
          std::tuple<float &,float &>::operator=<float,float>((std::tuple<float&,float&> *const)(v4 + 384), &v306);
          Entity::getScene((const Entity *const)(v4 + 288));
          if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 288), 0LL) )
            goto LABEL_292;
          v178 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
          if ( *(_BYTE *)((v178 >> 3) + 0x7FFF8000) )
            v178 = __asan_report_load8(v178);
          v179 = *(_QWORD *)v178 + 392LL;
          if ( *(_BYTE *)((v179 >> 3) + 0x7FFF8000) )
            v178 = __asan_report_load8(*(_QWORD *)v178 + 392LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, double))v179)(v178, v177) )
            v180 = 1;
          else
LABEL_292:
            v180 = 0;
          is_in_mp = v180;
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 320));
          v181 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 320),
                   aDamageDiff);
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&attack_result->server_damage);
          }
          v182 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v181,
                   attack_result->server_damage);
          v183 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v182, asc_25630020);
          if ( *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(attack_result);
          }
          v184 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v183,
                   attack_result->client_damage);
          v185 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v184, asc_25630060);
          v186 = attacker;
          if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
            __asan_report_load8(attacker);
          v187 = *(void (__fastcall ***)(__int64, Creature *))attacker->baseclass_0;
          if ( *(_BYTE *)((*(_QWORD *)attacker->baseclass_0 >> 3) + 0x7FFF8000LL) )
            v187 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)attacker->baseclass_0);
          (*v187)(v4 + 416, v186);
          v188 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v185,
                   (const std::string *)(v4 + 416));
          v189 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v188, asc_256300A0);
          v190 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v191 = *(void (__fastcall ***)(__int64, Creature *))this->baseclass_0;
          if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
            v191 = (void (__fastcall **)(__int64, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
          (*v191)(v4 + 480, v190);
          v192 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v189,
                   (const std::string *)(v4 + 480));
          v193 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v192, asc_256300E0);
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load1(&attack_result->predicate_modify_damage);
          }
          v194 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v193,
                   attack_result->predicate_modify_damage);
          v195 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v194, asc_25630140);
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&attack_result->ori_server_damage);
          }
          v196 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v195,
                   attack_result->ori_server_damage);
          v197 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v196, asc_256301A0);
          v198 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v197, is_in_mp);
          v199 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v198, asc_256301E0);
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->client_critical_rand >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)attack_result + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->client_critical_rand >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&attack_result->client_critical_rand);
          }
          v200 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v199,
                   attack_result->client_critical_rand);
          v201 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v200, "|");
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&attack_result->server_critical_rand);
          }
          v202 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                   v201,
                   attack_result->server_critical_rand);
          v203 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v202, ")");
          v204 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v203, asc_256302C0);
          v205 = Creature::getProp(attacker, FIGHT_PROP_CRITICAL);
          v206 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v204, v205);
          v207 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v206, "|");
          BonusCritical = AttackResult::getBonusCritical(attack_result);
          v209 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v207, BonusCritical);
          v210 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v209, "|");
          v211 = Creature::getProp(this, FIGHT_PROP_ANTI_CRITICAL);
          v212 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v210, v211);
          v213 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v212, ")");
          v214 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v213, asc_25630340);
          v215 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v214, *(float *)(v4 + 160));
          v216 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v215, "|");
          v217 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v216, *(float *)(v4 + 176));
          v218 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v217, "|");
          v219 = AttackResult::getBonusElementReactionCritical(attack_result);
          v220 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v218, v219);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v220, ")");
          std::string::~string((void *)(v4 + 480));
          std::string::~string((void *)(v4 + 416));
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/creature/creature.cpp",
            "onBeingHit",
            1180);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
            (std::string *)(v4 + 480),
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 320));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            (common::milog::MiLogStream *const)(v4 + 416),
            (const std::string *)(v4 + 480));
          std::string::~string((void *)(v4 + 480));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
          CoroutineHelper::getContextPacketPtr();
          if ( std::operator!=<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 352), 0LL) )
          {
            v221 = ServiceBox::findService<GameserverService>();
            v222 = (unsigned int)GameserverService::getGameThreadLocal(v221) + 16;
            v223 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
            common::minet::Packet::getUserId(v223);
            PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v4 + 384), v222);
            if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 384), 0LL) )
            {
              v224 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
                (std::string *)(v4 + 480),
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 320));
              Player::notifyGMServerLog(v224, SERVER_LOG_NONE, LOG_LEVEL_INFO_0, (const std::string *)(v4 + 480));
              std::string::~string((void *)(v4 + 480));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 384));
          }
          ret = -1;
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 352));
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 320));
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 288));
        }
        if ( is_anti_cheat_damage_check_open )
        {
          CoroutineHelper::getPlayerFromContextPacket();
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 320), 0LL) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&attack_result->ori_server_damage);
            }
            if ( attack_result->ori_server_damage > anti_cheat_max_damage
              || (v225 = AttackResult::getDamageExtra(attack_result), v225 > anti_cheat_max_damage_extra)
              || (v226 = AttackResult::getDamagePercentage(attack_result), v226 > anti_cheat_max_damage_percentage)
              || (v227 = AttackResult::getDamagePercentageRatio(attack_result),
                  v227 > anti_cheat_max_damage_percentage_ratio) )
            {
              common::tools::perf::make_shared<proto_log::AntiCheatBodyDamageOverLimit>();
              v229 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
              v230 = proto_log::AntiCheatBodyDamageOverLimit::mutable_attack_entity(v229);
              Creature::getAttackEntityLog((Entity *)attacker, v230);
              v231 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
              v232 = proto_log::AntiCheatBodyDamageOverLimit::mutable_defense_entity(v231);
              Creature::getAttackEntityLog((Entity *)this, v232);
              v233 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
              proto_log::AntiCheatBodyDamageOverLimit::set_attack_tag(v233, &attack_result->attack_tag);
              std::allocator<char>::allocator(&v258);
              std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 416), byte_255BBB40, &v258);
              std::allocator<char>::~allocator(&v258);
              std::allocator<char>::allocator(&v258);
              std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 480), byte_255BBB40, &v258);
              std::allocator<char>::~allocator(&v258);
              if ( std::operator!=<ActorAbility>(&attack_result->ability_ptr, 0LL) )
              {
                v234 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->ability_ptr);
                ConfigRef = ActorAbility::getConfigRef(v234);
                std::string::operator=(v4 + 416, &ConfigRef->ability_name);
              }
              if ( std::operator!=<ActorModifier>(&attack_result->modifier_ptr, 0LL) )
              {
                v236 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->modifier_ptr);
                v237 = ActorModifier::getConfigRef(v236);
                std::string::operator=(v4 + 480, &v237->modifier_name);
              }
              if ( std::operator!=<char>(
                     "ActivityAbility_LudiHarpastumGadgetSkill_BombTypeA",
                     (const std::string *)(v4 + 416))
                && std::operator!=<char>(
                     "ActivityAbility_LudiHarpastumGadgetSkill_BombTypeB",
                     (const std::string *)(v4 + 416)) )
              {
                v239 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                proto_log::AntiCheatBodyDamageOverLimit::set_ability_name(v239, (const std::string *)(v4 + 416));
                v240 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                proto_log::AntiCheatBodyDamageOverLimit::set_modifier_name(v240, (const std::string *)(v4 + 480));
                v241 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                DamagePercentage = AttackResult::getDamagePercentage(attack_result);
                proto_log::AntiCheatBodyDamageOverLimit::set_damage_percentage(v241, DamagePercentage);
                v243 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                DamagePercentageRatio = AttackResult::getDamagePercentageRatio(attack_result);
                proto_log::AntiCheatBodyDamageOverLimit::set_damage_percentage_ratio(v243, DamagePercentageRatio);
                v245 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                DamageExtra = AttackResult::getDamageExtra(attack_result);
                proto_log::AntiCheatBodyDamageOverLimit::set_damage_extra(v245, DamageExtra);
                v247 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&attack_result->ori_server_damage);
                }
                proto_log::AntiCheatBodyDamageOverLimit::set_damage(v247, attack_result->ori_server_damage);
                v248 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                proto_log::AntiCheatBodyDamageOverLimit::set_critical_hurt(v248, critical_hurt);
                v249 = std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyDamageOverLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                proto_log::AntiCheatBodyDamageOverLimit::set_amplify_ratio(v249, amplify_ratio);
                v250 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyDamageOverLimit,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)(v4 + 384),
                  (const std::shared_ptr<proto_log::AntiCheatBodyDamageOverLimit> *)(v4 + 352));
                Player::printAntiCheatLog(v250, ANTI_CHEAT_ACTION_DAMAGE_OVER_LIMIT, (MessagePtr *)(v4 + 384));
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 384));
              }
              std::string::~string((void *)(v4 + 480));
              std::string::~string((void *)(v4 + 416));
              std::shared_ptr<proto_log::AntiCheatBodyDamageOverLimit>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyDamageOverLimit> *const)(v4 + 352));
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 320));
        }
        AbilityComp::onAfterBeingHit(&this->ability_comp_, attack_result);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->server_damage);
        }
        v251 = attack_result->server_damage;
        if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store4(&context->final_damage);
        }
        context->final_damage = v251;
        v3 = ret;
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 256));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 224));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
      }
    }
  }
  result = v3;
  if ( v307 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 859: range 0000000014F3F7BE-0000000014F3F857
ForeachPolicy __cdecl Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#1}::operator()(
        const Creature::onBeingHit::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(BaseAbilityMixin *, AttackResult *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)mixin >> 3) + 0x7FFF8000) )
    __asan_report_load8(mixin);
  v2 = (unsigned __int64)(mixin->_vptr_BaseAbilityMixin + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(mixin->_vptr_BaseAbilityMixin + 6);
  v3 = *(void (__fastcall **)(BaseAbilityMixin *, AttackResult *))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(mixin, __closure->__attack_result);
  return 0;
};

// Line 866: range 0000000014F3F858-0000000014F3F8F1
ForeachPolicy __cdecl Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#2}::operator()(
        const Creature::onBeingHit::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(BaseAbilityMixin *, AttackResult *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)mixin >> 3) + 0x7FFF8000) )
    __asan_report_load8(mixin);
  v2 = (unsigned __int64)(mixin->_vptr_BaseAbilityMixin + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(mixin->_vptr_BaseAbilityMixin + 6);
  v3 = *(void (__fastcall **)(BaseAbilityMixin *, AttackResult *))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(mixin, __closure->__attack_result);
  return 0;
};

// Line 876: range 0000000014F3F8F2-0000000014F3F98B
ForeachPolicy __cdecl Creature::onBeingHit(Creature&,HurtContext &)::{lambda(BaseAbilityMixin &)#3}::operator()(
        const Creature::onBeingHit::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(BaseAbilityMixin *, AttackResult *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)mixin >> 3) + 0x7FFF8000) )
    __asan_report_load8(mixin);
  v2 = (unsigned __int64)(mixin->_vptr_BaseAbilityMixin + 7);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(mixin->_vptr_BaseAbilityMixin + 7);
  v3 = *(void (__fastcall **)(BaseAbilityMixin *, AttackResult *))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(mixin, __closure->__attack_result);
  return 0;
};

// Line 1247: range 0000000014F43FCE-0000000014F44044
float __cdecl Creature::calcReduceDamageRatioByDefenseRatio(float defense_ratio)
{
  if ( defense_ratio < 0.0 )
    return 0.5 * defense_ratio;
  if ( defense_ratio > 0.75 )
  {
    if ( (float)(defense_ratio + 0.25) == 0.0 )
      return 0.0;
    else
      return defense_ratio / (float)(defense_ratio + 0.25);
  }
  return defense_ratio;
};

// Line 1272: range 0000000014F44046-0000000014F449FF
int32_t __cdecl Creature::doHurt(Creature *const this, Player *player, Creature *attacker, HurtContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  float *p_final_damage; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v16; // r14
  TxtConfigMgr *p_txt_config_mgr; // rcx
  char v18; // r15
  Player *v19; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  Group *v21; // rax
  ChallengeComp *ChallengeComp; // rdi
  PlayerAvatarComp *AvatarComp; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+34h] [rbp-15Ch]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-150h] BYREF
  char v31[304]; // [rsp+60h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 14 scene_ptr:1290 64 16 16 monster_ptr:1308 96 16 14 group_ptr:1323 128 96 22 change_hp_context:1281";
  *(_QWORD *)(v4 + 16) = Creature::doHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  if ( this->life_state_ == LIFE_DEAD )
  {
    v7 = -1;
  }
  else
  {
    common::tools::perf::make_shared<HurtContext,HurtContext&>((HurtContext *)(v4 + 96), context);
    std::shared_ptr<HurtContext>::operator=(&this->hurt_context_ptr_, (std::shared_ptr<HurtContext> *)(v4 + 96));
    std::shared_ptr<HurtContext>::~shared_ptr((std::shared_ptr<HurtContext> *const)(v4 + 96));
    ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v4 + 128));
    v8 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hurt_context_ptr_);
    p_final_damage = &v8->final_damage;
    if ( *(_BYTE *)(((unsigned __int64)p_final_damage >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_final_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_final_damage >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_final_damage);
    }
    if ( v8->final_damage == 0.0 )
    {
      std::shared_ptr<HurtContext>::shared_ptr((std::shared_ptr<HurtContext> *const)(v4 + 96), &this->hurt_context_ptr_);
      Creature::tryTriggerElementReactionByHurt(this, (HurtContextPtr *)(v4 + 96), 0.0, 0);
      std::shared_ptr<HurtContext>::~shared_ptr((std::shared_ptr<HurtContext> *const)(v4 + 96));
      toThisPtr<Creature>((Creature *)(v4 + 96));
      std::shared_ptr<Creature>::operator=(
        (std::shared_ptr<Creature> *const)(v4 + 136),
        (std::shared_ptr<Creature> *)(v4 + 96));
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 96));
      *(_DWORD *)(v4 + 216) = 0;
    }
    else
    {
      Entity::getScene((const Entity *const)(v4 + 32));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 32)) )
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10);
        v11 = *(_QWORD *)v10 + 192LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(*(_QWORD *)v10 + 192LL);
        (*(void (__fastcall **)(unsigned __int64, Creature *, Creature *const, HurtContext *))v11)(
          v10,
          attacker,
          this,
          context);
      }
      if ( *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&context->reason);
      }
      *(_DWORD *)(v4 + 128) = context->reason;
      toThisPtr<Creature>((Creature *)(v4 + 64));
      std::shared_ptr<Creature>::operator=(
        (std::shared_ptr<Creature> *const)(v4 + 136),
        (std::shared_ptr<Creature> *)(v4 + 64));
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 64));
      std::string::operator=(v4 + 152, &context->attack_result.attack_tag);
      std::weak_ptr<ActorAbility>::operator=<ActorAbility>(
        (std::weak_ptr<ActorAbility> *const)(v4 + 192),
        &context->attack_result.ability_ptr);
      std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 96), 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&context->final_damage);
      }
      ret = Creature::changeCurHp(
              this,
              _mm_xor_ps((__m128)LODWORD(context->final_damage), (__m128)0x80000000),
              (ChangeHpContext *)(v4 + 128),
              1,
              (FightPropNtfParamPtr *)(v4 + 96));
      std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 96));
      if ( ret < 0 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "doHurt",
          1302);
        v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v30,
                (const char (*)[33])"changeCurHp fails, final_damage:");
        v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &context->final_damage);
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v13, this);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      if ( HurtContext::getIsCritical(context) )
      {
        toPtr<Monster,Creature>((Creature *)(v4 + 64));
        if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v4 + 64), 0LL) )
        {
          v14 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(v14);
          v15 = *(_QWORD *)v14 + 312LL;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(*(_QWORD *)v14 + 312LL);
          monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v15)(v14);
          v16 = 0;
          if ( !monster_config_ptr )
            goto LABEL_35;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 96));
          v16 = 1;
          p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.txt_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&monster_config_ptr->id);
          }
          if ( !TxtConfigMgr::isMonsterAnimal(p_txt_config_mgr, monster_config_ptr->id) )
            v18 = 1;
          else
LABEL_35:
            v18 = 0;
          if ( v16 )
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
          if ( v18 )
          {
            Creature::findOriginalPlayer((Creature *const)(v4 + 96));
            if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
            {
              v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              WatcherComp = Player::getWatcherComp(v19);
              if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&context->final_damage);
              }
              PlayerWatcherComp::tryUpdateMaxCriticalDamage(WatcherComp, context->final_damage);
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
          }
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 64));
      }
      Entity::getGroup((const Entity *const)(v4 + 96));
      if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 96), 0LL) )
      {
        v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        ChallengeComp = Group::getChallengeComp(v21);
        ChallengeComp::onCreatureHurt(ChallengeComp, attacker, this, context);
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 96));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
    }
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::recordFrameAttackCount(AvatarComp, attacker, this);
    StatLogReporter::onCreatureDoHurt(this, (const ChangeHpContext *)(v4 + 128));
    std::__shared_ptr<HurtContext,(__gnu_cxx::_Lock_policy)2>::reset(&this->hurt_context_ptr_);
    v7 = 0;
    ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v4 + 128));
  }
  result = v7;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1338: range 0000000014F44A00-0000000014F44D25
__int64 __fastcall Creature::addModifiedAttackPropertyByMixin(
        Creature *const this,
        uint32_t create_count,
        uintptr_t mixin_address,
        const ModifiedAttackProperty *modified_property)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::pointer v8; // rax
  std::unordered_map<long unsigned int,ModifiedAttackProperty> *v9; // rax
  ModifiedAttackProperty *v10; // rax
  __int64 result; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 17 create_count:1337 64 8 9 iter:1343 96 8 18 mixin_address:1337";
  *(_QWORD *)(v4 + 16) = Creature::addModifiedAttackPropertyByMixin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = create_count;
  *(_QWORD *)(v4 + 96) = mixin_address;
  if ( std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::size(&this->modified_property_map_) > 0x12C )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "addModifiedAttackPropertyByMixin",
      1342);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"modified_property_map size: ");
    val = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::size(&this->modified_property_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v4 + 64) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::begin(&this->modified_property_map_);
    while ( 1 )
    {
      val = (unsigned __int64)std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::end(&this->modified_property_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)(v4 + 64),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)&val) )
        break;
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned long,ModifiedAttackProperty>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > > *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v8);
      }
      if ( v8->first + 100 >= *(_DWORD *)(v4 + 48) && v8->first <= *(_DWORD *)(v4 + 48) + 100 )
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned long,ModifiedAttackProperty>>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > > *const)(v4 + 64),
          0);
      else
        *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v4 + 64) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::erase[abi:cxx11](&this->modified_property_map_, *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v4 + 64));
    }
  }
  v9 = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::operator[](
         &this->modified_property_map_,
         (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v4 + 48));
  v10 = std::unordered_map<unsigned long,ModifiedAttackProperty>::operator[](
          v9,
          (const std::unordered_map<long unsigned int,ModifiedAttackProperty>::key_type *)(v4 + 96));
  ModifiedAttackProperty::operator=(v10, modified_property);
  result = 0LL;
  if ( v16 == (char *)v4 )
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

// Line 1361: range 0000000014F44D26-0000000014F44ECA
__int64 __fastcall Creature::removeModifiedAttackPropertyByMixin(
        Creature *const this,
        uint32_t create_count,
        uintptr_t mixin_address)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<long unsigned int,ModifiedAttackProperty> *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 create_count:1360 64 8 9 iter:1362 96 8 18 mixin_address:1360";
  *(_QWORD *)(v3 + 16) = Creature::removeModifiedAttackPropertyByMixin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = create_count;
  *(_QWORD *)(v3 + 96) = mixin_address;
  *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v3 + 64) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::find(&this->modified_property_map_, (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::end(&this->modified_property_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::operator[](
           &this->modified_property_map_,
           (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v3 + 48));
    std::unordered_map<unsigned long,ModifiedAttackProperty>::erase(
      v6,
      (const std::unordered_map<long unsigned int,ModifiedAttackProperty>::key_type *)(v3 + 96));
  }
  result = 0LL;
  if ( v10 == (char *)v3 )
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

// Line 1371: range 0000000014F44ECC-0000000014F450EB
_BOOL8 __fastcall Creature::isModifiedAttackPropertyByMixinExist(
        Creature *const this,
        uint32_t create_count,
        uintptr_t mixin_address)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<long unsigned int,ModifiedAttackProperty> *v6; // rax
  std::unordered_map<long unsigned int,ModifiedAttackProperty> *v7; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  char v11[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 create_count:1370 64 8 9 iter:1372 96 8 18 property_iter:1375 128 8 18 mixin_address:1370";
  *(_QWORD *)(v3 + 16) = Creature::isModifiedAttackPropertyByMixinExist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = create_count;
  *(_QWORD *)(v3 + 128) = mixin_address;
  *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v3 + 64) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::find(&this->modified_property_map_, (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::end(&this->modified_property_map_)._M_node;
  result = 0;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::operator[](
           &this->modified_property_map_,
           (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v3 + 48));
    *(std::unordered_map<long unsigned int,ModifiedAttackProperty>::iterator *)(v3 + 96) = std::unordered_map<unsigned long,ModifiedAttackProperty>::find(
                                                                                             v6,
                                                                                             (const std::unordered_map<long unsigned int,ModifiedAttackProperty>::key_type *)(v3 + 128));
    v7 = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::operator[](
           &this->modified_property_map_,
           (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v3 + 48));
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Base_ptr)std::unordered_map<unsigned long,ModifiedAttackProperty>::end(v7)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned long const,ModifiedAttackProperty>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,ModifiedAttackProperty>,false> *)(v3 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,ModifiedAttackProperty>,false> *)&__y) )
    {
      result = 1;
    }
  }
  if ( v11 == (char *)v3 )
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

// Line 1385: range 0000000014F450EC-0000000014F45254
void __cdecl Creature::removeModifiedAttackPropertyLessThanCreateCount(Creature *const this, uint32_t create_count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::pointer v5; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1386";
  *(_QWORD *)(v2 + 16) = Creature::removeModifiedAttackPropertyLessThanCreateCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  for ( *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v2 + 32) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::begin(&this->modified_property_map_);
        ;
        *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v2 + 32) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::erase[abi:cxx11](&this->modified_property_map_, *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v2 + 32)) )
  {
    __y._M_node = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::end(&this->modified_property_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)(v2 + 32),
            &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned long,ModifiedAttackProperty>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v5);
    }
    if ( create_count <= v5->first )
      break;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1400: range 0000000014F45256-0000000014F46456
void __cdecl Creature::applyModifiedAttackPropertyByMixin(Creature *const this, AttackResult *attack_result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::pair<long unsigned int const,ModifiedAttackProperty> *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm0_4
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm0_4
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  float *v19; // rax
  float *v20; // rdx
  float v21; // xmm0_4
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  float *v24; // rax
  float *v25; // rdx
  float v26; // xmm0_4
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  float *v29; // rax
  float *v30; // rdx
  float v31; // xmm0_4
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  bool *v34; // rax
  char *v35; // rdx
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  float *v39; // rax
  float *v40; // rdx
  float v41; // xmm0_4
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  float *v44; // rax
  float *v45; // rdx
  float v46; // xmm0_4
  float *v47; // rax
  float *v48; // rax
  float *v49; // rdx
  std::map<unsigned int,float> *v50; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::reference v51; // rax
  std::pair<unsigned int const,float> *v52; // rdx
  std::map<unsigned int,float>::mapped_type *v53; // rax
  float v54; // xmm1_4
  float *v55; // rax
  float *v56; // rdx
  float *v57; // rax
  float *v58; // rdx
  float *v59; // rax
  float *v60; // rdx
  bool *v61; // rax
  _BYTE *v62; // rdx
  char v63; // al
  float *v64; // rax
  float *v65; // rdx
  float *v66; // rax
  float *v67; // rdx
  float v68; // [rsp+Ch] [rbp-234h]
  float v69; // [rsp+Ch] [rbp-234h]
  float v70; // [rsp+Ch] [rbp-234h]
  float v71; // [rsp+Ch] [rbp-234h]
  float v72; // [rsp+Ch] [rbp-234h]
  float v73; // [rsp+Ch] [rbp-234h]
  bool v74; // [rsp+29h] [rbp-217h] BYREF
  std::optional<bool> v75; // [rsp+2Ah] [rbp-216h] BYREF
  float val; // [rsp+2Ch] [rbp-214h] BYREF
  float v77; // [rsp+30h] [rbp-210h] BYREF
  float v78; // [rsp+34h] [rbp-20Ch] BYREF
  float v79; // [rsp+38h] [rbp-208h] BYREF
  float v80; // [rsp+3Ch] [rbp-204h] BYREF
  float v81; // [rsp+40h] [rbp-200h] BYREF
  float __t; // [rsp+44h] [rbp-1FCh] BYREF
  std::unordered_map<long unsigned int,ModifiedAttackProperty>::iterator __for_begin; // [rsp+48h] [rbp-1F8h] BYREF
  std::unordered_map<long unsigned int,ModifiedAttackProperty>::iterator __for_end; // [rsp+50h] [rbp-1F0h] BYREF
  std::unordered_map<long unsigned int,ModifiedAttackProperty> *__for_range; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,std::pair<long unsigned int const,ModifiedAttackProperty> >::type *mixin_address; // [rsp+60h] [rbp-1E0h]
  std::tuple_element<1,std::pair<long unsigned int const,ModifiedAttackProperty> >::type *modified_property; // [rsp+68h] [rbp-1D8h]
  std::map<unsigned int,float> *__for_range_0; // [rsp+70h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *filter_hash; // [rsp+78h] [rbp-1C8h]
  std::tuple_element<1,std::pair<unsigned int const,float> >::type *damage_extra; // [rsp+80h] [rbp-1C0h]
  std::optional<float> v91; // [rsp+88h] [rbp-1B8h] BYREF
  std::optional<float> v92; // [rsp+90h] [rbp-1B0h] BYREF
  std::optional<float> v93; // [rsp+98h] [rbp-1A8h] BYREF
  std::optional<float> v94; // [rsp+A0h] [rbp-1A0h] BYREF
  std::map<unsigned int,float>::iterator __for_begin_0; // [rsp+A8h] [rbp-198h] BYREF
  std::map<unsigned int,float>::iterator __for_end_0; // [rsp+B0h] [rbp-190h] BYREF
  std::pair<unsigned int const,float> M_node; // [rsp+B8h] [rbp-188h] BYREF
  common::milog::MiLogStream v98; // [rsp+C0h] [rbp-180h] BYREF
  std::pair<long unsigned int const,ModifiedAttackProperty> __in; // [rsp+E0h] [rbp-160h] BYREF
  char v100[144]; // [rsp+1B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 create_count:1401 64 8 9 iter:1408";
  *(_QWORD *)(v2 + 16) = Creature::applyModifiedAttackPropertyByMixin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->create_count);
  }
  *(_DWORD *)(v2 + 48) = attack_result->create_count;
  if ( *(_DWORD *)(v2 + 48) > Creature::applyModifiedAttackPropertyByMixin(AttackResult &)::remain_modified_create_count )
    Creature::removeModifiedAttackPropertyLessThanCreateCount(
      this,
      *(_DWORD *)(v2 + 48) - Creature::applyModifiedAttackPropertyByMixin(AttackResult &)::remain_modified_create_count);
  *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::find(&this->modified_property_map_, (const std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::key_type *)(v2 + 48));
  M_node = (std::pair<unsigned int const,float>)std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::end(&this->modified_property_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)(v2 + 64),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > >::_Self *)&M_node) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)attack_result - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store1(&attack_result->predicate_modify_damage);
    }
    attack_result->predicate_modify_damage = 1;
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned long,ModifiedAttackProperty>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<long unsigned int,ModifiedAttackProperty> > > *const)(v2 + 64))->second;
    __for_begin._M_cur = std::unordered_map<unsigned long,ModifiedAttackProperty>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned long,ModifiedAttackProperty>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned long const,ModifiedAttackProperty>,false>(
              &__for_begin,
              &__for_end) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned long const,ModifiedAttackProperty>,false,false>::operator*(&__for_begin);
      std::pair<unsigned long const,ModifiedAttackProperty>::pair(&__in, v5);
      mixin_address = std::get<0ul,unsigned long const,ModifiedAttackProperty>(&__in);
      modified_property = std::get<1ul,unsigned long const,ModifiedAttackProperty>(&__in);
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "applyModifiedAttackPropertyByMixin",
        1417);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v98, (const char (*)[16])"mixin_address: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, mixin_address);
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v7,
             (const char (*)[20])" damage_percentage:");
      if ( std::optional<float>::has_value(&modified_property->damage_percentage) )
      {
        v9 = std::optional<float>::value(&modified_property->damage_percentage);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
      }
      else
      {
        v11 = 0.0;
      }
      val = v11;
      v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &val);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v12,
              (const char (*)[26])" damage_percentage_ratio:");
      if ( std::optional<float>::has_value(&modified_property->damage_percentage_ratio) )
      {
        v14 = std::optional<float>::value(&modified_property->damage_percentage_ratio);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
      }
      else
      {
        v16 = 0.0;
      }
      v77 = v16;
      v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v13, &v77);
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" damage_extra:");
      if ( std::optional<float>::has_value(&modified_property->damage_extra) )
      {
        v19 = std::optional<float>::value(&modified_property->damage_extra);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v21 = *v20;
      }
      else
      {
        v21 = 0.0;
      }
      v78 = v21;
      v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, &v78);
      v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])" bonus_critical:");
      if ( std::optional<float>::has_value(&modified_property->bonus_critical) )
      {
        v24 = std::optional<float>::value(&modified_property->bonus_critical);
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v26 = *v25;
      }
      else
      {
        v26 = 0.0;
      }
      v79 = v26;
      v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &v79);
      v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v27,
              (const char (*)[22])" bonus_critical_hurt:");
      if ( std::optional<float>::has_value(&modified_property->bonus_critical_hurt) )
      {
        v29 = std::optional<float>::value(&modified_property->bonus_critical_hurt);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        v31 = *v30;
      }
      else
      {
        v31 = 0.0;
      }
      v80 = v31;
      v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, &v80);
      v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" true_damage:");
      if ( std::optional<bool>::has_value(&modified_property->true_damage) )
      {
        v34 = std::optional<bool>::value(&modified_property->true_damage);
        v35 = (char *)v34;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v34 & 7) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v34);
        }
        v36 = *v35;
      }
      else
      {
        v36 = 0;
      }
      v37 = common::milog::MiLogStream::operator<<(v33, v36);
      v38 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v37,
              (const char (*)[23])" defense_ignore_ratio:");
      if ( std::optional<float>::has_value(&modified_property->defense_ignore_ratio) )
      {
        v39 = std::optional<float>::value(&modified_property->defense_ignore_ratio);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v41 = *v40;
      }
      else
      {
        v41 = 0.0;
      }
      v81 = v41;
      v42 = common::milog::MiLogStream::operator<<<float,(float *)0>(v38, &v81);
      v43 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v42,
              (const char (*)[23])" defense_ignore_delta:");
      if ( std::optional<float>::has_value(&modified_property->defense_ignore_delta) )
      {
        v44 = std::optional<float>::value(&modified_property->defense_ignore_delta);
        v45 = v44;
        if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v44);
        }
        v46 = *v45;
      }
      else
      {
        v46 = 0.0;
      }
      __t = v46;
      common::milog::MiLogStream::operator<<<float,(float *)0>(v43, &__t);
      common::milog::MiLogStream::~MiLogStream(&v98);
      if ( std::optional<float>::has_value(&modified_property->damage_percentage) )
      {
        v47 = std::optional<float>::value(&modified_property->damage_percentage);
        std::optional<float>::optional<float &,true>(&v91, v47);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property >> 3) + 0x7FFF8000) )
          __asan_report_store8(&attack_result->modified_property);
        attack_result->modified_property.damage_percentage = v91;
      }
      if ( std::optional<float>::has_value(&modified_property->damage_percentage_ratio) )
      {
        v48 = std::optional<float>::value(&modified_property->damage_percentage_ratio);
        v49 = v48;
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        v68 = *v49;
        __t = AttackResult::getDamagePercentageRatio(attack_result) + v68;
        std::optional<float>::optional<float,true>(&v92, &__t);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.damage_percentage_ratio >> 3) + 0x7FFF8000) )
          __asan_report_store8(&attack_result->modified_property.damage_percentage_ratio);
        attack_result->modified_property.damage_percentage_ratio = v92;
      }
      if ( std::optional<float>::has_value(&modified_property->damage_extra) )
      {
        if ( !std::optional<float>::has_value(&attack_result->modified_property.damage_extra) )
        {
          v50 = std::move<std::map<unsigned int,float> &>(&attack_result->stat_log_damage_extra_map);
          std::map<unsigned int,float>::operator=(&attack_result->modified_property.stat_log_damage_extra_map, v50);
          std::map<unsigned int,float>::clear(&attack_result->stat_log_damage_extra_map);
        }
        __for_range_0 = &modified_property->stat_log_damage_extra_map;
        __for_begin_0._M_node = std::map<unsigned int,float>::begin(&modified_property->stat_log_damage_extra_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,float>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v51 = std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator*(&__for_begin_0);
          v52 = v51;
          if ( ((unsigned __int8)v51 & 7) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v51->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v51 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v51->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v51, 8LL);
          }
          M_node = *v52;
          filter_hash = std::get<0ul,unsigned int const,float>(&M_node);
          damage_extra = std::get<1ul,unsigned int const,float>(&M_node);
          v53 = std::map<unsigned int,float>::operator[](
                  &attack_result->modified_property.stat_log_damage_extra_map,
                  filter_hash);
          if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v53);
          }
          v54 = *v53;
          if ( *(_BYTE *)(((unsigned __int64)damage_extra >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)damage_extra & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_extra >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(damage_extra);
          }
          *v53 = *damage_extra + v54;
          std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator++(&__for_begin_0);
        }
        v55 = std::optional<float>::value(&modified_property->damage_extra);
        v56 = v55;
        if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v55);
        }
        v69 = *v56;
        __t = AttackResult::getDamageExtra(attack_result) + v69;
        std::optional<float>::optional<float,true>(&v93, &__t);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.damage_extra >> 3) + 0x7FFF8000) )
          __asan_report_store8(&attack_result->modified_property.damage_extra);
        attack_result->modified_property.damage_extra = v93;
      }
      if ( std::optional<float>::has_value(&modified_property->bonus_critical) )
      {
        v57 = std::optional<float>::value(&modified_property->bonus_critical);
        v58 = v57;
        if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v57);
        }
        v70 = *v58;
        __t = AttackResult::getBonusCritical(attack_result) + v70;
        std::optional<float>::optional<float,true>(&v94, &__t);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_critical >> 3) + 0x7FFF8000) )
          __asan_report_store8(&attack_result->modified_property.bonus_critical);
        attack_result->modified_property.bonus_critical = v94;
      }
      if ( std::optional<float>::has_value(&modified_property->bonus_critical_hurt) )
      {
        v59 = std::optional<float>::value(&modified_property->bonus_critical_hurt);
        v60 = v59;
        if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v59);
        }
        v71 = *v60;
        __t = AttackResult::getBonusCriticalHurt(attack_result) + v71;
        std::optional<float>::optional<float,true>((std::optional<float> *const)&__for_begin_0, &__t);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_critical_hurt >> 3) + 0x7FFF8000) )
          __asan_report_store8(&attack_result->modified_property.bonus_critical_hurt);
        attack_result->modified_property.bonus_critical_hurt = (std::optional<float>)__for_begin_0._M_node;
      }
      if ( !std::optional<bool>::has_value(&modified_property->true_damage) )
        goto LABEL_97;
      v61 = std::optional<bool>::value(&modified_property->true_damage);
      v62 = v61;
      if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v61 & 7) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v61);
      }
      if ( *v62 )
        v63 = 1;
      else
LABEL_97:
        v63 = 0;
      if ( v63 )
      {
        v74 = 1;
        std::optional<bool>::optional<bool,true>(&v75, &v74);
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.true_damage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.true_damage >> 3) + 0x7FFF8000) <= 1 )
        {
          __asan_report_store2(&attack_result->modified_property.true_damage);
        }
        attack_result->modified_property.true_damage = v75;
      }
      if ( std::optional<float>::has_value(&modified_property->defense_ignore_ratio) )
      {
        v64 = std::optional<float>::value(&modified_property->defense_ignore_ratio);
        v65 = v64;
        if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v64);
        }
        v72 = *v65;
        __t = AttackResult::getDefenseIgnoreRatio(attack_result) + v72;
        std::optional<float>::optional<float,true>((std::optional<float> *const)&__for_end_0, &__t);
        if ( (((unsigned __int8)attack_result - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_ratio >> 3)
                                                                    + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_ratio._M_payload._M_engaged
                                          + 3) >> 3)
                      + 0x7FFF8000) != 0
          && (((unsigned __int8)attack_result + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_ratio._M_payload._M_engaged
                                                                                        + 3) >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_store_n(&attack_result->modified_property.defense_ignore_ratio, 8LL);
        }
        attack_result->modified_property.defense_ignore_ratio = (std::optional<float>)__for_end_0._M_node;
      }
      if ( std::optional<float>::has_value(&modified_property->defense_ignore_delta) )
      {
        v66 = std::optional<float>::value(&modified_property->defense_ignore_delta);
        v67 = v66;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v66);
        }
        v73 = *v67;
        __t = AttackResult::getDefenseIgnoreDelta(attack_result) + v73;
        std::optional<float>::optional<float,true>((std::optional<float> *const)&M_node, &__t);
        if ( (((unsigned __int8)attack_result + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_delta >> 3)
                                                                    + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_delta >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_delta._M_payload._M_engaged
                                          + 3) >> 3)
                      + 0x7FFF8000) != 0
          && (((unsigned __int8)attack_result + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_delta._M_payload._M_engaged
                                                                                         + 3) >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_store_n(&attack_result->modified_property.defense_ignore_delta, 8LL);
        }
        attack_result->modified_property.defense_ignore_delta = (std::optional<float>)M_node;
      }
      std::pair<unsigned long const,ModifiedAttackProperty>::~pair(&__in);
      std::__detail::_Node_iterator<std::pair<unsigned long const,ModifiedAttackProperty>,false,false>::operator++(&__for_begin);
    }
    std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::erase[abi:cxx11](
      &this->modified_property_map_,
      *(std::map<unsigned int,std::unordered_map<long unsigned int,ModifiedAttackProperty>>::iterator *)(v2 + 64));
  }
  if ( v100 == (char *)v2 )
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

// Line 1464: range 0000000014F46458-0000000014F465E8
int32_t __cdecl Creature::notifyProp(Creature *const this, const proto::PropValue *prop_value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<proto::PropValue> __a; // [rsp+1Fh] [rbp-91h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 13 prop_vec:1465";
  *(_QWORD *)(v2 + 16) = Creature::notifyProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::allocator<proto::PropValue>::allocator(&__a);
  std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v2 + 32), 1uLL, prop_value, &__a);
  std::allocator<proto::PropValue>::~allocator(&__a);
  v5 = Creature::notifyPropList(this, (const std::vector<proto::PropValue> *)(v2 + 32));
  std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v2 + 32));
  result = v5;
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
  return result;
};

// Line 1471: range 0000000014F465EA-0000000014F4665B
int32_t __cdecl Creature::notifyIntProp(Creature *const this, data::PropType prop_type, int32_t value)
{
  int32_t v3; // ebx
  proto::PropValue prop_value; // [rsp+10h] [rbp-40h] BYREF

  buildIntProp(&prop_value, prop_type, value);
  v3 = Creature::notifyProp(this, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  return v3;
};

// Line 1477: range 0000000014F4665C-0000000014F46AC0
int32_t __cdecl Creature::notifyPropList(Creature *const this, const std::vector<proto::PropValue> *prop_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  signed int v6; // eax
  proto::PropValue *v8; // rax
  const google::protobuf::Map<unsigned int,proto::PropValue> *v9; // rax
  const google::protobuf::Map<unsigned int,proto::PropValue> *v10; // rax
  int32_t v11; // eax
  int32_t result; // eax
  bool is_on_scene; // [rsp+17h] [rbp-189h]
  google::protobuf::Map<unsigned int,proto::PropValue>::key_type key; // [rsp+18h] [rbp-188h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  std::vector<proto::PropValue>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::vector<proto::PropValue>::const_iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  google::protobuf::Map<unsigned int,proto::PropValue> *broadcast_prop_map; // [rsp+30h] [rbp-170h]
  google::protobuf::Map<unsigned int,proto::PropValue> *self_prop_map; // [rsp+38h] [rbp-168h]
  const std::vector<proto::PropValue> *__for_range; // [rsp+40h] [rbp-160h]
  const proto::PropValue *prop_value; // [rsp+48h] [rbp-158h]
  char v22[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 96 21 broadcast_notify:1480 160 96 16 self_notify:1482";
  *(_QWORD *)(v2 + 16) = Creature::notifyPropList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862724] = -218959118;
  v4[536862728] = -202116109;
  if ( std::vector<proto::PropValue>::empty(prop_vec) )
  {
    v5 = 0;
  }
  else
  {
    proto::EntityPropNotify::EntityPropNotify((proto::EntityPropNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[256]);
    }
    proto::EntityPropNotify::set_entity_id(
      (proto::EntityPropNotify *const)(v2 + 32),
      *(_DWORD *)&this->baseclass_0[256]);
    proto::EntityPropNotify::EntityPropNotify((proto::EntityPropNotify *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[256]);
    }
    proto::EntityPropNotify::set_entity_id(
      (proto::EntityPropNotify *const)(v2 + 160),
      *(_DWORD *)&this->baseclass_0[256]);
    is_on_scene = Entity::isOnScene((const Entity *const)this);
    broadcast_prop_map = proto::EntityPropNotify::mutable_prop_map((proto::EntityPropNotify *const)(v2 + 32));
    self_prop_map = proto::EntityPropNotify::mutable_prop_map((proto::EntityPropNotify *const)(v2 + 160));
    __for_range = prop_vec;
    __for_begin._M_current = std::vector<proto::PropValue>::begin(prop_vec)._M_current;
    __for_end._M_current = std::vector<proto::PropValue>::end(prop_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::PropValue const*,std::vector<proto::PropValue>>(&__for_begin, &__for_end) )
    {
      prop_value = __gnu_cxx::__normal_iterator<proto::PropValue const*,std::vector<proto::PropValue>>::operator*(&__for_begin);
      if ( is_on_scene && (v6 = proto::PropValue::type(prop_value), shouldBroadcast((data::PropType)v6)) )
      {
        key = proto::PropValue::type(prop_value);
        v8 = google::protobuf::Map<unsigned int,proto::PropValue>::operator[](broadcast_prop_map, &key);
      }
      else
      {
        key = proto::PropValue::type(prop_value);
        v8 = google::protobuf::Map<unsigned int,proto::PropValue>::operator[](self_prop_map, &key);
      }
      proto::PropValue::operator=(v8, prop_value);
      __gnu_cxx::__normal_iterator<proto::PropValue const*,std::vector<proto::PropValue>>::operator++(&__for_begin);
    }
    ret = 0;
    v9 = proto::EntityPropNotify::prop_map((const proto::EntityPropNotify *const)(v2 + 32));
    if ( google::protobuf::Map<unsigned int,proto::PropValue>::size(v9) )
      ret = Entity::notifyViewingPlayers<proto::EntityPropNotify>(
              (Entity *const)this,
              (proto::EntityPropNotify *)(v2 + 32),
              1);
    v10 = proto::EntityPropNotify::prop_map((const proto::EntityPropNotify *const)(v2 + 160));
    if ( google::protobuf::Map<unsigned int,proto::PropValue>::size(v10) )
    {
      v11 = Entity::notifySelf<proto::EntityPropNotify>((Entity *const)this, (proto::EntityPropNotify *)(v2 + 160));
      ret |= v11;
    }
    v5 = ret;
    proto::EntityPropNotify::~EntityPropNotify((proto::EntityPropNotify *const)(v2 + 160));
    proto::EntityPropNotify::~EntityPropNotify((proto::EntityPropNotify *const)(v2 + 32));
  }
  result = v5;
  if ( v22 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1507: range 0000000014F46AC2-0000000014F46C69
int32_t __cdecl Creature::notifyLocalGadgetOwnerLeaveScene(Creature *const this, ScenePtr *p_scene_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t EntityId; // eax
  Scene *v7; // rax
  int32_t result; // eax
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 notify:1516";
  *(_QWORD *)(v2 + 16) = Creature::notifyLocalGadgetOwnerLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( std::operator==<Scene>(0LL, p_scene_ptr) )
  {
    v5 = -1;
  }
  else if ( !Creature::getIsLocalGadgetOwner(this) )
  {
    v5 = -1;
  }
  else
  {
    proto::EvtLocalGadgetOwnerLeaveSceneNotify::EvtLocalGadgetOwnerLeaveSceneNotify((proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 32));
    EntityId = Entity::getEntityId((const Entity *const)this);
    proto::EvtLocalGadgetOwnerLeaveSceneNotify::set_entity_id(
      (proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 32),
      EntityId);
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    v5 = Scene::notifyAllPlayer<proto::EvtLocalGadgetOwnerLeaveSceneNotify>(
           v7,
           (proto::EvtLocalGadgetOwnerLeaveSceneNotify *)(v2 + 32),
           0);
    proto::EvtLocalGadgetOwnerLeaveSceneNotify::~EvtLocalGadgetOwnerLeaveSceneNotify((proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 32));
  }
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 1523: range 0000000014F46C6A-0000000014F46E1D
PlayerPtr __cdecl Creature::getOwnerPlayer(const Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(const Creature *const, unsigned __int64); // rcx
  PlayerPtr result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 owner_ptr:1524";
  *(_QWORD *)(v1 + 16) = Creature::getOwnerPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 32));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    v6 = *(void (__fastcall **)(const Creature *const, unsigned __int64))v5;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store16(this);
    v6(this, v4);
  }
  else
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1534: range 0000000014F47006-0000000014F47545
int32_t __cdecl Creature::refreshAuthority(Creature *const this, PlayerPtr *p_authority_player_ptr, bool delay_sync)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  Creature *v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v12; // rax
  const std::shared_ptr<Player> *v13; // rdx
  int32_t result; // eax
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+30h] [rbp-150h]
  PlayerPtr *player_ptr; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Player> v19; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-130h] BYREF
  char v21[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 sort_func:1564 64 16 20 sight_group_ptr:1535 96 24 15 player_vec:1551 160 24 25 candid"
                        "ate_player_vec:1555";
  *(_QWORD *)(v3 + 16) = Creature::refreshAuthority;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  Entity::getSightGroup((const Entity *const)(v3 + 64));
  if ( std::operator!=<EntitySightGroup>((const std::shared_ptr<EntitySightGroup> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/creature/creature.cpp",
      "refreshAuthority",
      1539);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v20,
      (const char (*)[33])"sight_group_ptr will do this job");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = 0;
  }
  else
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = *(_QWORD *)this->baseclass_0 + 216LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 216LL);
    if ( (*(unsigned __int8 (__fastcall **)(Creature *))v8)(v7) != 1 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "refreshAuthority",
        1547);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v20,
             (const char (*)[26])"creature has no authority");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
    else
    {
      EntityViewMgr::validateAndGetViewingPlayers(
        (std::vector<std::shared_ptr<Player>> *)(v3 + 96),
        (EntityViewMgr *const)&this->baseclass_0[648]);
      if ( std::operator==<Player>(p_authority_player_ptr, 0LL) )
      {
        std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 160));
        __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 96);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 96))._M_current;
        *(std::vector<std::shared_ptr<Player>>::iterator *)(v3 + 32) = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 96));
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v3 + 32)) )
        {
          player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          if ( Player::isConnected(v10) )
            std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>&>(
              (std::vector<std::shared_ptr<Player>> *const)(v3 + 160),
              player_ptr,
              player_ptr);
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        *(_QWORD *)(v3 + 32) = this;
        M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 160))._M_current;
        v12._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 160))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,Creature::refreshAuthority(std::shared_ptr<Player>,bool)::{lambda(std::shared_ptr<Player>,std::shared_ptr<Player>)#1}>(
          v12,
          (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current,
          *(Creature::refreshAuthority::<lambda(PlayerPtr, PlayerPtr)> *)(v3 + 32));
        if ( !std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v3 + 160)) )
        {
          v13 = std::vector<std::shared_ptr<Player>>::operator[](
                  (std::vector<std::shared_ptr<Player>> *const)(v3 + 160),
                  0LL);
          std::shared_ptr<Player>::operator=(p_authority_player_ptr, v13);
        }
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 160));
      }
      std::shared_ptr<Player>::shared_ptr(&v19, p_authority_player_ptr);
      Creature::onAuthorityChangedToPlayer(
        this,
        &v19,
        (const std::vector<std::shared_ptr<Player>> *)(v3 + 96),
        delay_sync);
      std::shared_ptr<Player>::~shared_ptr(&v19);
      v6 = 0;
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 96));
    }
  }
  std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v3 + 64));
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 1564: range 0000000014F46E1E-0000000014F47004
bool __cdecl Creature::refreshAuthority(std::shared_ptr<Player>,bool)::{lambda(std::shared_ptr<Player>,std::shared_ptr<Player>)#1}::operator()(
        const Creature::refreshAuthority::<lambda(PlayerPtr, PlayerPtr)> *const __closure,
        PlayerPtr *p_a_ptr,
        PlayerPtr *p_b_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const Vector3 *Position; // rbx
  Player *v7; // rax
  const Vector3 *v8; // rbx
  Player *v9; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Rtt; // ebx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  float Distance; // [rsp+4h] [rbp-4Ch]
  Vector3 pos1; // [rsp+28h] [rbp-28h] BYREF
  Vector3 v16; // [rsp+34h] [rbp-1Ch] BYREF

  if ( std::operator==<Player>(p_a_ptr, 0LL) )
    return 0;
  if ( std::operator==<Player>(p_b_ptr, 0LL) )
    return 1;
  v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a_ptr);
  if ( !Player::getIsValidForAuthority(v4) )
    return 0;
  v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b_ptr);
  if ( !Player::getIsValidForAuthority(v5) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( Creature::getIsAuthPreferClosestPlayer(__closure->__this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    Position = Entity::getPosition((const Entity *const)__closure->__this);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a_ptr);
    pos1 = Player::getPosition(v7);
    Distance = getDistance(&pos1, Position);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v8 = Entity::getPosition((const Entity *const)__closure->__this);
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b_ptr);
    v16 = Player::getPosition(v9);
    return getDistance(&v16, v8) > Distance;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a_ptr);
    Rtt = Player::getRtt(v10);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b_ptr);
    return Rtt < Player::getRtt(v12);
  }
};

// Line 1601: range 0000000014F47546-0000000014F47602
void __cdecl Creature::onAuthorityChangedToPlayer(
        Creature *const this,
        PlayerPtr *p_authority_player_ptr,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  Player *v4; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t PeerId; // eax
  unsigned __int64 v7; // rax
  uint32_t new_peer_id; // [rsp+2Ch] [rbp-4h]

  if ( std::operator!=<Player>(p_authority_player_ptr, 0LL) )
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_authority_player_ptr);
    SceneComp = Player::getSceneComp(v4);
    PeerId = PlayerSceneComp::getPeerId(SceneComp);
  }
  else
  {
    PeerId = 0;
  }
  new_peer_id = PeerId;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 344LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 344LL);
  (*(void (__fastcall **)(Creature *const, _QWORD, const std::vector<std::shared_ptr<Player>> *, bool))v7)(
    this,
    new_peer_id,
    notify_player_vec,
    delay_sync);
};

// Line 1607: range 0000000014F47604-0000000014F47C56
void __fastcall Creature::onAuthorityChangedToPeerID(
        Creature *const this,
        uint32_t new_peer_id,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  Creature *v9; // rdx
  void (__fastcall **v10)(std::string *, Creature *); // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  Scene *v18; // rax
  common::milog::MiLogStream *v19; // r14
  Creature *v20; // rdx
  void (__fastcall **v21)(std::string *, Creature *); // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-134h] BYREF
  std::vector<std::shared_ptr<Player>>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<std::shared_ptr<Player>>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  const std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+40h] [rbp-120h]
  const std::shared_ptr<Player> *player_ptr; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+90h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 16 old_peer_id:1613 48 4 16 new_peer_id:1606 64 16 14 scene_ptr:1628 96 24 12 uid_vec:1616";
  *(_QWORD *)(v4 + 16) = Creature::onAuthorityChangedToPeerID;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = new_peer_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->authority_peer_id_);
  }
  if ( this->authority_peer_id_ != *(_DWORD *)(v4 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->authority_peer_id_);
    }
    *(_DWORD *)(v4 + 32) = this->authority_peer_id_;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
    __for_range = notify_player_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin(notify_player_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(notify_player_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      __x = Player::getUid(v7);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 96), &__x);
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/creature/creature.cpp",
      "onAuthorityChangedToPeerID",
      1621);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v30,
           (const char (*)[29])"[AUTHORITY_CHANGE] creature:");
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = *(void (__fastcall ***)(std::string *, Creature *))this->baseclass_0;
    if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
      v10 = (void (__fastcall **)(std::string *, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
    (*v10)(&val, v9);
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v11,
            (const char (*)[20])" authority_peer_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])"->");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v15,
            (const char (*)[20])" notify_player_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v16, (const std::vector<unsigned int> *)(v4 + 96));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    Creature::setAuthorityPeerId(this, *(_DWORD *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v17 = *(_QWORD *)this->baseclass_0 + 352LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 352LL);
    (*(void (__fastcall **)(Creature *const, const std::vector<std::shared_ptr<Player>> *, bool))v17)(
      this,
      notify_player_vec,
      delay_sync);
    Entity::getScene((const Entity *const)(v4 + 64));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 64), 0LL) )
    {
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Scene::recordCreatureAuthorityPeerChange(v18, this, *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "onAuthorityChangedToPeerID",
        1635);
      v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"creature:");
      v20 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v21 = *(void (__fastcall ***)(std::string *, Creature *))this->baseclass_0;
      if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
        v21 = (void (__fastcall **)(std::string *, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
      (*v21)(&val, v20);
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &val);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])" scene_ptr is null");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
  }
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1640: range 0000000014F47C58-0000000014F4827F
void __cdecl Creature::notifyAuthorityChanged(
        Creature *const this,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  EntityAnimatorComp *AnimatorComp; // rax
  proto::SceneEntityAiInfo *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  proto::Vector *v10; // rax
  const Vector3 *SkillAnchorPosition; // r14
  proto::Vector *v12; // rax
  proto::AuthorityChange *v13; // rax
  GameserverService *v14; // rax
  PlayerSendPacketController *p_player_send_packet_controller; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Uid; // eax
  Player *v18; // rax
  std::vector<std::shared_ptr<Player>>::const_iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::vector<std::shared_ptr<Player>>::const_iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  proto::EntityAuthorityInfo *authority_info; // [rsp+38h] [rbp-178h]
  proto::AbilitySyncStateInfo *ability_info; // [rsp+40h] [rbp-170h]
  proto::EntityClientExtraInfo *proto_client_extra_info; // [rsp+48h] [rbp-168h]
  const std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+50h] [rbp-160h]
  const std::shared_ptr<Player> *player_ptr; // [rsp+58h] [rbp-158h]
  Vector3 BornPosition; // [rsp+64h] [rbp-14Ch] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-140h] BYREF
  proto::AuthorityChange p_authority_change; // [rsp+90h] [rbp-120h] BYREF
  char v30[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 40 11 change:1646 112 48 11 notify:1665";
  *(_QWORD *)(v3 + 16) = Creature::notifyAuthorityChanged;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( !std::vector<std::shared_ptr<Player>>::empty(notify_player_vec) )
  {
    proto::AuthorityChange::AuthorityChange((proto::AuthorityChange *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[256]);
    }
    proto::AuthorityChange::set_entity_id((proto::AuthorityChange *const)(v3 + 32), *(_DWORD *)&this->baseclass_0[256]);
    if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->authority_peer_id_);
    }
    proto::AuthorityChange::set_authority_peer_id((proto::AuthorityChange *const)(v3 + 32), this->authority_peer_id_);
    authority_info = proto::AuthorityChange::mutable_entity_authority_info((proto::AuthorityChange *const)(v3 + 32));
    ability_info = proto::EntityAuthorityInfo::mutable_ability_info(authority_info);
    if ( AbilityComp::toClient(&this->ability_comp_, ability_info) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "notifyAuthorityChanged",
        1653);
      v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v28, (const char (*)[15])"toClient fails");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    AnimatorComp = Entity::getAnimatorComp((Entity *const)this);
    EntityAnimatorComp::toClient(AnimatorComp, authority_info);
    v8 = proto::EntityAuthorityInfo::mutable_ai_info(authority_info);
    if ( Entity::toClient((const Entity *const)this, v8) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "notifyAuthorityChanged",
        1658);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v28, (const char (*)[15])"toClient fails");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    BornPosition = Entity::getBornPosition((Entity *const)this);
    Vector3::operator proto::Vector((proto::Vector *)&v28, &BornPosition);
    v10 = proto::EntityAuthorityInfo::mutable_born_pos(authority_info);
    proto::Vector::operator=(v10, (proto::Vector *)&v28);
    proto::Vector::~Vector((proto::Vector *const)&v28);
    proto_client_extra_info = proto::EntityAuthorityInfo::mutable_client_extra_info(authority_info);
    SkillAnchorPosition = Entity::getSkillAnchorPosition((const Entity *const)this);
    v12 = proto::EntityClientExtraInfo::mutable_skill_anchor_position(proto_client_extra_info);
    Vector3::toClient(SkillAnchorPosition, v12);
    proto::EntityAuthorityChangeNotify::EntityAuthorityChangeNotify((proto::EntityAuthorityChangeNotify *const)(v3 + 112));
    if ( !delay_sync )
    {
      v13 = proto::EntityAuthorityChangeNotify::add_authority_change_list((proto::EntityAuthorityChangeNotify *const)(v3 + 112));
      proto::AuthorityChange::Swap(v13, (proto::AuthorityChange *)(v3 + 32));
    }
    __for_range = notify_player_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin(notify_player_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(notify_player_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      if ( delay_sync )
      {
        v14 = ServiceBox::findService<GameserverService>();
        p_player_send_packet_controller = &GameserverService::getGameThreadLocal(v14)->player_send_packet_controller;
        proto::AuthorityChange::AuthorityChange(&p_authority_change, (const proto::AuthorityChange *)(v3 + 32));
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        Uid = Player::getUid(v16);
        PlayerSendPacketController::addAuthorityChange(p_player_send_packet_controller, Uid, &p_authority_change);
        proto::AuthorityChange::~AuthorityChange(&p_authority_change);
      }
      else
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        Player::sendProto(v18, (const google::protobuf::Message *)(v3 + 112));
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    proto::EntityAuthorityChangeNotify::~EntityAuthorityChangeNotify((proto::EntityAuthorityChangeNotify *const)(v3 + 112));
    proto::AuthorityChange::~AuthorityChange((proto::AuthorityChange *const)(v3 + 32));
  }
  if ( v30 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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
};

// Line 1685: range 0000000014F484F6-0000000014F491AD
__int64 __fastcall Creature::internalDropSubfield(
        Creature *const this,
        const std::string *subfield_name,
        uint32_t entity_type,
        uint32_t config_id,
        bool is_ban_guest)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  uint32_t subfield_drop_num; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Scene *v17; // r14
  Vector3 *Position; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v20; // rax
  std::shared_ptr<Player> *v21; // r14
  std::vector<std::shared_ptr<Player>>::iterator v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Player *v27; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  std::vector<data::DropSubfieldEntry>::const_iterator __for_begin; // [rsp+20h] [rbp-1E0h] BYREF
  std::vector<data::DropSubfieldEntry>::const_iterator __for_end; // [rsp+28h] [rbp-1D8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_begin_0; // [rsp+30h] [rbp-1D0h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end_0; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<std::shared_ptr<Player>> *drop_players_ptr; // [rsp+40h] [rbp-1C0h]
  const data::EntityDropSubfieldExcelConfig *subfield_config_ptr; // [rsp+48h] [rbp-1B8h]
  const std::vector<data::DropSubfieldEntry> *__for_range; // [rsp+50h] [rbp-1B0h]
  const data::DropSubfieldEntry *entry_config; // [rsp+58h] [rbp-1A8h]
  std::vector<std::shared_ptr<Player>> *__for_range_0; // [rsp+60h] [rbp-1A0h]
  std::shared_ptr<Player> *player_ptr; // [rsp+68h] [rbp-198h]
  common::milog::MiLogStream v46; // [rsp+70h] [rbp-190h] BYREF
  char v47[368]; // [rsp+90h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 16 entity_type:1684 48 4 14 config_id:1684 64 8 9 iter:1729 96 16 14 scene_ptr:1698 128 1"
                        "6 12 rm_func:1707 160 16 21 owner_player_ptr:1727 192 24 15 player_vec:1704 256 24 21 owner_player_vec:1728";
  *(_QWORD *)(v5 + 16) = Creature::internalDropSubfield;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -234881024;
  v7[536862727] = -218959118;
  v7[536862728] = -218103808;
  v7[536862729] = -202116109;
  *(_DWORD *)(v5 + 32) = entity_type;
  *(_DWORD *)(v5 + 48) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 160));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
  subfield_config_ptr = DropExcelConfigMgr::findEntityDropSubfieldConfig(
                          &v8->design_config.txt_config_mgr.drop_config_mgr,
                          *(_DWORD *)(v5 + 32),
                          *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 160));
  if ( subfield_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->subfield_drop_num_);
    }
    subfield_drop_num = this->subfield_drop_num_;
    if ( *(_BYTE *)(((unsigned __int64)&subfield_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&subfield_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&subfield_config_ptr->max_count);
    }
    if ( subfield_drop_num < subfield_config_ptr->max_count )
    {
      Entity::getScene((const Entity *const)(v5 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "internalDropSubfield",
          1701);
        v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v46,
                (const char (*)[25])"getScene failed, entity:");
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v16, this);
        common::milog::MiLogStream::~MiLogStream(&v46);
        v13 = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
        if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
        }
        Scene::getDropSurroundPlayers((std::vector<std::shared_ptr<Player>> *)(v5 + 192), v17, *Position);
        *(_DWORD *)(v5 + 128) = *(_DWORD *)(v5 + 32);
        *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 136) = subfield_config_ptr;
        __for_end._M_current = (const data::DropSubfieldEntry *)std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
        __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::__normal_iterator<std::shared_ptr<Player>*>(
          (__gnu_cxx::__normal_iterator<const std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_end_0,
          (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end);
        M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
        v20._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
        __for_begin._M_current = (const data::DropSubfieldEntry *)std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,Creature::internalDropSubfield(std::string const&,unsigned int,unsigned int,bool)::{lambda(std::shared_ptr<Player> const&)#1}>(
                                                                    v20,
                                                                    (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current,
                                                                    *(Creature::internalDropSubfield::<lambda(const PlayerPtr&)> *)(v5 + 128))._M_current;
        __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::__normal_iterator<std::shared_ptr<Player>*>(
          (__gnu_cxx::__normal_iterator<const std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin_0,
          (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin);
        std::vector<std::shared_ptr<Player>>::erase(
          (std::vector<std::shared_ptr<Player>> *const)(v5 + 192),
          (std::vector<std::shared_ptr<Player>>::const_iterator)__for_begin_0._M_current,
          (std::vector<std::shared_ptr<Player>>::const_iterator)__for_end_0._M_current);
        if ( std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v5 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/creature/creature.cpp",
            "internalDropSubfield",
            1722);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v46,
            (const char (*)[20])"player_vec is empty");
          common::milog::MiLogStream::~MiLogStream(&v46);
          v13 = 0;
        }
        else
        {
          std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          Scene::getOwnPlayer((const Scene *const)(v5 + 160));
          std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v5 + 256));
          v21 = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
          v22._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
          *(__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v5 + 64) = std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,std::shared_ptr<Player>>(v22, (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)v21, (const std::shared_ptr<Player> *)(v5 + 160));
          __for_end_0._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v5 + 192))._M_current;
          if ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                 (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v5 + 64),
                 &__for_end_0)
            && std::operator!=<Player>((const std::shared_ptr<Player> *)(v5 + 160), 0LL) )
          {
            std::vector<std::shared_ptr<Player>>::push_back(
              (std::vector<std::shared_ptr<Player>> *const)(v5 + 256),
              (const std::vector<std::shared_ptr<Player>>::value_type *)(v5 + 160));
          }
          drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v5 + 192);
          if ( is_ban_guest )
          {
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v5 + 256);
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/creature/creature.cpp",
              "internalDropSubfield",
              1739);
            v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v46, (const char (*)[10])"creature:");
            v25 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, this);
            v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v25,
                    (const char (*)[44])" limit onwer subfiled drop, subfield_name: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, subfield_name);
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
          if ( std::vector<std::shared_ptr<Player>>::empty(drop_players_ptr) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/creature/creature.cpp",
              "internalDropSubfield",
              1743);
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v46,
              (const char (*)[26])"drop_players_ptr is empty");
            common::milog::MiLogStream::~MiLogStream(&v46);
            v13 = 0;
          }
          else
          {
            __for_range = &subfield_config_ptr->subfield_vec;
            __for_begin._M_current = std::vector<data::DropSubfieldEntry>::begin(&subfield_config_ptr->subfield_vec)._M_current;
            __for_end._M_current = std::vector<data::DropSubfieldEntry>::end(__for_range)._M_current;
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>(
                      &__for_begin,
                      &__for_end) )
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/creature/creature.cpp",
                  "internalDropSubfield",
                  1762);
                v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        &v46,
                        (const char (*)[25])off_256311E0);
                v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, subfield_name);
                v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v30,
                        (const char (*)[12])" creature: ");
                common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v31, this);
                common::milog::MiLogStream::~MiLogStream(&v46);
                v13 = -1;
                goto LABEL_43;
              }
              entry_config = __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator*(&__for_begin);
              if ( std::operator==<char>(&entry_config->name, subfield_name) )
                break;
              __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&entry_config->drop_subfield_id);
            }
            Creature::subfieldDropItem(this, entry_config->drop_subfield_id, drop_players_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&entry_config->drop_subfield_id);
            }
            Creature::activityDropOnSubfieldDrop(this, entry_config->drop_subfield_id, drop_players_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->subfield_drop_num_);
            }
            ++this->subfield_drop_num_;
            __for_range_0 = drop_players_ptr;
            __for_begin_0._M_current = std::vector<std::shared_ptr<Player>>::begin(drop_players_ptr)._M_current;
            __for_end_0._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                      &__for_begin_0,
                      &__for_end_0) )
            {
              player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin_0);
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              SceneComp = Player::getSceneComp(v27);
              PlayerSceneComp::addSubfieldDropNum(SceneComp, *(_DWORD *)(v5 + 32), *(_DWORD *)(v5 + 48));
              __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin_0);
            }
            v13 = 0;
          }
LABEL_43:
          std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v5 + 256));
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 160));
        }
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v5 + 192));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "internalDropSubfield",
        1694);
      v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v46,
              (const char (*)[39])"getSubfiledDropNum() reach max_count, ");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v15, this);
      common::milog::MiLogStream::~MiLogStream(&v46);
      v13 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "internalDropSubfield",
      1689);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v46,
           (const char (*)[30])"findEntityDropSubfieldConfig ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])":");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v46);
    v13 = -1;
  }
  result = v13;
  if ( v47 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1707: range 0000000014F48280-0000000014F484F4
bool __cdecl Creature::internalDropSubfield(std::string const&,unsigned int,unsigned int,bool)::{lambda(std::shared_ptr<Player> const&)#1}::operator()(
        const Creature::internalDropSubfield::<lambda(const PlayerPtr&)> *const __closure,
        const PlayerPtr *player_ptr)
{
  Player *v3; // rax
  PlayerSceneComp *SceneComp; // rdi
  uint32_t config_id; // edx
  uint32_t SubfieldDropNum; // esi
  const data::EntityDropSubfieldExcelConfig *subfield_config_ptr; // rdx
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  bool is_rm; // [rsp+1Bh] [rbp-35h]
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(0LL, player_ptr) )
    return 1;
  v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
  SceneComp = Player::getSceneComp(v3);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3)
                                                            + 0x7FFF8000) )
  {
    SceneComp = (PlayerSceneComp *)&__closure->__config_id;
    __asan_report_load4(&__closure->__config_id);
  }
  config_id = __closure->__config_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    SceneComp = (PlayerSceneComp *)__closure;
    __asan_report_load4(__closure);
  }
  SubfieldDropNum = PlayerSceneComp::refreshAndGetSubfieldDropNum(SceneComp, __closure->__entity_type, config_id);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__subfield_config_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__subfield_config_ptr);
  subfield_config_ptr = __closure->__subfield_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&subfield_config_ptr->daily_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)subfield_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&subfield_config_ptr->daily_max_count >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&subfield_config_ptr->daily_max_count);
  }
  is_rm = SubfieldDropNum >= subfield_config_ptr->daily_max_count;
  if ( SubfieldDropNum >= subfield_config_ptr->daily_max_count )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "operator()",
      1714);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v20, (const char (*)[6])"uid: ");
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    val = Player::getUid(v9);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__closure->__entity_type);
    v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])":");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__config_id);
    v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v14,
            (const char (*)[25])" reach daily_max_count: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__subfield_config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__subfield_config_ptr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v15,
      &__closure->__subfield_config_ptr->daily_max_count);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  return is_rm;
};

// Line 1767: range 0000000014F491AE-0000000014F4973D
void __fastcall Creature::subfieldDropItem(
        Creature *const this,
        uint32_t drop_field_id,
        const std::vector<std::shared_ptr<Player>> *player_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::tuple_element<0,std::tuple<int,unsigned int,data::ItemLimitType> >::type v13; // ecx
  common::milog::MiLogStream *v14; // rax
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  std::tuple_element<0,std::tuple<int,unsigned int,data::ItemLimitType> >::type *ret; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::tuple<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+30h] [rbp-120h]
  std::tuple_element<0,std::tuple<data::ItemLimitType> >::type *item_limit_type; // [rsp+38h] [rbp-118h]
  std::tuple<int,unsigned int,data::ItemLimitType> __t; // [rsp+44h] [rbp-10Ch] BYREF
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 18 drop_field_id:1766 64 16 14 scene_ptr:1768 96 24 18 action_reason:1780";
  *(_QWORD *)(v3 + 16) = Creature::subfieldDropItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = drop_field_id;
  Entity::getScene((const Entity *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "subfieldDropItem",
      1771);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v22,
           (const char (*)[25])"getScene failed, entity:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)
       + 20984;
    Creature::getLevel(this);
    DropExcelConfigMgr::findSubfieldDropIdAndItemLimit((const DropExcelConfigMgr *const)&__t, v7, *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    ret = std::get<0ul,int,unsigned int,data::ItemLimitType>(&__t);
    drop_id = std::get<1ul,int,unsigned int,data::ItemLimitType>(&__t);
    item_limit_type = std::get<2ul,int,unsigned int,data::ItemLimitType>(&__t);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "subfieldDropItem",
        1777);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v22, (const char (*)[12])"findDropId ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])":");
      val = Creature::getLevel(this);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, ret);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)item_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_limit_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(item_limit_type);
      }
      ActionReason::ActionReason((ActionReason *const)(v3 + 96), ACTION_REASON_SUBFIELD_DROP, *item_limit_type);
      if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
      {
        this = (Creature *const)drop_id;
        __asan_report_load4(drop_id);
      }
      v13 = Entity::dropItemsForPlayers((Entity *const)this, *drop_id, 1u, (const ActionReason *)(v3 + 96), player_vec);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(ret);
      }
      *ret = v13;
      if ( *ret )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "subfieldDropItem",
          1784);
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v22,
                (const char (*)[37])"dropItemsForPlayers fails, drop_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, drop_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  if ( v23 == (char *)v3 )
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

// Line 1790: range 0000000014F4973E-0000000014F49E7A
void __fastcall Creature::activityDropOnSubfieldDrop(
        Creature *const this,
        uint32_t drop_field_id,
        const std::vector<std::shared_ptr<Player>> *player_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerActivityComp *ActivityComp; // rdi
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType>*,std::vector<std::pair<unsigned int,data::ItemLimitType>> >::reference v10; // rax
  std::pair<unsigned int,data::ItemLimitType> *v11; // rdx
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *v12; // rax
  Entity *v13; // rdi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::allocator<std::pair<unsigned int,unsigned int> > __a; // [rsp+2Bh] [rbp-1A5h] BYREF
  data::NewActivityDropType __x; // [rsp+2Ch] [rbp-1A4h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_end; // [rsp+38h] [rbp-198h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range; // [rsp+40h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+48h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *activity_drop_item_limit_type; // [rsp+50h] [rbp-180h]
  std::pair<unsigned int,data::ItemLimitType> __in; // [rsp+58h] [rbp-178h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-170h] BYREF
  char v28[336]; // [rsp+80h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 18 drop_field_id:1789 64 16 19 own_player_ptr:1791 96 24 25 activity_subject_vec:1799 160"
                        " 24 21 drop_id_type_vec:1800 224 24 18 action_reason:1809";
  *(_QWORD *)(v3 + 16) = Creature::activityDropOnSubfieldDrop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = drop_field_id;
  Entity::findSceneOwnPlayer((const Entity *const)(v3 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "activityDropOnSubfieldDrop",
      1794);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v27,
           (const char (*)[29])"getOwnPlayer fail. creature:");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    __x = NEW_ACTIVITY_DROP_TYPE_SUB_FIELD_DROP;
    std::pair<unsigned int,unsigned int>::pair<data::NewActivityDropType,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)&__in,
      &__x,
      (unsigned int *)(v3 + 48));
    std::allocator<std::pair<unsigned int,unsigned int>>::allocator(&__a);
    std::vector<std::pair<unsigned int,unsigned int>>::vector(
      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96),
      (std::initializer_list<std::pair<unsigned int,unsigned int> >)__PAIR128__(1LL, &__in),
      &__a);
    std::allocator<std::pair<unsigned int,unsigned int>>::~allocator(&__a);
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 160));
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    ActivityComp = Player::getActivityComp(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      ActivityComp = (PlayerActivityComp *)&this->level_;
      __asan_report_load4(&this->level_);
    }
    if ( PlayerActivityComp::findActivityDrops(
           ActivityComp,
           (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v3 + 160),
           (std::vector<std::pair<unsigned int,unsigned int>> *)(v3 + 96),
           this->level_) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "activityDropOnSubfieldDrop",
        1803);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v27,
             (const char (*)[35])"findActivityDrops fails, creature:");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      __for_range = (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v3 + 160);
      __for_begin._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 160))._M_current;
      __for_end._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                &__for_begin,
                &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin);
        v11 = v10;
        if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v10, 8LL);
        }
        __in = *v11;
        drop_id = std::get<0ul,unsigned int,data::ItemLimitType>(&__in);
        v12 = std::get<1ul,unsigned int,data::ItemLimitType>(&__in);
        activity_drop_item_limit_type = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 224),
          ACTION_REASON_ACTIVITY_SUBFIELD_DROP,
          *activity_drop_item_limit_type);
        v13 = (Entity *)this;
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          v13 = (Entity *)drop_id;
          __asan_report_load4(drop_id);
        }
        if ( Entity::dropItemsForPlayers(v13, *drop_id, 1u, (const ActionReason *)(v3 + 224), player_vec) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "activityDropOnSubfieldDrop",
            1812);
          v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v27,
                  (const char (*)[36])"dropItemsForPlayers fails, drop_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, drop_id);
          v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" monster:");
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v16, this);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin);
      }
    }
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::~vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v3 + 160));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
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
};

// Line 1819: range 0000000014F49E7C-0000000014F4A12B
proto::ChangHpReason __cdecl Creature::getAttackerChangeHpReason(Creature *const this)
{
  proto::ChangHpReason v1; // r14d
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Creature *v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // eax
  Creature *v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // eax
  proto::ChangHpReason result; // eax
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 owner_ptr:1832";
  *(_QWORD *)(v2 + 16) = Creature::getAttackerChangeHpReason;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
  v7 = (*(__int64 (__fastcall **)(Creature *))v6)(v5);
  if ( v7 != 4 )
  {
    if ( v7 <= 4 )
    {
      if ( v7 == 1 )
      {
        v1 = CHANGE_HP_SUB_AVATAR;
        goto LABEL_34;
      }
      if ( v7 == 2 )
      {
        v1 = CHANGE_HP_SUB_MONSTER;
        goto LABEL_34;
      }
    }
LABEL_33:
    v1 = CHANGE_HP_SUB_GEAR;
    goto LABEL_34;
  }
  v8 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v9 = *(_QWORD *)this->baseclass_0 + 32LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 32LL);
  if ( (*(unsigned int (__fastcall **)(Creature *))v9)(v8) == 39 )
  {
    v1 = CHANGE_HP_SUB_ENVIR;
    goto LABEL_34;
  }
  Creature::getOwner((const Creature *const)(v2 + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
  {
    v10 = 0;
  }
  else
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = *(_QWORD *)v11 + 24LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)v11 + 24LL);
    v13 = (*(__int64 (__fastcall **)(unsigned __int64))v12)(v11);
    if ( v13 == 1 )
    {
      v1 = CHANGE_HP_SUB_AVATAR;
      v10 = 1;
    }
    else if ( v13 == 2 )
    {
      v1 = CHANGE_HP_SUB_MONSTER;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( !v10 )
    goto LABEL_33;
LABEL_34:
  result = v1;
  if ( v15 == (char *)v2 )
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

// Line 1856: range 0000000014F4A12C-0000000014F4A32F
CreaturePtr __cdecl Creature::findTopOwner(const Creature *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int v4; // r14d
  CreaturePtr result; // rax
  uint32_t idx; // [rsp+1Ch] [rbp-94h]
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 owner_ptr:1858 64 16 19 next_owner_ptr:1865";
  *(_QWORD *)(v1 + 16) = Creature::findTopOwner;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Creature::getOwner((const Creature *const)(v1 + 32));
  for ( idx = 0; idx <= 9 && !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)); ++idx )
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Creature::getOwner((const Creature *const)(v1 + 64));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 64)) )
    {
      std::shared_ptr<Creature>::shared_ptr(
        (std::shared_ptr<Creature> *const)this,
        (std::shared_ptr<Creature> *)(v1 + 32));
      v4 = 0;
    }
    else
    {
      std::shared_ptr<Creature>::operator=(
        (std::shared_ptr<Creature> *const)(v1 + 32),
        (const std::shared_ptr<Creature> *)(v1 + 64));
      v4 = 1;
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 64));
    if ( v4 != 1 )
      goto LABEL_13;
  }
  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)this, 0LL);
LABEL_13:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1877: range 0000000014F4A330-0000000014F4A487
CreaturePtr __cdecl Creature::findTopOwnerOrSelf(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  CreaturePtr result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 owner_ptr:1878";
  *(_QWORD *)(v1 + 16) = Creature::findTopOwnerOrSelf;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Creature::findTopOwner((const Creature *const)(v1 + 32));
  if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
  {
    std::shared_ptr<Creature>::shared_ptr(
      (std::shared_ptr<Creature> *const)this,
      (std::shared_ptr<Creature> *)(v1 + 32));
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    toThisPtr<Creature>(this);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1888: range 0000000014F4A488-0000000014F4A6C8
PlayerPtr __cdecl Creature::findOriginalPlayer(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  char v6; // al
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(Creature *const, unsigned __int64); // rcx
  PlayerPtr result; // rax
  std::shared_ptr<Creature> v11; // [rsp+10h] [rbp-70h] BYREF
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 avatar_ptr:1889";
  *(_QWORD *)(v1 + 16) = Creature::findOriginalPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Creature::findTopOwnerOrSelf((Creature *const)&v11);
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v1 + 32));
  std::shared_ptr<Creature>::~shared_ptr(&v11);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
    goto LABEL_10;
  v4 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 400LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 400LL);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v5)(v4) == 2 )
LABEL_10:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 152LL);
    v9 = *(void (__fastcall **)(Creature *const, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16(this);
    v9(this, v7);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1899: range 0000000014F4A6CA-0000000014F4A894
PlayerPtr __cdecl Creature::findOriginalPlayerIncludeTrialAvatar(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(Creature *const, unsigned __int64); // rcx
  PlayerPtr result; // rax
  std::shared_ptr<Creature> v8; // [rsp+10h] [rbp-70h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 avatar_ptr:1900";
  *(_QWORD *)(v1 + 16) = Creature::findOriginalPlayerIncludeTrialAvatar;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Creature::findTopOwnerOrSelf((Creature *const)&v8);
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v1 + 32));
  std::shared_ptr<Creature>::~shared_ptr(&v8);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    v6 = *(void (__fastcall **)(Creature *const, unsigned __int64))v5;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store16(this);
    v6(this, v4);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1911: range 0000000014F4A896-0000000014F4AB2C
std::string *__cdecl Creature::getCombatTransaction[abi:cxx11](std::string *retstr, Creature *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(std::string *, std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r8
  std::allocator<char> __a; // [rsp+1Fh] [rbp-81h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 23 owner_creature_ptr:1912 64 16 15 avatar_ptr:1913";
  *(_QWORD *)(v2 + 16) = Creature::getCombatTransaction[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Creature::findTopOwnerOrSelf((Creature *const)(v2 + 32));
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 64));
  if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v7 = *(_QWORD *)v6->baseclass_0 + 368LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v6->baseclass_0 + 368LL);
    v8 = *(void (__fastcall **)(std::string *, std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    v8(retstr, v6);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_255BBB40, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
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
  return retstr;
};

// Line 1922: range 0000000014F4AB2E-0000000014F4B18F
int32_t __cdecl Creature::getAttackEntityLog(Entity *entity, proto_log::AttackEntityLog *attack_entity_log)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  google::protobuf::uint32 v7; // edx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarId; // edx
  int v13; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t MonsterId; // edx
  int v16; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t GadgetId; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t ConfigLevel; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t ReviseLevel; // edx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Level; // edx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t GroupId; // edx
  uint32_t ConfigId; // edx
  int32_t result; // eax
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 17 creature_ptr:1962 64 16 14 group_ptr:1969";
  *(_QWORD *)(v3 + 16) = Creature::getAttackEntityLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v6 = (unsigned __int64)(entity->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(entity->_vptr_DescribalBase + 4);
  v7 = (*(__int64 (__fastcall **)(Entity *))v6)(entity);
  proto_log::AttackEntityLog::set_entity_type(attack_entity_log, v7);
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v8 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(entity->_vptr_DescribalBase + 3);
  v9 = (*(__int64 (__fastcall **)(Entity *))v8)(entity);
  if ( v9 == 4 )
  {
    toPtr<Gadget,Entity>((Entity *)(v3 + 64));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "getAttackEntityLog",
        1953);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v29, (const char (*)[15])"gadget is null");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v2 = -1;
      v16 = 0;
    }
    else
    {
      v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GadgetId = Gadget::getGadgetId(v17);
      proto_log::AttackEntityLog::set_id(attack_entity_log, GadgetId);
      v16 = 1;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 64));
    if ( !v16 )
      goto LABEL_36;
  }
  else if ( v9 <= 4 )
  {
    if ( v9 == 1 )
    {
      toPtr<Avatar,Entity>((Entity *)(v3 + 64));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "getAttackEntityLog",
          1931);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v29, (const char (*)[15])"avatar is null");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        AvatarId = Avatar::getAvatarId(v11);
        proto_log::AttackEntityLog::set_id(attack_entity_log, AvatarId);
        v10 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
      if ( !v10 )
        goto LABEL_36;
    }
    else if ( v9 == 2 )
    {
      toPtr<Monster,Entity>((Entity *)(v3 + 64));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "getAttackEntityLog",
          1942);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"monster is null");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v2 = -1;
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        MonsterId = Monster::getMonsterId(v14);
        proto_log::AttackEntityLog::set_id(attack_entity_log, MonsterId);
        v13 = 1;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 64));
      if ( !v13 )
        goto LABEL_36;
    }
  }
  toPtr<Creature,Entity>((Entity *)(v3 + 32));
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v3 + 32), 0LL) )
  {
    v19 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ConfigLevel = Creature::getConfigLevel(v19);
    proto_log::AttackEntityLog::add_level(attack_entity_log, ConfigLevel);
    v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ReviseLevel = Creature::getReviseLevel(v21);
    proto_log::AttackEntityLog::add_level(attack_entity_log, ReviseLevel);
    v23 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Level = Creature::getLevel(v23);
    proto_log::AttackEntityLog::add_level(attack_entity_log, Level);
  }
  Entity::getGroup((const Entity *const)(v3 + 64));
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 64)) )
  {
    v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GroupId = Group::getGroupId(v25);
    proto_log::AttackEntityLog::set_group_id(attack_entity_log, GroupId);
  }
  ConfigId = Entity::getConfigId(entity);
  proto_log::AttackEntityLog::set_config_id(attack_entity_log, ConfigId);
  v2 = 0;
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32));
LABEL_36:
  result = v2;
  if ( v30 == (char *)v3 )
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
  return result;
};

// Line 1980: range 0000000014F4B190-0000000014F4B42F
int32_t __cdecl Creature::addSubCreature(Creature *const this, Creature *sub_creature)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  std::pair<std::_Rb_tree_const_iterator<std::weak_ptr<Creature> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  std::shared_ptr<Creature> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 sub_creature_wtr:1986";
  *(_QWORD *)(v2 + 16) = Creature::addSubCreature;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( this == sub_creature )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "addSubCreature",
      1983);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v12,
           (const char (*)[21])"sub_creature is this");
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, sub_creature);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    toThisPtr<Creature>((Creature *)&__r);
    std::weak_ptr<Creature>::weak_ptr<Creature,void>((std::weak_ptr<Creature> *const)(v2 + 32), &__r);
    std::shared_ptr<Creature>::~shared_ptr(&__r);
    v7 = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::emplace<std::weak_ptr<Creature>&>(
           &this->sub_creature_set_,
           (std::weak_ptr<Creature> *)(v2 + 32),
           (std::weak_ptr<Creature> *)&this->sub_creature_set_);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "addSubCreature",
        1989);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v12,
             (const char (*)[24])"duplicate sub_creature:");
      v9 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, sub_creature);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
    std::weak_ptr<Creature>::~weak_ptr((std::weak_ptr<Creature> *const)(v2 + 32));
  }
  result = v6;
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

// Line 1997: range 0000000014F4B430-0000000014F4B55E
void __cdecl Creature::onSubCreatureDie(Creature *const this, Creature *sub_creature)
{
  std::weak_ptr<Creature> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<Creature> __r; // [rsp+10h] [rbp-70h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (std::weak_ptr<Creature> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::weak_ptr<Creature> *)v3;
  }
  v2->_M_ptr = (std::__weak_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 21 sub_creature_wtr:1998";
  v2[1]._M_ptr = (std::__weak_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)Creature::onSubCreatureDie;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  toThisPtr<Creature>((Creature *)&__r);
  std::weak_ptr<Creature>::weak_ptr<Creature,void>(v2 + 2, &__r);
  std::shared_ptr<Creature>::~shared_ptr(&__r);
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::erase(
    &this->sub_creature_set_,
    v2 + 2);
  std::weak_ptr<Creature>::~weak_ptr(v2 + 2);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__weak_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2004: range 0000000014F4B560-0000000014F4B75C
bool __cdecl Creature::checkEntityAndOwnerType(Creature *const this, proto::ProtEntityType proto_entity_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Creature *v5; // rdx
  unsigned __int64 v6; // rax
  bool v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  bool result; // al
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 owner_ptr:2009";
  *(_QWORD *)(v2 + 16) = Creature::checkEntityAndOwnerType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 24LL);
  if ( proto_entity_type == (*(unsigned int (__fastcall **)(Creature *))v6)(v5) )
  {
    v7 = 1;
  }
  else
  {
    Creature::getOwner((const Creature *const)(v2 + 32));
    if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
      goto LABEL_17;
    v8 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 24LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 24LL);
    if ( proto_entity_type == (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) )
      v10 = 1;
    else
LABEL_17:
      v10 = 0;
    v7 = v10 != 0;
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v12 == (char *)v2 )
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

// Line 2019: range 0000000014F4B75E-0000000014F4B9AB
int32_t __cdecl Creature::calcOrGetCombatConfigHash(Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  std::__shared_ptr_access<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t HashValue; // ecx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 25 character_config_ptr:2022";
  *(_QWORD *)(v1 + 16) = Creature::calcOrGetCombatConfigHash;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combat_config_hash_);
  }
  if ( !this->combat_config_hash_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v4 = *(_QWORD *)this->baseclass_0 + 264LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 264LL);
    (*(void (__fastcall **)(unsigned __int64, Creature *const))v4)(v1 + 32, this);
    if ( std::operator!=<data::ConfigCharacter>(0LL, (const std::shared_ptr<data::ConfigCharacter> *)(v1 + 32)) )
    {
      v5 = std::__shared_ptr_access<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      HashValue = data::ConfigCombat::getHashValue(&v5->combat);
      if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&this->combat_config_hash_);
      }
      this->combat_config_hash_ = HashValue;
    }
    std::shared_ptr<data::ConfigCharacter>::~shared_ptr((std::shared_ptr<data::ConfigCharacter> *const)(v1 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combat_config_hash_);
  }
  result = this->combat_config_hash_;
  if ( v8 == (char *)v1 )
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

// Line 2033: range 0000000014F4B9AC-0000000014F4C299
int32_t __cdecl Creature::calcLevelPropByLevel(Creature *const this, uint32_t level, FightPropMap *prop_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  int32_t result; // eax
  unsigned __int64 v8; // rax
  data::GrowCurveType *p_grow_curve; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::pointer v13; // rdx
  float *p_second; // rax
  std::map<data::FightPropType,float>::mapped_type *v15; // rax
  float *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(Creature *const, _QWORD, _QWORD); // r8
  common::milog::MiLogStream *v19; // rax
  data::ArithType arith; // eax
  std::map<data::FightPropType,float>::mapped_type *v21; // rax
  float v22; // xmm1_4
  std::map<data::FightPropType,float>::mapped_type *v23; // rax
  float v24; // xmm1_4
  common::milog::MiLogStream *v25; // rax
  float second; // [rsp+4h] [rbp-ECh]
  std::vector<data::FightPropGrowConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<data::FightPropGrowConfig>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self __y; // [rsp+38h] [rbp-B8h] BYREF
  const data::CreatureExcelConfig *creature_config_ptr; // [rsp+40h] [rbp-B0h]
  const FightPropMap *base_prop_map_ptr; // [rsp+48h] [rbp-A8h]
  const FightPropMap *base_prop_map; // [rsp+50h] [rbp-A0h]
  const std::vector<data::FightPropGrowConfig> *__for_range; // [rsp+58h] [rbp-98h]
  const data::FightPropGrowConfig *fight_prop; // [rsp+60h] [rbp-90h]
  const data::GrowCurveInfo *curve_info_ptr; // [rsp+68h] [rbp-88h]
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-80h] BYREF
  char v38[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:2059";
  *(_QWORD *)(v3 + 16) = Creature::calcLevelPropByLevel;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  creature_config_ptr = (const data::CreatureExcelConfig *)(*(__int64 (__fastcall **)(Creature *const))v6)(this);
  if ( !creature_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "calcLevelPropByLevel",
      2037);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v37, (const char (*)[16])"getConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v37);
    result = -1;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v8 = *(_QWORD *)this->baseclass_0 + 384LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 384LL);
  base_prop_map_ptr = (const FightPropMap *)(*(__int64 (__fastcall **)(Creature *const))v8)(this);
  if ( !base_prop_map_ptr )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "calcLevelPropByLevel",
      2044);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v37, (const char (*)[23])"getBaseLevelProp fails");
    common::milog::MiLogStream::~MiLogStream(&v37);
    result = -1;
    goto LABEL_55;
  }
  base_prop_map = base_prop_map_ptr;
  __for_range = &creature_config_ptr->prop_grow_curves;
  __for_begin._M_current = std::vector<data::FightPropGrowConfig>::begin(&creature_config_ptr->prop_grow_curves)._M_current;
  __for_end._M_current = std::vector<data::FightPropGrowConfig>::end(&creature_config_ptr->prop_grow_curves)._M_current;
  while ( __gnu_cxx::operator!=<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>(
            &__for_begin,
            &__for_end) )
  {
    fight_prop = __gnu_cxx::__normal_iterator<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>::operator*(&__for_begin);
    p_grow_curve = &fight_prop->grow_curve;
    if ( *(_BYTE *)(((unsigned __int64)p_grow_curve >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_grow_curve & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_grow_curve >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_grow_curve);
    }
    if ( fight_prop->grow_curve )
    {
      if ( !common::tools::MiscUtils::isContains<std::map<data::FightPropType,float>,data::FightPropType>(
              prop_map,
              &fight_prop->type) )
      {
        *(std::map<data::FightPropType,float>::const_iterator *)(v3 + 32) = std::map<data::FightPropType,float>::find(
                                                                              base_prop_map,
                                                                              &fight_prop->type);
        __y._M_node = std::map<data::FightPropType,float>::end(base_prop_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)(v3 + 32),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "calcLevelPropByLevel",
            2062);
          v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v37,
                  (const char (*)[64])"prop_grow_curves fight_type not found in base_prop. fight_type:");
          v11 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                  v10,
                  &fight_prop->type);
          v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" creature:");
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v12, this);
          common::milog::MiLogStream::~MiLogStream(&v37);
          goto LABEL_53;
        }
        v13 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)(v3 + 32));
        p_second = &v13->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v13->second;
        v15 = std::map<data::FightPropType,float>::operator[](prop_map, &fight_prop->type);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v15);
        }
        *v16 = second;
      }
      if ( level )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v17 = *(_QWORD *)this->baseclass_0 + 320LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 320LL);
        v18 = *(__int64 (__fastcall **)(Creature *const, _QWORD, _QWORD))v17;
        if ( *(_BYTE *)(((unsigned __int64)&fight_prop->grow_curve >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fight_prop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fight_prop->grow_curve >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&fight_prop->grow_curve);
        }
        curve_info_ptr = (const data::GrowCurveInfo *)v18(this, (unsigned int)fight_prop->grow_curve, level);
        if ( curve_info_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->arith >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)curve_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curve_info_ptr->arith >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&curve_info_ptr->arith);
          }
          arith = curve_info_ptr->arith;
          if ( arith == ARITH_ADD )
          {
            v21 = std::map<data::FightPropType,float>::operator[](prop_map, &fight_prop->type);
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            v22 = *v21;
            if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&curve_info_ptr->value);
            }
            *v21 = curve_info_ptr->value + v22;
          }
          else if ( arith == ARITH_MULTI )
          {
            v23 = std::map<data::FightPropType,float>::operator[](prop_map, &fight_prop->type);
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            v24 = *v23;
            if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&curve_info_ptr->value);
            }
            *v23 = curve_info_ptr->value * v24;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/creature/creature.cpp",
              "calcLevelPropByLevel",
              2086);
            v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v37,
                    (const char (*)[15])"invalid arith:");
            common::milog::MiLogStream::operator<<<data::ArithType,(data::ArithType*)0>(v25, &curve_info_ptr->arith);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "calcLevelPropByLevel",
            2074);
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v37,
                  (const char (*)[29])"findCurveInfo failed, curve:");
          common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
            v19,
            &fight_prop->grow_curve);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
      }
    }
LABEL_53:
    __gnu_cxx::__normal_iterator<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_55:
  if ( v38 == (char *)v3 )
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

// Line 2096: range 0000000014F4C29A-0000000014F4C8A8
void __cdecl Creature::tryTriggerElementReactionByHurt(
        Creature *const this,
        HurtContextPtr *p_ctx_ptr,
        float real_delta,
        bool is_die)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  TxtConfigMgr *p_txt_config_mgr; // rcx
  bool isMonsterAnimal; // r14
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v15; // rax
  PlayerWatcherComp *WatcherComp; // r15
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  data::ElementReactionType AmplifyingReactionType; // eax
  AbilityComp *AbilityComp; // r14
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t entity_id; // [rsp+14h] [rbp-10Ch]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-E8h]
  CreaturePtr p_attacker_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 17 attacker_ptr:2101 64 16 16 monster_ptr:2107 96 16 15 player_ptr:2131";
  *(_QWORD *)(v4 + 16) = Creature::tryTriggerElementReactionByHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( !std::operator==<HurtContext>(0LL, p_ctx_ptr) )
  {
    std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
    AttackResult::getAttacker((const AttackResult *const)(v4 + 32));
    if ( !std::operator==<Creature>((const std::shared_ptr<Creature> *)(v4 + 32), 0LL) )
    {
      toPtr<Monster,Creature>((Creature *)(v4 + 64));
      if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 64), 0LL) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 312LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 312LL);
        monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v8)(v7);
        if ( monster_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&monster_config_ptr->type);
          }
          if ( monster_config_ptr->type != MONSTER_ENV_ANIMAL )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v4 + 96));
            p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.txt_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&monster_config_ptr->id);
            }
            isMonsterAnimal = TxtConfigMgr::isMonsterAnimal(p_txt_config_mgr, monster_config_ptr->id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
            if ( !isMonsterAnimal )
            {
              v12 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
              if ( HurtContext::getAmplifyingReactionType(v12) == Melt
                || (v13 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr),
                    HurtContext::getAmplifyingReactionType(v13) == Stream) )
              {
                std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
                Creature::findOriginalPlayer((Creature *const)(v4 + 96));
                if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
                {
                  v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  WatcherComp = Player::getWatcherComp(v15);
                  entity_id = Entity::getEntityId((const Entity *const)this);
                  v17 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
                  AmplifyingReactionType = HurtContext::getAmplifyingReactionType(v17);
                  PlayerWatcherComp::triggerElementReaction(
                    WatcherComp,
                    AmplifyingReactionType,
                    entity_id,
                    real_delta,
                    is_die);
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
              }
              else
              {
                AbilityComp = Creature::getAbilityComp(this);
                std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
                AttackResult::getAttacker((const AttackResult *const)&p_attacker_ptr);
                v20 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
                std::shared_ptr<ActorModifier>::shared_ptr(
                  (std::shared_ptr<ActorModifier> *const)(v4 + 96),
                  &v20->attack_result.modifier_ptr);
                v21 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ctx_ptr);
                AbilityComp::tryTriggerElementReactionByAttackTag(
                  AbilityComp,
                  real_delta,
                  is_die,
                  &v21->attack_result.attack_tag,
                  (ActorModifierPtr *)(v4 + 96),
                  &p_attacker_ptr);
                std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v4 + 96));
                std::shared_ptr<Creature>::~shared_ptr(&p_attacker_ptr);
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "tryTriggerElementReactionByHurt",
            2115);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v27,
                 (const char (*)[34])"monster_config_ptr is null, this:");
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 64));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 32));
  }
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
};

// Line 2145: range 0000000014F4C8AA-0000000014F4CDC0
__int64 __fastcall Creature::setServerGlobalValue(Creature *const this, std::string *key, float value, bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t AbilityHashFromString; // eax
  Scene *v17; // rax
  __int64 result; // rax
  AbilityComp *ability_comp; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-E0h] BYREF
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 value:2144 64 16 14 scene_ptr:2159 96 32 11 notify:2166";
  *(_QWORD *)(v4 + 16) = Creature::setServerGlobalValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  *(float *)(v4 + 48) = value;
  ability_comp = Creature::getAbilityComp(this);
  if ( !AbilityComp::isServerGlobalValueKey(ability_comp, key) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "setServerGlobalValue",
      2149);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v4 + 96),
           (const char (*)[28])"[SetServerGlobalValue] key:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, key);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" not server key");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    v9 = -1;
  }
  else
  {
    AbilityComp::createOrSetDynamicValue<float>(ability_comp, key, *(float *)(v4 + 48));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "setServerGlobalValue",
      2153);
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v4 + 96),
            (const char (*)[28])"[SetServerGlobalValue] key=");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" value=");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v13 = *(_QWORD *)this->baseclass_0 + 376LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 376LL);
    (*(void (__fastcall **)(Creature *const, std::string *, double))v13)(
      this,
      key,
      *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v4 + 48)).m128i_i64);
    if ( !is_notify )
    {
      v9 = 0;
    }
    else
    {
      Entity::getScene((const Entity *const)(v4 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "setServerGlobalValue",
          2162);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v4 + 96),
          (const char (*)[41])"[SetServerGlobalValue] scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
        v9 = -1;
      }
      else
      {
        proto::ServerGlobalValueChangeNotify::ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 96));
        EntityId = Entity::getEntityId((const Entity *const)this);
        proto::ServerGlobalValueChangeNotify::set_entity_id(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
          EntityId);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        AbilityHashFromString = JsonConfigMgr::getAbilityHashFromString(&v15->design_config.json_config_mgr, key);
        proto::ServerGlobalValueChangeNotify::set_key_hash(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
          AbilityHashFromString);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        proto::ServerGlobalValueChangeNotify::set_value(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
          *(float *)(v4 + 48));
        v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v9 = Scene::notifyAllPlayer<proto::ServerGlobalValueChangeNotify>(
               v17,
               (proto::ServerGlobalValueChangeNotify *)(v4 + 96),
               0);
        proto::ServerGlobalValueChangeNotify::~ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
    }
  }
  result = v9;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2174: range 0000000014F4CDC2-0000000014F4D47A
__int64 __fastcall Creature::addOrCreateServerGlobalValue(
        Creature *const this,
        std::string *key,
        float value,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  __m128i v10; // xmm0
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  float v14; // xmm2_4
  __m128i v15; // xmm0
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t AbilityHashFromString; // eax
  Scene *v26; // rax
  __int64 result; // rax
  AbilityComp *ability_comp; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-100h] BYREF
  char v31[240]; // [rsp+40h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 new_value:2181 64 4 14 old_value:2190 80 4 10 value:2173 96 16 14 scene_ptr:2201 128 3"
                        "2 11 notify:2208";
  *(_QWORD *)(v4 + 16) = Creature::addOrCreateServerGlobalValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(float *)(v4 + 80) = value;
  ability_comp = Creature::getAbilityComp(this);
  if ( !AbilityComp::isServerGlobalValueKey(ability_comp, key) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "addOrCreateServerGlobalValue",
      2178);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[36])"[addOrCreateServerGlobalValue] key:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, key);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" not server key");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    v9 = -1;
  }
  else
  {
    v10 = 0LL;
    *(_DWORD *)(v4 + 48) = 0;
    if ( !AbilityComp::hasDynamicValue(ability_comp, key) )
    {
      AbilityComp::createOrSetDynamicValue<float>(ability_comp, key, *(float *)(v4 + 80));
      *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 80);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "addOrCreateServerGlobalValue",
        2186);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[36])"[addOrCreateServerGlobalValue] key=");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, key);
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" value=");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v13, (const float *)(v4 + 80));
    }
    else
    {
      *(float *)v10.m128i_i32 = AbilityComp::getDynamicValue<float>(ability_comp, key);
      *(_DWORD *)(v4 + 64) = _mm_cvtsi128_si32(v10);
      v14 = std::numeric_limits<float>::max();
      v15 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 80));
      AbilityComp::addDynamicFloatWithRange(ability_comp, key, *(float *)v15.m128i_i32, 0.0, v14);
      *(float *)v15.m128i_i32 = AbilityComp::getDynamicValue<float>(ability_comp, key);
      *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v15);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "addOrCreateServerGlobalValue",
        2193);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[36])"[addOrCreateServerGlobalValue] key=");
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, key);
      v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" value:");
      v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v4 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" --> ");
      v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v4 + 48));
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v21, this);
    }
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v22 = *(_QWORD *)this->baseclass_0 + 376LL;
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 376LL);
    (*(void (__fastcall **)(Creature *const, std::string *, double))v22)(
      this,
      key,
      *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v4 + 48)).m128i_i64);
    if ( !is_notify )
    {
      v9 = 0;
    }
    else
    {
      Entity::getScene((const Entity *const)(v4 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/creature.cpp",
          "addOrCreateServerGlobalValue",
          2204);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)(v4 + 128),
          (const char (*)[49])"[addOrCreateServerGlobalValue] scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        v9 = -1;
      }
      else
      {
        proto::ServerGlobalValueChangeNotify::ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 128));
        EntityId = Entity::getEntityId((const Entity *const)this);
        proto::ServerGlobalValueChangeNotify::set_entity_id(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 128),
          EntityId);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        AbilityHashFromString = JsonConfigMgr::getAbilityHashFromString(&v24->design_config.json_config_mgr, key);
        proto::ServerGlobalValueChangeNotify::set_key_hash(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 128),
          AbilityHashFromString);
        std::shared_ptr<Config>::~shared_ptr(&v30);
        proto::ServerGlobalValueChangeNotify::set_value(
          (proto::ServerGlobalValueChangeNotify *const)(v4 + 128),
          *(float *)(v4 + 48));
        v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v9 = Scene::notifyAllPlayer<proto::ServerGlobalValueChangeNotify>(
               v26,
               (proto::ServerGlobalValueChangeNotify *)(v4 + 128),
               0);
        proto::ServerGlobalValueChangeNotify::~ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
    }
  }
  result = v9;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 2216: range 0000000014F4D47C-0000000014F4DB1A
int32_t __cdecl Creature::addServerGlobalValue(
        Creature *const this,
        const std::string *key,
        float value,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  float v15; // xmm2_4
  __m128i v16; // xmm0
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  unsigned __int64 v23; // rax
  uint32_t EntityId; // eax
  JsonConfigMgr *p_json_config_mgr; // rdx
  uint32_t AbilityHashFromString; // eax
  Scene *v27; // rax
  int32_t result; // eax
  AbilityComp *ability_comp; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-E0h] BYREF
  char v33[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 14 old_value:2232 48 4 14 new_value:2234 64 16 14 scene_ptr:2241 96 32 11 notify:2248";
  *(_QWORD *)(v4 + 16) = Creature::addServerGlobalValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  v7 = 0LL;
  if ( value == 0.0 )
  {
    v8 = 0;
  }
  else
  {
    ability_comp = Creature::getAbilityComp(this);
    if ( !AbilityComp::isServerGlobalValueKey(ability_comp, key) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "addServerGlobalValue",
        2224);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)(v4 + 96),
             (const char (*)[28])"[AddServerGlobalValue] key:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" not server key");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v11, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v8 = -1;
    }
    else if ( !AbilityComp::hasDynamicValue(ability_comp, key) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/creature.cpp",
        "addServerGlobalValue",
        2229);
      v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v4 + 96),
              (const char (*)[28])"[AddServerGlobalValue] key:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, key);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" not init for ");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v14, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v8 = -1;
    }
    else
    {
      *(float *)v7.m128i_i32 = AbilityComp::getDynamicValue<float>(ability_comp, key);
      *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v7);
      v15 = std::numeric_limits<float>::max();
      v16 = _mm_cvtsi32_si128(LODWORD(value));
      AbilityComp::addDynamicFloatWithRange(ability_comp, key, *(float *)v16.m128i_i32, 0.0, v15);
      *(float *)v16.m128i_i32 = AbilityComp::getDynamicValue<float>(ability_comp, key);
      *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v16);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "addServerGlobalValue",
        2235);
      v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v4 + 96),
              (const char (*)[28])"[AddServerGlobalValue] key=");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key);
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" value:");
      v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v4 + 32));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" --> ");
      v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, (const float *)(v4 + 48));
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v22, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v23 = *(_QWORD *)this->baseclass_0 + 376LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 376LL);
      (*(void (__fastcall **)(Creature *const, const std::string *, double))v23)(
        this,
        key,
        *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v4 + 48)).m128i_i64);
      if ( !is_notify )
      {
        v8 = 0;
      }
      else
      {
        Entity::getScene((const Entity *const)(v4 + 64));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 96),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "addServerGlobalValue",
            2244);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v4 + 96),
            (const char (*)[41])"[SetServerGlobalValue] scene_ptr is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
          v8 = -1;
        }
        else
        {
          proto::ServerGlobalValueChangeNotify::ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 96));
          EntityId = Entity::getEntityId((const Entity *const)this);
          proto::ServerGlobalValueChangeNotify::set_entity_id(
            (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
            EntityId);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.json_config_mgr;
          AbilityHashFromString = JsonConfigMgr::getAbilityHashFromString(p_json_config_mgr, key);
          proto::ServerGlobalValueChangeNotify::set_key_hash(
            (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
            AbilityHashFromString);
          std::shared_ptr<Config>::~shared_ptr(&v32);
          proto::ServerGlobalValueChangeNotify::set_value(
            (proto::ServerGlobalValueChangeNotify *const)(v4 + 96),
            *(float *)(v4 + 48));
          v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v8 = Scene::notifyAllPlayer<proto::ServerGlobalValueChangeNotify>(
                 v27,
                 (proto::ServerGlobalValueChangeNotify *)(v4 + 96),
                 0);
          proto::ServerGlobalValueChangeNotify::~ServerGlobalValueChangeNotify((proto::ServerGlobalValueChangeNotify *const)(v4 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
      }
    }
  }
  result = v8;
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2256: range 0000000014F4DB1C-0000000014F4DEF3
void __cdecl Creature::changeTag(Creature *const this, bool is_add, const std::string *tag, bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t EntityId; // eax
  Scene *v13; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 16 14 scene_ptr:2271 80 40 11 notify:2278";
  *(_QWORD *)(v4 + 16) = Creature::changeTag;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( is_add )
    std::set<std::string>::insert(&this->tag_set_, tag);
  else
    std::set<std::string>::erase(&this->tag_set_, tag);
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/creature/creature.cpp",
    "changeTag",
    2265);
  v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v16, (const char (*)[8])"is_add:");
  v8 = common::milog::MiLogStream::operator<<(v7, is_add);
  v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", tag:");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, tag);
  v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" set:");
  common::milog::MiLogStream::operator<<<std::string>(v11, &this->tag_set_);
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( is_notify )
  {
    Entity::getScene((const Entity *const)(v4 + 48));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/creature.cpp",
        "changeTag",
        2274);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v16, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      proto::EntityTagChangeNotify::EntityTagChangeNotify((proto::EntityTagChangeNotify *const)(v4 + 80));
      EntityId = Entity::getEntityId((const Entity *const)this);
      proto::EntityTagChangeNotify::set_entity_id((proto::EntityTagChangeNotify *const)(v4 + 80), EntityId);
      proto::EntityTagChangeNotify::set_is_add((proto::EntityTagChangeNotify *const)(v4 + 80), is_add);
      proto::EntityTagChangeNotify::set_tag((proto::EntityTagChangeNotify *const)(v4 + 80), tag);
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      Scene::notifyAllPlayer<proto::EntityTagChangeNotify>(v13, (proto::EntityTagChangeNotify *)(v4 + 80), 0);
      proto::EntityTagChangeNotify::~EntityTagChangeNotify((proto::EntityTagChangeNotify *const)(v4 + 80));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 48));
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2286: range 0000000014F4DEF4-0000000014F4EA5C
void __cdecl Creature::calcElementRatio(
        Creature *const this,
        const AttackResult *attack_result,
        Creature *attacker,
        float *attack_elem_ratio,
        float *defense_elem_ratio,
        float *defense_elem_mute)
{
  double v6; // xmm0_8
  const std::string *p_ACTOR_PHYSICAL_MUTE_HURT_DELTA; // rdx
  double v8; // xmm0_8
  const std::string *p_ACTOR_FIRE_MUTE_HURT_DELTA; // rdx
  double v10; // xmm0_8
  const std::string *p_ACTOR_GRASS_MUTE_HURT_DELTA; // rdx
  double v12; // xmm0_8
  const std::string *p_ACTOR_WATER_MUTE_HURT_DELTA; // rdx
  double v14; // xmm0_8
  const std::string *p_ACTOR_ELEC_MUTE_HURT_DELTA; // rdx
  double v16; // xmm0_8
  const std::string *p_ACTOR_WIND_MUTE_HURT_DELTA; // rdx
  double v18; // xmm0_8
  const std::string *p_ACTOR_ICE_MUTE_HURT_DELTA; // rdx
  double v20; // xmm0_8
  const std::string *p_ACTOR_ROCK_MUTE_HURT_DELTA; // rdx
  int v22; // xmm0_4
  __m128i v23; // xmm0
  int v24; // ecx
  data::ElementType element_type; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->element_type);
  }
  element_type = attack_result->element_type;
  if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(attack_elem_ratio);
  }
  *attack_elem_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(defense_elem_ratio);
  }
  *defense_elem_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(defense_elem_mute);
  }
  *defense_elem_mute = 0.0;
  switch ( element_type )
  {
    case None_0:
      *(float *)&v6 = Creature::getProp(attacker, FIGHT_PROP_PHYSICAL_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v6 + *attack_elem_ratio;
      *(float *)&v6 = AttackResult::getPhysicalSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v6 + *defense_elem_ratio;
      p_ACTOR_PHYSICAL_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_PHYSICAL_MUTE_HURT_DELTA;
      *(float *)&v6 = Creature::tryGetAbilityProp(this, p_ACTOR_PHYSICAL_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v6 + *defense_elem_mute;
      break;
    case Fire:
      *(float *)&v8 = Creature::getProp(attacker, FIGHT_PROP_FIRE_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v8 + *attack_elem_ratio;
      *(float *)&v8 = AttackResult::getFireSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v8 + *defense_elem_ratio;
      p_ACTOR_FIRE_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_FIRE_MUTE_HURT_DELTA;
      *(float *)&v8 = Creature::tryGetAbilityProp(this, p_ACTOR_FIRE_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v8 + *defense_elem_mute;
      break;
    case Water:
      *(float *)&v12 = Creature::getProp(attacker, FIGHT_PROP_WATER_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v12 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v12 + *attack_elem_ratio;
      *(float *)&v12 = AttackResult::getWaterSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v12 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v12 + *defense_elem_ratio;
      p_ACTOR_WATER_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_WATER_MUTE_HURT_DELTA;
      *(float *)&v12 = Creature::tryGetAbilityProp(this, p_ACTOR_WATER_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v12 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v12 + *defense_elem_mute;
      break;
    case Grass:
      *(float *)&v10 = Creature::getProp(attacker, FIGHT_PROP_GRASS_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v10 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v10 + *attack_elem_ratio;
      *(float *)&v10 = AttackResult::getGrassSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v10 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v10 + *defense_elem_ratio;
      p_ACTOR_GRASS_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_GRASS_MUTE_HURT_DELTA;
      *(float *)&v10 = Creature::tryGetAbilityProp(this, p_ACTOR_GRASS_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v10 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v10 + *defense_elem_mute;
      break;
    case Electric:
      *(float *)&v14 = Creature::getProp(attacker, FIGHT_PROP_ELEC_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v14 + *attack_elem_ratio;
      *(float *)&v14 = AttackResult::getElecSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v14 + *defense_elem_ratio;
      p_ACTOR_ELEC_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEC_MUTE_HURT_DELTA;
      *(float *)&v14 = Creature::tryGetAbilityProp(this, p_ACTOR_ELEC_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v14 + *defense_elem_mute;
      break;
    case Ice:
      *(float *)&v18 = Creature::getProp(attacker, FIGHT_PROP_ICE_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v18 + *attack_elem_ratio;
      *(float *)&v18 = AttackResult::getIceSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v18 + *defense_elem_ratio;
      p_ACTOR_ICE_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ICE_MUTE_HURT_DELTA;
      *(float *)&v18 = Creature::tryGetAbilityProp(this, p_ACTOR_ICE_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v18 + *defense_elem_mute;
      break;
    case Wind:
      *(float *)&v16 = Creature::getProp(attacker, FIGHT_PROP_WIND_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v16 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v16 + *attack_elem_ratio;
      *(float *)&v16 = AttackResult::getWindSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v16 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v16 + *defense_elem_ratio;
      p_ACTOR_WIND_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_WIND_MUTE_HURT_DELTA;
      *(float *)&v16 = Creature::tryGetAbilityProp(this, p_ACTOR_WIND_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v16 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v16 + *defense_elem_mute;
      break;
    case Rock:
      *(float *)&v20 = Creature::getProp(attacker, FIGHT_PROP_ROCK_ADD_HURT);
      if ( *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)attack_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)attack_elem_ratio >> 3)
                                                                            + 0x7FFF8000) )
      {
        v20 = __asan_report_load4(attack_elem_ratio);
      }
      *attack_elem_ratio = *(float *)&v20 + *attack_elem_ratio;
      *(float *)&v20 = AttackResult::getRockSubHurt(attack_result);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        v20 = __asan_report_load4(defense_elem_ratio);
      }
      *defense_elem_ratio = *(float *)&v20 + *defense_elem_ratio;
      p_ACTOR_ROCK_MUTE_HURT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ROCK_MUTE_HURT_DELTA;
      *(float *)&v20 = Creature::tryGetAbilityProp(this, p_ACTOR_ROCK_MUTE_HURT_DELTA);
      if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                            + 0x7FFF8000) )
      {
        v20 = __asan_report_load4(defense_elem_mute);
      }
      *defense_elem_mute = *(float *)&v20 + *defense_elem_mute;
      break;
    default:
      break;
  }
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(defense_elem_mute);
  }
  if ( *defense_elem_mute <= 0.00000011920929 )
    v22 = 0;
  else
    v22 = 1065353216;
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_mute & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_mute >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(defense_elem_mute);
  }
  *(_DWORD *)defense_elem_mute = v22;
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(defense_elem_ratio);
  }
  v23 = _mm_cvtsi32_si128(*(_DWORD *)defense_elem_ratio);
  *(float *)v23.m128i_i32 = Creature::calcReduceDamageRatioByDefenseRatio(*(float *)v23.m128i_i32);
  v24 = _mm_cvtsi128_si32(v23);
  if ( *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)defense_elem_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)defense_elem_ratio >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(defense_elem_ratio);
  }
  *(_DWORD *)defense_elem_ratio = v24;
};

// Line 2342: range 0000000014F4EA5E-0000000014F4EEF5
int32_t __cdecl Creature::addSubEntityIdToGroupOriginOwnerMap(Creature *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  char v5; // r14
  Scene *v6; // rax
  uint32_t BlockGroupComp; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Group *v11; // r14
  uint32_t EntityId; // ecx
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:2343 64 16 14 group_ptr:2354";
  *(_QWORD *)(v1 + 16) = Creature::addSubEntityIdToGroupOriginOwnerMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/creature.cpp",
      "addSubEntityIdToGroupOriginOwnerMap",
      2346);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"scene ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = 0;
  }
  else
  {
    Entity::getGroup((const Entity *const)(v1 + 64));
    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->origin_owner_group_id_);
    }
    if ( !this->origin_owner_group_id_ )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->origin_owner_config_id_);
    }
    if ( this->origin_owner_config_id_ )
      v5 = 0;
    else
LABEL_13:
      v5 = 1;
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    if ( v5 )
    {
      v4 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->origin_owner_group_id_);
      }
      SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v1 + 64), BlockGroupComp);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/creature.cpp",
          "addSubEntityIdToGroupOriginOwnerMap",
          2357);
        v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v14,
               (const char (*)[38])"Group not exist of active, group_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->origin_owner_group_id_);
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->origin_owner_config_id_);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v4 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        EntityId = Entity::getEntityId((const Entity *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->origin_owner_config_id_);
        }
        Group::addSubEntityIdToOriginOwnerMap(v11, this->origin_owner_config_id_, EntityId);
        v4 = 0;
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
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

// Line 2365: range 0000000014F4EEF6-0000000014F4F38D
int32_t __cdecl Creature::removeSubEntityIdFromGroupOriginOwnerMap(Creature *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  char v5; // r14
  Scene *v6; // rax
  uint32_t BlockGroupComp; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Group *v11; // r14
  uint32_t EntityId; // ecx
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:2366 64 16 14 group_ptr:2377";
  *(_QWORD *)(v1 + 16) = Creature::removeSubEntityIdFromGroupOriginOwnerMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/creature.cpp",
      "removeSubEntityIdFromGroupOriginOwnerMap",
      2369);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"scene ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = 0;
  }
  else
  {
    Entity::getGroup((const Entity *const)(v1 + 64));
    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->origin_owner_group_id_);
    }
    if ( !this->origin_owner_group_id_ )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->origin_owner_config_id_);
    }
    if ( this->origin_owner_config_id_ )
      v5 = 0;
    else
LABEL_13:
      v5 = 1;
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    if ( v5 )
    {
      v4 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->origin_owner_group_id_);
      }
      SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v1 + 64), BlockGroupComp);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/creature.cpp",
          "removeSubEntityIdFromGroupOriginOwnerMap",
          2380);
        v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v14,
               (const char (*)[38])"Group not exist of active, group_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->origin_owner_group_id_);
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->origin_owner_config_id_);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v4 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        EntityId = Entity::getEntityId((const Entity *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->origin_owner_config_id_);
        }
        Group::removeSubEntityIdFromOriginOwnerMap(v11, this->origin_owner_config_id_, EntityId);
        v4 = 0;
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
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

// Line 2388: range 0000000014F4F38E-0000000014F4F491
void __cdecl Creature::onServerGlobalValueChange(Creature *const this, const std::string *key, float a3)
{
  uint32_t Now; // edi
  ClientServerGlobalValueConfig *config; // [rsp+28h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+30h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->security_config.client_server_global_value_config;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( *(char *)(((unsigned __int64)config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(config);
  if ( config->is_open && std::operator==<char>(key, &config->sgv_name) )
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      Now = (_DWORD)this + 780;
      __asan_report_store4(&this->last_change_special_sgv_time_);
    }
    this->last_change_special_sgv_time_ = Now;
  }
};

// Line 2397: range 0000000014F4F492-0000000014F4F628
float __cdecl Creature::calcDamageExtra(
        Creature *const this,
        Creature *attacker,
        const AttackResult *attack_result,
        float *damage_extra_overdose)
{
  __m128i v4; // xmm0
  common::milog::MiLogStream *v5; // rbx
  float ElemDurabilityAttenuation; // xmm0_4
  int v8; // ecx
  float val; // [rsp+28h] [rbp-38h] BYREF
  float damage_extra; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  *(float *)v4.m128i_i32 = AttackResult::getDamageExtra(attack_result);
  damage_extra = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/creature/creature.cpp",
    "calcDamageExtra",
    2399);
  v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
         &v13,
         (const char (*)[55])"calcDamageExtraOverdose, getElemDurabilityAttenuation:");
  *(float *)v4.m128i_i32 = AttackResult::getElemDurabilityAttenuation(attack_result);
  LODWORD(val) = _mm_cvtsi128_si32(v4);
  common::milog::MiLogStream::operator<<<float,(float *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  ElemDurabilityAttenuation = AttackResult::getElemDurabilityAttenuation(attack_result);
  if ( std::fabs(ElemDurabilityAttenuation) >= 0.00000011920929 )
  {
    *(float *)v4.m128i_i32 = Creature::calcDamageExtraOverdose(this, attacker, attack_result);
    v8 = _mm_cvtsi128_si32(v4);
    if ( *(_BYTE *)(((unsigned __int64)damage_extra_overdose >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)damage_extra_overdose & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_extra_overdose >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_store4(damage_extra_overdose);
    }
    *(_DWORD *)damage_extra_overdose = v8;
    return *damage_extra_overdose + damage_extra;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)damage_extra_overdose >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)damage_extra_overdose & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_extra_overdose >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_store4(damage_extra_overdose);
    }
    *damage_extra_overdose = 0.0;
    return damage_extra;
  }
};

// Line 2412: range 0000000014F4F62A-0000000014F500E9
float __cdecl Creature::calcDamageExtraOverdose(
        Creature *const this,
        Creature *attacker,
        const AttackResult *attack_result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float DamagePercentage; // xmm0_4
  float DamageExtra; // xmm0_4
  float ElementDurability; // xmm0_4
  common::milog::MiLogStream *v10; // r14
  Creature *v11; // rdx
  void (__fastcall **v12)(std::string *, Creature *); // rax
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  __m128i v17; // xmm0
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const Vector3 *Position; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  float result; // xmm0_4
  float v36; // [rsp+4h] [rbp-1ACh]
  data::ElementType element_type; // [rsp+24h] [rbp-18Ch]
  const data::ConfigGlobalCombat *config_global_combat; // [rsp+28h] [rbp-188h]
  std::shared_ptr<Config> v40; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-170h] BYREF
  std::string val; // [rsp+60h] [rbp-150h] BYREF
  char v43[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 25 coefficient_overdose:2456 64 4 18 reaction_type:2457 80 4 7 B1:2474 96 4 21 element_c"
                        "ritical:2475 112 4 26 element_critical_hurt:2476 128 4 19 elementLevelCo:2477 144 4 11 damage:24"
                        "78 160 16 14 scene_ptr:2436 192 16 15 player_ptr:2442 224 16 19 cur_avatar_ptr:2448";
  *(_QWORD *)(v3 + 16) = Creature::calcDamageExtraOverdose;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->element_type);
  }
  element_type = attack_result->element_type;
  if ( element_type == Grass || element_type == Electric )
  {
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_result->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&attack_result->amplify_reaction_type);
    }
    if ( attack_result->amplify_reaction_type == OverdoseElectric
      || attack_result->amplify_reaction_type == OverdoseGrass )
    {
      if ( AttackResult::getTrueDamage(attack_result)
        || (DamagePercentage = AttackResult::getDamagePercentage(attack_result),
            std::fabs(DamagePercentage) < 0.00000011920929)
        && (DamageExtra = AttackResult::getDamageExtra(attack_result), std::fabs(DamageExtra) < 0.00000011920929)
        || (ElementDurability = AttackResult::getElementDurability(attack_result),
            std::fabs(ElementDurability) < 0.00000011920929) )
      {
        v36 = 0.0;
      }
      else
      {
        Entity::getScene((const Entity *const)(v3 + 160));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/creature.cpp",
            "calcDamageExtraOverdose",
            2439);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v41,
                  (const char (*)[15])"getScene fail ");
          v11 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v12 = *(void (__fastcall ***)(std::string *, Creature *))this->baseclass_0;
          if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
            v12 = (void (__fastcall **)(std::string *, Creature *))__asan_report_load8(*(_QWORD *)this->baseclass_0);
          (*v12)(&val, v11);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v41);
          v36 = 0.0;
        }
        else
        {
          v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->from_player_uid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&attack_result->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&attack_result->from_player_uid);
          }
          Scene::findPlayer((const Scene *const)(v3 + 192), v13);
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 192)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/creature/creature.cpp",
              "calcDamageExtraOverdose",
              2445);
            v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[28])"player_ptr is nullptr, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &attack_result->from_player_uid);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v36 = 0.0;
          }
          else
          {
            std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            Player::getCurAvatar((Player *const)(v3 + 224));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 224)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/creature/creature.cpp",
                "calcDamageExtraOverdose",
                2451);
              v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[32])"cur_avatar_ptr is nullptr, uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                &attack_result->from_player_uid);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v36 = 0.0;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v40);
              v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
              config_global_combat = JsonConfigMgr::getGlobalCombatConfig(&v16->design_config.json_config_mgr);
              std::shared_ptr<Config>::~shared_ptr(&v40);
              *(_DWORD *)(v3 + 48) = 0;
              *(_DWORD *)(v3 + 64) = 33;
              if ( element_type == Grass )
              {
                if ( *(_BYTE *)(((unsigned __int64)&config_global_combat->element_reaction_coefficients >> 3)
                              + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config_global_combat->element_reaction_coefficients >> 3)
                              + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config_global_combat->element_reaction_coefficients);
                }
                *(float *)(v3 + 48) = config_global_combat->element_reaction_coefficients.coefficient_overdose_grass;
                *(_DWORD *)(v3 + 64) = 35;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&config_global_combat->element_reaction_coefficients.coefficient_overdose_electric >> 3)
                              + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_global_combat - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_global_combat->element_reaction_coefficients.coefficient_overdose_electric >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&config_global_combat->element_reaction_coefficients.coefficient_overdose_electric);
                }
                *(float *)(v3 + 48) = config_global_combat->element_reaction_coefficients.coefficient_overdose_electric;
                *(_DWORD *)(v3 + 64) = 34;
              }
              *(_DWORD *)(v3 + 80) = 0;
              *(_DWORD *)(v3 + 96) = 0;
              v17 = 0LL;
              *(_DWORD *)(v3 + 112) = 0;
              Creature::getAbilityComp(this);
              v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              Position = Entity::getPosition((const Entity *const)v18);
              toThisPtr<Creature>((Creature *)&v40);
              *(float *)v17.m128i_i32 = AbilityComp::getElementLevelCo(
                                          (CreaturePtr *)&v40,
                                          this,
                                          (const data::ElementReactionType *)(v3 + 64),
                                          Position,
                                          (float *)(v3 + 80),
                                          (float *)(v3 + 96),
                                          (float *)(v3 + 112));
              *(_DWORD *)(v3 + 128) = _mm_cvtsi128_si32(v17);
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&v40);
              *(float *)(v3 + 144) = (float)(*(float *)(v3 + 80) + 1.0)
                                   * (float)(*(float *)(v3 + 128) * *(float *)(v3 + 48));
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/creature/creature.cpp",
                "calcDamageExtraOverdose",
                2479);
              v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[33])"calcDamageExtraOverdose, damage:");
              v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v3 + 144));
              v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v21,
                      (const char (*)[18])", elementLevelCo:");
              v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, (const float *)(v3 + 128));
              v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v23,
                      (const char (*)[24])", coefficient_overdose:");
              v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, (const float *)(v3 + 48));
              v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])", B1:");
              v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, (const float *)(v3 + 80));
              v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v27,
                      (const char (*)[20])", element_critical:");
              v29 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, (const float *)(v3 + 96));
              v30 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v29,
                      (const char (*)[25])", element_critical_hurt:");
              v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, (const float *)(v3 + 112));
              v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v31,
                      (const char (*)[12])", attacker:");
              v33 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v32, attacker);
              v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v33,
                      (const char (*)[12])", attackee:");
              common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v34, this);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v36 = *(float *)(v3 + 144);
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 224));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 192));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
      }
    }
    else
    {
      v36 = 0.0;
    }
  }
  else
  {
    v36 = 0.0;
  }
  result = v36;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 2491: range 0000000014F500EA-0000000014F50166
HurtContextPtr __cdecl Creature::getOrCreateHurtContextByGm(Creature *const this)
{
  const std::shared_ptr<HurtContext> *v1; // rsi
  HurtContextPtr result; // rax
  std::shared_ptr<HurtContext> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( std::operator==<HurtContext>(0LL, v1 + 54) )
  {
    common::tools::perf::make_shared<HurtContext>();
    std::shared_ptr<HurtContext>::operator=((std::shared_ptr<HurtContext> *const)&v1[54], &__r);
    std::shared_ptr<HurtContext>::~shared_ptr(&__r);
  }
  std::shared_ptr<HurtContext>::shared_ptr((std::shared_ptr<HurtContext> *const)this, v1 + 54);
  result._M_ptr = (std::__shared_ptr<HurtContext,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2497: range 0000000014F6DCDE-0000000014F6DCF2
void __cdecl GLOBAL__sub_I_merge_single_base_scene_play_battle_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2497: range 0000000014F6D6D2-0000000014F6DCDD
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  const char *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  const char *v24; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_base_scene_play_battle.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      v11 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v12 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v13 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v14 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v16 = 1;
        v17 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v17;
      }
      v18 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v21 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v23 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v24;
      }
    }
    __asan_after_dynamic_init();
  }
};
