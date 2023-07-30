// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/element_reaction_stat_collector.cpp

// Line 19: range 00000000179846D0-00000000179848BC
std::string *__cdecl ElementReactionStat::getDesc[abi:cxx11](
        std::string *retstr,
        const ElementReactionStat *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:20";
  *(_QWORD *)(v2 + 16) = ElementReactionStat::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[trigger_set:");
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(v5, &this->trigger_set);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",damage_set:");
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(v7, &this->damage_set);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "kill_set:");
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(v9, &this->kill_set);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 26: range 00000000179848BE-0000000017984E0C
void __cdecl ElementReactionStatCollector::updateStat(ElementReactionStatCollector *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // dl
  std::unordered_map<unsigned int,ElementReactionStat>::mapped_type *v6; // rax
  std::unordered_map<unsigned int,ElementReactionStat>::mapped_type *v7; // rax
  std::unordered_map<unsigned int,ElementReactionStat>::mapped_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ElementReactionRecordEntry *entry; // [rsp+18h] [rbp-A8h]
  std::deque<ElementReactionRecordEntry>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::deque<ElementReactionRecordEntry>::iterator __for_end; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 key:33";
  *(_QWORD *)(v2 + 16) = ElementReactionStatCollector::updateStat;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,ElementReactionStat>::clear(&this->stat_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_num, v1, (_BYTE)this - 120);
  }
  this->total_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_kill_num, v1, (_BYTE)this - 112);
  }
  this->total_kill_num = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->total_damage_num, (((_BYTE)this - 116) & 7u) + 3, v5);
  this->total_damage_num = 0;
  std::deque<ElementReactionRecordEntry>::begin(&__for_begin, &this->entry_queue);
  std::deque<ElementReactionRecordEntry>::end(&__for_end, &this->entry_queue);
  while ( std::operator!=<ElementReactionRecordEntry,ElementReactionRecordEntry&,ElementReactionRecordEntry*>(
            &__for_begin,
            &__for_end) )
  {
    entry = std::_Deque_iterator<ElementReactionRecordEntry,ElementReactionRecordEntry&,ElementReactionRecordEntry*>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&entry->element_reaction_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry->element_reaction_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry->element_reaction_type);
    }
    *(_DWORD *)(v2 + 32) = entry->element_reaction_type;
    v6 = std::unordered_map<unsigned int,ElementReactionStat>::operator[](
           &this->stat_map,
           (const std::unordered_map<unsigned int,ElementReactionStat>::key_type *)(v2 + 32));
    std::unordered_set<unsigned int>::insert(&v6->trigger_set, &entry->entity_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_num);
    }
    ++this->total_num;
    if ( *(_BYTE *)(((unsigned __int64)&entry->drop_hp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry->drop_hp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry->drop_hp);
    }
    if ( entry->drop_hp > 0.0099999998 )
    {
      v7 = std::unordered_map<unsigned int,ElementReactionStat>::operator[](
             &this->stat_map,
             (const std::unordered_map<unsigned int,ElementReactionStat>::key_type *)(v2 + 32));
      std::unordered_set<unsigned int>::insert(&v7->damage_set, &entry->entity_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_damage_num);
      }
      ++this->total_damage_num;
    }
    if ( *(_BYTE *)(((unsigned __int64)&entry->is_kill >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)entry + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&entry->is_kill >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&entry->is_kill);
    }
    if ( entry->is_kill )
    {
      v8 = std::unordered_map<unsigned int,ElementReactionStat>::operator[](
             &this->stat_map,
             (const std::unordered_map<unsigned int,ElementReactionStat>::key_type *)(v2 + 32));
      std::unordered_set<unsigned int>::insert(&v8->kill_set, &entry->entity_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_kill_num);
      }
      ++this->total_kill_num;
    }
    std::_Deque_iterator<ElementReactionRecordEntry,ElementReactionRecordEntry&,ElementReactionRecordEntry*>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__for_end,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/element_reaction_stat_collector.cpp",
    "updateStat",
    48);
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
         (common::milog::MiLogStream *const)&__for_end,
         (const char (*)[10])"stat_map:");
  common::milog::MiLogStream::operator<<<unsigned int,ElementReactionStat>(v9, &this->stat_map);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 53: range 0000000017984E0E-0000000017984F3A
void __fastcall ElementReactionStatCollector::addEntry(
        ElementReactionStatCollector *const this,
        ElementReactionRecordEntry entry)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ElementReactionRecordEntry *v5; // rax
  ElementReactionRecordEntry *v6; // rdx
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 entry:52";
  *(_QWORD *)(v2 + 16) = ElementReactionStatCollector::addEntry;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(ElementReactionRecordEntry *)(v2 + 32) = entry;
  v5 = std::move<ElementReactionRecordEntry &>((ElementReactionRecordEntry *)(v2 + 32));
  std::deque<ElementReactionRecordEntry>::emplace_back<ElementReactionRecordEntry>(&this->entry_queue, v5, v6);
  ElementReactionStatCollector::refreshQueue(this);
  ElementReactionStatCollector::updateStat(this);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 60: range 0000000017984F3C-0000000017984FDF
void __cdecl ElementReactionStatCollector::refreshQueue(ElementReactionStatCollector *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  uint64_t tail_ms; // [rsp+18h] [rbp-8h]

  if ( !std::deque<ElementReactionRecordEntry>::empty(&this->entry_queue) )
  {
    v1 = (unsigned __int64)std::deque<ElementReactionRecordEntry>::back(&this->entry_queue);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8(v1);
    tail_ms = *(_QWORD *)v1;
    while ( 1 )
    {
      v2 = (unsigned __int64)std::deque<ElementReactionRecordEntry>::front(&this->entry_queue);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(v2);
      if ( tail_ms <= *(_QWORD *)v2 + 2000LL )
        break;
      std::deque<ElementReactionRecordEntry>::pop_front(&this->entry_queue);
    }
  }
};

// Line 73: range 0000000017984FE0-00000000179850DB
void __cdecl ElementReactionStatCollector::clear(ElementReactionStatCollector *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  std::deque<ElementReactionRecordEntry>::clear(&this->entry_queue);
  std::unordered_map<unsigned int,ElementReactionStat>::clear(&this->stat_map);
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

// Line 82: range 00000000179850DC-000000001798512F
uint64_t __cdecl ElementReactionStatCollector::getTailTimeMs(const ElementReactionStatCollector *const this)
{
  unsigned __int64 v2; // rax

  if ( std::deque<ElementReactionRecordEntry>::empty(&this->entry_queue) )
    return 0LL;
  v2 = (unsigned __int64)std::deque<ElementReactionRecordEntry>::back(&this->entry_queue);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2);
  return *(_QWORD *)v2;
};

// Line 91: range 0000000017985130-000000001798522E
bool __cdecl ElementReactionStatCollector::isNeedTriggerWatcher(ElementReactionStatCollector *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_num);
  }
  if ( this->total_num > 2 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_kill_num);
  }
  if ( this->total_kill_num > 2 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_damage_num);
  }
  return this->total_damage_num > 2;
};
