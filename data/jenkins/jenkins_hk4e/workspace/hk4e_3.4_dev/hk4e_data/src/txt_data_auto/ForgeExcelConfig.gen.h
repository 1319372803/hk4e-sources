// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ForgeExcelConfig.gen.h

// Line 41: range 0000000014746E82-0000000014746F11
void __cdecl data::ForgeUnlockConfig::ForgeUnlockConfig(data::ForgeUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ForgeUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ForgeUnlockConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_method, v1);
  }
  this->unlock_method = FORGE_UNLOCK_NONE;
  std::vector<std::string>::vector(&this->unlock_param);
};

// Line 41: range 0000000014D1E93E-0000000014D1EA13
void __cdecl data::ForgeUnlockConfig::ForgeUnlockConfig(
        data::ForgeUnlockConfig *const this,
        const data::ForgeUnlockConfig *a2)
{
  int (**v2)(...); // rdx
  data::ForgeUnlockMethod unlock_method; // ecx
  char v4; // al
  const data::ForgeUnlockConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ForgeUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ForgeUnlockConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->unlock_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->unlock_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->unlock_method);
  }
  unlock_method = a2->unlock_method;
  v4 = *(_BYTE *)(((unsigned __int64)&this->unlock_method >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->unlock_method, a2);
  }
  this->unlock_method = unlock_method;
  std::vector<std::string>::vector(&this->unlock_param, &v5->unlock_param);
};

// Line 44: range 0000000014DEA63E-0000000014DEA68F
void __cdecl data::ForgeUnlockConfig::~ForgeUnlockConfig(data::ForgeUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ForgeUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ForgeUnlockConfig = v2;
  std::vector<std::string>::~vector(&this->unlock_param);
};

// Line 44: range 0000000014DEA690-0000000014DEA6BA
void __cdecl data::ForgeUnlockConfig::~ForgeUnlockConfig(data::ForgeUnlockConfig *const this)
{
  data::ForgeUnlockConfig::~ForgeUnlockConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 54: range 0000000014746F12-00000000147472BE
void __cdecl data::ForgeExcelConfig::ForgeExcelConfig(data::ForgeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ForgeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ForgeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_level, v3);
  }
  this->player_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_default_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_default_show, v3, &this->is_default_show);
  this->is_default_show = 0;
  data::ForgeUnlockConfig::ForgeUnlockConfig(&this->unlock_config);
  std::vector<unsigned int>::vector(&this->effective_world_levels);
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forge_type, v3);
  }
  this->forge_type = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->result_item_id, v4);
  }
  this->result_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->result_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->result_item_count, v4);
  }
  this->result_item_count = 0;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_random_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_random_drop_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_random_drop_id, v5);
  }
  this->main_random_drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forge_time, v5);
  }
  this->forge_time = 0;
  v6 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->queue_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->queue_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->queue_num, v6);
  }
  this->queue_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scoin_cost, v6);
  }
  this->scoin_cost = 0;
  std::vector<data::RandomItemConfig>::vector(&this->random_items);
  std::vector<data::IdCountConfig>::vector(&this->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v6);
  }
  this->priority = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forge_point, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->forge_point = 0;
  std::vector<unsigned int>::vector(&this->talent_return_able_index_list);
};

// Line 54: range 0000000014D1EA14-0000000014D1F133
void __cdecl data::ForgeExcelConfig::ForgeExcelConfig(
        data::ForgeExcelConfig *const this,
        const data::ForgeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t player_level; // ecx
  char v7; // dl
  bool is_default_show; // cl
  char v9; // al
  std::vector<unsigned int> *p_effective_world_levels; // rsi
  uint32_t forge_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t result_item_id; // ecx
  char v15; // dl
  uint32_t result_item_count; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t main_random_drop_id; // ecx
  char v20; // dl
  uint32_t forge_time; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t queue_num; // ecx
  char v25; // dl
  uint32_t scoin_cost; // ecx
  char v27; // al
  std::vector<data::IdCountConfig> *p_material_items; // rsi
  uint32_t priority; // ecx
  char v30; // al
  __int64 v31; // rsi
  uint32_t forge_point; // ecx
  char v33; // dl
  const data::ForgeExcelConfig *v34; // [rsp+0h] [rbp-20h]

  v34 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ForgeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ForgeExcelConfig = v2;
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
  v5 = (((_BYTE)v34 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->player_level);
  }
  player_level = v34->player_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->player_level, v5);
  this->player_level = player_level;
  if ( *(char *)(((unsigned __int64)&v34->is_default_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v34->is_default_show, v5, &v34->is_default_show);
  is_default_show = v34->is_default_show;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_default_show >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_default_show, v5, &this->is_default_show);
  }
  this->is_default_show = is_default_show;
  data::ForgeUnlockConfig::ForgeUnlockConfig(&this->unlock_config, &v34->unlock_config);
  p_effective_world_levels = &v34->effective_world_levels;
  std::vector<unsigned int>::vector(&this->effective_world_levels, &v34->effective_world_levels);
  if ( *(_BYTE *)(((unsigned __int64)&v34->forge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->forge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->forge_type);
  }
  forge_type = v34->forge_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->forge_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_effective_world_levels) = v12 != 0;
    __asan_report_store4(&this->forge_type, p_effective_world_levels);
  }
  this->forge_type = forge_type;
  v13 = (((_BYTE)v34 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->result_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->result_item_id);
  }
  result_item_id = v34->result_item_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->result_item_id, v13);
  }
  this->result_item_id = result_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v34->result_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->result_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->result_item_count);
  }
  result_item_count = v34->result_item_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->result_item_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->result_item_count, v13);
  }
  this->result_item_count = result_item_count;
  v18 = (((_BYTE)v34 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->main_random_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->main_random_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->main_random_drop_id);
  }
  main_random_drop_id = v34->main_random_drop_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->main_random_drop_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->main_random_drop_id, v18);
  }
  this->main_random_drop_id = main_random_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v34->forge_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->forge_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->forge_time);
  }
  forge_time = v34->forge_time;
  v22 = *(_BYTE *)(((unsigned __int64)&this->forge_time >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->forge_time, v18);
  }
  this->forge_time = forge_time;
  v23 = (((_BYTE)v34 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->queue_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->queue_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->queue_num);
  }
  queue_num = v34->queue_num;
  v25 = *(_BYTE *)(((unsigned __int64)&this->queue_num >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->queue_num, v23);
  }
  this->queue_num = queue_num;
  if ( *(_BYTE *)(((unsigned __int64)&v34->scoin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->scoin_cost);
  }
  scoin_cost = v34->scoin_cost;
  v27 = *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v23) = v27 != 0;
    __asan_report_store4(&this->scoin_cost, v23);
  }
  this->scoin_cost = scoin_cost;
  std::vector<data::RandomItemConfig>::vector(&this->random_items, &v34->random_items);
  p_material_items = &v34->material_items;
  std::vector<data::IdCountConfig>::vector(&this->material_items, &v34->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&v34->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->priority);
  }
  priority = v34->priority;
  v30 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_material_items) = v30 != 0;
    __asan_report_store4(&this->priority, p_material_items);
  }
  this->priority = priority;
  v31 = (((_BYTE)v34 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->forge_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->forge_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->forge_point);
  }
  forge_point = v34->forge_point;
  v33 = *(_BYTE *)(((unsigned __int64)&this->forge_point >> 3) + 0x7FFF8000);
  if ( v33 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v33 )
  {
    LOBYTE(v31) = v33 != 0;
    __asan_report_store4(&this->forge_point, v31);
  }
  this->forge_point = forge_point;
  std::vector<unsigned int>::vector(&this->talent_return_able_index_list, &v34->talent_return_able_index_list);
};

// Line 57: range 0000000014DEA57C-0000000014DEA611
void __cdecl data::ForgeExcelConfig::~ForgeExcelConfig(data::ForgeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ForgeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ForgeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->talent_return_able_index_list);
  std::vector<data::IdCountConfig>::~vector(&this->material_items);
  std::vector<data::RandomItemConfig>::~vector(&this->random_items);
  std::vector<unsigned int>::~vector(&this->effective_world_levels);
  data::ForgeUnlockConfig::~ForgeUnlockConfig(&this->unlock_config);
};

// Line 57: range 0000000014DEA612-0000000014DEA63C
void __cdecl data::ForgeExcelConfig::~ForgeExcelConfig(data::ForgeExcelConfig *const this)
{
  data::ForgeExcelConfig::~ForgeExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 84: range 0000000014D1F274-0000000014D1F3B3
void __cdecl data::ForgeUpdateExcelConfig::ForgeUpdateExcelConfig(
        data::ForgeUpdateExcelConfig *const this,
        const data::ForgeUpdateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t player_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t forge_queue_num; // ecx
  char v7; // dl
  const data::ForgeUpdateExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ForgeUpdateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ForgeUpdateExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->forge_queue_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->forge_queue_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->forge_queue_num);
  }
  forge_queue_num = v8->forge_queue_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->forge_queue_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->forge_queue_num, v5);
  }
  this->forge_queue_num = forge_queue_num;
};

// Line 87: range 0000000014DEA50E-0000000014DEA54F
void __cdecl data::ForgeUpdateExcelConfig::~ForgeUpdateExcelConfig(data::ForgeUpdateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ForgeUpdateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ForgeUpdateExcelConfig = v2;
};

// Line 87: range 0000000014DEA550-0000000014DEA57A
void __cdecl data::ForgeUpdateExcelConfig::~ForgeUpdateExcelConfig(data::ForgeUpdateExcelConfig *const this)
{
  data::ForgeUpdateExcelConfig::~ForgeUpdateExcelConfig(this);
  operator delete(this, 0x10uLL);
};
