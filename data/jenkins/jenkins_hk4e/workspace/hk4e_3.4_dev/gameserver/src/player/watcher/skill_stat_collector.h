// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/skill_stat_collector.h

// Line 25: range 000000001748039C-00000000174803F4
void __cdecl SkillStatCollector::SkillStatCollector(SkillStatCollector *const this)
{
  __int64 v1; // rsi

  std::deque<SkillRecordEntry>::deque(&this->entry_queue);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_energy_skill_num, v1, (_BYTE)this + 80);
  }
  this->total_energy_skill_num = 0;
};

// Line 25: range 00000000144EDC14-00000000144EDC2E
void __cdecl SkillStatCollector::~SkillStatCollector(SkillStatCollector *const this)
{
  std::deque<SkillRecordEntry>::~deque(&this->entry_queue);
};

// Line 40: range 00000000144EFFCE-00000000144F001B
void __cdecl SkillStatUpdateEvent::~SkillStatUpdateEvent(SkillStatUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SkillStatUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 40: range 00000000144F001C-00000000144F0046
void __cdecl SkillStatUpdateEvent::~SkillStatUpdateEvent(SkillStatUpdateEvent *const this)
{
  SkillStatUpdateEvent::~SkillStatUpdateEvent(this);
  operator delete(this, 0x18uLL);
};
