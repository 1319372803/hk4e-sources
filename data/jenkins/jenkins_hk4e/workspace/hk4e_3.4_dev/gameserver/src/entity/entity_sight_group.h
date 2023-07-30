// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_sight_group.h

// Line 19: range 000000001619ED6C-000000001619EDA6
void __cdecl EntitySightGroup::~EntitySightGroup(EntitySightGroup *const this)
{
  std::map<unsigned int,std::weak_ptr<Player>>::~map(&this->viewing_player_map_);
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::~unordered_map(&this->entity_map_);
  std::enable_shared_from_this<EntitySightGroup>::~enable_shared_from_this(this);
};

// Line 23: range 0000000015A1DADC-0000000015A1DB23
uint32_t __cdecl EntitySightGroup::getSelfId(const EntitySightGroup *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->self_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->self_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->self_id_;
};

// Line 39: range 0000000015A1DB24-0000000015A1DB73
uint32_t __cdecl EntitySightGroup::getGroupVisionType(const EntitySightGroup *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->group_vision_type_;
};

// Line 43: range 00000000166705C4-0000000016670614
void __cdecl EntitySightGroup::setAuthorityPeerId(EntitySightGroup *const this, uint32_t peer_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->authority_peer_id_);
  }
  this->authority_peer_id_ = peer_id;
};

// Line 150: range 0000000016051412-0000000016051467
void __cdecl EntitySightGroup::setGroupVisionType(EntitySightGroup *const this, uint32_t type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_vision_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_vision_type_);
  }
  this->group_vision_type_ = type;
};
