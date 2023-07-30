// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/custom_dungeon/player_custom_dungeon_comp.h

// Line 44: range 00000000141F6FE2-00000000141F707D
CustomDungeonRoom *__cdecl CustomDungeonRoom::operator=(CustomDungeonRoom *const this, const CustomDungeonRoom *a2)
{
  uint32_t room_id; // ecx
  char v3; // al
  const CustomDungeonRoom *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  room_id = a2->room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->room_id = room_id;
  std::unordered_map<unsigned int,CustomDungeonBlock>::operator=(&this->block_map, &v5->block_map);
  return this;
};

// Line 44: range 00000000141F5B10-00000000141F5B67
void __cdecl CustomDungeonRoom::CustomDungeonRoom(CustomDungeonRoom *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->room_id = 0;
  std::unordered_map<unsigned int,CustomDungeonBlock>::unordered_map(&this->block_map);
};

// Line 44: range 00000000142FCF6E-00000000142FD006
void __cdecl CustomDungeonRoom::CustomDungeonRoom(CustomDungeonRoom *const this, const CustomDungeonRoom *a2)
{
  uint32_t room_id; // ecx
  char v3; // al
  const CustomDungeonRoom *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  room_id = a2->room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->room_id = room_id;
  std::unordered_map<unsigned int,CustomDungeonBlock>::unordered_map(&this->block_map, &v4->block_map);
};

// Line 44: range 00000000141F5B68-00000000141F5B86
void __cdecl CustomDungeonRoom::~CustomDungeonRoom(CustomDungeonRoom *const this)
{
  std::unordered_map<unsigned int,CustomDungeonBlock>::~unordered_map(&this->block_map);
};

// Line 55: range 00000000141F63E8-00000000141F66F8
CustomDungeonSetting *__cdecl CustomDungeonSetting::operator=(
        CustomDungeonSetting *const this,
        const CustomDungeonSetting *a2)
{
  bool is_arrive_finish; // cl
  char v3; // al
  __int64 v4; // rsi
  uint32_t coin_limit; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t time_limit; // ecx
  char v9; // al
  __int64 v10; // rsi
  bool is_forbid_skill; // cl
  char v12; // dl
  __int64 v13; // rdx
  std::set<unsigned int> *p_open_room_set; // rsi
  uint32_t start_room_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t life_num; // ecx
  char v19; // dl
  __int64 v20; // rdx
  const CustomDungeonSetting *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_arrive_finish = a2->is_arrive_finish;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_arrive_finish = is_arrive_finish;
  v4 = (((_BYTE)v22 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->coin_limit);
  }
  coin_limit = v22->coin_limit;
  v6 = *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->coin_limit, v4, v7);
  this->coin_limit = coin_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v22->time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->time_limit);
  }
  time_limit = v22->time_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->time_limit, v4, &this->time_limit);
  }
  this->time_limit = time_limit;
  v10 = ((_BYTE)v22 + 12) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v22->is_forbid_skill >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&v22->is_forbid_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v22->is_forbid_skill);
  }
  is_forbid_skill = v22->is_forbid_skill;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_forbid_skill, v10, v13);
  this->is_forbid_skill = is_forbid_skill;
  p_open_room_set = &v22->open_room_set;
  std::set<unsigned int>::operator=(&this->open_room_set, &v22->open_room_set);
  if ( *(_BYTE *)(((unsigned __int64)&v22->start_room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->start_room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->start_room_id);
  }
  start_room_id = v22->start_room_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_open_room_set) = v16 != 0;
    __asan_report_store4(&this->start_room_id, p_open_room_set, &this->start_room_id);
  }
  this->start_room_id = start_room_id;
  v17 = (((_BYTE)v22 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->life_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->life_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->life_num);
  }
  life_num = v22->life_num;
  v19 = *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->life_num, v17, v20);
  this->life_num = life_num;
  return this;
};

// Line 55: range 00000000141F5E02-00000000141F5F9E
void __cdecl CustomDungeonSetting::CustomDungeonSetting(CustomDungeonSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_arrive_finish = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->coin_limit, v2, v3);
  this->coin_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_limit, v2, &this->time_limit);
  }
  this->time_limit = 120;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_forbid_skill, v4, v5);
  this->is_forbid_skill = 0;
  std::set<unsigned int>::set(&this->open_room_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_room_id, v4, &this->start_room_id);
  }
  this->start_room_id = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->life_num, (((_BYTE)this + 68) & 7u) + 3, v6);
  this->life_num = 3;
};

// Line 55: range 00000000141F5FA0-00000000141F5FBE
void __cdecl CustomDungeonSetting::~CustomDungeonSetting(CustomDungeonSetting *const this)
{
  std::set<unsigned int>::~set(&this->open_room_set);
};

// Line 72: range 00000000141F5BE6-00000000141F5E00
CustomDungeonAbstract *__cdecl CustomDungeonAbstract::operator=(
        CustomDungeonAbstract *const this,
        const CustomDungeonAbstract *a2)
{
  uint32_t finish_room_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t total_coin_num; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t first_publish_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t last_publish_time; // ecx
  char v12; // dl
  __int64 v13; // rdx
  const CustomDungeonAbstract *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  finish_room_id = a2->finish_room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->finish_room_id = finish_room_id;
  v4 = (((_BYTE)v15 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->total_coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->total_coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->total_coin_num);
  }
  total_coin_num = v15->total_coin_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->total_coin_num, v4, v7);
  this->total_coin_num = total_coin_num;
  if ( *(_BYTE *)(((unsigned __int64)&v15->first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->first_publish_time);
  }
  first_publish_time = v15->first_publish_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->first_publish_time, v4, &this->first_publish_time);
  }
  this->first_publish_time = first_publish_time;
  v10 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->last_publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->last_publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->last_publish_time);
  }
  last_publish_time = v15->last_publish_time;
  v12 = *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->last_publish_time, v10, v13);
  this->last_publish_time = last_publish_time;
  std::map<unsigned int,unsigned int>::operator=(&this->brick_statistics_map, &v15->brick_statistics_map);
  return this;
};

// Line 72: range 00000000141F5FC0-00000000141F60E1
void __cdecl CustomDungeonAbstract::CustomDungeonAbstract(CustomDungeonAbstract *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->finish_room_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->total_coin_num, v2, v3);
  this->total_coin_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_publish_time, v2, &this->first_publish_time);
  }
  this->first_publish_time = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->last_publish_time, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->last_publish_time = 0;
  std::map<unsigned int,unsigned int>::map(&this->brick_statistics_map);
};

// Line 72: range 00000000141F60E2-00000000141F6100
void __cdecl CustomDungeonAbstract::~CustomDungeonAbstract(CustomDungeonAbstract *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->brick_statistics_map);
};

// Line 85: range 00000000141F6102-00000000141F6223
void __cdecl CustomDungeonSocial::CustomDungeonSocial(CustomDungeonSocial *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->play_num = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->like_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->like_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->like_num, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->like_num = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->store_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->store_num, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->store_num = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->win_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->win_num, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->win_num = 0;
};

// Line 95: range 0000000014331C94-0000000014331E3C
void __cdecl CustomDungeon::CustomDungeon(CustomDungeon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->dungeon_guid = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1, &this->dungeon_id);
  }
  this->dungeon_id = 0;
  std::map<unsigned int,CustomDungeonRoom>::map(&this->room_map);
  CustomDungeonSetting::CustomDungeonSetting(&this->setting);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version, v1, &this->version);
  }
  this->version = 0;
  v2 = ((_BYTE)this - 116) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_dirty >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_dirty >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_dirty, v2, v3);
  this->is_dirty = 0;
  v4 = ((_BYTE)this - 115) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_liked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_liked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_liked, v4, v5);
  this->is_liked = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_publish_time, v4, &this->first_publish_time);
  }
  this->first_publish_time = 0;
};

// Line 95: range 0000000014363E4E-0000000014363E7C
void __cdecl CustomDungeon::~CustomDungeon(CustomDungeon *const this)
{
  CustomDungeonSetting::~CustomDungeonSetting(&this->setting);
  std::map<unsigned int,CustomDungeonRoom>::~map(&this->room_map);
};

// Line 110: range 00000000141F66FA-00000000141F6A18
CustomDungeonBrief *__cdecl CustomDungeonBrief::operator=(CustomDungeonBrief *const this, const CustomDungeonBrief *a2)
{
  uint64_t dungeon_guid; // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t state; // ecx
  char v7; // dl
  __int64 v8; // rdx
  uint32_t last_save_time; // ecx
  char v10; // al
  __int64 v11; // rdx
  std::set<unsigned int> *p_tag_set; // rsi
  bool is_psn_platform; // cl
  char v14; // al
  const CustomDungeonBrief *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  dungeon_guid = a2->dungeon_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->dungeon_guid = dungeon_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dungeon_id, a2, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->state);
  }
  state = v16->state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->state, v5, v8);
  this->state = state;
  if ( *(_BYTE *)(((unsigned __int64)&v16->last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->last_save_time);
  }
  last_save_time = v16->last_save_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->last_save_time, v5, &this->last_save_time);
  }
  this->last_save_time = last_save_time;
  CustomDungeonSetting::operator=(&this->setting, &v16->setting);
  CustomDungeonAbstract::operator=(&this->abstract, &v16->abstract);
  if ( *(_WORD *)(((unsigned __int64)&this->cached_social >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->cached_social);
  if ( *(_WORD *)(((unsigned __int64)&v16->cached_social >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v16->cached_social);
  v11 = *(_QWORD *)&v16->cached_social.store_num;
  *(_QWORD *)&this->cached_social.play_num = *(_QWORD *)&v16->cached_social.play_num;
  *(_QWORD *)&this->cached_social.store_num = v11;
  p_tag_set = &v16->tag_set;
  std::set<unsigned int>::operator=(&this->tag_set, &v16->tag_set);
  if ( *(char *)(((unsigned __int64)&v16->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_psn_platform);
  is_psn_platform = v16->is_psn_platform;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_tag_set) = v14 != 0;
    __asan_report_store1(&this->is_psn_platform, p_tag_set, &this->is_psn_platform);
  }
  this->is_psn_platform = is_psn_platform;
  return this;
};

// Line 110: range 00000000141F6224-00000000141F63A4
void __cdecl CustomDungeonBrief::CustomDungeonBrief(CustomDungeonBrief *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->dungeon_guid = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1, &this->dungeon_id);
  }
  this->dungeon_id = 0;
  v2 = (((_BYTE)this + 12) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->state, v2, v3);
  this->state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_time, v2, &this->last_save_time);
  }
  this->last_save_time = 0;
  CustomDungeonSetting::CustomDungeonSetting(&this->setting);
  CustomDungeonAbstract::CustomDungeonAbstract(&this->abstract);
  CustomDungeonSocial::CustomDungeonSocial(&this->cached_social);
  std::set<unsigned int>::set(&this->tag_set);
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform, v2, &this->is_psn_platform);
  this->is_psn_platform = 0;
};

// Line 110: range 00000000141F63A6-00000000141F63E6
void __cdecl CustomDungeonBrief::~CustomDungeonBrief(CustomDungeonBrief *const this)
{
  std::set<unsigned int>::~set(&this->tag_set);
  CustomDungeonAbstract::~CustomDungeonAbstract(&this->abstract);
  CustomDungeonSetting::~CustomDungeonSetting(&this->setting);
};

// Line 137: range 000000001431A510-000000001431A5AB
void __cdecl CustomDungeonEntity::CustomDungeonEntity(CustomDungeonEntity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  std::weak_ptr<Entity>::weak_ptr(&this->entity_wtr);
  if ( *(char *)(((unsigned __int64)&this->is_coin >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_coin, v1, &this->is_coin);
  this->is_coin = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->config_idx, (((_BYTE)this + 20) & 7u) + 3, v2);
  this->config_idx = 0;
};

// Line 137: range 000000001431A35E-000000001431A47E
void __cdecl CustomDungeonEntity::CustomDungeonEntity(CustomDungeonEntity *const this, CustomDungeonEntity *a2)
{
  bool is_coin; // cl
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_idx; // ecx
  char v6; // dl
  __int64 v7; // rdx
  CustomDungeonEntity *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  std::weak_ptr<Entity>::weak_ptr(&this->entity_wtr, &a2->entity_wtr);
  if ( *(char *)(((unsigned __int64)&a2->is_coin >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_coin);
  is_coin = a2->is_coin;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_coin >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_coin, a2, &this->is_coin);
  }
  this->is_coin = is_coin;
  v4 = (((_BYTE)v8 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->config_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->config_idx);
  }
  config_idx = v8->config_idx;
  v6 = *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_idx, v4, v7);
  this->config_idx = config_idx;
};

// Line 137: range 0000000014250510-0000000014250630
void __cdecl CustomDungeonEntity::CustomDungeonEntity(CustomDungeonEntity *const this, const CustomDungeonEntity *a2)
{
  bool is_coin; // cl
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_idx; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const CustomDungeonEntity *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  std::weak_ptr<Entity>::weak_ptr(&this->entity_wtr, &a2->entity_wtr);
  if ( *(char *)(((unsigned __int64)&a2->is_coin >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_coin);
  is_coin = a2->is_coin;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_coin >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_coin, a2, &this->is_coin);
  }
  this->is_coin = is_coin;
  v4 = (((_BYTE)v8 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->config_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->config_idx);
  }
  config_idx = v8->config_idx;
  v6 = *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_idx, v4, v7);
  this->config_idx = config_idx;
};

// Line 137: range 0000000014280280-000000001428029A
void __cdecl CustomDungeonEntity::~CustomDungeonEntity(CustomDungeonEntity *const this)
{
  std::weak_ptr<Entity>::~weak_ptr(&this->entity_wtr);
};

// Line 139: range 0000000014331606-00000000143316C4
void __cdecl OfficialCustomDungeon::OfficialCustomDungeon(OfficialCustomDungeon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->dungeon_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->win_times, v2, v3);
  this->win_times = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->dungeon_guid, v2);
  this->dungeon_guid = 0LL;
};

// Line 144: range 0000000014318A04-0000000014318A7C
void __cdecl CustomDungeonBattleRecord::CustomDungeonBattleRecord(CustomDungeonBattleRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->dungeon_guid = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_cost_time, v1, &this->min_cost_time);
  }
  this->min_cost_time = 0;
};

// Line 154: range 000000001434AA10-000000001434AA3A
void __cdecl PlayerCustomDungeonComp::~PlayerCustomDungeonComp(PlayerCustomDungeonComp *const this)
{
  PlayerCustomDungeonComp::~PlayerCustomDungeonComp(this);
  operator delete(this, 0x270uLL);
};

// Line 154: range 000000001434A8EE-000000001434AA0F
void __cdecl PlayerCustomDungeonComp::~PlayerCustomDungeonComp(PlayerCustomDungeonComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCustomDungeonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned long,CustomDungeonBattleRecord>::~map(&this->battle_record_map_);
  std::vector<unsigned long>::~vector(&this->battle_record_vec_);
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::~map(&this->official_dungeon_map_);
  std::set<unsigned long>::~set(&this->last_recommend_set_);
  std::set<unsigned long>::~set(&this->store_dungeon_set_);
  std::map<unsigned long,CustomDungeonBrief>::~map(&this->brief_map_);
  std::set<unsigned int>::~set(&this->official_black_coin_set_);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::~map(&this->cached_store_dungeon_map_);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::~map(&this->cached_recommend_dungeon_map_);
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_dungeon_scene_wtr_);
  std::map<unsigned int,CustomDungeonEntity>::~map(&this->entity_wtr_map_);
  std::shared_ptr<CustomDungeon>::~shared_ptr(&this->cur_dungeon_ptr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 157: range 0000000017214A91-0000000017214A9B
uint32_t __cdecl PlayerCustomDungeonComp::getType()
{
  return 64;
};

// Line 162: range 000000001748DF0C-000000001748E579
void __cdecl ZN23PlayerCustomDungeonCompCI214PlayerCompBaseER6Player(PlayerCustomDungeonComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCustomDungeonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->MAX_REQUEST_WAIT_TIME, a2, &this->MAX_REQUEST_WAIT_TIME);
  }
  this->MAX_REQUEST_WAIT_TIME = 10;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->MIN_DUNGEON_SAVE_INTERVAL >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->MIN_DUNGEON_SAVE_INTERVAL >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->MIN_DUNGEON_SAVE_INTERVAL, v3, v4);
  this->MIN_DUNGEON_SAVE_INTERVAL = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_request_dungeon_guid_, v3);
  this->last_request_dungeon_guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_request_time_, v3, &this->last_request_time_);
  }
  this->last_request_time_ = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->last_request_recommend_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_request_recommend_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->last_request_recommend_time_, v5, v6);
  this->last_request_recommend_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_type_, v5, &this->enter_type_);
  }
  this->enter_type_ = ENTER_CUSTOM_DUNGEON_NONE;
  std::shared_ptr<CustomDungeon>::shared_ptr(&this->cur_dungeon_ptr_);
  std::map<unsigned int,CustomDungeonEntity>::map(&this->entity_wtr_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_type_, v5, &this->try_type_);
  }
  this->try_type_ = TRY_CUSTOM_DUNGEON_NONE;
  v7 = (((_BYTE)this - 124) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->try_room_id_, v7, v8);
  this->try_room_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_got_my_publish_time_, v7, &this->last_got_my_publish_time_);
  }
  this->last_got_my_publish_time_ = 0;
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->need_gen_event_type_, v9, v10);
  this->need_gen_event_type_ = 0;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_dungeon_scene_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_got_recommend_time_, v9, &this->last_got_recommend_time_);
  }
  this->last_got_recommend_time_ = 0;
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(&this->cached_recommend_dungeon_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_got_store_time_, v9, &this->last_got_store_time_);
  }
  this->last_got_store_time_ = 0;
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(&this->cached_store_dungeon_map_);
  std::set<unsigned int>::set(&this->official_black_coin_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_time_cost_, v9, &this->challenge_time_cost_);
  }
  this->challenge_time_cost_ = 0;
  v11 = (((_BYTE)this + 68) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->last_store_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_store_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->last_store_time_, v11, v12);
  this->last_store_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_like_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_like_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_like_time_, v11, &this->last_like_time_);
  }
  this->last_like_time_ = 0;
  v13 = (((_BYTE)this + 76) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->dungeon_guid_idx_, v13, v14);
  this->dungeon_guid_idx_ = 0;
  std::map<unsigned long,CustomDungeonBrief>::map(&this->brief_map_);
  std::set<unsigned long>::set(&this->store_dungeon_set_);
  std::set<unsigned long>::set(&this->last_recommend_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v13, &this->group_id_);
  }
  this->group_id_ = 0;
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::map(&this->official_dungeon_map_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_ugc_, v13, &this->is_enable_ugc_);
  this->is_enable_ugc_ = 0;
  v15 = (((_BYTE)this + 28) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->ban_expire_time_, v15, v16);
  this->ban_expire_time_ = 0;
  std::vector<unsigned long>::vector(&this->battle_record_vec_);
  std::map<unsigned long,CustomDungeonBattleRecord>::map(&this->battle_record_map_);
  if ( *(char *)(((unsigned __int64)&this->is_ever_liked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ever_liked_, v15, &this->is_ever_liked_);
  this->is_ever_liked_ = 0;
};

// Line 289: range 00000000131DE7CE-00000000131DE823
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCustomDungeonComp::setIsEverLiked(PlayerCustomDungeonComp *const this, bool is_liked)
{
  if ( *(char *)(((unsigned __int64)&this->is_ever_liked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ever_liked_, is_liked, &this->is_ever_liked_);
  this->is_ever_liked_ = is_liked;
};

// Line 425: range 00000000179E164A-00000000179E1A38
int32_t __cdecl sendProtoToActivityService<proto::ServerCheckUgcUpdateReq>(
        Player *player,
        proto::ServerCheckUgcUpdateReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerCheckUgcUpdateReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerCheckUgcUpdateReq>((const proto::ServerCheckUgcUpdateReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D23DF-00000000141D27CD
int32_t __cdecl sendProtoToActivityService<proto::ServerCustomDungeonSocialGmNotify>(
        Player *player,
        proto::ServerCustomDungeonSocialGmNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerCustomDungeonSocialGmNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerCustomDungeonSocialGmNotify>((const proto::ServerCustomDungeonSocialGmNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D1FF0-00000000141D23DE
int32_t __cdecl sendProtoToActivityService<proto::ServerGetCustomDungeonBriefReq>(
        Player *player,
        proto::ServerGetCustomDungeonBriefReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerGetCustomDungeonBriefReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetCustomDungeonBriefReq>((const proto::ServerGetCustomDungeonBriefReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D06D4-00000000141D0AC2
int32_t __cdecl sendProtoToActivityService<proto::ServerGetCustomDungeonReq>(
        Player *player,
        proto::ServerGetCustomDungeonReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerGetCustomDungeonReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetCustomDungeonReq>((const proto::ServerGetCustomDungeonReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D1C01-00000000141D1FEF
int32_t __cdecl sendProtoToActivityService<proto::ServerGetRecommendCustomDungeonReq>(
        Player *player,
        proto::ServerGetRecommendCustomDungeonReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerGetRecommendCustomDungeonReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetRecommendCustomDungeonReq>((const proto::ServerGetRecommendCustomDungeonReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000179E0A7D-00000000179E0E6B
int32_t __cdecl sendProtoToActivityService<proto::ServerGetUgcBriefReq>(
        Player *player,
        proto::ServerGetUgcBriefReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerGetUgcBriefReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetUgcBriefReq>((const proto::ServerGetUgcBriefReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000179E1A39-00000000179E1E27
int32_t __cdecl sendProtoToActivityService<proto::ServerGetUgcReq>(Player *player, proto::ServerGetUgcReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerGetUgcReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetUgcReq>((const proto::ServerGetUgcReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000017D3E034-0000000017D3E422
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeDeleteBlueprintDataReq>(
        Player *player,
        proto::ServerHomeDeleteBlueprintDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeDeleteBlueprintDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeDeleteBlueprintDataReq>((const proto::ServerHomeDeleteBlueprintDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000017D3D2AB-0000000017D3D699
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>(
        Player *player,
        proto::ServerHomeGetBlueprintBriefDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetBlueprintBriefDataReq>((const proto::ServerHomeGetBlueprintBriefDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000145E4564-00000000145E4952
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>(
        Player *player,
        proto::ServerHomeGetBlueprintBriefDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetBlueprintBriefDataReq>((const proto::ServerHomeGetBlueprintBriefDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000145E4175-00000000145E4563
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeGetBlueprintDetailDataReq>(
        Player *player,
        proto::ServerHomeGetBlueprintDetailDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeGetBlueprintDetailDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetBlueprintDetailDataReq>((const proto::ServerHomeGetBlueprintDetailDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000017D3DC45-0000000017D3E033
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeSaveBlueprintDataReq>(
        Player *player,
        proto::ServerHomeSaveBlueprintDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeSaveBlueprintDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeSaveBlueprintDataReq>((const proto::ServerHomeSaveBlueprintDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000017D3D69A-0000000017D3DA88
int32_t __cdecl sendProtoToActivityService<proto::ServerHomeUpdateBlueprintBriefDataReq>(
        Player *player,
        proto::ServerHomeUpdateBlueprintBriefDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerHomeUpdateBlueprintBriefDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerHomeUpdateBlueprintBriefDataReq>((const proto::ServerHomeUpdateBlueprintBriefDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D1812-00000000141D1C00
int32_t __cdecl sendProtoToActivityService<proto::ServerPublishCustomDungeonReq>(
        Player *player,
        proto::ServerPublishCustomDungeonReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerPublishCustomDungeonReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPublishCustomDungeonReq>((const proto::ServerPublishCustomDungeonReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000179E125B-00000000179E1649
int32_t __cdecl sendProtoToActivityService<proto::ServerPublishUgcReq>(
        Player *player,
        proto::ServerPublishUgcReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerPublishUgcReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPublishUgcReq>((const proto::ServerPublishUgcReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D1423-00000000141D1811
int32_t __cdecl sendProtoToActivityService<proto::ServerRemoveCustomDungeonReq>(
        Player *player,
        proto::ServerRemoveCustomDungeonReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerRemoveCustomDungeonReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerRemoveCustomDungeonReq>((const proto::ServerRemoveCustomDungeonReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D1034-00000000141D1422
int32_t __cdecl sendProtoToActivityService<proto::ServerSaveCustomDungeonReq>(
        Player *player,
        proto::ServerSaveCustomDungeonReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerSaveCustomDungeonReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerSaveCustomDungeonReq>((const proto::ServerSaveCustomDungeonReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000179E0E6C-00000000179E125A
int32_t __cdecl sendProtoToActivityService<proto::ServerSaveUgcReq>(Player *player, proto::ServerSaveUgcReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerSaveUgcReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerSaveUgcReq>((const proto::ServerSaveUgcReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 00000000141D0C45-00000000141D1033
int32_t __cdecl sendProtoToActivityService<proto::ServerUpdateCustomDungeonSocialNotify>(
        Player *player,
        proto::ServerUpdateCustomDungeonSocialNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:427";
  *(_QWORD *)(v2 + 16) = sendProtoToActivityService<proto::ServerUpdateCustomDungeonSocialNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerUpdateCustomDungeonSocialNotify>((const proto::ServerUpdateCustomDungeonSocialNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      430);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xDu);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.h",
      "sendProtoToActivityService",
      437);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[Social] sending to activity_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v20, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v20);
    std::string::~string(&v20);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 444: range 00000000141F581A-00000000141F592D
void __cdecl CustomDungeonBlock::CustomDungeonBlock(CustomDungeonBlock *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->guid = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->block_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->block_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  v3 = (*(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->config_idx, (((_BYTE)this + 32) & 7u) + 3, v3);
  this->config_idx = 0;
};

// Line 17058: range 00000000141F4E64-00000000141F4F69
bool __fastcall PlayerCustomDungeonComp::isMyDungeon(const PlayerCustomDungeonComp *const this, uint64_t dungeon_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 16 dungeon_guid:325";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::isMyDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = dungeon_guid;
  __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
  __x._M_node = std::map<unsigned long,CustomDungeonBrief>::find(
                  &this->brief_map_,
                  (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
