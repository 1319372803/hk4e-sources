// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/play_team_entity.cpp

// Line 21: range 000000001318B99E-000000001318BBA0
int32_t __cdecl PlayTeamEntity::toClient(PlayTeamEntity *const this, proto::PlayTeamEntityInfo *team_entity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t EntityId; // edx
  uint32_t AuthorityPeerId; // edx
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Uid; // edx
  uint32_t GadgetConfigId; // edx
  AbilityComp *AbilityComp; // r14
  proto::AbilitySyncStateInfo *v12; // rax
  int32_t result; // eax
  char v14[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:24";
  *(_QWORD *)(v2 + 16) = PlayTeamEntity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  EntityId = Entity::getEntityId((const Entity *const)this);
  proto::PlayTeamEntityInfo::set_entity_id(team_entity_info, EntityId);
  AuthorityPeerId = Creature::getAuthorityPeerId(this);
  proto::PlayTeamEntityInfo::set_authority_peer_id(team_entity_info, AuthorityPeerId);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, PlayTeamEntity *const))v7)(v2 + 32, this);
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(v8);
    proto::PlayTeamEntityInfo::set_player_uid(team_entity_info, Uid);
  }
  GadgetConfigId = PlayTeamEntity::getGadgetConfigId(this);
  proto::PlayTeamEntityInfo::set_gadget_config_id(team_entity_info, GadgetConfigId);
  AbilityComp = Creature::getAbilityComp(this);
  v12 = proto::PlayTeamEntityInfo::mutable_ability_info(team_entity_info);
  AbilityComp::toClient(AbilityComp, v12);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = 0;
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

// Line 35: range 000000001318BBA2-000000001318BCFD
uint32_t __cdecl PlayTeamEntity::getPlayerUid(const PlayTeamEntity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Uid; // r14d
  uint32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 player_ptr:36";
  *(_QWORD *)(v1 + 16) = PlayTeamEntity::getPlayerUid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, const PlayTeamEntity *const))v4)(v1 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Uid = Player::getUid(v5);
  }
  else
  {
    Uid = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = Uid;
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

// Line 45: range 000000001318BCFE-000000001318BEB1
int32_t __cdecl PlayTeamEntity::initAbility(PlayTeamEntity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:46";
  *(_QWORD *)(v1 + 16) = PlayTeamEntity::initAbility;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayTeamEntity::getJsonConfig((PlayTeamEntity *const)(v1 + 32));
  if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/play_team_entity.cpp",
      "initAbility",
      49);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v6,
      (const char (*)[34])"initAbility get json config fail.");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v4 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityComp::setInitAbilities(&this->ability_comp_, &v4->abilities);
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v1 + 32));
  result = 0;
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

// Line 58: range 000000001318BEB2-000000001318BF63
data::ConfigGadgetPtr __cdecl PlayTeamEntity::getJsonConfig(PlayTeamEntity *const this)
{
  const PlayTeamEntity *v1; // rsi
  GameserverService *v2; // rsi
  uint32_t v3; // ebx
  data::ConfigGadgetPtr result; // rax
  const PlayTeamEntity *thisa; // [rsp+0h] [rbp-30h]
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  thisa = v1;
  v2 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)
     + 93080;
  PlayTeamEntity::getGadgetConfigId(thisa);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v2);
  JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)this, v3);
  std::shared_ptr<Config>::~shared_ptr(v6);
  result._M_ptr = (std::__shared_ptr<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
