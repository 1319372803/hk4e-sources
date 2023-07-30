// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WeaponExcelConfig.gen.h

// Line 63: range 000000000D2FE92C-000000000D2FEA31
void __cdecl data::WeaponProperty::WeaponProperty(data::WeaponProperty *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WeaponProperty + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponProperty = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_type, v1);
  }
  this->prop_type = FIGHT_PROP_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, v3);
  }
  this->init_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = GROW_CURVE_NONE;
};

// Line 63: range 000000000D41A9A0-000000000D41AB57
void __cdecl data::WeaponProperty::WeaponProperty(data::WeaponProperty *const this, const data::WeaponProperty *a2)
{
  int (**v2)(...); // rdx
  data::FightPropType prop_type; // ecx
  char v4; // al
  float init_value; // xmm0_4
  __int64 v6; // rsi
  data::GrowCurveType type; // ecx
  char v8; // al
  const data::WeaponProperty *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeaponProperty + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeaponProperty = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v9->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->init_value);
  }
  init_value = v9->init_value;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, v6);
  }
  this->init_value = init_value;
  if ( *(_BYTE *)(((unsigned __int64)&v9->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->type);
  }
  type = v9->type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->type, v6);
  }
  this->type = type;
};

// Line 66: range 000000000D266F1A-000000000D266F44
void __cdecl data::WeaponProperty::~WeaponProperty(data::WeaponProperty *const this)
{
  data::WeaponProperty::~WeaponProperty(this);
  operator delete(this, 0x18uLL);
};

// Line 66: range 000000000D266ED8-000000000D266F19
void __cdecl data::WeaponProperty::~WeaponProperty(data::WeaponProperty *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponProperty + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponProperty = v2;
};

// Line 77: range 000000000CE26630-000000000CE269B0
void __cdecl data::WeaponExcelConfig::WeaponExcelConfig(data::WeaponExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::WeaponExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weapon_type, v3);
  }
  this->weapon_type = WEAPON_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rank_level, v3);
  }
  this->rank_level = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_type, v4);
  }
  this->material_type = WEAPON_MATERIAL_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elem_type, v4);
  }
  this->elem_type = None_0;
  v5 = ((_BYTE)this + 92) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_gold >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_gold >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_gold, v5, v6);
  this->is_gold = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_base_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_base_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_base_exp, v5);
  }
  this->weapon_base_exp = 0;
  std::vector<unsigned int>::vector(&this->skill_affix);
  if ( *(_BYTE *)(((unsigned __int64)&this->awaken_material >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->awaken_material >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->awaken_material, v5);
  }
  this->awaken_material = 0;
  std::vector<data::WeaponProperty>::vector(&this->weapon_prop);
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_promote_id, v5);
  }
  this->weapon_promote_id = 0;
  std::vector<unsigned int>::vector(&this->awaken_costs);
  if ( *(_BYTE *)(((unsigned __int64)&this->enhance_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enhance_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enhance_rule, v5);
  }
  this->enhance_rule = 0;
  v7 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->destroy_rule, v7);
  }
  this->destroy_rule = DESTROY_NONE;
  std::vector<unsigned int>::vector(&this->destroy_return_material);
  std::vector<unsigned int>::vector(&this->destroy_return_material_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_lock_state, v7);
  }
  this->initial_lock_state = 0;
};

// Line 77: range 000000000D3823F6-000000000D382AD6
void __cdecl data::WeaponExcelConfig::WeaponExcelConfig(
        data::WeaponExcelConfig *const this,
        const data::WeaponExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::WeaponType weapon_type; // ecx
  char v5; // dl
  uint32_t rank_level; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::WeaponMaterialType material_type; // ecx
  char v10; // dl
  data::ElementType elem_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_gold; // cl
  char v16; // dl
  __int64 v17; // rdx
  uint32_t weapon_base_exp; // ecx
  char v19; // al
  std::vector<unsigned int> *p_skill_affix; // rsi
  uint32_t awaken_material; // ecx
  char v22; // al
  std::vector<data::WeaponProperty> *p_weapon_prop; // rsi
  uint32_t weapon_promote_id; // ecx
  char v25; // al
  std::vector<unsigned int> *p_awaken_costs; // rsi
  uint32_t enhance_rule; // ecx
  char v28; // al
  __int64 v29; // rsi
  data::MaterialDestroyType destroy_rule; // ecx
  char v31; // dl
  std::vector<unsigned int> *p_destroy_return_material_count; // rsi
  uint32_t initial_lock_state; // ecx
  char v34; // al

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this, (const data::ItemConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::WeaponExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->weapon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->weapon_type);
  }
  weapon_type = a2->weapon_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->weapon_type, v3);
  }
  this->weapon_type = weapon_type;
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->material_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->material_type);
  }
  material_type = a2->material_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->material_type, v8);
  }
  this->material_type = material_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->elem_type);
  }
  elem_type = a2->elem_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->elem_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->elem_type, v8);
  }
  this->elem_type = elem_type;
  v13 = ((_BYTE)a2 + 92) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->is_gold >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->is_gold >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->is_gold, v13, v14);
  is_gold = a2->is_gold;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_gold >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_gold, v13, v17);
  this->is_gold = is_gold;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_base_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_base_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_base_exp);
  }
  weapon_base_exp = a2->weapon_base_exp;
  v19 = *(_BYTE *)(((unsigned __int64)&this->weapon_base_exp >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v13) = v19 != 0;
    __asan_report_store4(&this->weapon_base_exp, v13);
  }
  this->weapon_base_exp = weapon_base_exp;
  p_skill_affix = &a2->skill_affix;
  std::vector<unsigned int>::vector(&this->skill_affix, &a2->skill_affix);
  if ( *(_BYTE *)(((unsigned __int64)&a2->awaken_material >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->awaken_material >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->awaken_material);
  }
  awaken_material = a2->awaken_material;
  v22 = *(_BYTE *)(((unsigned __int64)&this->awaken_material >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_skill_affix) = v22 != 0;
    __asan_report_store4(&this->awaken_material, p_skill_affix);
  }
  this->awaken_material = awaken_material;
  p_weapon_prop = &a2->weapon_prop;
  std::vector<data::WeaponProperty>::vector(&this->weapon_prop, &a2->weapon_prop);
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_promote_id);
  }
  weapon_promote_id = a2->weapon_promote_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_weapon_prop) = v25 != 0;
    __asan_report_store4(&this->weapon_promote_id, p_weapon_prop);
  }
  this->weapon_promote_id = weapon_promote_id;
  p_awaken_costs = &a2->awaken_costs;
  std::vector<unsigned int>::vector(&this->awaken_costs, &a2->awaken_costs);
  if ( *(_BYTE *)(((unsigned __int64)&a2->enhance_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->enhance_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->enhance_rule);
  }
  enhance_rule = a2->enhance_rule;
  v28 = *(_BYTE *)(((unsigned __int64)&this->enhance_rule >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_awaken_costs) = v28 != 0;
    __asan_report_store4(&this->enhance_rule, p_awaken_costs);
  }
  this->enhance_rule = enhance_rule;
  v29 = (((_BYTE)a2 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->destroy_rule);
  }
  destroy_rule = a2->destroy_rule;
  v31 = *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->destroy_rule, v29);
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
  v34 = *(_BYTE *)(((unsigned __int64)&this->initial_lock_state >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(p_destroy_return_material_count) = v34 != 0;
    __asan_report_store4(&this->initial_lock_state, p_destroy_return_material_count);
  }
  this->initial_lock_state = initial_lock_state;
};

// Line 81: range 000000000D49339C-000000000D4933C6
void __cdecl data::WeaponExcelConfig::~WeaponExcelConfig(data::WeaponExcelConfig *const this)
{
  data::WeaponExcelConfig::~WeaponExcelConfig(this);
  operator delete(this, 0x100uLL);
};

// Line 81: range 000000000D4932F6-000000000D49339B
void __cdecl data::WeaponExcelConfig::~WeaponExcelConfig(data::WeaponExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::vector<unsigned int>::~vector(&this->destroy_return_material_count);
  std::vector<unsigned int>::~vector(&this->destroy_return_material);
  std::vector<unsigned int>::~vector(&this->awaken_costs);
  std::vector<data::WeaponProperty>::~vector(&this->weapon_prop);
  std::vector<unsigned int>::~vector(&this->skill_affix);
  data::ItemConfig::~ItemConfig((data::ItemConfig *const)this);
};

// Line 107: range 000000000CE269B2-000000000CE26A41
void __cdecl data::WeaponLevelExcelConfig::WeaponLevelExcelConfig(data::WeaponLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<unsigned int>::vector(&this->required_exps);
};

// Line 107: range 000000000D382C18-000000000D382CED
void __cdecl data::WeaponLevelExcelConfig::WeaponLevelExcelConfig(
        data::WeaponLevelExcelConfig *const this,
        const data::WeaponLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  const data::WeaponLevelExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeaponLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeaponLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  std::vector<unsigned int>::vector(&this->required_exps, &v5->required_exps);
};

// Line 110: range 000000000D493278-000000000D4932C9
void __cdecl data::WeaponLevelExcelConfig::~WeaponLevelExcelConfig(data::WeaponLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->required_exps);
};

// Line 110: range 000000000D4932CA-000000000D4932F4
void __cdecl data::WeaponLevelExcelConfig::~WeaponLevelExcelConfig(data::WeaponLevelExcelConfig *const this)
{
  data::WeaponLevelExcelConfig::~WeaponLevelExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 122: range 000000000CE26A42-000000000CE26BE9
void __cdecl data::WeaponPromoteExcelConfig::WeaponPromoteExcelConfig(data::WeaponPromoteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WeaponPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponPromoteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_promote_id, v1);
  }
  this->weapon_promote_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->promote_level, v3);
  }
  this->promote_level = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_cost, v3);
  }
  this->coin_cost = 0;
  std::vector<data::PropValConfig>::vector(&this->add_props);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_max_level, v3);
  }
  this->unlock_max_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->required_player_level, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->required_player_level = 0;
};

// Line 122: range 000000000D082DAE-000000000D0830B9
void __cdecl data::WeaponPromoteExcelConfig::WeaponPromoteExcelConfig(
        data::WeaponPromoteExcelConfig *const this,
        const data::WeaponPromoteExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t weapon_promote_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t promote_level; // ecx
  char v7; // dl
  std::vector<data::IdCountConfig> *p_cost_items; // rsi
  uint32_t coin_cost; // ecx
  char v10; // al
  std::vector<data::PropValConfig> *p_add_props; // rsi
  uint32_t unlock_max_level; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t required_player_level; // ecx
  char v16; // dl
  const data::WeaponPromoteExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeaponPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeaponPromoteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_promote_id);
  }
  weapon_promote_id = a2->weapon_promote_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->weapon_promote_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->weapon_promote_id, a2);
  }
  this->weapon_promote_id = weapon_promote_id;
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->promote_level);
  }
  promote_level = v17->promote_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->promote_level, v5);
  }
  this->promote_level = promote_level;
  p_cost_items = &v17->cost_items;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v17->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&v17->coin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->coin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->coin_cost);
  }
  coin_cost = v17->coin_cost;
  v10 = *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_cost_items) = v10 != 0;
    __asan_report_store4(&this->coin_cost, p_cost_items);
  }
  this->coin_cost = coin_cost;
  p_add_props = &v17->add_props;
  std::vector<data::PropValConfig>::vector(&this->add_props, &v17->add_props);
  if ( *(_BYTE *)(((unsigned __int64)&v17->unlock_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->unlock_max_level);
  }
  unlock_max_level = v17->unlock_max_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_add_props) = v13 != 0;
    __asan_report_store4(&this->unlock_max_level, p_add_props);
  }
  this->unlock_max_level = unlock_max_level;
  v14 = (((_BYTE)v17 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->required_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->required_player_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->required_player_level);
  }
  required_player_level = v17->required_player_level;
  v16 = *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->required_player_level, v14);
  }
  this->required_player_level = required_player_level;
};

// Line 125: range 000000000D49324C-000000000D493276
void __cdecl data::WeaponPromoteExcelConfig::~WeaponPromoteExcelConfig(data::WeaponPromoteExcelConfig *const this)
{
  data::WeaponPromoteExcelConfig::~WeaponPromoteExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 125: range 000000000D4931EA-000000000D49324B
void __cdecl data::WeaponPromoteExcelConfig::~WeaponPromoteExcelConfig(data::WeaponPromoteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponPromoteExcelConfig = v2;
  std::vector<data::PropValConfig>::~vector(&this->add_props);
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
};

// Line 196: range 000000000CE74FE4-000000000CE7516B
data::WeaponProperty *__cdecl data::WeaponProperty::operator=(
        data::WeaponProperty *const this,
        const data::WeaponProperty *a2)
{
  data::FightPropType prop_type; // ecx
  char v3; // al
  float init_value; // xmm0_4
  __int64 v5; // rsi
  data::GrowCurveType type; // ecx
  char v7; // al
  const data::WeaponProperty *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v9->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->init_value);
  }
  init_value = v9->init_value;
  v5 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, v5);
  }
  this->init_value = init_value;
  if ( *(_BYTE *)(((unsigned __int64)&v9->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->type);
  }
  type = v9->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  return this;
};
