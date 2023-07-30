// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike/roguelike_dungeon_runtime_mgr.h

// Line 34: range 0000000015A1C064-0000000015A1C3B0
RogueCell *__cdecl RogueCell::operator=(RogueCell *const this, const RogueCell *a2)
{
  uint32_t cell_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t dungeon_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  proto::RogueCellState state; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::RogueCellType type; // ecx
  char v12; // dl
  __int64 v13; // rdx
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int> *p_diff_montser_pool_map; // rsi
  data::RogueMonsterPoolDifficultyType select_diff_type; // ecx
  char v16; // al
  const RogueCell *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  common::milog::DescribalBase::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v18->cell_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->cell_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cell_id);
  }
  cell_id = a2->cell_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cell_id, a2, &this->cell_id);
  }
  this->cell_id = cell_id;
  v4 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->dungeon_id);
  }
  dungeon_id = v18->dungeon_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->dungeon_id, v4, v7);
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->state);
  }
  state = v18->state;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->state, v4, &this->state);
  }
  this->state = state;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->type);
  }
  type = v18->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->type, v10, v13);
  this->type = type;
  std::vector<int>::operator=(&this->guard_gadget_group_point_vec, &v18->guard_gadget_group_point_vec);
  std::map<data::RogueGadgetDirType,std::weak_ptr<Gadget>>::operator=(&this->door_entity_map, &v18->door_entity_map);
  std::map<data::RogueCreateGadgetType,std::weak_ptr<Gadget>>::operator=(
    &this->operator_gadget_map,
    &v18->operator_gadget_map);
  p_diff_montser_pool_map = &v18->diff_montser_pool_map;
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::operator=(
    &this->diff_montser_pool_map,
    &v18->diff_montser_pool_map);
  if ( *(_BYTE *)(((unsigned __int64)&v18->select_diff_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->select_diff_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->select_diff_type);
  }
  select_diff_type = v18->select_diff_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->select_diff_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_diff_montser_pool_map) = v16 != 0;
    __asan_report_store4(&this->select_diff_type, p_diff_montser_pool_map, &this->select_diff_type);
  }
  this->select_diff_type = select_diff_type;
  std::vector<std::weak_ptr<Gadget>>::operator=(&this->guard_gadget_wtr_vec, &v18->guard_gadget_wtr_vec);
  std::unordered_map<unsigned int,int>::operator=(
    &this->guard_entity_id_2_point_id_map,
    &v18->guard_entity_id_2_point_id_map);
  return this;
};

// Line 34: range 0000000015A1BD2C-0000000015A1BF2A
void __cdecl RogueCell::RogueCell(RogueCell *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'RogueCell + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cell_id, v1, &this->cell_id);
  }
  this->cell_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->dungeon_id, v3, v4);
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v3, &this->state);
  }
  this->state = ROGUE_CELL_NONE;
  v5 = (((_BYTE)this + 20) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->type, v5, v6);
  this->type = ROGUE_CELL_TYPE_NONE;
  std::vector<int>::vector(&this->guard_gadget_group_point_vec);
  std::map<data::RogueGadgetDirType,std::weak_ptr<Gadget>>::map(&this->door_entity_map);
  std::map<data::RogueCreateGadgetType,std::weak_ptr<Gadget>>::map(&this->operator_gadget_map);
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::map(&this->diff_montser_pool_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->select_diff_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_diff_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_diff_type, v5, &this->select_diff_type);
  }
  this->select_diff_type = ROGUE_MONSTER_DIFFICULTY_ELITE_EASY;
  std::vector<std::weak_ptr<Gadget>>::vector(&this->guard_gadget_wtr_vec);
  std::unordered_map<unsigned int,int>::unordered_map(&this->guard_entity_id_2_point_id_map);
};

// Line 34: range 0000000015B6BA50-0000000015B6BDCC
void __cdecl RogueCell::RogueCell(RogueCell *const this, RogueCell *a2)
{
  int (**v2)(...); // rdx
  uint32_t cell_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  __int64 v8; // rdx
  proto::RogueCellState state; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::RogueCellType type; // ecx
  char v13; // dl
  __int64 v14; // rdx
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int> *p_diff_montser_pool_map; // rsi
  data::RogueMonsterPoolDifficultyType select_diff_type; // ecx
  char v17; // al
  RogueCell *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  common::milog::DescribalBase::DescribalBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'RogueCell + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cell_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cell_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cell_id);
  }
  cell_id = a2->cell_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cell_id, a2, &this->cell_id);
  }
  this->cell_id = cell_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->dungeon_id);
  }
  dungeon_id = v18->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->dungeon_id, v5, v8);
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->state);
  }
  state = v18->state;
  v10 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->state, v5, &this->state);
  }
  this->state = state;
  v11 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->type);
  }
  type = v18->type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->type, v11, v14);
  this->type = type;
  std::vector<int>::vector(&this->guard_gadget_group_point_vec, &v18->guard_gadget_group_point_vec);
  std::map<data::RogueGadgetDirType,std::weak_ptr<Gadget>>::map(&this->door_entity_map, &v18->door_entity_map);
  std::map<data::RogueCreateGadgetType,std::weak_ptr<Gadget>>::map(
    &this->operator_gadget_map,
    &v18->operator_gadget_map);
  p_diff_montser_pool_map = &v18->diff_montser_pool_map;
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::map(
    &this->diff_montser_pool_map,
    &v18->diff_montser_pool_map);
  if ( *(_BYTE *)(((unsigned __int64)&v18->select_diff_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->select_diff_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->select_diff_type);
  }
  select_diff_type = v18->select_diff_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->select_diff_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_diff_montser_pool_map) = v17 != 0;
    __asan_report_store4(&this->select_diff_type, p_diff_montser_pool_map, &this->select_diff_type);
  }
  this->select_diff_type = select_diff_type;
  std::vector<std::weak_ptr<Gadget>>::vector(&this->guard_gadget_wtr_vec, &v18->guard_gadget_wtr_vec);
  std::unordered_map<unsigned int,int>::unordered_map(
    &this->guard_entity_id_2_point_id_map,
    &v18->guard_entity_id_2_point_id_map);
};

// Line 34: range 0000000015A1BF2C-0000000015A1BFD3
void __cdecl RogueCell::~RogueCell(RogueCell *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueCell + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,int>::~unordered_map(&this->guard_entity_id_2_point_id_map);
  std::vector<std::weak_ptr<Gadget>>::~vector(&this->guard_gadget_wtr_vec);
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::~map(&this->diff_montser_pool_map);
  std::map<data::RogueCreateGadgetType,std::weak_ptr<Gadget>>::~map(&this->operator_gadget_map);
  std::map<data::RogueGadgetDirType,std::weak_ptr<Gadget>>::~map(&this->door_entity_map);
  std::vector<int>::~vector(&this->guard_gadget_group_point_vec);
};

// Line 97: range 0000000016D64ACA-0000000016D64AF4
void __cdecl RogueTeam::RogueTeam(RogueTeam *const this)
{
  std::vector<unsigned long>::vector(&this->onstage_mirror_avatar_guid_vec);
  std::vector<unsigned long>::vector(&this->backstage_mirror_avatar_guid_vec);
};

// Line 97: range 0000000016D64AF6-0000000016D64B20
void __cdecl RogueTeam::~RogueTeam(RogueTeam *const this)
{
  std::vector<unsigned long>::~vector(&this->backstage_mirror_avatar_guid_vec);
  std::vector<unsigned long>::~vector(&this->onstage_mirror_avatar_guid_vec);
};

// Line 105: range 0000000015A1823C-0000000015A18266
void __cdecl RogueTeam::clear(RogueTeam *const this)
{
  std::vector<unsigned long>::clear(&this->onstage_mirror_avatar_guid_vec);
  std::vector<unsigned long>::clear(&this->backstage_mirror_avatar_guid_vec);
};

// Line 128: range 0000000016D64D40-0000000016D651B2
void __cdecl RogueLikeDungeonRuntimeMgr::RogueLikeDungeonRuntimeMgr(
        RogueLikeDungeonRuntimeMgr *const this,
        Player *player,
        RoguelikeDungeonActivity *activity)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  std::enable_shared_from_this<RogueLikeDungeonRuntimeMgr>::enable_shared_from_this(&this->std::enable_shared_from_this<RogueLikeDungeonRuntimeMgr>);
  v3 = (int (**)(...))(&`vtable for'RogueLikeDungeonRuntimeMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_RogueLikeDungeonRuntimeMgr = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_, player);
  this->activity_ = activity;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id_, player, &this->stage_id_);
  }
  this->stage_id_ = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->dungeon_id_, v4, v5);
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level_, v4, &this->cur_level_);
  }
  this->cur_level_ = 0;
  Vector3::Vector3(&this->last_player_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_player_rot_, 0.0, 0.0, 0.0);
  v6 = ((_BYTE)this + 76) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_valid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_valid_, v6, v7);
  this->is_valid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_weight_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_weight_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_weight_config_id_, v6, &this->dungeon_weight_config_id_);
  }
  this->dungeon_weight_config_id_ = 0;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->dungeon_scene_wtr_);
  std::weak_ptr<DungeonScene>::weak_ptr(&this->next_dungeon_scene_wtr_);
  std::map<unsigned int,RogueCell>::map(&this->rogue_cell_map_);
  RogueTeam::RogueTeam(&this->rogue_team_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_cell_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_cell_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_cell_id_, v6, &this->cur_cell_id_);
  }
  this->cur_cell_id_ = 0;
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->brakeages_set_);
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->trap_set_);
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->blast_bucket_set_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->brakeage_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->trap_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->byobu_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->ball_group_pair_gadget_id_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->explored_cell_set_);
  if ( *(char *)(((unsigned __int64)&this->is_ban_spring_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_spring_, v6, &this->is_ban_spring_);
  this->is_ban_spring_ = 0;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->blast_bucket_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::unordered_map(&this->blast_bucket_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->brakeages_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::unordered_map(&this->brakeages_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->trap_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::unordered_map(&this->trap_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->byobu_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::unordered_map(&this->byobu_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->ball_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::unordered_map(&this->ball_group_pair_map_);
  std::map<data::RogueCellType,std::unordered_set<unsigned int>>::map(&this->cell_type_to_cell_id_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->guard_entity_id_2_cell_id_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
};

// Line 129: range 00000000170953A8-00000000170953D2
void __cdecl RogueLikeDungeonRuntimeMgr::~RogueLikeDungeonRuntimeMgr(RogueLikeDungeonRuntimeMgr *const this)
{
  RogueLikeDungeonRuntimeMgr::~RogueLikeDungeonRuntimeMgr(this);
  operator delete(this, 0x538uLL);
};

// Line 129: range 000000001709519A-00000000170953A7
void __cdecl RogueLikeDungeonRuntimeMgr::~RogueLikeDungeonRuntimeMgr(RogueLikeDungeonRuntimeMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueLikeDungeonRuntimeMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueLikeDungeonRuntimeMgr = v2;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->guard_entity_id_2_cell_id_map_);
  std::map<data::RogueCellType,std::unordered_set<unsigned int>>::~map(&this->cell_type_to_cell_id_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::~unordered_map(&this->ball_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->ball_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::~unordered_map(&this->byobu_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->byobu_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::~unordered_map(&this->trap_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->trap_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::~unordered_map(&this->brakeages_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->brakeages_entity_id_2_group_pair_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<Gadget>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<Gadget>>>>::~unordered_map(&this->blast_bucket_group_pair_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->blast_bucket_entity_id_2_group_pair_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->explored_cell_set_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->ball_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->byobu_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->trap_group_pair_gadget_id_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->brakeage_group_pair_gadget_id_map_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->blast_bucket_set_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->trap_set_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->brakeages_set_);
  RogueTeam::~RogueTeam(&this->rogue_team_);
  std::map<unsigned int,RogueCell>::~map(&this->rogue_cell_map_);
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->next_dungeon_scene_wtr_);
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->dungeon_scene_wtr_);
  std::enable_shared_from_this<RogueLikeDungeonRuntimeMgr>::~enable_shared_from_this(&this->std::enable_shared_from_this<RogueLikeDungeonRuntimeMgr>);
};

// Line 143: range 00000000149EE490-00000000149EE4DD
bool __cdecl RogueLikeDungeonRuntimeMgr::isValid(RogueLikeDungeonRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_valid_);
  }
  return this->is_valid_;
};

// Line 165: range 0000000016D651B4-0000000016D651D3
uint32_t __cdecl RogueLikeDungeonRuntimeMgr::getExploredCellCount(RogueLikeDungeonRuntimeMgr *const this)
{
  return std::unordered_set<unsigned int>::size(&this->explored_cell_set_);
};

// Line 166: range 0000000015A18268-0000000015A1827B
const RogueTeam *__cdecl RogueLikeDungeonRuntimeMgr::getRogueTeam(const RogueLikeDungeonRuntimeMgr *const this)
{
  return &this->rogue_team_;
};

// Line 189: range 0000000015A1827C-0000000015A1834E
bool __fastcall RogueLikeDungeonRuntimeMgr::isCellAssigned(
        RogueLikeDungeonRuntimeMgr *const this,
        uint32_t dungeon_id,
        uint32_t cell_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 cell_id:189";
  *(_QWORD *)(v3 + 16) = RogueLikeDungeonRuntimeMgr::isCellAssigned;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cell_id;
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,RogueCell>,unsigned int>(
             &this->rogue_cell_map_,
             (const unsigned int *)(v3 + 32));
  if ( v8 == (char *)v3 )
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

// Line 214: range 0000000015A18350-0000000015A18397
uint32_t __cdecl RogueLikeDungeonRuntimeMgr::getStageId(const RogueLikeDungeonRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  return this->stage_id_;
};

// Line 215: range 0000000015A18398-0000000015A183E7
uint32_t __cdecl RogueLikeDungeonRuntimeMgr::getDungeonId(const RogueLikeDungeonRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};

// Line 216: range 0000000015A183E8-0000000015A1842F
uint32_t __cdecl RogueLikeDungeonRuntimeMgr::getCurLevel(const RogueLikeDungeonRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_level_);
  }
  return this->cur_level_;
};

// Line 226: range 0000000016D651D4-0000000016D65220
uint32_t __cdecl RogueLikeDungeonRuntimeMgr::getCurCellId(const RogueLikeDungeonRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_cell_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_cell_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_cell_id_);
  }
  return this->cur_cell_id_;
};

// Line 14420: range 0000000015A18136-0000000015A1823B
bool __cdecl RogueCell::isCellFinish(RogueCell *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->type);
  }
  if ( this->type == ROGUE_CELL_TYPE_ELITE || this->type == ROGUE_CELL_TYPE_NORMAL || this->type == ROGUE_CELL_TYPE_BOSS )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state);
    }
    return this->state == ROGUE_CELL_FINISH;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state);
    }
    return this->state == ROGUE_CELL_SUCCESS || this->state == ROGUE_CELL_FINISH;
  }
};
