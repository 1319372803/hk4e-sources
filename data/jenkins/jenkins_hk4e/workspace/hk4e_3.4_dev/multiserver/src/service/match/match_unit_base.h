// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_unit_base.h

// Line 48: range 000000000D82F01A-000000000D82F33F
void __cdecl MatchUnitBase::MatchUnitBase(MatchUnitBase *const this, proto::MatchType match_type)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<MatchUnitBase>::enable_shared_from_this(&this->std::enable_shared_from_this<MatchUnitBase>);
  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'MatchUnitBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type_);
  }
  this->match_type_ = match_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_identity_);
  }
  this->match_identity_ = MATCH_IDENTITY_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unit_id_);
  }
  this->unit_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_begin_time_);
  }
  this->match_begin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->estimate_match_cost_time_);
  }
  this->estimate_match_cost_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->join_team_time_);
  }
  this->join_team_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rematch_count_);
  }
  this->rematch_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_players_);
  }
  this->max_players_ = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_sync_time_);
  }
  this->last_sync_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->expect_identity_);
  }
  this->expect_identity_ = MATCH_IDENTITY_NONE;
  std::unordered_map<unsigned int,proto::MatchPlayer>::unordered_map(&this->match_player_map_);
  std::unordered_map<unsigned int,SlotContext>::unordered_map(&this->slot_uid_map_);
  std::weak_ptr<MatchTeam>::weak_ptr(&this->match_team_wtr_);
};

// Line 50: range 000000000D82F9DC-000000000D82FA5F
void __cdecl MatchUnitBase::~MatchUnitBase(MatchUnitBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchUnitBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<MatchTeam>::~weak_ptr(&this->match_team_wtr_);
  std::unordered_map<unsigned int,SlotContext>::~unordered_map(&this->slot_uid_map_);
  std::unordered_map<unsigned int,proto::MatchPlayer>::~unordered_map(&this->match_player_map_);
  std::enable_shared_from_this<MatchUnitBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<MatchUnitBase>);
};

// Line 50: range 000000000D82FA60-000000000D82FA8A
void __cdecl MatchUnitBase::~MatchUnitBase(MatchUnitBase *const this)
{
  MatchUnitBase::~MatchUnitBase(this);
  operator delete(this, 0xC0uLL);
};

// Line 54: range 000000000D82F340-000000000D82F35D
uint32_t __cdecl MatchUnitBase::getPlayerCount(const MatchUnitBase *const this)
{
  return std::unordered_map<unsigned int,proto::MatchPlayer>::size(&this->match_player_map_);
};

// Line 54: range 000000000D82F35E-000000000D82F395
uint32_t __cdecl MatchUnitBase::getPossiblePlayerCount(const MatchUnitBase *const this)
{
  int v1; // ebx

  v1 = std::unordered_map<unsigned int,proto::MatchPlayer>::size(&this->match_player_map_);
  return v1 + std::unordered_map<unsigned int,SlotContext>::size(&this->slot_uid_map_);
};

// Line 58: range 000000000D82F3D2-000000000D82F423
MatchTeamPtr __cdecl MatchUnitBase::getMatchTeam(const MatchUnitBase *const this)
{
  __int64 v1; // rsi
  MatchTeamPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<MatchTeam>::lock((const std::weak_ptr<MatchTeam> *const)this);
  result._M_ptr = (std::__shared_ptr<MatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 103: range 000000000D83043D-000000000D83066A
MatchUnitPtr __cdecl MatchUnitFactory::createMatchUnit(const proto::AddMatchUnitReq *proto)
{
  proto::AddMatchUnitReq *v1; // rsi
  MatchUnitPtr result; // rax
  unsigned int __args_1; // [rsp+18h] [rbp-18h] BYREF
  proto::MatchType __args_0; // [rsp+1Ch] [rbp-14h] BYREF
  std::shared_ptr<DungeonMatchUnit> v5; // [rsp+20h] [rbp-10h] BYREF

  if ( proto::AddMatchUnitReq::match_type(v1) == MATCH_TYPE_DUNGEON )
  {
    __args_0 = proto::AddMatchUnitReq::dungeon_id(v1);
    __args_1 = proto::AddMatchUnitReq::match_type(v1);
    common::tools::perf::make_shared<DungeonMatchUnit,proto::MatchType,unsigned int>(
      (proto::MatchType *)&v5,
      &__args_1,
      &__args_0,
      &__args_1);
    std::shared_ptr<MatchUnitBase>::shared_ptr<DungeonMatchUnit,void>((std::shared_ptr<MatchUnitBase> *const)proto, &v5);
    std::shared_ptr<DungeonMatchUnit>::~shared_ptr(&v5);
  }
  else if ( proto::AddMatchUnitReq::match_type(v1) == MATCH_TYPE_MP_PLAY )
  {
    __args_0 = proto::AddMatchUnitReq::mp_play_id(v1);
    __args_1 = proto::AddMatchUnitReq::match_type(v1);
    common::tools::perf::make_shared<MpPlayMatchUnit,proto::MatchType,unsigned int>(
      (proto::MatchType *)&v5,
      &__args_1,
      &__args_0,
      &__args_1);
    std::shared_ptr<MatchUnitBase>::shared_ptr<MpPlayMatchUnit,void>(
      (std::shared_ptr<MatchUnitBase> *const)proto,
      (std::shared_ptr<MpPlayMatchUnit> *)&v5);
    std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)&v5);
  }
  else if ( proto::AddMatchUnitReq::match_type(v1) == MATCH_TYPE_MECHANICUS )
  {
    __args_0 = proto::AddMatchUnitReq::mechanicus_tag(v1);
    __args_1 = proto::AddMatchUnitReq::match_type(v1);
    common::tools::perf::make_shared<MechanicusMatchUnit,proto::MatchType,unsigned int>(
      (proto::MatchType *)&v5,
      &__args_1,
      &__args_0,
      &__args_1);
    std::shared_ptr<MatchUnitBase>::shared_ptr<MechanicusMatchUnit,void>(
      (std::shared_ptr<MatchUnitBase> *const)proto,
      (std::shared_ptr<MechanicusMatchUnit> *)&v5);
    std::shared_ptr<MechanicusMatchUnit>::~shared_ptr((std::shared_ptr<MechanicusMatchUnit> *const)&v5);
  }
  else if ( proto::AddMatchUnitReq::match_type(v1) == MATCH_TYPE_GENERAL )
  {
    __args_0 = proto::AddMatchUnitReq::match_type(v1);
    common::tools::perf::make_shared<GeneralMatchUnit,proto::MatchType,proto::AddMatchUnitReq const&>(
      (proto::MatchType *)&v5,
      (const proto::AddMatchUnitReq *)&__args_0,
      (proto::MatchType *)v1,
      (const proto::AddMatchUnitReq *)&__args_0);
    std::shared_ptr<MatchUnitBase>::shared_ptr<GeneralMatchUnit,void>(
      (std::shared_ptr<MatchUnitBase> *const)proto,
      (std::shared_ptr<GeneralMatchUnit> *)&v5);
    std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)&v5);
  }
  else if ( proto::AddMatchUnitReq::match_type(v1) == MATCH_TYPE_GCG )
  {
    __args_0 = proto::AddMatchUnitReq::match_type(v1);
    common::tools::perf::make_shared<GCGMatchUnit,proto::MatchType,proto::AddMatchUnitReq const&>(
      (proto::MatchType *)&v5,
      (const proto::AddMatchUnitReq *)&__args_0,
      (proto::MatchType *)v1,
      (const proto::AddMatchUnitReq *)&__args_0);
    std::shared_ptr<MatchUnitBase>::shared_ptr<GCGMatchUnit,void>(
      (std::shared_ptr<MatchUnitBase> *const)proto,
      (std::shared_ptr<GCGMatchUnit> *)&v5);
    std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)&v5);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)proto, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 106: range 000000000D82F424-000000000D82F435
std::unordered_map<unsigned int,proto::MatchPlayer> *__cdecl MatchUnitBase::getPlayerMap(MatchUnitBase *const this)
{
  return &this->match_player_map_;
};

// Line 108: range 000000000D82F448-000000000D82F483
bool __cdecl MatchUnitBase::isNeedBeHost(MatchUnitBase *const this)
{
  return MatchUnitBase::getPlayerCount(this) > 1 || MatchUnitBase::getExpectIdentity(this) == MATCH_IDENTITY_HOST;
};

// Line 108: range 000000000D82F436-000000000D82F447
const std::unordered_map<unsigned int,SlotContext> *__cdecl MatchUnitBase::getSlotUidMap(
        const MatchUnitBase *const this)
{
  return &this->slot_uid_map_;
};

// Line 113: range 000000000D82F484-000000000D82F492
uint32_t __cdecl MatchUnitBase::getMatchTarget(const MatchUnitBase *const this)
{
  return 0;
};

// Line 116: range 000000000D82F494-000000000D82F4DB
proto::MatchType __cdecl MatchUnitBase::getMatchType(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_type_);
  }
  return this->match_type_;
};

// Line 117: range 000000000D82F4DC-000000000D82F52B
proto::MatchIdentity __cdecl MatchUnitBase::getMatchIdentity(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_identity_);
  }
  return this->match_identity_;
};

// Line 117: range 000000000D82F52C-000000000D82F582
void __cdecl MatchUnitBase::setMatchIdentity(MatchUnitBase *const this, proto::MatchIdentity match_identity__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_identity_);
  }
  this->match_identity_ = match_identity__out;
};

// Line 118: range 000000000D82F584-000000000D82F5CB
uint32_t __cdecl MatchUnitBase::getUnitId(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->unit_id_);
  }
  return this->unit_id_;
};

// Line 119: range 000000000D82F5CC-000000000D82F61B
uint32_t __cdecl MatchUnitBase::getMatchBeginTime(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_begin_time_);
  }
  return this->match_begin_time_;
};

// Line 119: range 000000000D82F61C-000000000D82F672
void __cdecl MatchUnitBase::setMatchBeginTime(MatchUnitBase *const this, uint32_t match_begin_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_begin_time_);
  }
  this->match_begin_time_ = match_begin_time__out;
};

// Line 120: range 000000000D82F674-000000000D82F6BB
uint32_t __cdecl MatchUnitBase::getEstimateMatchCostTime(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->estimate_match_cost_time_);
  }
  return this->estimate_match_cost_time_;
};

// Line 120: range 000000000D82F6BC-000000000D82F70A
void __cdecl MatchUnitBase::setEstimateMatchCostTime(MatchUnitBase *const this, uint32_t estimate_match_cost_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->estimate_match_cost_time_);
  }
  this->estimate_match_cost_time_ = estimate_match_cost_time__out;
};

// Line 121: range 000000000D82F70C-000000000D82F75B
uint32_t __cdecl MatchUnitBase::getJoinTeamTime(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->join_team_time_);
  }
  return this->join_team_time_;
};

// Line 121: range 000000000D82F75C-000000000D82F7A3
uint32_t __cdecl MatchUnitBase::getRematchCount(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rematch_count_);
  }
  return this->rematch_count_;
};

// Line 122: range 000000000D82F7A4-000000000D82F7F2
void __cdecl MatchUnitBase::setRematchCount(MatchUnitBase *const this, uint32_t rematch_count__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rematch_count_);
  }
  this->rematch_count_ = rematch_count__out;
};

// Line 123: range 000000000D82F7F4-000000000D82F843
uint32_t __cdecl MatchUnitBase::getMaxPlayers(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_players_);
  }
  return this->max_players_;
};

// Line 123: range 000000000D82F844-000000000D82F89A
void __cdecl MatchUnitBase::setMaxPlayers(MatchUnitBase *const this, uint32_t max_players__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_players_);
  }
  this->max_players_ = max_players__out;
};

// Line 124: range 000000000D82F89C-000000000D82F8E3
uint32_t __cdecl MatchUnitBase::getLastSyncTime(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_sync_time_);
  }
  return this->last_sync_time_;
};

// Line 124: range 000000000D82F8E4-000000000D82F932
void __cdecl MatchUnitBase::setLastSyncTime(MatchUnitBase *const this, uint32_t last_sync_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sync_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_sync_time_);
  }
  this->last_sync_time_ = last_sync_time__out;
};

// Line 125: range 000000000D82F934-000000000D82F983
proto::MatchIdentity __cdecl MatchUnitBase::getExpectIdentity(const MatchUnitBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expect_identity_);
  }
  return this->expect_identity_;
};

// Line 125: range 000000000D82F984-000000000D82F9DA
void __cdecl MatchUnitBase::setExpectIdentity(MatchUnitBase *const this, proto::MatchIdentity expect_identity__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expect_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->expect_identity_);
  }
  this->expect_identity_ = expect_identity__out;
};

// Line 134: range 000000000DD8585C-000000000DD858A9
void __cdecl DungeonMatchUnit::~DungeonMatchUnit(DungeonMatchUnit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  MatchUnitBase::~MatchUnitBase(this);
};

// Line 134: range 000000000DD858AA-000000000DD858D4
void __cdecl DungeonMatchUnit::~DungeonMatchUnit(DungeonMatchUnit *const this)
{
  DungeonMatchUnit::~DungeonMatchUnit(this);
  operator delete(this, 0xC8uLL);
};

// Line 137: range 000000000D82FA8C-000000000D82FB55
void __cdecl DungeonMatchUnit::DungeonMatchUnit(
        DungeonMatchUnit *const this,
        proto::MatchType match_type,
        uint32_t dungeon_id)
{
  int (**v3)(...); // rdx

  MatchUnitBase::MatchUnitBase(this, match_type);
  v3 = (int (**)(...))(&`vtable for'DungeonMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = dungeon_id;
  DungeonMatchUnit::initMaxPlayers(this);
};

// Line 145: range 000000000D82FB56-000000000D82FBA2
uint32_t __cdecl DungeonMatchUnit::getMatchTarget(const DungeonMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};

// Line 151: range 000000000DF3E4D4-000000000DF3E520
uint32_t __cdecl DungeonMatchUnit::getDungeonId(const DungeonMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};

// Line 157: range 000000000DD85830-000000000DD8585A
void __cdecl MpPlayMatchUnit::~MpPlayMatchUnit(MpPlayMatchUnit *const this)
{
  MpPlayMatchUnit::~MpPlayMatchUnit(this);
  operator delete(this, 0xC8uLL);
};

// Line 157: range 000000000DD857E2-000000000DD8582F
void __cdecl MpPlayMatchUnit::~MpPlayMatchUnit(MpPlayMatchUnit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpPlayMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  MatchUnitBase::~MatchUnitBase(this);
};

// Line 160: range 000000000D82FBA4-000000000D82FC6D
void __cdecl MpPlayMatchUnit::MpPlayMatchUnit(
        MpPlayMatchUnit *const this,
        proto::MatchType match_type,
        uint32_t mp_play_id)
{
  int (**v3)(...); // rdx

  MatchUnitBase::MatchUnitBase(this, match_type);
  v3 = (int (**)(...))(&`vtable for'MpPlayMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id_);
  }
  this->mp_play_id_ = mp_play_id;
  MpPlayMatchUnit::initMaxPlayers(this);
};

// Line 168: range 000000000D82FC6E-000000000D82FCBA
uint32_t __cdecl MpPlayMatchUnit::getMatchTarget(const MpPlayMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_play_id_);
  }
  return this->mp_play_id_;
};

// Line 174: range 000000000D82FCBC-000000000D82FD08
uint32_t __cdecl MpPlayMatchUnit::getMpPlayId(const MpPlayMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_play_id_);
  }
  return this->mp_play_id_;
};

// Line 180: range 000000000DD857B6-000000000DD857E0
void __cdecl MechanicusMatchUnit::~MechanicusMatchUnit(MechanicusMatchUnit *const this)
{
  MechanicusMatchUnit::~MechanicusMatchUnit(this);
  operator delete(this, 0xC8uLL);
};

// Line 180: range 000000000DD85768-000000000DD857B5
void __cdecl MechanicusMatchUnit::~MechanicusMatchUnit(MechanicusMatchUnit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MechanicusMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  MatchUnitBase::~MatchUnitBase(this);
};

// Line 183: range 000000000D82FD0A-000000000D82FDD3
void __cdecl MechanicusMatchUnit::MechanicusMatchUnit(
        MechanicusMatchUnit *const this,
        proto::MatchType match_type,
        uint32_t mechanicus_tag)
{
  int (**v3)(...); // rdx

  MatchUnitBase::MatchUnitBase(this, match_type);
  v3 = (int (**)(...))(&`vtable for'MechanicusMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mechanicus_tag_);
  }
  this->mechanicus_tag_ = mechanicus_tag;
  MechanicusMatchUnit::initMaxPlayers(this);
};

// Line 191: range 000000000D82FDD4-000000000D82FE20
uint32_t __cdecl MechanicusMatchUnit::getMatchTarget(const MechanicusMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mechanicus_tag_);
  }
  return this->mechanicus_tag_;
};

// Line 197: range 000000000D82FE22-000000000D82FE6E
uint32_t __cdecl MechanicusMatchUnit::getMechanicusTag(const MechanicusMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mechanicus_tag_);
  }
  return this->mechanicus_tag_;
};

// Line 203: range 000000000DD856DC-000000000DD8573B
void __cdecl GeneralMatchUnit::~GeneralMatchUnit(GeneralMatchUnit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GeneralMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->param_set_);
  MatchUnitBase::~MatchUnitBase(this);
};

// Line 203: range 000000000DD8573C-000000000DD85766
void __cdecl GeneralMatchUnit::~GeneralMatchUnit(GeneralMatchUnit *const this)
{
  GeneralMatchUnit::~GeneralMatchUnit(this);
  operator delete(this, 0xF8uLL);
};

// Line 206: range 000000000D82FE70-000000000D83011F
void __cdecl GeneralMatchUnit::GeneralMatchUnit(
        GeneralMatchUnit *const this,
        proto::MatchType match_type,
        const proto::AddMatchUnitReq *req)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  uint32_t matched; // edx
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 param:209";
  *(_QWORD *)(v3 + 16) = GeneralMatchUnit::GeneralMatchUnit;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  MatchUnitBase::MatchUnitBase(this, match_type);
  v6 = (int (**)(...))(&`vtable for'GeneralMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_);
  }
  this->match_id_ = 0;
  std::set<unsigned int>::set(&this->param_set_);
  matched = proto::AddMatchUnitReq::match_id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_);
  }
  this->match_id_ = matched;
  __for_range = proto::AddMatchUnitReq::match_param_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v3 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->param_set_, (const std::set<unsigned int>::value_type *)(v3 + 32));
    ++__for_begin;
  }
  GeneralMatchUnit::initMaxPlayers(this);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 218: range 000000000D830120-000000000D830133
std::set<unsigned int> *__cdecl GeneralMatchUnit::getParamSet(GeneralMatchUnit *const this)
{
  return &this->param_set_;
};

// Line 220: range 000000000D830134-000000000D830180
uint32_t __cdecl GeneralMatchUnit::getMatchTarget(const GeneralMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  return this->match_id_;
};

// Line 226: range 000000000D830182-000000000D8301CE
uint32_t __cdecl GeneralMatchUnit::getMatchId(const GeneralMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  return this->match_id_;
};

// Line 232: range 000000000DD856B0-000000000DD856DA
void __cdecl GCGMatchUnit::~GCGMatchUnit(GCGMatchUnit *const this)
{
  GCGMatchUnit::~GCGMatchUnit(this);
  operator delete(this, 0x1D0uLL);
};

// Line 232: range 000000000DD8563E-000000000DD856AF
void __cdecl GCGMatchUnit::~GCGMatchUnit(GCGMatchUnit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  proto::GCGDuelExtra::~GCGDuelExtra(&this->gcg_duel_extra);
  std::map<unsigned int,unsigned int>::~map(&this->extend_time_map_);
  MatchUnitBase::~MatchUnitBase(this);
};

// Line 241: range 000000000D8301D0-000000000D8301E3
const proto::GCGDuelExtra *__cdecl GCGMatchUnit::getGCGDetail(const GCGMatchUnit *const this)
{
  return &this->gcg_duel_extra;
};

// Line 249: range 000000000D8301E4-000000000D830230
uint32_t __cdecl GCGMatchUnit::getMatchId(const GCGMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  return this->match_id_;
};

// Line 251: range 000000000D830232-000000000D830286
uint32_t __cdecl GCGMatchUnit::getRankIdx(const GCGMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rank_idx_);
  }
  return this->rank_idx_;
};

// Line 253: range 000000000D830288-000000000D8302D4
uint32_t __cdecl GCGMatchUnit::getExtend(const GCGMatchUnit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->extend_);
  }
  return this->extend_;
};
