// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/play_team_entity.h

// Line 17: range 0000000015BFA2DC-0000000015BFA33B
void __cdecl PlayTeamEntity::~PlayTeamEntity(PlayTeamEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'PlayTeamEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  Creature::~Creature(this);
};

// Line 17: range 0000000015BFA33C-0000000015BFA366
void __cdecl PlayTeamEntity::~PlayTeamEntity(PlayTeamEntity *const this)
{
  PlayTeamEntity::~PlayTeamEntity(this);
  operator delete(this, 0xA58uLL);
};

// Line 20: range 0000000015A1A966-0000000015A1A974
proto::ProtEntityType __cdecl PlayTeamEntity::getEntityType(const PlayTeamEntity *const this)
{
  return 12;
};

// Line 21: range 0000000015A1A976-0000000015A1A984
data::EntityType __cdecl PlayTeamEntity::getClientEntityType(const PlayTeamEntity *const this)
{
  return 31;
};

// Line 24: range 0000000015A1A986-0000000015A1A99C
int32_t __cdecl PlayTeamEntity::enterScene(PlayTeamEntity *const this, Scene *scene, const VisionContext *a3)
{
  return 0;
};

// Line 26: range 0000000015A1A99E-0000000015A1A9EF
PlayerPtr __cdecl PlayTeamEntity::getPlayer(const PlayTeamEntity *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 28: range 0000000015A1A9F0-0000000015A1AA1B
void __cdecl PlayTeamEntity::setPlayer(PlayTeamEntity *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 31: range 00000000131D43FC-00000000131D4448
uint32_t __cdecl PlayTeamEntity::getGadgetConfigId(const PlayTeamEntity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gadget_config_id_);
  }
  return this->gadget_config_id_;
};

// Line 31: range 0000000015A1AA1C-0000000015A1AA6F
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayTeamEntity::setGadgetConfigId(PlayTeamEntity *const this, uint32_t gadget_config_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_config_id_, *(_QWORD *)&gadget_config_id__out, (_BYTE)this + 64);
  }
  this->gadget_config_id_ = gadget_config_id__out;
};

// Line 139: range 0000000015BD5588-0000000015BD562A
void __cdecl PlayTeamEntity::PlayTeamEntity(PlayTeamEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  Creature::Creature(this);
  v2 = &`vtable for'PlayTeamEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_config_id_, v1, (_BYTE)this + 64);
  }
  this->gadget_config_id_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
};
