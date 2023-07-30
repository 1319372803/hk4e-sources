// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WatcherExcelConfig.gen.h

// Line 119: range 000000000F05899A-000000000F058A3F
data::WatcherPredicateConfig *__cdecl data::WatcherPredicateConfig::operator=(
        data::WatcherPredicateConfig *const this,
        const data::WatcherPredicateConfig *a2)
{
  data::WatcherPredicateType predicate_type; // ecx
  char v3; // al
  const data::WatcherPredicateConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->predicate_type);
  }
  predicate_type = a2->predicate_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->predicate_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->predicate_type, a2);
  }
  this->predicate_type = predicate_type;
  std::vector<unsigned int>::operator=(&this->param_list, &v5->param_list);
  return this;
};

// Line 119: range 000000000D2FC444-000000000D2FC4D3
void __cdecl data::WatcherPredicateConfig::WatcherPredicateConfig(data::WatcherPredicateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WatcherPredicateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherPredicateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->predicate_type, v1);
  }
  this->predicate_type = PREDICATE_NONE;
  std::vector<unsigned int>::vector(&this->param_list);
};

// Line 119: range 000000000D380860-000000000D380935
void __cdecl data::WatcherPredicateConfig::WatcherPredicateConfig(
        data::WatcherPredicateConfig *const this,
        const data::WatcherPredicateConfig *a2)
{
  int (**v2)(...); // rdx
  data::WatcherPredicateType predicate_type; // ecx
  char v4; // al
  const data::WatcherPredicateConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WatcherPredicateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherPredicateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->predicate_type);
  }
  predicate_type = a2->predicate_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->predicate_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->predicate_type, a2);
  }
  this->predicate_type = predicate_type;
  std::vector<unsigned int>::vector(&this->param_list, &v5->param_list);
};

// Line 122: range 000000000D263F6A-000000000D263FBB
void __cdecl data::WatcherPredicateConfig::~WatcherPredicateConfig(data::WatcherPredicateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WatcherPredicateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherPredicateConfig = v2;
  std::vector<unsigned int>::~vector(&this->param_list);
};

// Line 122: range 000000000D263FBC-000000000D263FE6
void __cdecl data::WatcherPredicateConfig::~WatcherPredicateConfig(data::WatcherPredicateConfig *const this)
{
  data::WatcherPredicateConfig::~WatcherPredicateConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 132: range 000000000CE25938-000000000CE25995
void __cdecl data::GlobalWatcherConfig::GlobalWatcherConfig(data::GlobalWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::WatcherConfig::WatcherConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::GlobalWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::vector<data::WatcherPredicateConfig>::vector(&this->predicate_configs);
};

// Line 132: range 000000000D3809B8-000000000D380A4E
void __cdecl data::GlobalWatcherConfig::GlobalWatcherConfig(
        data::GlobalWatcherConfig *const this,
        const data::GlobalWatcherConfig *a2)
{
  int (**v2)(...); // rdx

  data::WatcherConfig::WatcherConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GlobalWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  std::vector<data::WatcherPredicateConfig>::vector(&this->predicate_configs, &a2->predicate_configs);
};

// Line 136: range 000000000D4927F6-000000000D492853
void __cdecl data::GlobalWatcherConfig::~GlobalWatcherConfig(data::GlobalWatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GlobalWatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::vector<data::WatcherPredicateConfig>::~vector(&this->predicate_configs);
  data::WatcherConfig::~WatcherConfig(this);
};

// Line 136: range 000000000D492854-000000000D49287E
void __cdecl data::GlobalWatcherConfig::~GlobalWatcherConfig(data::GlobalWatcherConfig *const this)
{
  data::GlobalWatcherConfig::~GlobalWatcherConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 147: range 000000000D380B90-000000000D380EC3
void __cdecl data::PushTipsConfig::PushTipsConfig(data::PushTipsConfig *const this, const data::PushTipsConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t push_tips_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t watcher_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t tutorial_id; // ecx
  char v12; // dl
  data::PushTipsCodexType codex_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t group_id; // ecx
  char v17; // dl
  const data::PushTipsConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PushTipsConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PushTipsConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->push_tips_id);
  }
  push_tips_id = a2->push_tips_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->push_tips_id, a2);
  }
  this->push_tips_id = push_tips_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->watcher_id);
  }
  watcher_id = v18->watcher_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->tutorial_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->tutorial_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->tutorial_id);
  }
  tutorial_id = v18->tutorial_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->tutorial_id, v10);
  }
  this->tutorial_id = tutorial_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->codex_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->codex_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->codex_type);
  }
  codex_type = v18->codex_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->codex_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->codex_type, v10);
  }
  this->codex_type = codex_type;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->group_id);
  }
  group_id = v18->group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->group_id, v15);
  }
  this->group_id = group_id;
};

// Line 150: range 000000000D492788-000000000D4927C9
void __cdecl data::PushTipsConfig::~PushTipsConfig(data::PushTipsConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PushTipsConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PushTipsConfig = v2;
};

// Line 150: range 000000000D4927CA-000000000D4927F4
void __cdecl data::PushTipsConfig::~PushTipsConfig(data::PushTipsConfig *const this)
{
  data::PushTipsConfig::~PushTipsConfig(this);
  operator delete(this, 0x20uLL);
};
