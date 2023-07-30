// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/skill_stat_collector.cpp

// Line 20: range 0000000017985230-00000000179853F2
void __cdecl SkillStatCollector::updateStat(SkillStatCollector *const this)
{
  __int64 v1; // rsi
  bool *p_is_energy_skill; // rax
  common::milog::MiLogStream *v3; // rax
  SkillRecordEntry *entry; // [rsp+18h] [rbp-58h]
  std::deque<SkillRecordEntry>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::deque<SkillRecordEntry>::iterator __for_end; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_energy_skill_num, v1, (_BYTE)this + 80);
  }
  this->total_energy_skill_num = 0;
  std::deque<SkillRecordEntry>::begin(&__for_begin, &this->entry_queue);
  std::deque<SkillRecordEntry>::end(&__for_end, &this->entry_queue);
  while ( std::operator!=<SkillRecordEntry,SkillRecordEntry&,SkillRecordEntry*>(&__for_begin, &__for_end) )
  {
    entry = std::_Deque_iterator<SkillRecordEntry,SkillRecordEntry&,SkillRecordEntry*>::operator*(&__for_begin);
    p_is_energy_skill = &entry->is_energy_skill;
    if ( *(_BYTE *)(((unsigned __int64)p_is_energy_skill >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_energy_skill & 7) >= *(_BYTE *)(((unsigned __int64)p_is_energy_skill >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_energy_skill);
    }
    if ( entry->is_energy_skill )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_energy_skill_num);
      }
      ++this->total_energy_skill_num;
    }
    std::_Deque_iterator<SkillRecordEntry,SkillRecordEntry&,SkillRecordEntry*>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__for_end,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/skill_stat_collector.cpp",
    "updateStat",
    30);
  v3 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         (common::milog::MiLogStream *const)&__for_end,
         (const char (*)[24])"total_energy_skill_num:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->total_energy_skill_num);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end);
};

// Line 35: range 00000000179853F4-00000000179854FF
// local variable allocation has failed, the output may be wrong!
void __fastcall SkillStatCollector::addEntry(SkillStatCollector *const this, SkillRecordEntry entry)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint64_t v5; // rsi
  SkillRecordEntry *v6; // rax
  SkillRecordEntry *v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-78h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v8 = *(_QWORD *)&entry.skill_id;
  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 entry:34";
  *(_QWORD *)(v2 + 16) = SkillStatCollector::addEntry;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = v8;
  v6 = std::move<SkillRecordEntry &>((SkillRecordEntry *)(v2 + 32));
  std::deque<SkillRecordEntry>::emplace_back<SkillRecordEntry>(&this->entry_queue, v6, v7);
  SkillStatCollector::refreshQueue(this);
  SkillStatCollector::updateStat(this);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 42: range 0000000017985500-00000000179855A3
void __cdecl SkillStatCollector::refreshQueue(SkillStatCollector *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  uint64_t tail_ms; // [rsp+18h] [rbp-8h]

  if ( !std::deque<SkillRecordEntry>::empty(&this->entry_queue) )
  {
    v1 = (unsigned __int64)std::deque<SkillRecordEntry>::back(&this->entry_queue);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8(v1);
    tail_ms = *(_QWORD *)v1;
    while ( 1 )
    {
      v2 = (unsigned __int64)std::deque<SkillRecordEntry>::front(&this->entry_queue);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(v2);
      if ( tail_ms <= *(_QWORD *)v2 + 15000LL )
        break;
      std::deque<SkillRecordEntry>::pop_front(&this->entry_queue);
    }
  }
};

// Line 55: range 00000000179855A4-00000000179855F0
void __cdecl SkillStatCollector::clear(SkillStatCollector *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_energy_skill_num, v1, (_BYTE)this + 80);
  }
  this->total_energy_skill_num = 0;
};

// Line 60: range 00000000179855F2-0000000017985645
uint64_t __cdecl SkillStatCollector::getTailTimeMs(const SkillStatCollector *const this)
{
  unsigned __int64 v2; // rax

  if ( std::deque<SkillRecordEntry>::empty(&this->entry_queue) )
    return 0LL;
  v2 = (unsigned __int64)std::deque<SkillRecordEntry>::back(&this->entry_queue);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2);
  return *(_QWORD *)v2;
};

// Line 69: range 0000000017985646-000000001798569E
bool __cdecl SkillStatCollector::isNeedTriggerWatcher(SkillStatCollector *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_energy_skill_num);
  }
  return this->total_energy_skill_num > 2;
};
