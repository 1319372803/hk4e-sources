// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/irodori_chess/irodori_tower_defense_play.h

// Line 26: range 000000001623ADA4-000000001623AEC1
IrodoriChessDungeonContext *__cdecl IrodoriChessDungeonContext::operator=(
        IrodoriChessDungeonContext *const this,
        const IrodoriChessDungeonContext *a2)
{
  uint32_t level_id; // ecx
  bool is_hard_map; // cl

  std::set<unsigned int>::operator=(&this->card_id_set, &a2->card_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_hard_map);
  }
  is_hard_map = a2->is_hard_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_hard_map);
  }
  this->is_hard_map = is_hard_map;
  return this;
};

// Line 26: range 000000001461F5F4-000000001461F68C
void __cdecl IrodoriChessDungeonContext::IrodoriChessDungeonContext(IrodoriChessDungeonContext *const this)
{
  std::set<unsigned int>::set(&this->card_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_hard_map);
  }
  this->is_hard_map = 0;
};

// Line 26: range 00000000162C7484-00000000162C759E
void __cdecl IrodoriChessDungeonContext::IrodoriChessDungeonContext(
        IrodoriChessDungeonContext *const this,
        IrodoriChessDungeonContext *a2)
{
  uint32_t level_id; // ecx
  bool is_hard_map; // cl

  std::set<unsigned int>::set(&this->card_id_set, &a2->card_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_hard_map);
  }
  is_hard_map = a2->is_hard_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_hard_map);
  }
  this->is_hard_map = is_hard_map;
};

// Line 26: range 000000001472092E-0000000014720A48
void __cdecl IrodoriChessDungeonContext::IrodoriChessDungeonContext(
        IrodoriChessDungeonContext *const this,
        const IrodoriChessDungeonContext *a2)
{
  uint32_t level_id; // ecx
  bool is_hard_map; // cl

  std::set<unsigned int>::set(&this->card_id_set, &a2->card_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_hard_map);
  }
  is_hard_map = a2->is_hard_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_hard_map);
  }
  this->is_hard_map = is_hard_map;
};

// Line 26: range 000000001461F68E-000000001461F6A8
void __cdecl IrodoriChessDungeonContext::~IrodoriChessDungeonContext(IrodoriChessDungeonContext *const this)
{
  std::set<unsigned int>::~set(&this->card_id_set);
};

// Line 34: range 000000001623AB0C-000000001623AB3A
void __cdecl IrodoriChessMystery::~IrodoriChessMystery(IrodoriChessMystery *const this)
{
  std::vector<unsigned int>::~vector(&this->entrance_point_id_vec);
  std::vector<unsigned int>::~vector(&this->exit_point_id_vec);
};

// Line 43: range 000000001637D19C-000000001637D1FD
void __cdecl IrodoriChessCardInfo::~IrodoriChessCardInfo(IrodoriChessCardInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessCardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,std::shared_ptr<IrodoriChessEffectBase>>::~map(&this->effect_map_);
  std::enable_shared_from_this<IrodoriChessCardInfo>::~enable_shared_from_this(&this->std::enable_shared_from_this<IrodoriChessCardInfo>);
};

// Line 46: range 000000001623A9DA-000000001623AABA
void __cdecl IrodoriChessCardInfo::IrodoriChessCardInfo(
        IrodoriChessCardInfo *const this,
        IrodoriTowerDefensePlay *play)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  std::enable_shared_from_this<IrodoriChessCardInfo>::enable_shared_from_this(&this->std::enable_shared_from_this<IrodoriChessCardInfo>);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessCardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::shared_ptr<IrodoriChessEffectBase>>::map(&this->effect_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->play_);
  this->play_ = play;
};

// Line 49: range 0000000015199AE6-0000000015199B4D
void __cdecl IrodoriChessMystery::IrodoriChessMystery(IrodoriChessMystery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->map_id = 0;
  std::vector<unsigned int>::vector(&this->exit_point_id_vec);
  std::vector<unsigned int>::vector(&this->entrance_point_id_vec);
};

// Line 56: range 000000001623AABC-000000001623AB0A
void __cdecl IrodoriChessCardInfo::setCardId(IrodoriChessCardInfo *const this, uint32_t card_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = card_id__out;
};

// Line 69: range 0000000015199B86-0000000015199DCA
void __cdecl IrodoriTowerDefensePlay::IrodoriTowerDefensePlay(
        IrodoriTowerDefensePlay *const this,
        SceneMultistagePlay *play)
{
  int (**v2)(...); // rdx
  int (**v3)(...); // rdx

  TowerDefensePlayBase::TowerDefensePlayBase(this, play);
  v2 = (int (**)(...))(&`vtable for'IrodoriTowerDefensePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  v3 = (int (**)(...))(&`vtable for'IrodoriTowerDefensePlay + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v3;
  IrodoriChessDungeonContext::IrodoriChessDungeonContext(&this->dungeon_context_);
  IrodoriChessMystery::IrodoriChessMystery(&this->mystery_data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_refund_by_cost_factor_);
  }
  this->max_refund_by_cost_factor_ = 0;
  std::set<std::string>::set(&this->card_ability_group_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_tower_limit_delta_);
  }
  this->total_tower_limit_delta_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->tower_limit_delta_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_uid_);
  }
  this->player_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->building_points_);
  }
  this->building_points_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_score_);
  }
  this->settle_score_ = 0;
  std::map<unsigned int,std::shared_ptr<IrodoriChessCardInfo>>::map(&this->card_info_map_);
};

// Line 70: range 000000001635B32E-000000001635B410
void __cdecl IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay(IrodoriTowerDefensePlay *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriTowerDefensePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  v2 = (int (**)(...))(&`vtable for'IrodoriTowerDefensePlay + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v2;
  std::map<unsigned int,std::shared_ptr<IrodoriChessCardInfo>>::~map(&this->card_info_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->tower_limit_delta_map_);
  std::set<std::string>::~set(&this->card_ability_group_set_);
  IrodoriChessMystery::~IrodoriChessMystery(&this->mystery_data_);
  IrodoriChessDungeonContext::~IrodoriChessDungeonContext(&this->dungeon_context_);
  TowerDefensePlayBase::~TowerDefensePlayBase(this);
};

// Line 70: range 000000001635B41A-000000001635B444
void __cdecl IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay(IrodoriTowerDefensePlay *const this)
{
  IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay(this);
  operator delete(this, 0x1E8uLL);
};

// Line 70: range 000000001635B411-000000001635B415
void __fastcall `non-virtual thunk to'IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay(IrodoriTowerDefensePlay *this)
{
  IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay((IrodoriTowerDefensePlay *)((char *)this - 8));
};

// Line 70: range 000000001635B445-000000001635B449
void __fastcall `non-virtual thunk to'IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay(IrodoriTowerDefensePlay *this)
{
  IrodoriTowerDefensePlay::~IrodoriTowerDefensePlay((IrodoriTowerDefensePlay *)((char *)this - 8));
};

// Line 97: range 0000000015199DCC-0000000015199DDF
const std::set<unsigned int> *__cdecl IrodoriTowerDefensePlay::getSelectedCardsSet(
        const IrodoriTowerDefensePlay *const this)
{
  return &this->dungeon_context_.card_id_set;
};

// Line 130: range 0000000015199DE0-0000000015199DF3
const std::set<unsigned int> *__cdecl IrodoriTowerDefensePlay::getEquipedCardIdSet(
        const IrodoriTowerDefensePlay *const this)
{
  return &this->dungeon_context_.card_id_set;
};

// Line 131: range 0000000015199DF4-0000000015199E07
const IrodoriChessMystery *__cdecl IrodoriTowerDefensePlay::getMysteryData(const IrodoriTowerDefensePlay *const this)
{
  return &this->mystery_data_;
};

// Line 146: range 00000000149EE62C-00000000149EE678
uint32_t __cdecl IrodoriTowerDefensePlay::getPlayerUid(const IrodoriTowerDefensePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->player_uid_;
};

// Line 147: range 00000000149EE67A-00000000149EE6CE
uint32_t __cdecl IrodoriTowerDefensePlay::getBuildingPoints(const IrodoriTowerDefensePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->building_points_;
};

// Line 148: range 0000000015199E08-0000000015199E54
uint32_t __cdecl IrodoriTowerDefensePlay::getSettleScore(const IrodoriTowerDefensePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->settle_score_;
};
