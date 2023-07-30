// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/region_search/region_search_play.h

// Line 29: range 0000000015D3A70C-0000000015D3A7A1
void __cdecl RegionSearchSource::RegionSearchSource(RegionSearchSource *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->type = NONE_1;
  v2 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->param, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->param = 0;
};

// Line 43: range 0000000015D3FF3A-0000000015D40065
RegionSearchRegion *__cdecl RegionSearchRegion::operator=(RegionSearchRegion *const this, const RegionSearchRegion *a2)
{
  uint32_t region_id; // ecx
  char v3; // al
  std::set<unsigned int> *p_recycle_group_set; // rsi
  uint32_t recycle_progress; // ecx
  char v6; // al
  const RegionSearchRegion *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  region_id = a2->region_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->region_id = region_id;
  std::set<unsigned int>::operator=(&this->oneoff_group_set, &v8->oneoff_group_set);
  p_recycle_group_set = &v8->recycle_group_set;
  std::set<unsigned int>::operator=(&this->recycle_group_set, &v8->recycle_group_set);
  if ( *(_BYTE *)(((unsigned __int64)&v8->recycle_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->recycle_progress);
  }
  recycle_progress = v8->recycle_progress;
  v6 = *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_recycle_group_set) = v6 != 0;
    __asan_report_store4(&this->recycle_progress, p_recycle_group_set, (_BYTE)this + 104);
  }
  this->recycle_progress = recycle_progress;
  return this;
};

// Line 43: range 0000000015D3FE64-0000000015D3FF09
void __cdecl RegionSearchRegion::RegionSearchRegion(RegionSearchRegion *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->region_id = 0;
  std::set<unsigned int>::set(&this->oneoff_group_set);
  std::set<unsigned int>::set(&this->recycle_group_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recycle_progress, v1, (_BYTE)this + 104);
  }
  this->recycle_progress = 0;
};

// Line 43: range 0000000015D3FF0A-0000000015D3FF38
void __cdecl RegionSearchRegion::~RegionSearchRegion(RegionSearchRegion *const this)
{
  std::set<unsigned int>::~set(&this->recycle_group_set);
  std::set<unsigned int>::~set(&this->oneoff_group_set);
};

// Line 54: range 0000000015F25A52-0000000015F25B68
void __cdecl RegionSearch::RegionSearch(RegionSearch *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->search_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->state, v2, v3);
  this->state = REGION_SEARCH_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress, v2, (_BYTE)this + 8);
  }
  this->progress = 0;
  std::map<unsigned int,RegionSearchRegion>::map(&this->region_map);
  if ( *(char *)(((unsigned __int64)&this->is_entered >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_entered, v2, &this->is_entered);
  this->is_entered = 0;
};

// Line 54: range 0000000015F88B20-0000000015F88B3E
void __cdecl RegionSearch::~RegionSearch(RegionSearch *const this)
{
  std::map<unsigned int,RegionSearchRegion>::~map(&this->region_map);
};

// Line 70: range 0000000015D3A812-0000000015D3A926
void __cdecl RegionSearchPlay::RegionSearchPlay(RegionSearchPlay *const this, Player *player)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'RegionSearchPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_RegionSearchPlay = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id_, player, (_BYTE)this + 16);
  }
  this->id_ = 0;
  v3 = ((_BYTE)this + 20) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_entered_, v3, v4);
  this->is_entered_ = 0;
  RegionSearchSource::RegionSearchSource(&this->source_);
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(&this->search_map_);
};

// Line 71: range 0000000015F46362-0000000015F463B3
void __cdecl RegionSearchPlay::~RegionSearchPlay(RegionSearchPlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RegionSearchPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchPlay = v2;
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map(&this->search_map_);
};

// Line 71: range 0000000015F463B4-0000000015F463DE
void __cdecl RegionSearchPlay::~RegionSearchPlay(RegionSearchPlay *const this)
{
  RegionSearchPlay::~RegionSearchPlay(this);
  operator delete(this, 0x50uLL);
};
