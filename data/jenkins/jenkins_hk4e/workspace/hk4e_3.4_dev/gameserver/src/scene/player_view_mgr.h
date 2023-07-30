// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_view_mgr.h

// Line 19: range 0000000016832730-000000001683275A
void __cdecl PlayerEyePoint::~PlayerEyePoint(PlayerEyePoint *const this)
{
  PlayerEyePoint::~PlayerEyePoint(this);
  operator delete(this, 0x328uLL);
};

// Line 19: range 00000000168326AC-000000001683272F
void __cdecl PlayerEyePoint::~PlayerEyePoint(PlayerEyePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerEyePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::shared_ptr<Region>::~shared_ptr(&this->related_big_region_ptr_);
  std::weak_ptr<Region>::~weak_ptr(&this->region_wtr_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  Entity::~Entity(this);
};

// Line 22: range 0000000016670770-00000000166708C3
void __cdecl PlayerEyePoint::PlayerEyePoint(PlayerEyePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  bool v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  Entity::Entity(this);
  v2 = (int (**)(...))(&`vtable for'PlayerEyePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::weak_ptr<Region>::weak_ptr(&this->region_wtr_);
  std::shared_ptr<Region>::shared_ptr(&this->related_big_region_ptr_);
  if ( *(char *)(((unsigned __int64)&this->is_stream_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stream_, v1, &this->is_stream_);
  this->is_stream_ = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->fix_lod_level_, (((_BYTE)this + 36) & 7u) + 3, v3);
  this->fix_lod_level_ = -1;
  v4 = ((_BYTE)this + 9) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_client_visible_, v4, v5);
  this->is_client_visible_ = 0;
};

// Line 25: range 00000000166708C4-00000000166708D2
proto::ProtEntityType __cdecl PlayerEyePoint::getEntityType(const PlayerEyePoint *const this)
{
  return 13;
};

// Line 27: range 00000000166708D4-00000000166708E2
data::EntityType __cdecl PlayerEyePoint::getClientEntityType(const PlayerEyePoint *const this)
{
  return 50;
};

// Line 29: range 00000000166708E4-0000000016670935
PlayerPtr __cdecl PlayerEyePoint::getPlayer(const PlayerEyePoint *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 30: range 0000000016670936-0000000016670961
void __cdecl PlayerEyePoint::setPlayer(PlayerEyePoint *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 32: range 0000000015D305EC-0000000015D3063D
RegionPtr __cdecl PlayerEyePoint::getRegion(const PlayerEyePoint *const this)
{
  __int64 v1; // rsi
  RegionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Region>::lock((const std::weak_ptr<Region> *const)this);
  result._M_ptr = (std::__shared_ptr<Region,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 33: range 0000000016670962-000000001667098D
void __cdecl PlayerEyePoint::setRegion(PlayerEyePoint *const this, RegionPtr *p_region_ptr)
{
  std::weak_ptr<Region>::operator=<Region>(&this->region_wtr_, p_region_ptr);
};

// Line 37: range 0000000015D3063E-0000000015D3065D
Region *__cdecl PlayerEyePoint::getRelatedBigRegion(const PlayerEyePoint *const this)
{
  return std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->related_big_region_ptr_);
};

// Line 39: range 0000000015A1DB74-0000000015A1DBC0
PlayerChangeEyePropGuardState __cdecl PlayerViewMgr::getChangeEyePropGuardState(const PlayerViewMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->change_eye_prop_guard_state_);
  }
  return this->change_eye_prop_guard_state_;
};

// Line 39: range 0000000016670A3A-0000000016670A65
void __cdecl PlayerEyePoint::setRelatedBigRegion(PlayerEyePoint *const this, RegionPtr *p_region_ptr)
{
  std::shared_ptr<Region>::operator=(&this->related_big_region_ptr_, p_region_ptr);
};

// Line 46: range 0000000015D3065E-0000000015D306AB
bool __cdecl PlayerEyePoint::getIsStream(const PlayerEyePoint *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_stream_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_stream_);
  return this->is_stream_;
};

// Line 46: range 0000000015D306AC-0000000015D30702
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerEyePoint::setIsStream(PlayerEyePoint *const this, bool is_stream__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_stream_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stream_, is_stream__out, &this->is_stream_);
  this->is_stream_ = is_stream__out;
};

// Line 47: range 0000000015D30704-0000000015D30758
int32_t __cdecl PlayerEyePoint::getFixLodLevel(const PlayerEyePoint *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fix_lod_level_);
  }
  return this->fix_lod_level_;
};

// Line 47: range 0000000015D3075A-0000000015D307B5
void __cdecl PlayerEyePoint::setFixLodLevel(PlayerEyePoint *const this, int32_t fix_lod_level__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fix_lod_level_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->fix_lod_level_, (((_BYTE)this + 36) & 7u) + 3, v2);
  this->fix_lod_level_ = fix_lod_level__out;
};

// Line 72: range 0000000015C2EA1C-0000000015C2EACE
void __cdecl PlayerViewMgr::~PlayerViewMgr(PlayerViewMgr *const this)
{
  std::set<unsigned int>::~set(&this->final_group_vision_type_set_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->region_group_vision_type_map_);
  std::set<unsigned int>::~set(&this->group_vision_type_set_);
  std::map<unsigned int,std::weak_ptr<EntitySightGroup>>::~map(&this->view_sight_group_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::~map(&this->in_sight_range_entity_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::~map(&this->view_entity_map_);
  std::shared_ptr<PlayerEyePoint>::~shared_ptr(&this->eye_point_ptr_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::enable_shared_from_this<PlayerViewMgr>::~enable_shared_from_this(this);
};

// Line 80: range 0000000015D307B6-0000000015D30804
ScenePtr __cdecl PlayerViewMgr::getScene(const PlayerViewMgr *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 81: range 0000000015D30806-0000000015D30854
PlayerPtr __cdecl PlayerViewMgr::getPlayer(const PlayerViewMgr *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000015D30856-0000000015D3089D
uint32_t __cdecl PlayerViewMgr::getPlayerUid(const PlayerViewMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 111: range 00000000149EDD4A-00000000149EDD79
std::set<unsigned int> *__cdecl PlayerViewMgr::getGroupVisionTypeSet(
        std::set<unsigned int> *retstr,
        PlayerViewMgr *const this)
{
  std::set<unsigned int>::set(retstr, &this->final_group_vision_type_set_);
  return retstr;
};

// Line 139: range 0000000015D3089E-0000000015D308F1
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerViewMgr::setChangeEyePropGuardState(
        PlayerViewMgr *const this,
        PlayerChangeEyePropGuardState change_eye_prop_guard_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_eye_prop_guard_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->change_eye_prop_guard_state_,
      *(_QWORD *)&change_eye_prop_guard_state__out,
      (_BYTE)this - 40);
  }
  this->change_eye_prop_guard_state_ = change_eye_prop_guard_state__out;
};
