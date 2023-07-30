// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MaterialExcelConfig.gen.h

// Line 211: range 00000000147FA14A-00000000147FA1EF
data::ItemUseConfig *__cdecl data::ItemUseConfig::operator=(
        data::ItemUseConfig *const this,
        const data::ItemUseConfig *a2)
{
  data::ItemUseOp use_op; // ecx
  char v3; // al
  const data::ItemUseConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_op >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->use_op >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->use_op);
  }
  use_op = a2->use_op;
  v3 = *(_BYTE *)(((unsigned __int64)&this->use_op >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->use_op, a2);
  }
  this->use_op = use_op;
  std::vector<std::string>::operator=(&this->use_param, &v5->use_param);
  return this;
};

// Line 211: range 0000000014CCB34A-0000000014CCB3D9
void __cdecl data::ItemUseConfig::ItemUseConfig(data::ItemUseConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemUseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemUseConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_op >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_op >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_op, v1);
  }
  this->use_op = ITEM_USE_NONE;
  std::vector<std::string>::vector(&this->use_param);
};

// Line 211: range 0000000014D4EAA6-0000000014D4EB7B
void __cdecl data::ItemUseConfig::ItemUseConfig(data::ItemUseConfig *const this, const data::ItemUseConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemUseOp use_op; // ecx
  char v4; // al
  const data::ItemUseConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ItemUseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemUseConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_op >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->use_op >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->use_op);
  }
  use_op = a2->use_op;
  v4 = *(_BYTE *)(((unsigned __int64)&this->use_op >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->use_op, a2);
  }
  this->use_op = use_op;
  std::vector<std::string>::vector(&this->use_param, &v5->use_param);
};

// Line 214: range 0000000014C0EDF8-0000000014C0EE22
void __cdecl data::ItemUseConfig::~ItemUseConfig(data::ItemUseConfig *const this)
{
  data::ItemUseConfig::~ItemUseConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 214: range 0000000014C0EDA6-0000000014C0EDF7
void __cdecl data::ItemUseConfig::~ItemUseConfig(data::ItemUseConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemUseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemUseConfig = v2;
  std::vector<std::string>::~vector(&this->use_param);
};

// Line 224: range 0000000014771ABC-0000000014771EF4
void __cdecl data::MaterialExcelConfig::MaterialExcelConfig(data::MaterialExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::MaterialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_type, v3);
  }
  this->material_type = MATERIAL_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_time, v3);
  }
  this->cd_time = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_group, v4);
  }
  this->cd_group = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_limit, v4);
  }
  this->stack_limit = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_use_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_use_count, v5);
  }
  this->max_use_count = 0;
  if ( *(char *)(((unsigned __int64)&this->use_on_gain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_on_gain, v5, &this->use_on_gain);
  this->use_on_gain = 0;
  v6 = ((_BYTE)this + 97) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->no_first_get_hint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->no_first_get_hint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->no_first_get_hint, v6, v7);
  this->no_first_get_hint = 0;
  v8 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_target, v8);
  }
  this->use_target = ITEM_USE_TARGET_NONE;
  std::vector<data::ItemUseConfig>::vector(&this->item_use);
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rank_level, v8);
  }
  this->rank_level = 0;
  v9 = ((_BYTE)this - 124) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->auto_enter_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->auto_enter_bag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->auto_enter_bag, v9, v10);
  this->auto_enter_bag = 0;
  v11 = ((_BYTE)this - 123) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_split_drop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_split_drop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_split_drop, v11, v12);
  this->is_split_drop = 0;
  std::vector<unsigned int>::vector(&this->satiation_params);
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_rule, v11);
  }
  this->destroy_rule = DESTROY_NONE;
  std::vector<unsigned int>::vector(&this->destroy_return_material);
  std::vector<unsigned int>::vector(&this->destroy_return_material_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_id, v11);
  }
  this->set_id = 0;
  v13 = ((_BYTE)this - 36) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_force_get_hint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_force_get_hint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_force_get_hint, v13, v14);
  this->is_force_get_hint = 0;
};

// Line 224: range 0000000014D4EE3A-0000000014D4F67E
void __cdecl data::MaterialExcelConfig::MaterialExcelConfig(
        data::MaterialExcelConfig *const this,
        const data::MaterialExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::MaterialType material_type; // ecx
  char v5; // dl
  uint32_t cd_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t cd_group; // ecx
  char v10; // dl
  uint32_t stack_limit; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t max_use_count; // ecx
  char v15; // dl
  bool use_on_gain; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool no_first_get_hint; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  data::ItemUseTarget use_target; // ecx
  char v25; // dl
  std::vector<data::ItemUseConfig> *p_item_use; // rsi
  uint32_t rank_level; // ecx
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool auto_enter_bag; // cl
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  bool is_split_drop; // cl
  char v37; // dl
  __int64 v38; // rdx
  std::vector<unsigned int> *p_satiation_params; // rsi
  data::MaterialDestroyType destroy_rule; // ecx
  char v41; // al
  std::vector<unsigned int> *p_destroy_return_material_count; // rsi
  uint32_t set_id; // ecx
  char v44; // al
  __int64 v45; // rsi
  __int64 v46; // rdx
  bool is_force_get_hint; // cl
  char v48; // dl
  __int64 v49; // rdx

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this, (const data::ItemConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::MaterialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->material_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->material_type);
  }
  material_type = a2->material_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->material_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->material_type, v3);
  }
  this->material_type = material_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd_time);
  }
  cd_time = a2->cd_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cd_time, v3);
  }
  this->cd_time = cd_time;
  v8 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cd_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cd_group);
  }
  cd_group = a2->cd_group;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->cd_group, v8);
  }
  this->cd_group = cd_group;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stack_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stack_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stack_limit);
  }
  stack_limit = a2->stack_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->stack_limit, v8);
  }
  this->stack_limit = stack_limit;
  v13 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_use_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_use_count);
  }
  max_use_count = a2->max_use_count;
  v15 = *(_BYTE *)(((unsigned __int64)&this->max_use_count >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v15 )
    __asan_report_store4(&this->max_use_count, v13);
  this->max_use_count = max_use_count;
  if ( *(char *)(((unsigned __int64)&a2->use_on_gain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_on_gain, v13, &a2->use_on_gain);
  use_on_gain = a2->use_on_gain;
  v17 = *(_BYTE *)(((unsigned __int64)&this->use_on_gain >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store1(&this->use_on_gain, v13, &this->use_on_gain);
  }
  this->use_on_gain = use_on_gain;
  v18 = ((_BYTE)a2 + 97) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->no_first_get_hint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->no_first_get_hint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->no_first_get_hint, v18, v19);
  no_first_get_hint = a2->no_first_get_hint;
  v21 = *(_BYTE *)(((unsigned __int64)&this->no_first_get_hint >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->no_first_get_hint, v18, v22);
  this->no_first_get_hint = no_first_get_hint;
  v23 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->use_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->use_target);
  }
  use_target = a2->use_target;
  v25 = *(_BYTE *)(((unsigned __int64)&this->use_target >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->use_target, v23);
  }
  this->use_target = use_target;
  p_item_use = &a2->item_use;
  std::vector<data::ItemUseConfig>::vector(&this->item_use, &a2->item_use);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rank_level);
  }
  rank_level = a2->rank_level;
  v28 = *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_item_use) = v28 != 0;
    __asan_report_store4(&this->rank_level, p_item_use);
  }
  this->rank_level = rank_level;
  v29 = ((_BYTE)a2 - 124) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&a2->auto_enter_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&a2->auto_enter_bag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&a2->auto_enter_bag, v29, v30);
  auto_enter_bag = a2->auto_enter_bag;
  v32 = *(_BYTE *)(((unsigned __int64)&this->auto_enter_bag >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->auto_enter_bag, v29, v33);
  this->auto_enter_bag = auto_enter_bag;
  v34 = ((_BYTE)a2 - 123) & 7;
  v35 = (*(_BYTE *)(((unsigned __int64)&a2->is_split_drop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v34 >= *(_BYTE *)(((unsigned __int64)&a2->is_split_drop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v35 )
    __asan_report_load1(&a2->is_split_drop, v34, v35);
  is_split_drop = a2->is_split_drop;
  v37 = *(_BYTE *)(((unsigned __int64)&this->is_split_drop >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v37 != 0;
  v38 = (v37 != 0) & (unsigned __int8)((((unsigned __int8)this - 123) & 7) >= v37);
  if ( (_BYTE)v38 )
    __asan_report_store1(&this->is_split_drop, v34, v38);
  this->is_split_drop = is_split_drop;
  p_satiation_params = &a2->satiation_params;
  std::vector<unsigned int>::vector(&this->satiation_params, &a2->satiation_params);
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->destroy_rule);
  }
  destroy_rule = a2->destroy_rule;
  v41 = *(_BYTE *)(((unsigned __int64)&this->destroy_rule >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(p_satiation_params) = v41 != 0;
    __asan_report_store4(&this->destroy_rule, p_satiation_params);
  }
  this->destroy_rule = destroy_rule;
  std::vector<unsigned int>::vector(&this->destroy_return_material, &a2->destroy_return_material);
  p_destroy_return_material_count = &a2->destroy_return_material_count;
  std::vector<unsigned int>::vector(&this->destroy_return_material_count, &a2->destroy_return_material_count);
  if ( *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->set_id);
  }
  set_id = a2->set_id;
  v44 = *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(p_destroy_return_material_count) = v44 != 0;
    __asan_report_store4(&this->set_id, p_destroy_return_material_count);
  }
  this->set_id = set_id;
  v45 = ((_BYTE)a2 - 36) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&a2->is_force_get_hint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&a2->is_force_get_hint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_load1(&a2->is_force_get_hint, v45, v46);
  is_force_get_hint = a2->is_force_get_hint;
  v48 = *(_BYTE *)(((unsigned __int64)&this->is_force_get_hint >> 3) + 0x7FFF8000);
  LOBYTE(v45) = v48 != 0;
  v49 = (v48 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v48);
  if ( (_BYTE)v49 )
    __asan_report_store1(&this->is_force_get_hint, v45, v49);
  this->is_force_get_hint = is_force_get_hint;
};

// Line 228: range 0000000014DEC64A-0000000014DEC6DD
void __cdecl data::MaterialExcelConfig::~MaterialExcelConfig(data::MaterialExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MaterialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::vector<unsigned int>::~vector(&this->destroy_return_material_count);
  std::vector<unsigned int>::~vector(&this->destroy_return_material);
  std::vector<unsigned int>::~vector(&this->satiation_params);
  std::vector<data::ItemUseConfig>::~vector(&this->item_use);
  data::ItemConfig::~ItemConfig((data::ItemConfig *const)this);
};

// Line 228: range 0000000014DEC6DE-0000000014DEC708
void __cdecl data::MaterialExcelConfig::~MaterialExcelConfig(data::MaterialExcelConfig *const this)
{
  data::MaterialExcelConfig::~MaterialExcelConfig(this);
  operator delete(this, 0xE0uLL);
};

// Line 256: range 0000000014D4F7C0-0000000014D4F87A
void __cdecl data::DocumentExcelConfig::DocumentExcelConfig(
        data::DocumentExcelConfig *const this,
        const data::DocumentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::DocumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DocumentExcelConfig = v2;
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
};

// Line 259: range 0000000014DEC5DC-0000000014DEC61D
void __cdecl data::DocumentExcelConfig::~DocumentExcelConfig(data::DocumentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DocumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DocumentExcelConfig = v2;
};

// Line 259: range 0000000014DEC61E-0000000014DEC648
void __cdecl data::DocumentExcelConfig::~DocumentExcelConfig(data::DocumentExcelConfig *const this)
{
  data::DocumentExcelConfig::~DocumentExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 270: range 0000000014CCB53C-0000000014CCB631
void __cdecl data::AvatarCardRepeatConfig::AvatarCardRepeatConfig(data::AvatarCardRepeatConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCardRepeatConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCardRepeatConfig = v2;
  std::vector<unsigned int>::vector(&this->count_interval);
  std::string::basic_string(&this->trasfer_item);
  if ( *(_BYTE *)(((unsigned __int64)&this->repeat_count_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->repeat_count_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->repeat_count_min, v1);
  }
  this->repeat_count_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeat_count_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->repeat_count_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->repeat_count_max, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->repeat_count_max = 0;
  std::vector<data::IdCountConfig>::vector(&this->item_vec);
};

// Line 270: range 0000000014D4EBEA-0000000014D4EDB6
void __cdecl data::AvatarCardRepeatConfig::AvatarCardRepeatConfig(
        data::AvatarCardRepeatConfig *const this,
        const data::AvatarCardRepeatConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_trasfer_item; // rsi
  uint32_t repeat_count_min; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t repeat_count_max; // ecx
  char v8; // dl

  v2 = (int (**)(...))(&`vtable for'data::AvatarCardRepeatConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarCardRepeatConfig = v2;
  std::vector<unsigned int>::vector(&this->count_interval, &a2->count_interval);
  p_trasfer_item = &a2->trasfer_item;
  std::string::basic_string(&this->trasfer_item, &a2->trasfer_item);
  if ( *(_BYTE *)(((unsigned __int64)&a2->repeat_count_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->repeat_count_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->repeat_count_min);
  }
  repeat_count_min = a2->repeat_count_min;
  v5 = *(_BYTE *)(((unsigned __int64)&this->repeat_count_min >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_trasfer_item) = v5 != 0;
    __asan_report_store4(&this->repeat_count_min, p_trasfer_item);
  }
  this->repeat_count_min = repeat_count_min;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->repeat_count_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->repeat_count_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->repeat_count_max);
  }
  repeat_count_max = a2->repeat_count_max;
  v8 = *(_BYTE *)(((unsigned __int64)&this->repeat_count_max >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->repeat_count_max, v6);
  }
  this->repeat_count_max = repeat_count_max;
  std::vector<data::IdCountConfig>::vector(&this->item_vec, &a2->item_vec);
};

// Line 273: range 0000000014C0FA2A-0000000014C0FA9B
void __cdecl data::AvatarCardRepeatConfig::~AvatarCardRepeatConfig(data::AvatarCardRepeatConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCardRepeatConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCardRepeatConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->item_vec);
  std::string::~string(&this->trasfer_item);
  std::vector<unsigned int>::~vector(&this->count_interval);
};

// Line 273: range 0000000014C0FA9C-0000000014C0FAC6
void __cdecl data::AvatarCardRepeatConfig::~AvatarCardRepeatConfig(data::AvatarCardRepeatConfig *const this)
{
  data::AvatarCardRepeatConfig::~AvatarCardRepeatConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 286: range 0000000014771F4A-0000000014772017
void __cdecl data::AvatarCardChangeExcelConfig::AvatarCardChangeExcelConfig(
        data::AvatarCardChangeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCardChangeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCardChangeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
  std::vector<data::AvatarCardRepeatConfig>::vector(&this->repeat_transfer_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_talent_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_talent_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_talent_item_count, v1);
  }
  this->last_talent_item_count = 0;
};

// Line 286: range 0000000014D4F9BC-0000000014D4FB06
void __cdecl data::AvatarCardChangeExcelConfig::AvatarCardChangeExcelConfig(
        data::AvatarCardChangeExcelConfig *const this,
        const data::AvatarCardChangeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  std::vector<data::AvatarCardRepeatConfig> *p_repeat_transfer_list; // rsi
  uint32_t last_talent_item_count; // ecx
  char v7; // al
  const data::AvatarCardChangeExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarCardChangeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarCardChangeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  p_repeat_transfer_list = &v8->repeat_transfer_list;
  std::vector<data::AvatarCardRepeatConfig>::vector(&this->repeat_transfer_list, &v8->repeat_transfer_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->last_talent_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->last_talent_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->last_talent_item_count);
  }
  last_talent_item_count = v8->last_talent_item_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->last_talent_item_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_repeat_transfer_list) = v7 != 0;
    __asan_report_store4(&this->last_talent_item_count, p_repeat_transfer_list);
  }
  this->last_talent_item_count = last_talent_item_count;
};

// Line 289: range 0000000014DEC55E-0000000014DEC5AF
void __cdecl data::AvatarCardChangeExcelConfig::~AvatarCardChangeExcelConfig(
        data::AvatarCardChangeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCardChangeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCardChangeExcelConfig = v2;
  std::vector<data::AvatarCardRepeatConfig>::~vector(&this->repeat_transfer_list);
};

// Line 289: range 0000000014DEC5B0-0000000014DEC5DA
void __cdecl data::AvatarCardChangeExcelConfig::~AvatarCardChangeExcelConfig(
        data::AvatarCardChangeExcelConfig *const this)
{
  data::AvatarCardChangeExcelConfig::~AvatarCardChangeExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 315: range 0000000014D4FC48-0000000014D4FD02
void __cdecl data::MaterialSourceDataExcelConfig::MaterialSourceDataExcelConfig(
        data::MaterialSourceDataExcelConfig *const this,
        const data::MaterialSourceDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::MaterialSourceDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MaterialSourceDataExcelConfig = v2;
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
};

// Line 318: range 0000000014DEC4F0-0000000014DEC531
void __cdecl data::MaterialSourceDataExcelConfig::~MaterialSourceDataExcelConfig(
        data::MaterialSourceDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MaterialSourceDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MaterialSourceDataExcelConfig = v2;
};

// Line 318: range 0000000014DEC532-0000000014DEC55C
void __cdecl data::MaterialSourceDataExcelConfig::~MaterialSourceDataExcelConfig(
        data::MaterialSourceDataExcelConfig *const this)
{
  data::MaterialSourceDataExcelConfig::~MaterialSourceDataExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 329: range 0000000014772018-000000001477214B
void __cdecl data::MaterialDeleteExcelConfig::MaterialDeleteExcelConfig(data::MaterialDeleteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MaterialDeleteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MaterialDeleteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->expire_type, v3);
  }
  this->expire_type = 0;
  std::vector<std::string>::vector(&this->expire_time_param_str_list);
  std::vector<unsigned int>::vector(&this->expire_time_param_vec);
  std::map<unsigned int,float>::map(&this->return_item_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->round_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_type, v3);
  }
  this->round_type = ROUND_TYPE_FLOOR;
};

// Line 329: range 0000000014D4FE6A-0000000014D500AB
void __cdecl data::MaterialDeleteExcelConfig::MaterialDeleteExcelConfig(
        data::MaterialDeleteExcelConfig *const this,
        const data::MaterialDeleteExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MaterialExpireType expire_type; // ecx
  char v7; // dl
  std::map<unsigned int,float> *p_return_item_map; // rsi
  data::RoundType round_type; // ecx
  char v10; // al
  const data::MaterialDeleteExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MaterialDeleteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MaterialDeleteExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->expire_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->expire_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->expire_type);
  }
  expire_type = v11->expire_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->expire_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->expire_type, v5);
  }
  this->expire_type = expire_type;
  std::vector<std::string>::vector(&this->expire_time_param_str_list, &v11->expire_time_param_str_list);
  std::vector<unsigned int>::vector(&this->expire_time_param_vec, &v11->expire_time_param_vec);
  p_return_item_map = &v11->return_item_map;
  std::map<unsigned int,float>::map(&this->return_item_map, &v11->return_item_map);
  if ( *(_BYTE *)(((unsigned __int64)&v11->round_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->round_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->round_type);
  }
  round_type = v11->round_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->round_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_return_item_map) = v10 != 0;
    __asan_report_store4(&this->round_type, p_return_item_map);
  }
  this->round_type = round_type;
};

// Line 332: range 0000000014DEC452-0000000014DEC4C3
void __cdecl data::MaterialDeleteExcelConfig::~MaterialDeleteExcelConfig(data::MaterialDeleteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MaterialDeleteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MaterialDeleteExcelConfig = v2;
  std::map<unsigned int,float>::~map(&this->return_item_map);
  std::vector<unsigned int>::~vector(&this->expire_time_param_vec);
  std::vector<std::string>::~vector(&this->expire_time_param_str_list);
};

// Line 332: range 0000000014DEC4C4-0000000014DEC4EE
void __cdecl data::MaterialDeleteExcelConfig::~MaterialDeleteExcelConfig(data::MaterialDeleteExcelConfig *const this)
{
  data::MaterialDeleteExcelConfig::~MaterialDeleteExcelConfig(this);
  operator delete(this, 0x78uLL);
};
