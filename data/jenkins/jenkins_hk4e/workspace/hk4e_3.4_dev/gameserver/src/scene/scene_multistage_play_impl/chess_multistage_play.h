// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/chess_multistage_play.h

// Line 38: range 00000000182879CC-0000000018287B69
void __cdecl ChessPlayer::ChessPlayer(ChessPlayer *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->uid = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->chess_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chess_level >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->chess_level, v2, v3);
  this->chess_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->building_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->building_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->building_points, v2, (_BYTE)this + 8);
  }
  this->building_points = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->free_refresh_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_limit >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->free_refresh_limit, v4, v5);
  this->free_refresh_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->free_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->free_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->free_refresh_count, v4, (_BYTE)this + 16);
  }
  this->free_refresh_count = 0;
  std::vector<ChessCandidateCard>::vector(&this->candidate_card_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->candidate_index, v4, (_BYTE)this + 48);
  }
  this->candidate_index = 0;
};

// Line 38: range 0000000018238D24-0000000018238D42
void __cdecl ChessPlayer::~ChessPlayer(ChessPlayer *const this)
{
  std::vector<ChessCandidateCard>::~vector(&this->candidate_card_vec);
};

// Line 50: range 00000000180B5D66-00000000180B5DC4
ChessMystery *__cdecl ChessMystery::operator=(ChessMystery *const this, const ChessMystery *a2)
{
  std::map<unsigned int,unsigned int>::operator=(&this->entrance_point_map, &a2->entrance_point_map);
  std::vector<unsigned int>::operator=(&this->exit_point_id_vec, &a2->exit_point_id_vec);
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::operator=(
    &this->pool_entrance_point_map,
    &a2->pool_entrance_point_map);
  return this;
};

// Line 50: range 00000000149EE418-00000000149EE452
void __cdecl ChessMystery::ChessMystery(ChessMystery *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->entrance_point_map);
  std::vector<unsigned int>::vector(&this->exit_point_id_vec);
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::map(&this->pool_entrance_point_map);
};

// Line 50: range 00000000149F1428-00000000149F14BB
void __cdecl ChessMystery::ChessMystery(ChessMystery *const this, const ChessMystery *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->entrance_point_map, &a2->entrance_point_map);
  std::vector<unsigned int>::vector(&this->exit_point_id_vec, &a2->exit_point_id_vec);
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::map(
    &this->pool_entrance_point_map,
    &a2->pool_entrance_point_map);
};

// Line 50: range 00000000149EE454-00000000149EE48E
void __cdecl ChessMystery::~ChessMystery(ChessMystery *const this)
{
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::~map(&this->pool_entrance_point_map);
  std::vector<unsigned int>::~vector(&this->exit_point_id_vec);
  std::map<unsigned int,unsigned int>::~map(&this->entrance_point_map);
};

// Line 59: range 00000000183267DA-00000000183268DB
void __cdecl ChessMultistagePlay::~ChessMultistagePlay(ChessMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,unsigned int>::~map(&this->kill_stage_cost_time_map_);
  std::vector<ChessSelectedCard>::~vector(&this->selected_card_vec_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->standby_card_pool_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->active_card_pool_map_);
  std::map<unsigned int,unsigned int>::~map(&this->quality_weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->curse_card_weight_map_);
  ChessMystery::~ChessMystery(&this->chess_mystery_);
  std::map<unsigned int,unsigned int>::~map(&this->round_escaped_map_);
  std::set<unsigned int>::~set(&this->ban_card_tag_set_);
  std::unordered_map<unsigned int,ChessPlayer>::~unordered_map(&this->chess_player_map_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 59: range 00000000183268DC-0000000018326906
void __cdecl ChessMultistagePlay::~ChessMultistagePlay(ChessMultistagePlay *const this)
{
  ChessMultistagePlay::~ChessMultistagePlay(this);
  operator delete(this, 0x3B8uLL);
};

// Line 62: range 0000000015D4302A-0000000015D43434
void __cdecl ChessMultistagePlay::ChessMultistagePlay(
        ChessMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'ChessMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->chess_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chess_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chess_map_id_, scene, (_BYTE)this + 96);
  }
  this->chess_map_id_ = 0;
  v5 = ((_BYTE)this + 100) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_teach_, v5, v6);
  this->is_teach_ = 0;
  std::unordered_map<unsigned int,ChessPlayer>::unordered_map(&this->chess_player_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_round_, v5, (_BYTE)this - 96);
  }
  this->total_round_ = 0;
  std::set<unsigned int>::set(&this->ban_card_tag_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_monsters_, v5, (_BYTE)this - 40);
  }
  this->left_monsters_ = 0;
  v7 = (((_BYTE)this - 36) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->escaped_monsters_, v7, v8);
  this->escaped_monsters_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_escapable_monsters_, v7, (_BYTE)this - 32);
  }
  this->max_escapable_monsters_ = 0;
  v9 = (((_BYTE)this - 28) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3)
                                                         + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->stage_bonus_building_points_, v9, v10);
  this->stage_bonus_building_points_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monsters_, v9, (_BYTE)this - 24);
  }
  this->kill_monsters_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->round_escaped_map_);
  ChessMystery::ChessMystery(&this->chess_mystery_);
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_chess_level_, v9, (_BYTE)this - 104);
  }
  this->valid_chess_level_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->curse_card_weight_map_);
  std::map<unsigned int,unsigned int>::map(&this->quality_weight_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->active_card_pool_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->standby_card_pool_map_);
  std::vector<ChessSelectedCard>::vector(&this->selected_card_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_index_, v9, (_BYTE)this + 120);
  }
  this->pick_index_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->kill_stage_cost_time_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_stage_cost_time_, v9, (_BYTE)this - 80);
  }
  this->kill_stage_cost_time_ = 0;
};

// Line 64: range 00000000180B5738-00000000180B5746
proto::MultistagePlayType __cdecl ChessMultistagePlay::getPlayType(const ChessMultistagePlay *const this)
{
  return 5;
};

// Line 134: range 00000000180B5748-00000000180B57AB
uint32_t __cdecl ChessMultistagePlay::getNextPickIndex(ChessMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return ++this->pick_index_;
};
