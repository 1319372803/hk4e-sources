// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/monster_tide_comp.h

// Line 28: range 0000000016B671AC-0000000016B6741D
void __cdecl MonsterTide::MonsterTide(MonsterTide *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->tide_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_infinite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_infinite >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_infinite);
  }
  this->is_infinite = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_monster_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_monster_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_monster_count);
  }
  this->total_monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_monster_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_monster_count);
  }
  this->min_monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count);
  }
  this->max_monster_count = 0;
  std::vector<unsigned int>::vector(&this->monster_config_id_vec);
  std::map<unsigned int,unsigned int>::map(&this->cur_monster_config_id_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_count);
  }
  this->monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tide_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tide_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tide_count);
  }
  this->tide_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state);
  }
  this->state = MONSTER_TIDE_NONE;
};

// Line 28: range 0000000016BDFC36-0000000016BDFC64
void __cdecl MonsterTide::~MonsterTide(MonsterTide *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->cur_monster_config_id_map);
  std::vector<unsigned int>::~vector(&this->monster_config_id_vec);
};

// Line 46: range 0000000015A1AE72-0000000015A1AE90
void __cdecl MonsterTideComp::~MonsterTideComp(MonsterTideComp *const this)
{
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::~map(&this->monster_tide_map_);
};

// Line 49: range 000000001604FED0-000000001604FF1E
void __cdecl MonsterTideComp::MonsterTideComp(MonsterTideComp *const this, Group *group)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->group_ = group;
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::map(&this->monster_tide_map_);
};
