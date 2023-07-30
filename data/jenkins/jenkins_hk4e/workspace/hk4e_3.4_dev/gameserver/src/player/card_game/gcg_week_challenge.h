// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_week_challenge.h

// Line 40: range 00000000176B15A0-00000000176B1631
bool __cdecl GCGWeekNpcData::operator==(GCGWeekNpcData *const this, const uint32_t *npc_id)
{
  uint32_t v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v2 = this->npc_id;
  if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(npc_id);
  }
  return v2 == *npc_id;
};

// Line 46: range 00000000176B1702-00000000176B1776
void __cdecl GCGWeekChallenge::~GCGWeekChallenge(GCGWeekChallenge *const this)
{
  std::vector<GCGWeekNpcData>::~vector(&this->npc_data_vec_);
  std::map<unsigned int,unsigned int>::~map(&this->occupied_normal_npc_weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->free_normal_npc_weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->occupied_character_npc_weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->free_character_npc_weight_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->npc_quest_set_);
};

// Line 49: range 000000001721522C-000000001721542F
void __cdecl GCGWeekChallenge::GCGWeekChallenge(GCGWeekChallenge *const this, Player *player)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  std::unordered_set<unsigned int>::unordered_set(&this->npc_quest_set_);
  std::map<unsigned int,unsigned int>::map(&this->free_character_npc_weight_map_);
  std::map<unsigned int,unsigned int>::map(&this->occupied_character_npc_weight_map_);
  std::map<unsigned int,unsigned int>::map(&this->free_normal_npc_weight_map_);
  std::map<unsigned int,unsigned int>::map(&this->occupied_normal_npc_weight_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_release_gm_time_, player, &this->gcg_release_gm_time_);
  }
  this->gcg_release_gm_time_ = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->last_refresh_time_, v2, v3);
  this->last_refresh_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_gcg_level_, v2, &this->last_refresh_gcg_level_);
  }
  this->last_refresh_gcg_level_ = 0;
  std::vector<GCGWeekNpcData>::vector(&this->npc_data_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_refresh_start_week_day_, v2, &this->gm_refresh_start_week_day_);
  }
  this->gm_refresh_start_week_day_ = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->gm_refresh_start_week_day_set_time_, (((_BYTE)this + 44) & 7u) + 3, v4);
  this->gm_refresh_start_week_day_set_time_ = 0;
};
