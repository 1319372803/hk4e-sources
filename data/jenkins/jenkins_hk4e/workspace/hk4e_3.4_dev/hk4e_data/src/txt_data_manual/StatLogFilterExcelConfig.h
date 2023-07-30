// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/StatLogFilterExcelConfig.h

// Line 38: range 000000000CE0CA9E-000000000CE0CBAB
void __cdecl CombatStatLogFilterConfig::CombatStatLogFilterConfig(CombatStatLogFilterConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  std::vector<CombatStatLogUidFilter>::vector(&this->uid_filter_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_player_level, v1);
  }
  this->min_player_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_player_level, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->max_player_level = 0;
  std::optional<std::unordered_set<unsigned int>>::optional(&this->world_id_set);
  std::optional<std::unordered_set<unsigned int>>::optional(&this->dungeon_id_set);
  std::optional<std::unordered_set<unsigned int>>::optional(&this->monster_id_set);
};

// Line 38: range 000000000D360F88-000000000D361170
void __cdecl CombatStatLogFilterConfig::CombatStatLogFilterConfig(
        CombatStatLogFilterConfig *const this,
        CombatStatLogFilterConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  std::vector<CombatStatLogUidFilter> *p_uid_filter_vec; // rsi
  uint32_t min_player_level; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t max_player_level; // ecx
  char v9; // dl
  CombatStatLogFilterConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  p_uid_filter_vec = &v10->uid_filter_vec;
  std::vector<CombatStatLogUidFilter>::vector(&this->uid_filter_vec, &v10->uid_filter_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v10->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->min_player_level);
  }
  min_player_level = v10->min_player_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_uid_filter_vec) = v6 != 0;
    __asan_report_store4(&this->min_player_level, p_uid_filter_vec);
  }
  this->min_player_level = min_player_level;
  v7 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->max_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->max_player_level);
  }
  max_player_level = v10->max_player_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->max_player_level, v7);
  }
  this->max_player_level = max_player_level;
  std::optional<std::unordered_set<unsigned int>>::optional(&this->world_id_set, &v10->world_id_set);
  std::optional<std::unordered_set<unsigned int>>::optional(&this->dungeon_id_set, &v10->dungeon_id_set);
  std::optional<std::unordered_set<unsigned int>>::optional(&this->monster_id_set, &v10->monster_id_set);
};

// Line 38: range 000000000CE0CBAC-000000000CE0CBFC
void __cdecl CombatStatLogFilterConfig::~CombatStatLogFilterConfig(CombatStatLogFilterConfig *const this)
{
  std::optional<std::unordered_set<unsigned int>>::~optional(&this->monster_id_set);
  std::optional<std::unordered_set<unsigned int>>::~optional(&this->dungeon_id_set);
  std::optional<std::unordered_set<unsigned int>>::~optional(&this->world_id_set);
  std::vector<CombatStatLogUidFilter>::~vector(&this->uid_filter_vec);
};
