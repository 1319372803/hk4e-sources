// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BoredExcelConfig.gen.h

// Line 73: range 0000000013DF91FA-0000000013DF94A9
void __cdecl data::BoredEventExcelConfig::BoredEventExcelConfig(
        data::BoredEventExcelConfig *const this,
        const data::BoredEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::BoardEventType event_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param; // ecx
  char v7; // dl
  bool is_enable; // cl
  char v9; // al
  __int64 v10; // rsi
  int32_t add_bored; // ecx
  char v12; // dl
  int32_t max_bored; // ecx
  char v14; // al
  const data::BoredEventExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BoredEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BoredEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->event_type);
  }
  event_type = a2->event_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->event_type, a2);
  }
  this->event_type = event_type;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->param);
  }
  param = v15->param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->param, v5);
  this->param = param;
  if ( *(char *)(((unsigned __int64)&v15->is_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_enable, v5, &v15->is_enable);
  is_enable = v15->is_enable;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_enable, v5, &this->is_enable);
  }
  this->is_enable = is_enable;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->add_bored >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->add_bored >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->add_bored);
  }
  add_bored = v15->add_bored;
  v12 = *(_BYTE *)(((unsigned __int64)&this->add_bored >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->add_bored, v10);
  }
  this->add_bored = add_bored;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_bored >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->max_bored >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->max_bored);
  }
  max_bored = v15->max_bored;
  v14 = *(_BYTE *)(((unsigned __int64)&this->max_bored >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->max_bored, v10);
  }
  this->max_bored = max_bored;
};

// Line 76: range 00000000142A63CC-00000000142A63F6
void __cdecl data::BoredEventExcelConfig::~BoredEventExcelConfig(data::BoredEventExcelConfig *const this)
{
  data::BoredEventExcelConfig::~BoredEventExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 76: range 00000000142A638A-00000000142A63CB
void __cdecl data::BoredEventExcelConfig::~BoredEventExcelConfig(data::BoredEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredEventExcelConfig = v2;
};

// Line 91: range 0000000013DF9A42-0000000013DF9B81
void __cdecl data::BoredActionPriorityExcelConfig::BoredActionPriorityExcelConfig(
        data::BoredActionPriorityExcelConfig *const this,
        const data::BoredActionPriorityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::BoredActionType action_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  const data::BoredActionPriorityExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BoredActionPriorityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BoredActionPriorityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->action_type, a2);
  }
  this->action_type = action_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
};

// Line 94: range 00000000142A635E-00000000142A6388
void __cdecl data::BoredActionPriorityExcelConfig::~BoredActionPriorityExcelConfig(
        data::BoredActionPriorityExcelConfig *const this)
{
  data::BoredActionPriorityExcelConfig::~BoredActionPriorityExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 94: range 00000000142A631C-00000000142A635D
void __cdecl data::BoredActionPriorityExcelConfig::~BoredActionPriorityExcelConfig(
        data::BoredActionPriorityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredActionPriorityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredActionPriorityExcelConfig = v2;
};

// Line 106: range 00000000140FFD0E-00000000140FFDD3
void __cdecl data::BoredMonsterConfig::BoredMonsterConfig(data::BoredMonsterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredMonsterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v1);
  }
  this->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->id = 0;
};

// Line 106: range 00000000142178DA-0000000014217A19
void __cdecl data::BoredMonsterConfig::BoredMonsterConfig(
        data::BoredMonsterConfig *const this,
        const data::BoredMonsterConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t weight; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t id; // ecx
  char v7; // dl
  const data::BoredMonsterConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BoredMonsterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weight);
  }
  weight = a2->weight;
  v4 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->weight, a2);
  }
  this->weight = weight;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->id);
  }
  id = v8->id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->id, v5);
  }
  this->id = id;
};

// Line 109: range 0000000014020BD8-0000000014020C19
void __cdecl data::BoredMonsterConfig::~BoredMonsterConfig(data::BoredMonsterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredMonsterConfig = v2;
};

// Line 109: range 0000000014020C1A-0000000014020C44
void __cdecl data::BoredMonsterConfig::~BoredMonsterConfig(data::BoredMonsterConfig *const this)
{
  data::BoredMonsterConfig::~BoredMonsterConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 119: range 0000000013BEC926-0000000013BEC9B5
void __cdecl data::BoredCreateMonsterExcelConfig::BoredCreateMonsterExcelConfig(
        data::BoredCreateMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredCreateMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredCreateMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level, v1);
  }
  this->player_level = 0;
  std::vector<data::BoredMonsterConfig>::vector(&this->monster_config_vec);
};

// Line 119: range 0000000013DFA17A-0000000013DFA24F
void __cdecl data::BoredCreateMonsterExcelConfig::BoredCreateMonsterExcelConfig(
        data::BoredCreateMonsterExcelConfig *const this,
        const data::BoredCreateMonsterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t player_level; // ecx
  char v4; // al
  const data::BoredCreateMonsterExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BoredCreateMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BoredCreateMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->player_level);
  }
  player_level = a2->player_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->player_level, a2);
  }
  this->player_level = player_level;
  std::vector<data::BoredMonsterConfig>::vector(&this->monster_config_vec, &v5->monster_config_vec);
};

// Line 122: range 00000000142A629E-00000000142A62EF
void __cdecl data::BoredCreateMonsterExcelConfig::~BoredCreateMonsterExcelConfig(
        data::BoredCreateMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredCreateMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredCreateMonsterExcelConfig = v2;
  std::vector<data::BoredMonsterConfig>::~vector(&this->monster_config_vec);
};

// Line 122: range 00000000142A62F0-00000000142A631A
void __cdecl data::BoredCreateMonsterExcelConfig::~BoredCreateMonsterExcelConfig(
        data::BoredCreateMonsterExcelConfig *const this)
{
  data::BoredCreateMonsterExcelConfig::~BoredCreateMonsterExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 134: range 0000000013BEC9B6-0000000013BECB14
void __cdecl data::BoredMonsterPoolConfig::BoredMonsterPoolConfig(data::BoredMonsterPoolConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterPoolConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredMonsterPoolConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v3);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  std::string::basic_string(&this->drop_tag);
  std::vector<unsigned int>::vector(&this->affix_vec);
  if ( *(char *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_elite, v3, &this->is_elite);
  this->is_elite = 0;
};

// Line 134: range 00000000141A9C04-00000000141A9E8B
void __cdecl data::BoredMonsterPoolConfig::BoredMonsterPoolConfig(
        data::BoredMonsterPoolConfig *const this,
        const data::BoredMonsterPoolConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  std::vector<unsigned int> *p_affix_vec; // rsi
  bool is_elite; // cl
  char v12; // al
  const data::BoredMonsterPoolConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterPoolConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BoredMonsterPoolConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->monster_id);
  }
  monster_id = v13->monster_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  std::string::basic_string(&this->drop_tag, &v13->drop_tag);
  p_affix_vec = &v13->affix_vec;
  std::vector<unsigned int>::vector(&this->affix_vec, &v13->affix_vec);
  if ( *(char *)(((unsigned __int64)&v13->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_elite, p_affix_vec, &v13->is_elite);
  is_elite = v13->is_elite;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_affix_vec) = v12 != 0;
    __asan_report_store1(&this->is_elite, p_affix_vec, &this->is_elite);
  }
  this->is_elite = is_elite;
};

// Line 137: range 00000000142A6272-00000000142A629C
void __cdecl data::BoredMonsterPoolConfig::~BoredMonsterPoolConfig(data::BoredMonsterPoolConfig *const this)
{
  data::BoredMonsterPoolConfig::~BoredMonsterPoolConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 137: range 00000000142A6210-00000000142A6271
void __cdecl data::BoredMonsterPoolConfig::~BoredMonsterPoolConfig(data::BoredMonsterPoolConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BoredMonsterPoolConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BoredMonsterPoolConfig = v2;
  std::vector<unsigned int>::~vector(&this->affix_vec);
  std::string::~string(&this->drop_tag);
};
