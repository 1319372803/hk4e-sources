// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBartenderExcelConfig.gen.h

// Line 98: range 000000001338A930-000000001338ABDE
void __cdecl data::BartenderBasicExcelConfig::BartenderBasicExcelConfig(
        data::BartenderBasicExcelConfig *const this,
        const data::BartenderBasicExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t min_material_count; // ecx
  char v7; // dl
  uint32_t max_material_count; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t scene_id; // ecx
  char v12; // dl
  uint32_t main_ending_quest_id; // ecx
  char v14; // al
  const data::BartenderBasicExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderBasicExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderBasicExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->min_material_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->min_material_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->min_material_count);
  }
  min_material_count = v15->min_material_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->min_material_count, v5);
  }
  this->min_material_count = min_material_count;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_material_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->max_material_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->max_material_count);
  }
  max_material_count = v15->max_material_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_material_count, v5);
  }
  this->max_material_count = max_material_count;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->scene_id);
  }
  scene_id = v15->scene_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->scene_id, v10);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->main_ending_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->main_ending_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->main_ending_quest_id);
  }
  main_ending_quest_id = v15->main_ending_quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->main_ending_quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->main_ending_quest_id, v10);
  }
  this->main_ending_quest_id = main_ending_quest_id;
};

// Line 101: range 00000000134232F2-000000001342331C
void __cdecl data::BartenderBasicExcelConfig::~BartenderBasicExcelConfig(data::BartenderBasicExcelConfig *const this)
{
  data::BartenderBasicExcelConfig::~BartenderBasicExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 101: range 00000000134232B0-00000000134232F1
void __cdecl data::BartenderBasicExcelConfig::~BartenderBasicExcelConfig(data::BartenderBasicExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderBasicExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderBasicExcelConfig = v2;
};

// Line 116: range 000000001330CE7A-000000001330CF3F
void __cdecl data::BartenderMaterial::BartenderMaterial(data::BartenderMaterial *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderMaterial = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->count = 0;
};

// Line 116: range 000000001340A1D4-000000001340A313
void __cdecl data::BartenderMaterial::BartenderMaterial(
        data::BartenderMaterial *const this,
        const data::BartenderMaterial *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  const data::BartenderMaterial *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderMaterial = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
};

// Line 119: range 000000001326594C-000000001326598D
void __cdecl data::BartenderMaterial::~BartenderMaterial(data::BartenderMaterial *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderMaterial = v2;
};

// Line 119: range 000000001326598E-00000000132659B8
void __cdecl data::BartenderMaterial::~BartenderMaterial(data::BartenderMaterial *const this)
{
  data::BartenderMaterial::~BartenderMaterial(this);
  operator delete(this, 0x10uLL);
};

// Line 129: range 0000000012EB1A5C-0000000012EB1B8C
void __cdecl data::BartenderFormulaExcelConfig::BartenderFormulaExcelConfig(
        data::BartenderFormulaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderFormulaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderFormulaExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::BartenderMaterial>::vector(&this->base_material);
  std::vector<data::BartenderMaterial>::vector(&this->extra_material);
  std::vector<unsigned int>::vector(&this->available_affix_list);
  if ( *(char *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_default_unlock, v1, &this->is_default_unlock);
  this->is_default_unlock = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_quest, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->unlock_quest = 0;
};

// Line 129: range 000000001338AD20-000000001338AF62
void __cdecl data::BartenderFormulaExcelConfig::BartenderFormulaExcelConfig(
        data::BartenderFormulaExcelConfig *const this,
        const data::BartenderFormulaExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_available_affix_list; // rsi
  bool is_default_unlock; // cl
  char v7; // al
  __int64 v8; // rsi
  uint32_t unlock_quest; // ecx
  char v10; // dl
  const data::BartenderFormulaExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderFormulaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderFormulaExcelConfig = v2;
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
  std::vector<data::BartenderMaterial>::vector(&this->base_material, &v11->base_material);
  std::vector<data::BartenderMaterial>::vector(&this->extra_material, &v11->extra_material);
  p_available_affix_list = &v11->available_affix_list;
  std::vector<unsigned int>::vector(&this->available_affix_list, &v11->available_affix_list);
  if ( *(char *)(((unsigned __int64)&v11->is_default_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_default_unlock, p_available_affix_list, &v11->is_default_unlock);
  is_default_unlock = v11->is_default_unlock;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_available_affix_list) = v7 != 0;
    __asan_report_store1(&this->is_default_unlock, p_available_affix_list, &this->is_default_unlock);
  }
  this->is_default_unlock = is_default_unlock;
  v8 = (((_BYTE)v11 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->unlock_quest >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->unlock_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->unlock_quest);
  }
  unlock_quest = v11->unlock_quest;
  v10 = *(_BYTE *)(((unsigned __int64)&this->unlock_quest >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->unlock_quest, v8);
  }
  this->unlock_quest = unlock_quest;
};

// Line 132: range 0000000013423284-00000000134232AE
void __cdecl data::BartenderFormulaExcelConfig::~BartenderFormulaExcelConfig(
        data::BartenderFormulaExcelConfig *const this)
{
  data::BartenderFormulaExcelConfig::~BartenderFormulaExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 132: range 0000000013423212-0000000013423283
void __cdecl data::BartenderFormulaExcelConfig::~BartenderFormulaExcelConfig(
        data::BartenderFormulaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderFormulaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderFormulaExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->available_affix_list);
  std::vector<data::BartenderMaterial>::~vector(&this->extra_material);
  std::vector<data::BartenderMaterial>::~vector(&this->base_material);
};

// Line 148: range 000000001338B0A4-000000001338B2DD
void __cdecl data::BartenderAffixExcelConfig::BartenderAffixExcelConfig(
        data::BartenderAffixExcelConfig *const this,
        const data::BartenderAffixExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::OrderingType order_type; // ecx
  char v7; // dl
  uint32_t material_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t material_count; // ecx
  char v12; // dl
  const data::BartenderAffixExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderAffixExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->order_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->order_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->order_type);
  }
  order_type = v13->order_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->order_type, v5);
  }
  this->order_type = order_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->material_id);
  }
  material_id = v13->material_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->material_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->material_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->material_count);
  }
  material_count = v13->material_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->material_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->material_count, v10);
  }
  this->material_count = material_count;
};

// Line 151: range 00000000134231E6-0000000013423210
void __cdecl data::BartenderAffixExcelConfig::~BartenderAffixExcelConfig(data::BartenderAffixExcelConfig *const this)
{
  data::BartenderAffixExcelConfig::~BartenderAffixExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 151: range 00000000134231A4-00000000134231E5
void __cdecl data::BartenderAffixExcelConfig::~BartenderAffixExcelConfig(data::BartenderAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderAffixExcelConfig = v2;
};

// Line 165: range 0000000012EB1B8E-0000000012EB1D25
void __cdecl data::BartenderOrderExcelConfig::BartenderOrderExcelConfig(data::BartenderOrderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BartenderOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderOrderExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->formula_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->formula_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->formula_id, v3);
  }
  this->formula_id = 0;
  std::vector<unsigned int>::vector(&this->affix_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cup_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cup_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cup_type, v3);
  }
  this->cup_type = BARTENDER_CUP_NONE;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, v4);
  }
  this->time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v4);
  }
  this->score = 0;
};

// Line 165: range 000000001338B41E-000000001338B6E7
void __cdecl data::BartenderOrderExcelConfig::BartenderOrderExcelConfig(
        data::BartenderOrderExcelConfig *const this,
        const data::BartenderOrderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t formula_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_affix_id; // rsi
  data::BartenderCupType cup_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t time; // ecx
  char v13; // dl
  uint32_t score; // ecx
  char v15; // al
  const data::BartenderOrderExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderOrderExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->formula_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->formula_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->formula_id);
  }
  formula_id = v16->formula_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->formula_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->formula_id, v5);
  }
  this->formula_id = formula_id;
  p_affix_id = &v16->affix_id;
  std::vector<unsigned int>::vector(&this->affix_id, &v16->affix_id);
  if ( *(_BYTE *)(((unsigned __int64)&v16->cup_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->cup_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->cup_type);
  }
  cup_type = v16->cup_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cup_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_affix_id) = v10 != 0;
    __asan_report_store4(&this->cup_type, p_affix_id);
  }
  this->cup_type = cup_type;
  v11 = (((_BYTE)v16 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->time);
  }
  time = v16->time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->time, v11);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&v16->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->score);
  }
  score = v16->score;
  v15 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->score, v11);
  }
  this->score = score;
};

// Line 168: range 0000000013423178-00000000134231A2
void __cdecl data::BartenderOrderExcelConfig::~BartenderOrderExcelConfig(data::BartenderOrderExcelConfig *const this)
{
  data::BartenderOrderExcelConfig::~BartenderOrderExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 168: range 0000000013423126-0000000013423177
void __cdecl data::BartenderOrderExcelConfig::~BartenderOrderExcelConfig(data::BartenderOrderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderOrderExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->affix_id);
};

// Line 184: range 000000001338B828-000000001338B9DC
void __cdecl data::BartenderTaskExcelConfig::BartenderTaskExcelConfig(
        data::BartenderTaskExcelConfig *const this,
        const data::BartenderTaskExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t parent_quest_id; // ecx
  char v7; // dl
  uint32_t reward_preview_id; // ecx
  char v9; // al
  const data::BartenderTaskExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderTaskExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->parent_quest_id);
  }
  parent_quest_id = v10->parent_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->parent_quest_id, v5);
  }
  this->parent_quest_id = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_preview_id);
  }
  reward_preview_id = v10->reward_preview_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_preview_id, v5);
  }
  this->reward_preview_id = reward_preview_id;
};

// Line 187: range 00000000134230B8-00000000134230F9
void __cdecl data::BartenderTaskExcelConfig::~BartenderTaskExcelConfig(data::BartenderTaskExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderTaskExcelConfig = v2;
};

// Line 187: range 00000000134230FA-0000000013423124
void __cdecl data::BartenderTaskExcelConfig::~BartenderTaskExcelConfig(data::BartenderTaskExcelConfig *const this)
{
  data::BartenderTaskExcelConfig::~BartenderTaskExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 200: range 0000000012EB1D26-0000000012EB1DF3
void __cdecl data::BartenderTaskOrderExcelConfig::BartenderTaskOrderExcelConfig(
        data::BartenderTaskOrderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderTaskOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderTaskOrderExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v1);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->order_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->content_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_param, v1);
  }
  this->content_param = 0;
};

// Line 200: range 000000001338BB1E-000000001338BC68
void __cdecl data::BartenderTaskOrderExcelConfig::BartenderTaskOrderExcelConfig(
        data::BartenderTaskOrderExcelConfig *const this,
        const data::BartenderTaskOrderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t quest_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_order_id; // rsi
  uint32_t content_param; // ecx
  char v7; // al
  const data::BartenderTaskOrderExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderTaskOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderTaskOrderExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quest_id);
  }
  quest_id = a2->quest_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->quest_id, a2);
  }
  this->quest_id = quest_id;
  p_order_id = &v8->order_id;
  std::vector<unsigned int>::vector(&this->order_id, &v8->order_id);
  if ( *(_BYTE *)(((unsigned __int64)&v8->content_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->content_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->content_param);
  }
  content_param = v8->content_param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->content_param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_order_id) = v7 != 0;
    __asan_report_store4(&this->content_param, p_order_id);
  }
  this->content_param = content_param;
};

// Line 203: range 000000001342308C-00000000134230B6
void __cdecl data::BartenderTaskOrderExcelConfig::~BartenderTaskOrderExcelConfig(
        data::BartenderTaskOrderExcelConfig *const this)
{
  data::BartenderTaskOrderExcelConfig::~BartenderTaskOrderExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 203: range 000000001342303A-000000001342308B
void __cdecl data::BartenderTaskOrderExcelConfig::~BartenderTaskOrderExcelConfig(
        data::BartenderTaskOrderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderTaskOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderTaskOrderExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->order_id);
};

// Line 216: range 0000000012EB1DF4-0000000012EB1EC9
void __cdecl data::BartenderLevelExcelConfig::BartenderLevelExcelConfig(data::BartenderLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->level_duration = 0;
  std::vector<unsigned int>::vector(&this->order_list);
};

// Line 216: range 000000001338BDAA-000000001338BF04
void __cdecl data::BartenderLevelExcelConfig::BartenderLevelExcelConfig(
        data::BartenderLevelExcelConfig *const this,
        const data::BartenderLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_duration; // ecx
  char v7; // dl
  const data::BartenderLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->level_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->level_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->level_duration);
  }
  level_duration = v8->level_duration;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_duration >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_duration, v5);
  }
  this->level_duration = level_duration;
  std::vector<unsigned int>::vector(&this->order_list, &v8->order_list);
};

// Line 219: range 0000000013422FBC-000000001342300D
void __cdecl data::BartenderLevelExcelConfig::~BartenderLevelExcelConfig(data::BartenderLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->order_list);
};

// Line 219: range 000000001342300E-0000000013423038
void __cdecl data::BartenderLevelExcelConfig::~BartenderLevelExcelConfig(data::BartenderLevelExcelConfig *const this)
{
  data::BartenderLevelExcelConfig::~BartenderLevelExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 232: range 0000000012EB1ECA-0000000012EB1F9F
void __cdecl data::BartenderEventExcelConfig::BartenderEventExcelConfig(data::BartenderEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v1);
  }
  this->effect_type = BARTENDER_ORIGIN_CUP_ONTABLE;
  if ( *(_BYTE *)(((unsigned __int64)&this->misc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->misc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->misc_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->misc_id = 0;
  std::string::basic_string(&this->effect_name);
};

// Line 232: range 000000001307EB0E-000000001307EC68
void __cdecl data::BartenderEventExcelConfig::BartenderEventExcelConfig(
        data::BartenderEventExcelConfig *const this,
        const data::BartenderEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::BartenderEffectType effect_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t misc_id; // ecx
  char v7; // dl
  const data::BartenderEventExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BartenderEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BartenderEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_type);
  }
  effect_type = a2->effect_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->effect_type, a2);
  }
  this->effect_type = effect_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->misc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->misc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->misc_id);
  }
  misc_id = v8->misc_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->misc_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->misc_id, v5);
  }
  this->misc_id = misc_id;
  std::string::basic_string(&this->effect_name, &v8->effect_name);
};

// Line 235: range 0000000013422F90-0000000013422FBA
void __cdecl data::BartenderEventExcelConfig::~BartenderEventExcelConfig(data::BartenderEventExcelConfig *const this)
{
  data::BartenderEventExcelConfig::~BartenderEventExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 235: range 0000000013422F3E-0000000013422F8F
void __cdecl data::BartenderEventExcelConfig::~BartenderEventExcelConfig(data::BartenderEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BartenderEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BartenderEventExcelConfig = v2;
  std::string::~string(&this->effect_name);
};
