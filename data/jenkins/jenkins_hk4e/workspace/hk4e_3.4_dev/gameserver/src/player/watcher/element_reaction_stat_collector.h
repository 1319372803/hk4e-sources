// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/element_reaction_stat_collector.h

// Line 27: range 0000000017B2B25E-0000000017B2B2DB
void __cdecl ElementReactionStat::ElementReactionStat(ElementReactionStat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'ElementReactionStat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_set<unsigned int>::unordered_set(&this->damage_set);
  std::unordered_set<unsigned int>::unordered_set(&this->kill_set);
  std::unordered_set<unsigned int>::unordered_set(&this->trigger_set);
};

// Line 27: range 000000001450E9AC-000000001450EA1D
void __cdecl ElementReactionStat::~ElementReactionStat(ElementReactionStat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementReactionStat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->trigger_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->kill_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->damage_set);
};

// Line 35: range 00000000174802A0-000000001748039B
void __cdecl ElementReactionStatCollector::ElementReactionStatCollector(ElementReactionStatCollector *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  std::deque<ElementReactionRecordEntry>::deque(&this->entry_queue);
  std::unordered_map<unsigned int,ElementReactionStat>::unordered_map(&this->stat_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_num, v1, (_BYTE)this - 120);
  }
  this->total_num = 0;
  v2 = (((_BYTE)this - 116) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->total_damage_num, v2, v3);
  this->total_damage_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_kill_num, v2, (_BYTE)this - 112);
  }
  this->total_kill_num = 0;
};

// Line 35: range 00000000144EDBE8-00000000144EDC12
void __cdecl ElementReactionStatCollector::~ElementReactionStatCollector(ElementReactionStatCollector *const this)
{
  std::unordered_map<unsigned int,ElementReactionStat>::~unordered_map(&this->stat_map);
  std::deque<ElementReactionRecordEntry>::~deque(&this->entry_queue);
};

// Line 53: range 00000000144F0048-00000000144F0095
void __cdecl ElementReactionStatUpdateEvent::~ElementReactionStatUpdateEvent(
        ElementReactionStatUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementReactionStatUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 53: range 00000000144F0096-00000000144F00C0
void __cdecl ElementReactionStatUpdateEvent::~ElementReactionStatUpdateEvent(
        ElementReactionStatUpdateEvent *const this)
{
  ElementReactionStatUpdateEvent::~ElementReactionStatUpdateEvent(this);
  operator delete(this, 0x18uLL);
};
