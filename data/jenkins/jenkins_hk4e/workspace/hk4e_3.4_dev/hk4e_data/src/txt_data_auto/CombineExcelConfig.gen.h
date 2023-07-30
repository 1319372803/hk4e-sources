// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CombineExcelConfig.gen.h

// Line 68: range 0000000013BF3DE6-0000000013BF3E75
void __cdecl data::CombineUnlockConfig::CombineUnlockConfig(data::CombineUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CombineUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombineUnlockConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_method, v1);
  }
  this->unlock_method = COMBINE_UNLOCK_NONE;
  std::vector<std::string>::vector(&this->unlock_param);
};

// Line 68: range 00000000141B377A-00000000141B384F
void __cdecl data::CombineUnlockConfig::CombineUnlockConfig(
        data::CombineUnlockConfig *const this,
        const data::CombineUnlockConfig *a2)
{
  int (**v2)(...); // rdx
  data::CombineUnlockMethod unlock_method; // ecx
  char v4; // al
  const data::CombineUnlockConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CombineUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CombineUnlockConfig = v2;
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

// Line 71: range 00000000142A5A48-00000000142A5A99
void __cdecl data::CombineUnlockConfig::~CombineUnlockConfig(data::CombineUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CombineUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombineUnlockConfig = v2;
  std::vector<std::string>::~vector(&this->unlock_param);
};

// Line 71: range 00000000142A5A9A-00000000142A5AC4
void __cdecl data::CombineUnlockConfig::~CombineUnlockConfig(data::CombineUnlockConfig *const this)
{
  data::CombineUnlockConfig::~CombineUnlockConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 81: range 0000000013BF3ECA-0000000013BF4167
void __cdecl data::CombineExcelConfig::CombineExcelConfig(data::CombineExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CombineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombineExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combine_id, v1);
  }
  this->combine_id = 0;
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
  data::CombineUnlockConfig::CombineUnlockConfig(&this->unlock_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combine_type, v3);
  }
  this->combine_type = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000) )
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
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scoin_cost, v5);
  }
  this->scoin_cost = 0;
  data::IdCountConfig::IdCountConfig(&this->result_item);
  std::vector<data::RandomItemConfig>::vector(&this->random_items);
  std::vector<data::IdCountConfig>::vector(&this->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recipe_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recipe_type, v5);
  }
  this->recipe_type = RECIPE_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->special_output_items);
};

// Line 81: range 00000000141B3850-00000000141B3D65
void __cdecl data::CombineExcelConfig::CombineExcelConfig(
        data::CombineExcelConfig *const this,
        const data::CombineExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t combine_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t player_level; // ecx
  char v7; // dl
  bool is_default_show; // cl
  char v9; // al
  data::CombineUnlockConfig *p_unlock_config; // rsi
  uint32_t combine_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t result_item_id; // ecx
  char v15; // dl
  uint32_t result_item_count; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t scoin_cost; // ecx
  char v20; // dl
  std::vector<data::IdCountConfig> *p_material_items; // rsi
  data::RecipeType recipe_type; // ecx
  char v23; // al
  const data::CombineExcelConfig *v24; // [rsp+0h] [rbp-20h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CombineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CombineExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->combine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combine_id);
  }
  combine_id = a2->combine_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->combine_id, a2);
  }
  this->combine_id = combine_id;
  v5 = (((_BYTE)v24 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->player_level);
  }
  player_level = v24->player_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->player_level, v5);
  this->player_level = player_level;
  if ( *(char *)(((unsigned __int64)&v24->is_default_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v24->is_default_show, v5, &v24->is_default_show);
  is_default_show = v24->is_default_show;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_default_show >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_default_show, v5, &this->is_default_show);
  }
  this->is_default_show = is_default_show;
  p_unlock_config = &v24->unlock_config;
  data::CombineUnlockConfig::CombineUnlockConfig(&this->unlock_config, &v24->unlock_config);
  if ( *(_BYTE *)(((unsigned __int64)&v24->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->combine_type);
  }
  combine_type = v24->combine_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_unlock_config) = v12 != 0;
    __asan_report_store4(&this->combine_type, p_unlock_config);
  }
  this->combine_type = combine_type;
  v13 = (((_BYTE)v24 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->result_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->result_item_id);
  }
  result_item_id = v24->result_item_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->result_item_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->result_item_id, v13);
  }
  this->result_item_id = result_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v24->result_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->result_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->result_item_count);
  }
  result_item_count = v24->result_item_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->result_item_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->result_item_count, v13);
  }
  this->result_item_count = result_item_count;
  v18 = (((_BYTE)v24 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->scoin_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->scoin_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->scoin_cost);
  }
  scoin_cost = v24->scoin_cost;
  v20 = *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->scoin_cost, v18);
  }
  this->scoin_cost = scoin_cost;
  data::IdCountConfig::IdCountConfig(&this->result_item, &v24->result_item);
  std::vector<data::RandomItemConfig>::vector(&this->random_items, &v24->random_items);
  p_material_items = &v24->material_items;
  std::vector<data::IdCountConfig>::vector(&this->material_items, &v24->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&v24->recipe_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->recipe_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->recipe_type);
  }
  recipe_type = v24->recipe_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->recipe_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_material_items) = v23 != 0;
    __asan_report_store4(&this->recipe_type, p_material_items);
  }
  this->recipe_type = recipe_type;
  std::vector<unsigned int>::vector(&this->special_output_items, &v24->special_output_items);
};

// Line 84: range 00000000142A5988-00000000142A5A1B
void __cdecl data::CombineExcelConfig::~CombineExcelConfig(data::CombineExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CombineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CombineExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->special_output_items);
  std::vector<data::IdCountConfig>::~vector(&this->material_items);
  std::vector<data::RandomItemConfig>::~vector(&this->random_items);
  data::IdCountConfig::~IdCountConfig(&this->result_item);
  data::CombineUnlockConfig::~CombineUnlockConfig(&this->unlock_config);
};

// Line 84: range 00000000142A5A1C-00000000142A5A46
void __cdecl data::CombineExcelConfig::~CombineExcelConfig(data::CombineExcelConfig *const this)
{
  data::CombineExcelConfig::~CombineExcelConfig(this);
  operator delete(this, 0xB0uLL);
};

// Line 107: range 00000000141B3EA6-00000000141B40DF
void __cdecl data::ReliquaryDecomposeExcelConfig::ReliquaryDecomposeExcelConfig(
        data::ReliquaryDecomposeExcelConfig *const this,
        const data::ReliquaryDecomposeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t drop_id; // ecx
  char v7; // dl
  uint32_t need_reliquary_count; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t need_reliquary_rank_level; // ecx
  char v12; // dl
  const data::ReliquaryDecomposeExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryDecomposeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryDecomposeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->drop_id);
  }
  drop_id = v13->drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->drop_id, v5);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->need_reliquary_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->need_reliquary_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->need_reliquary_count);
  }
  need_reliquary_count = v13->need_reliquary_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->need_reliquary_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->need_reliquary_count, v5);
  }
  this->need_reliquary_count = need_reliquary_count;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->need_reliquary_rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->need_reliquary_rank_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->need_reliquary_rank_level);
  }
  need_reliquary_rank_level = v13->need_reliquary_rank_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->need_reliquary_rank_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->need_reliquary_rank_level, v10);
  }
  this->need_reliquary_rank_level = need_reliquary_rank_level;
};

// Line 110: range 00000000142A591A-00000000142A595B
void __cdecl data::ReliquaryDecomposeExcelConfig::~ReliquaryDecomposeExcelConfig(
        data::ReliquaryDecomposeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryDecomposeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryDecomposeExcelConfig = v2;
};

// Line 110: range 00000000142A595C-00000000142A5986
void __cdecl data::ReliquaryDecomposeExcelConfig::~ReliquaryDecomposeExcelConfig(
        data::ReliquaryDecomposeExcelConfig *const this)
{
  data::ReliquaryDecomposeExcelConfig::~ReliquaryDecomposeExcelConfig(this);
  operator delete(this, 0x18uLL);
};
