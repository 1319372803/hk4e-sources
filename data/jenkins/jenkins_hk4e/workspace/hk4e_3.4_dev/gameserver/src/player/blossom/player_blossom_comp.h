// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/blossom/player_blossom_comp.h

// Line 41: range 000000001721947A-0000000017219667
void __cdecl BlossomCircleCampInfo::BlossomCircleCampInfo(BlossomCircleCampInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->refresh_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->circle_camp_id, v2, v3);
  this->circle_camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round, v2, &this->round);
  }
  this->round = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->state, v4, v5);
  this->state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress, v4, &this->progress);
  }
  this->progress = 0;
  v6 = ((_BYTE)this + 20) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_guide_opened, v6, v7);
  this->is_guide_opened = 0;
  std::set<unsigned int>::set(&this->update_round_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_world_level, v6, &this->valid_world_level);
  }
  this->valid_world_level = 0;
  std::set<unsigned int>::set(&this->delay_unload_camp_set);
};

// Line 41: range 00000000173EE8EC-00000000173EEC88
void __cdecl BlossomCircleCampInfo::BlossomCircleCampInfo(BlossomCircleCampInfo *const this, BlossomCircleCampInfo *a2)
{
  uint32_t refresh_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t circle_camp_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t round; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t state; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t progress; // ecx
  char v15; // al
  __int64 v16; // rsi
  bool is_guide_opened; // cl
  char v18; // dl
  __int64 v19; // rdx
  std::set<unsigned int> *p_update_round_set; // rsi
  uint32_t valid_world_level; // ecx
  char v22; // al
  BlossomCircleCampInfo *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  refresh_id = a2->refresh_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->refresh_id = refresh_id;
  v4 = (((_BYTE)v23 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->circle_camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->circle_camp_id);
  }
  circle_camp_id = v23->circle_camp_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->circle_camp_id, v4, v7);
  this->circle_camp_id = circle_camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->round);
  }
  round = v23->round;
  v9 = *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->round, v4, &this->round);
  }
  this->round = round;
  v10 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->state);
  }
  state = v23->state;
  v12 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->state, v10, v13);
  this->state = state;
  if ( *(_BYTE *)(((unsigned __int64)&v23->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->progress);
  }
  progress = v23->progress;
  v15 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&this->progress, v10, &this->progress);
  }
  this->progress = progress;
  v16 = ((_BYTE)v23 + 20) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v23->is_guide_opened >> 3) + 0x7FFF8000) != 0
    && (char)v16 >= *(_BYTE *)(((unsigned __int64)&v23->is_guide_opened >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v23->is_guide_opened);
  }
  is_guide_opened = v23->is_guide_opened;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_guide_opened, v16, v19);
  this->is_guide_opened = is_guide_opened;
  p_update_round_set = &v23->update_round_set;
  std::set<unsigned int>::set(&this->update_round_set, &v23->update_round_set);
  if ( *(_BYTE *)(((unsigned __int64)&v23->valid_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->valid_world_level);
  }
  valid_world_level = v23->valid_world_level;
  v22 = *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_update_round_set) = v22 != 0;
    __asan_report_store4(&this->valid_world_level, p_update_round_set, &this->valid_world_level);
  }
  this->valid_world_level = valid_world_level;
  std::set<unsigned int>::set(&this->delay_unload_camp_set, &v23->delay_unload_camp_set);
};

// Line 41: range 00000000172199CE-0000000017219D91
void __cdecl BlossomCircleCampInfo::BlossomCircleCampInfo(
        BlossomCircleCampInfo *const this,
        const BlossomCircleCampInfo *a2)
{
  uint32_t refresh_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t circle_camp_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t round; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t state; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t progress; // ecx
  char v15; // al
  __int64 v16; // rsi
  bool is_guide_opened; // cl
  char v18; // dl
  __int64 v19; // rdx
  std::set<unsigned int> *p_update_round_set; // rsi
  uint32_t valid_world_level; // ecx
  char v22; // al
  const BlossomCircleCampInfo *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  refresh_id = a2->refresh_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->refresh_id = refresh_id;
  v4 = (((_BYTE)v23 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->circle_camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->circle_camp_id);
  }
  circle_camp_id = v23->circle_camp_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->circle_camp_id, v4, v7);
  this->circle_camp_id = circle_camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->round);
  }
  round = v23->round;
  v9 = *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->round, v4, &this->round);
  }
  this->round = round;
  v10 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->state);
  }
  state = v23->state;
  v12 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->state, v10, v13);
  this->state = state;
  if ( *(_BYTE *)(((unsigned __int64)&v23->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->progress);
  }
  progress = v23->progress;
  v15 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&this->progress, v10, &this->progress);
  }
  this->progress = progress;
  v16 = ((_BYTE)v23 + 20) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v23->is_guide_opened >> 3) + 0x7FFF8000) != 0
    && (char)v16 >= *(_BYTE *)(((unsigned __int64)&v23->is_guide_opened >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v23->is_guide_opened);
  }
  is_guide_opened = v23->is_guide_opened;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_guide_opened, v16, v19);
  this->is_guide_opened = is_guide_opened;
  p_update_round_set = &v23->update_round_set;
  std::set<unsigned int>::set(&this->update_round_set, &v23->update_round_set);
  if ( *(_BYTE *)(((unsigned __int64)&v23->valid_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->valid_world_level);
  }
  valid_world_level = v23->valid_world_level;
  v22 = *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_update_round_set) = v22 != 0;
    __asan_report_store4(&this->valid_world_level, p_update_round_set, &this->valid_world_level);
  }
  this->valid_world_level = valid_world_level;
  std::set<unsigned int>::set(&this->delay_unload_camp_set, &v23->delay_unload_camp_set);
};

// Line 41: range 0000000017219668-0000000017219696
void __cdecl BlossomCircleCampInfo::~BlossomCircleCampInfo(BlossomCircleCampInfo *const this)
{
  std::set<unsigned int>::~set(&this->delay_unload_camp_set);
  std::set<unsigned int>::~set(&this->update_round_set);
};

// Line 57: range 000000001721A23A-000000001721A2A2
void __cdecl BlossomRefreshInfo::BlossomRefreshInfo(BlossomRefreshInfo *const this)
{
  __int64 v1; // rsi
  uint32_t *p_last_refresh_time; // rdx

  std::map<unsigned int,BlossomCircleCampInfo>::map(&this->circle_camp_info_map);
  p_last_refresh_time = &this->last_refresh_time;
  if ( *(_BYTE *)(((unsigned __int64)p_last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time, v1, p_last_refresh_time);
  }
  this->last_refresh_time = 0;
  std::set<unsigned int>::set(&this->used_camp_id_set);
};

// Line 57: range 00000000173F2B86-00000000173F2C5E
void __cdecl BlossomRefreshInfo::BlossomRefreshInfo(BlossomRefreshInfo *const this, const BlossomRefreshInfo *a2)
{
  uint32_t last_refresh_time; // ecx
  char v3; // al
  const BlossomRefreshInfo *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::map<unsigned int,BlossomCircleCampInfo>::map(&this->circle_camp_info_map, &a2->circle_camp_info_map);
  if ( *(_BYTE *)(((unsigned __int64)&v4->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->last_refresh_time);
  }
  last_refresh_time = a2->last_refresh_time;
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->last_refresh_time, a2, &this->last_refresh_time);
  }
  this->last_refresh_time = last_refresh_time;
  std::set<unsigned int>::set(&this->used_camp_id_set, &v4->used_camp_id_set);
};

// Line 57: range 000000001721A2A4-000000001721A2CE
void __cdecl BlossomRefreshInfo::~BlossomRefreshInfo(BlossomRefreshInfo *const this)
{
  std::set<unsigned int>::~set(&this->used_camp_id_set);
  std::map<unsigned int,BlossomCircleCampInfo>::~map(&this->circle_camp_info_map);
};

// Line 69: range 00000000174B2130-00000000174B21AD
void __cdecl PlayerBlossomComp::~PlayerBlossomComp(PlayerBlossomComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerBlossomComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::pair<unsigned int,int>>::~map(&this->initial_section_map_);
  std::map<unsigned int,unsigned int>::~map(&this->recent_used_section_id_map_);
  std::map<unsigned int,BlossomRefreshInfo>::~map(&this->refresh_info_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 69: range 00000000174B21AE-00000000174B21D8
void __cdecl PlayerBlossomComp::~PlayerBlossomComp(PlayerBlossomComp *const this)
{
  PlayerBlossomComp::~PlayerBlossomComp(this);
  operator delete(this, 0xB0uLL);
};

// Line 72: range 0000000017214037-0000000017214041
uint32_t __cdecl PlayerBlossomComp::getType()
{
  return 30;
};

// Line 75: range 0000000017483566-00000000174835EE
void __cdecl ZN17PlayerBlossomCompCI214PlayerCompBaseER6Player(PlayerBlossomComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerBlossomComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,BlossomRefreshInfo>::map(&this->refresh_info_map_);
  std::map<unsigned int,unsigned int>::map(&this->recent_used_section_id_map_);
  std::map<unsigned int,std::pair<unsigned int,int>>::map(&this->initial_section_map_);
};
