// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_tavern_scene_builder.h

// Line 27: range 00000000176B1778-00000000176B17A6
void __cdecl GCGTavernSceneBuilder::~GCGTavernSceneBuilder(GCGTavernSceneBuilder *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->const_npc_point_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->const_npc_quest_set_);
};

// Line 30: range 0000000017215430-0000000017215550
void __cdecl GCGTavernSceneBuilder::GCGTavernSceneBuilder(GCGTavernSceneBuilder *const this, Player *player)
{
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, player, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->const_npc_quest_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distribution_id_, player, &this->distribution_id_);
  }
  this->distribution_id_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_refresh_game_time_, (((_BYTE)this + 76) & 7u) + 3, v2);
  this->last_refresh_game_time_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->const_npc_point_map_);
};
