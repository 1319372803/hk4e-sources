// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ReliquaryExcelConfig.gen.h

// Line 51: range 0000000014783510-000000001478382F
void __cdecl data::ReliquaryExcelConfig::ReliquaryExcelConfig(data::ReliquaryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->equip_type, v3);
  }
  this->equip_type = EQUIP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rank_level, v3);
  }
  this->rank_level = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_prop_depot_id, v4);
  }
  this->main_prop_depot_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->append_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->append_prop_depot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->append_prop_depot_id, v4);
  }
  this->append_prop_depot_id = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->append_prop_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->append_prop_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->append_prop_num, v5);
  }
  this->append_prop_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_id, v5);
  }
  this->set_id = 0;
  std::vector<unsigned int>::vector(&this->add_prop_levels);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_conv_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_conv_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_conv_exp, v5);
  }
  this->base_conv_exp = 0;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_level, v6);
  }
  this->max_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_rule, v6);
  }
  this->destroy_rule = DESTROY_NONE;
  std::vector<unsigned int>::vector(&this->destroy_return_material);
  std::vector<unsigned int>::vector(&this->destroy_return_material_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_lock_state, v6);
  }
  this->initial_lock_state = 0;
};

// Line 51: range 0000000014D6A958-0000000014D6AF50
void __cdecl data::ReliquaryExcelConfig::ReliquaryExcelConfig(
        data::ReliquaryExcelConfig *const this,
        const data::ReliquaryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::EquipType equip_type; // ecx
  char v5; // dl
  uint32_t rank_level; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t main_prop_depot_id; // ecx
  char v10; // dl
  uint32_t append_prop_depot_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t append_prop_num; // ecx
  char v15; // dl
  uint32_t set_id; // ecx
  char v17; // al
  std::vector<unsigned int> *p_add_prop_levels; // rsi
  uint32_t base_conv_exp; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t max_level; // ecx
  char v23; // dl
  data::MaterialDestroyType destroy_rule; // ecx
  char v25; // al
  std::vector<unsigned int> *p_destroy_return_material_count; // rsi
  uint32_t initial_lock_state; // ecx
  char v28; // al

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this, (const data::ItemConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->equip_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->equip_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->equip_type);
  }
  equip_type = a2->equip_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->equip_type, v3);
  }
  this->equip_type = equip_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rank_level);
  }
  rank_level = a2->rank_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->rank_level, v3);
  }
  this->rank_level = rank_level;
  v8 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->main_prop_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->main_prop_depot_id);
  }
  main_prop_depot_id = a2->main_prop_depot_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->main_prop_depot_id, v8);
  }
  this->main_prop_depot_id = main_prop_depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->append_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->append_prop_depot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->append_prop_depot_id);
  }
  append_prop_depot_id = a2->append_prop_depot_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->append_prop_depot_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->append_prop_depot_id, v8);
  }
  this->append_prop_depot_id = append_prop_depot_id;
  v13 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->append_prop_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->append_prop_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->append_prop_num);
  }
  append_prop_num = a2->append_prop_num;
  v15 = *(_BYTE *)(((unsigned __int64)&this->append_prop_num >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->append_prop_num, v13);
  }
  this->append_prop_num = append_prop_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->set_id);
  }
  set_id = a2->set_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->set_id, v13);
  }
  this->set_id = set_id;
  p_add_prop_levels = &a2->add_prop_levels;
  std::vector<unsigned int>::vector(&this->add_prop_levels, &a2->add_prop_levels);
  if ( *(_BYTE *)(((unsigned __int64)&a2->base_conv_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->base_conv_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->base_conv_exp);
  }
  base_conv_exp = a2->base_conv_exp;
  v20 = *(_BYTE *)(((unsigned __int64)&this->base_conv_exp >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_add_prop_levels) = v20 != 0;
    __asan_report_store4(&this->base_conv_exp, p_add_prop_levels);
  }
  this->base_conv_exp = base_conv_exp;
  v21 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_level);
  }
  max_level = a2->max_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->max_level, v21);
  }
  this->max_level = max_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->destroy_rule);
  }
  destroy_rule = a2->destroy_rule;
  v25 = *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->destroy_rule, v21);
  }
  this->destroy_rule = destroy_rule;
  std::vector<unsigned int>::vector(&this->destroy_return_material, &a2->destroy_return_material);
  p_destroy_return_material_count = &a2->destroy_return_material_count;
  std::vector<unsigned int>::vector(&this->destroy_return_material_count, &a2->destroy_return_material_count);
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_lock_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->initial_lock_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->initial_lock_state);
  }
  initial_lock_state = a2->initial_lock_state;
  v28 = *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_destroy_return_material_count) = v28 != 0;
    __asan_report_store4(&this->initial_lock_state, p_destroy_return_material_count);
  }
  this->initial_lock_state = initial_lock_state;
};

// Line 55: range 0000000014DECF1C-0000000014DECF46
void __cdecl data::ReliquaryExcelConfig::~ReliquaryExcelConfig(data::ReliquaryExcelConfig *const this)
{
  data::ReliquaryExcelConfig::~ReliquaryExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 55: range 0000000014DECE9A-0000000014DECF1B
void __cdecl data::ReliquaryExcelConfig::~ReliquaryExcelConfig(data::ReliquaryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::vector<unsigned int>::~vector(&this->destroy_return_material_count);
  std::vector<unsigned int>::~vector(&this->destroy_return_material);
  std::vector<unsigned int>::~vector(&this->add_prop_levels);
  data::ItemConfig::~ItemConfig((data::ItemConfig *const)this);
};

// Line 78: range 00000000149F5A36-00000000149F5C6F
void __cdecl data::ReliquaryMainPropExcelConfig::ReliquaryMainPropExcelConfig(
        data::ReliquaryMainPropExcelConfig *const this,
        const data::ReliquaryMainPropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t prop_depot_id; // ecx
  char v7; // dl
  data::FightPropType prop_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  const data::ReliquaryMainPropExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryMainPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryMainPropExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->prop_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->prop_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->prop_depot_id);
  }
  prop_depot_id = v13->prop_depot_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->prop_depot_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->prop_depot_id, v5);
  }
  this->prop_depot_id = prop_depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->prop_type);
  }
  prop_type = v13->prop_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->prop_type, v5);
  }
  this->prop_type = prop_type;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
};

// Line 81: range 0000000014DECE6E-0000000014DECE98
void __cdecl data::ReliquaryMainPropExcelConfig::~ReliquaryMainPropExcelConfig(
        data::ReliquaryMainPropExcelConfig *const this)
{
  data::ReliquaryMainPropExcelConfig::~ReliquaryMainPropExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 81: range 0000000014DECE2C-0000000014DECE6D
void __cdecl data::ReliquaryMainPropExcelConfig::~ReliquaryMainPropExcelConfig(
        data::ReliquaryMainPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryMainPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryMainPropExcelConfig = v2;
};

// Line 95: range 0000000014783830-0000000014783A0D
void __cdecl data::ReliquaryMainPropGuaranteeExcelConfig::ReliquaryMainPropGuaranteeExcelConfig(
        data::ReliquaryMainPropGuaranteeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryMainPropGuaranteeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryMainPropGuaranteeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_prop_id, v1);
  }
  this->main_prop_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_prop_depot_id, v3);
  }
  this->main_prop_depot_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fight_prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fight_prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fight_prop_type, v3);
  }
  this->fight_prop_type = FIGHT_PROP_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_guarantee_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_guarantee_count, v4);
  }
  this->base_guarantee_count = 0;
  std::vector<float>::vector(&this->base_guarantee_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_guarantee_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_guarantee_count, v4);
  }
  this->min_guarantee_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_guarantee_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_guarantee_count, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->max_guarantee_count = 0;
};

// Line 95: range 0000000014D6B1D2-0000000014D6B520
void __cdecl data::ReliquaryMainPropGuaranteeExcelConfig::ReliquaryMainPropGuaranteeExcelConfig(
        data::ReliquaryMainPropGuaranteeExcelConfig *const this,
        const data::ReliquaryMainPropGuaranteeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t main_prop_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t main_prop_depot_id; // ecx
  char v7; // dl
  data::FightPropType fight_prop_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t base_guarantee_count; // ecx
  char v12; // dl
  std::vector<float> *p_base_guarantee_count_range; // rsi
  uint32_t min_guarantee_count; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t max_guarantee_count; // ecx
  char v18; // dl
  const data::ReliquaryMainPropGuaranteeExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryMainPropGuaranteeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryMainPropGuaranteeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->main_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->main_prop_id);
  }
  main_prop_id = a2->main_prop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->main_prop_id, a2);
  }
  this->main_prop_id = main_prop_id;
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->main_prop_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->main_prop_depot_id);
  }
  main_prop_depot_id = v19->main_prop_depot_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->main_prop_depot_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->main_prop_depot_id, v5);
  }
  this->main_prop_depot_id = main_prop_depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->fight_prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->fight_prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->fight_prop_type);
  }
  fight_prop_type = v19->fight_prop_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->fight_prop_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->fight_prop_type, v5);
  }
  this->fight_prop_type = fight_prop_type;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->base_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->base_guarantee_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->base_guarantee_count);
  }
  base_guarantee_count = v19->base_guarantee_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->base_guarantee_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->base_guarantee_count, v10);
  }
  this->base_guarantee_count = base_guarantee_count;
  p_base_guarantee_count_range = &v19->base_guarantee_count_range;
  std::vector<float>::vector(&this->base_guarantee_count_range, &v19->base_guarantee_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&v19->min_guarantee_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->min_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->min_guarantee_count);
  }
  min_guarantee_count = v19->min_guarantee_count;
  v15 = *(_BYTE *)(((unsigned __int64)&this->min_guarantee_count >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_base_guarantee_count_range) = v15 != 0;
    __asan_report_store4(&this->min_guarantee_count, p_base_guarantee_count_range);
  }
  this->min_guarantee_count = min_guarantee_count;
  v16 = (((_BYTE)v19 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_guarantee_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_guarantee_count);
  }
  max_guarantee_count = v19->max_guarantee_count;
  v18 = *(_BYTE *)(((unsigned __int64)&this->max_guarantee_count >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->max_guarantee_count, v16);
  }
  this->max_guarantee_count = max_guarantee_count;
};

// Line 98: range 0000000014DECDAE-0000000014DECDFF
void __cdecl data::ReliquaryMainPropGuaranteeExcelConfig::~ReliquaryMainPropGuaranteeExcelConfig(
        data::ReliquaryMainPropGuaranteeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryMainPropGuaranteeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryMainPropGuaranteeExcelConfig = v2;
  std::vector<float>::~vector(&this->base_guarantee_count_range);
};

// Line 98: range 0000000014DECE00-0000000014DECE2A
void __cdecl data::ReliquaryMainPropGuaranteeExcelConfig::~ReliquaryMainPropGuaranteeExcelConfig(
        data::ReliquaryMainPropGuaranteeExcelConfig *const this)
{
  data::ReliquaryMainPropGuaranteeExcelConfig::~ReliquaryMainPropGuaranteeExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 115: range 0000000014D60966-0000000014D60CE1
data::ReliquaryAffixExcelConfig *__cdecl data::ReliquaryAffixExcelConfig::operator=(
        data::ReliquaryAffixExcelConfig *const this,
        const data::ReliquaryAffixExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t depot_id; // ecx
  char v6; // dl
  uint32_t group_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  data::FightPropType prop_type; // ecx
  char v11; // dl
  float prop_value; // xmm0_4
  __int64 v13; // rsi
  uint32_t weight; // ecx
  char v15; // dl
  uint32_t upgrade_weight; // ecx
  char v17; // al
  const data::ReliquaryAffixExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->depot_id);
  }
  depot_id = v19->depot_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->depot_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->depot_id, v4);
  }
  this->depot_id = depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->group_id);
  }
  group_id = v19->group_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = group_id;
  v9 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->prop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->prop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->prop_type);
  }
  prop_type = v19->prop_type;
  v11 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
    __asan_report_store4(&this->prop_type, v9);
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v19->prop_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->prop_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->prop_value);
  }
  prop_value = v19->prop_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_value, v9);
  }
  this->prop_value = prop_value;
  v13 = (((_BYTE)v19 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->weight);
  }
  weight = v19->weight;
  v15 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->weight, v13);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v19->upgrade_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->upgrade_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->upgrade_weight);
  }
  upgrade_weight = v19->upgrade_weight;
  v17 = *(_BYTE *)(((unsigned __int64)&this->upgrade_weight >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->upgrade_weight, v13);
  }
  this->upgrade_weight = upgrade_weight;
  return this;
};

// Line 115: range 00000000149F2764-00000000149F2B0F
void __cdecl data::ReliquaryAffixExcelConfig::ReliquaryAffixExcelConfig(
        data::ReliquaryAffixExcelConfig *const this,
        const data::ReliquaryAffixExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t depot_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::FightPropType prop_type; // ecx
  char v12; // dl
  float prop_value; // xmm0_4
  __int64 v14; // rsi
  uint32_t weight; // ecx
  char v16; // dl
  uint32_t upgrade_weight; // ecx
  char v18; // al
  const data::ReliquaryAffixExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryAffixExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->depot_id);
  }
  depot_id = v19->depot_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->depot_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->depot_id, v5);
  }
  this->depot_id = depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->group_id);
  }
  group_id = v19->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->prop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->prop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->prop_type);
  }
  prop_type = v19->prop_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->prop_type, v10);
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v19->prop_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->prop_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->prop_value);
  }
  prop_value = v19->prop_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_value, v10);
  }
  this->prop_value = prop_value;
  v14 = (((_BYTE)v19 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->weight);
  }
  weight = v19->weight;
  v16 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->weight, v14);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v19->upgrade_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->upgrade_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->upgrade_weight);
  }
  upgrade_weight = v19->upgrade_weight;
  v18 = *(_BYTE *)(((unsigned __int64)&this->upgrade_weight >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->upgrade_weight, v14);
  }
  this->upgrade_weight = upgrade_weight;
};

// Line 118: range 0000000014DECD40-0000000014DECD81
void __cdecl data::ReliquaryAffixExcelConfig::~ReliquaryAffixExcelConfig(data::ReliquaryAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryAffixExcelConfig = v2;
};

// Line 118: range 0000000014DECD82-0000000014DECDAC
void __cdecl data::ReliquaryAffixExcelConfig::~ReliquaryAffixExcelConfig(data::ReliquaryAffixExcelConfig *const this)
{
  data::ReliquaryAffixExcelConfig::~ReliquaryAffixExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 135: range 0000000014783A0E-0000000014783B21
void __cdecl data::ReliquaryLevelExcelConfig::ReliquaryLevelExcelConfig(data::ReliquaryLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rank, v1);
  }
  this->rank = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp, v3);
  }
  this->exp = 0;
  std::vector<data::PropValConfig>::vector(&this->add_props);
};

// Line 135: range 0000000014A197D2-0000000014A199A1
void __cdecl data::ReliquaryLevelExcelConfig::ReliquaryLevelExcelConfig(
        data::ReliquaryLevelExcelConfig *const this,
        const data::ReliquaryLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t rank; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  uint32_t exp; // ecx
  char v9; // al
  const data::ReliquaryLevelExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rank >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rank);
  }
  rank = a2->rank;
  v4 = *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->rank, a2);
  }
  this->rank = rank;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->level);
  }
  level = v10->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v10->exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->exp);
  }
  exp = v10->exp;
  v9 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->exp, v5);
  }
  this->exp = exp;
  std::vector<data::PropValConfig>::vector(&this->add_props, &v10->add_props);
};

// Line 138: range 0000000014DECD14-0000000014DECD3E
void __cdecl data::ReliquaryLevelExcelConfig::~ReliquaryLevelExcelConfig(data::ReliquaryLevelExcelConfig *const this)
{
  data::ReliquaryLevelExcelConfig::~ReliquaryLevelExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 138: range 0000000014DECCC2-0000000014DECD13
void __cdecl data::ReliquaryLevelExcelConfig::~ReliquaryLevelExcelConfig(data::ReliquaryLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryLevelExcelConfig = v2;
  std::vector<data::PropValConfig>::~vector(&this->add_props);
};

// Line 152: range 0000000014783B22-0000000014783CC9
void __cdecl data::ReliquarySetExcelConfig::ReliquarySetExcelConfig(data::ReliquarySetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReliquarySetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquarySetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_id, v1);
  }
  this->set_id = 0;
  std::vector<unsigned int>::vector(&this->set_need_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->equip_affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->equip_affix_id, v1);
  }
  this->equip_affix_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_filter >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_filter >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_filter, v3);
  }
  this->disable_filter = 0;
  std::vector<unsigned int>::vector(&this->contains_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->bag_sort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bag_sort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bag_sort_value, v3);
  }
  this->bag_sort_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guarantee_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guarantee_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guarantee_depot_id, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->guarantee_depot_id = 0;
};

// Line 152: range 0000000014D6B810-0000000014D6BB1B
void __cdecl data::ReliquarySetExcelConfig::ReliquarySetExcelConfig(
        data::ReliquarySetExcelConfig *const this,
        const data::ReliquarySetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t set_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_set_need_num; // rsi
  uint32_t equip_affix_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t disable_filter; // ecx
  char v10; // dl
  std::vector<unsigned int> *p_contains_list; // rsi
  uint32_t bag_sort_value; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t guarantee_depot_id; // ecx
  char v16; // dl
  const data::ReliquarySetExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquarySetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquarySetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->set_id);
  }
  set_id = a2->set_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->set_id, a2);
  }
  this->set_id = set_id;
  p_set_need_num = &v17->set_need_num;
  std::vector<unsigned int>::vector(&this->set_need_num, &v17->set_need_num);
  if ( *(_BYTE *)(((unsigned __int64)&v17->equip_affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->equip_affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->equip_affix_id);
  }
  equip_affix_id = v17->equip_affix_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->equip_affix_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_set_need_num) = v7 != 0;
    __asan_report_store4(&this->equip_affix_id, p_set_need_num);
  }
  this->equip_affix_id = equip_affix_id;
  v8 = (((_BYTE)v17 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->disable_filter >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->disable_filter >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->disable_filter);
  }
  disable_filter = v17->disable_filter;
  v10 = *(_BYTE *)(((unsigned __int64)&this->disable_filter >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->disable_filter, v8);
  }
  this->disable_filter = disable_filter;
  p_contains_list = &v17->contains_list;
  std::vector<unsigned int>::vector(&this->contains_list, &v17->contains_list);
  if ( *(_BYTE *)(((unsigned __int64)&v17->bag_sort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->bag_sort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->bag_sort_value);
  }
  bag_sort_value = v17->bag_sort_value;
  v13 = *(_BYTE *)(((unsigned __int64)&this->bag_sort_value >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_contains_list) = v13 != 0;
    __asan_report_store4(&this->bag_sort_value, p_contains_list);
  }
  this->bag_sort_value = bag_sort_value;
  v14 = (((_BYTE)v17 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->guarantee_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->guarantee_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->guarantee_depot_id);
  }
  guarantee_depot_id = v17->guarantee_depot_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->guarantee_depot_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->guarantee_depot_id, v14);
  }
  this->guarantee_depot_id = guarantee_depot_id;
};

// Line 155: range 0000000014DECC96-0000000014DECCC0
void __cdecl data::ReliquarySetExcelConfig::~ReliquarySetExcelConfig(data::ReliquarySetExcelConfig *const this)
{
  data::ReliquarySetExcelConfig::~ReliquarySetExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 155: range 0000000014DECC34-0000000014DECC95
void __cdecl data::ReliquarySetExcelConfig::~ReliquarySetExcelConfig(data::ReliquarySetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquarySetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquarySetExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->contains_list);
  std::vector<unsigned int>::~vector(&this->set_need_num);
};

// Line 172: range 0000000014A1A24E-0000000014A1A38D
void __cdecl data::ReliquaryPowerupExcelConfig::ReliquaryPowerupExcelConfig(
        data::ReliquaryPowerupExcelConfig *const this,
        const data::ReliquaryPowerupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t powerup_multiple; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t powerup_weight; // ecx
  char v7; // dl
  const data::ReliquaryPowerupExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryPowerupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryPowerupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->powerup_multiple >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->powerup_multiple >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->powerup_multiple);
  }
  powerup_multiple = a2->powerup_multiple;
  v4 = *(_BYTE *)(((unsigned __int64)&this->powerup_multiple >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->powerup_multiple, a2);
  }
  this->powerup_multiple = powerup_multiple;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->powerup_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->powerup_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->powerup_weight);
  }
  powerup_weight = v8->powerup_weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->powerup_weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->powerup_weight, v5);
  }
  this->powerup_weight = powerup_weight;
};

// Line 175: range 0000000014DECC08-0000000014DECC32
void __cdecl data::ReliquaryPowerupExcelConfig::~ReliquaryPowerupExcelConfig(
        data::ReliquaryPowerupExcelConfig *const this)
{
  data::ReliquaryPowerupExcelConfig::~ReliquaryPowerupExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 175: range 0000000014DECBC6-0000000014DECC07
void __cdecl data::ReliquaryPowerupExcelConfig::~ReliquaryPowerupExcelConfig(
        data::ReliquaryPowerupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryPowerupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryPowerupExcelConfig = v2;
};
