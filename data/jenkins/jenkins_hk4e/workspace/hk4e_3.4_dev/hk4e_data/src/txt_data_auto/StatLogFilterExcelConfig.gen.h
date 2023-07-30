// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/StatLogFilterExcelConfig.gen.h

// Line 41: range 000000000CE183A4-000000000CE184A9
void __cdecl data::CombatStatLogFilterExcelConfig::CombatStatLogFilterExcelConfig(
        data::CombatStatLogFilterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CombatStatLogFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombatStatLogFilterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<std::string>::vector(&this->region_list);
  std::vector<unsigned int>::vector(&this->uid_filter_param);
  std::string::basic_string(&this->begin_time_str);
  std::string::basic_string(&this->end_time_str);
  std::vector<unsigned int>::vector(&this->player_level_range);
  std::string::basic_string(&this->world_id_list);
  std::string::basic_string(&this->dungeon_id_list);
  std::string::basic_string(&this->monster_id_list);
};

// Line 41: range 000000000D370DDE-000000000D37102B
void __cdecl data::CombatStatLogFilterExcelConfig::CombatStatLogFilterExcelConfig(
        data::CombatStatLogFilterExcelConfig *const this,
        const data::CombatStatLogFilterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::CombatStatLogFilterExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CombatStatLogFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CombatStatLogFilterExcelConfig = v2;
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
  std::vector<std::string>::vector(&this->region_list, &v5->region_list);
  std::vector<unsigned int>::vector(&this->uid_filter_param, &v5->uid_filter_param);
  std::string::basic_string(&this->begin_time_str, &v5->begin_time_str);
  std::string::basic_string(&this->end_time_str, &v5->end_time_str);
  std::vector<unsigned int>::vector(&this->player_level_range, &v5->player_level_range);
  std::string::basic_string(&this->world_id_list, &v5->world_id_list);
  std::string::basic_string(&this->dungeon_id_list, &v5->dungeon_id_list);
  std::string::basic_string(&this->monster_id_list, &v5->monster_id_list);
};

// Line 44: range 000000000D4916E4-000000000D4917AB
void __cdecl data::CombatStatLogFilterExcelConfig::~CombatStatLogFilterExcelConfig(
        data::CombatStatLogFilterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CombatStatLogFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombatStatLogFilterExcelConfig = v2;
  std::string::~string(&this->monster_id_list);
  std::string::~string(&this->dungeon_id_list);
  std::string::~string(&this->world_id_list);
  std::vector<unsigned int>::~vector(&this->player_level_range);
  std::string::~string(&this->end_time_str);
  std::string::~string(&this->begin_time_str);
  std::vector<unsigned int>::~vector(&this->uid_filter_param);
  std::vector<std::string>::~vector(&this->region_list);
};

// Line 44: range 000000000D4917AC-000000000D4917D6
void __cdecl data::CombatStatLogFilterExcelConfig::~CombatStatLogFilterExcelConfig(
        data::CombatStatLogFilterExcelConfig *const this)
{
  data::CombatStatLogFilterExcelConfig::~CombatStatLogFilterExcelConfig(this);
  operator delete(this, 0xF8uLL);
};

// Line 63: range 000000000CE184AA-000000000CE1856F
void __cdecl data::AbilityFilterIndex::AbilityFilterIndex(data::AbilityFilterIndex *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityFilterIndex + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityFilterIndex = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash, v1);
  }
  this->ability_name_hash = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->modifier_name_hash, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->modifier_name_hash = 0;
};

// Line 63: range 000000000D361ED2-000000000D362011
void __cdecl data::AbilityFilterIndex::AbilityFilterIndex(
        data::AbilityFilterIndex *const this,
        const data::AbilityFilterIndex *a2)
{
  int (**v2)(...); // rdx
  int32_t ability_name_hash; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t modifier_name_hash; // ecx
  char v7; // dl
  const data::AbilityFilterIndex *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AbilityFilterIndex + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AbilityFilterIndex = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ability_name_hash);
  }
  ability_name_hash = a2->ability_name_hash;
  v4 = *(_BYTE *)(((unsigned __int64)&this->ability_name_hash >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->ability_name_hash, a2);
  }
  this->ability_name_hash = ability_name_hash;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->modifier_name_hash);
  }
  modifier_name_hash = v8->modifier_name_hash;
  v7 = *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->modifier_name_hash, v5);
  }
  this->modifier_name_hash = modifier_name_hash;
};

// Line 66: range 000000000D491676-000000000D4916B7
void __cdecl data::AbilityFilterIndex::~AbilityFilterIndex(data::AbilityFilterIndex *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityFilterIndex + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityFilterIndex = v2;
};

// Line 66: range 000000000D4916B8-000000000D4916E2
void __cdecl data::AbilityFilterIndex::~AbilityFilterIndex(data::AbilityFilterIndex *const this)
{
  data::AbilityFilterIndex::~AbilityFilterIndex(this);
  operator delete(this, 0x10uLL);
};

// Line 74: range 000000000CE18570-000000000CE186A3
void __cdecl data::OriHurtFilterExcelConfig::OriHurtFilterExcelConfig(data::OriHurtFilterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OriHurtFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OriHurtFilterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  std::string::basic_string(&this->filter_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->filter_hash, v1);
  }
  this->filter_hash = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->filter_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->filter_type = NONE;
  std::vector<std::string>::vector(&this->filter_params);
  data::AbilityFilterIndex::AbilityFilterIndex(&this->ability_filter_index);
};

// Line 74: range 000000000D37116C-000000000D371398
void __cdecl data::OriHurtFilterExcelConfig::OriHurtFilterExcelConfig(
        data::OriHurtFilterExcelConfig *const this,
        const data::OriHurtFilterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  std::string *p_filter_name; // rsi
  uint32_t filter_hash; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::OriHurtFilterType filter_type; // ecx
  char v10; // dl
  const data::OriHurtFilterExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OriHurtFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OriHurtFilterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  p_filter_name = &v11->filter_name;
  std::string::basic_string(&this->filter_name, &v11->filter_name);
  if ( *(_BYTE *)(((unsigned __int64)&v11->filter_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->filter_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->filter_hash);
  }
  filter_hash = v11->filter_hash;
  v7 = *(_BYTE *)(((unsigned __int64)&this->filter_hash >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_filter_name) = v7 != 0;
    __asan_report_store4(&this->filter_hash, p_filter_name);
  }
  this->filter_hash = filter_hash;
  v8 = (((_BYTE)v11 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->filter_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->filter_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->filter_type);
  }
  filter_type = v11->filter_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->filter_type, v8);
  }
  this->filter_type = filter_type;
  std::vector<std::string>::vector(&this->filter_params, &v11->filter_params);
  data::AbilityFilterIndex::AbilityFilterIndex(&this->ability_filter_index, &v11->ability_filter_index);
};

// Line 77: range 000000000D4915D8-000000000D491649
void __cdecl data::OriHurtFilterExcelConfig::~OriHurtFilterExcelConfig(data::OriHurtFilterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OriHurtFilterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OriHurtFilterExcelConfig = v2;
  data::AbilityFilterIndex::~AbilityFilterIndex(&this->ability_filter_index);
  std::vector<std::string>::~vector(&this->filter_params);
  std::string::~string(&this->filter_name);
};

// Line 77: range 000000000D49164A-000000000D491674
void __cdecl data::OriHurtFilterExcelConfig::~OriHurtFilterExcelConfig(data::OriHurtFilterExcelConfig *const this)
{
  data::OriHurtFilterExcelConfig::~OriHurtFilterExcelConfig(this);
  operator delete(this, 0x60uLL);
};
