// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GCGDeckExcelConfig.gen.h

// Line 87: range 0000000014D20B5C-0000000014D20D10
void __cdecl data::GCGDeckStorageExcelConfig::GCGDeckStorageExcelConfig(
        data::GCGDeckStorageExcelConfig *const this,
        const data::GCGDeckStorageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGDeckUnlockCondition unlock_cond; // ecx
  char v7; // dl
  uint32_t unlock_param; // ecx
  char v9; // al
  const data::GCGDeckStorageExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGDeckStorageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeckStorageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->unlock_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->unlock_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->unlock_cond);
  }
  unlock_cond = v10->unlock_cond;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_cond >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_cond, v5);
  }
  this->unlock_cond = unlock_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v10->unlock_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->unlock_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->unlock_param);
  }
  unlock_param = v10->unlock_param;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_param >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_param, v5);
  }
  this->unlock_param = unlock_param;
};

// Line 90: range 0000000014DE7B40-0000000014DE7B81
void __cdecl data::GCGDeckStorageExcelConfig::~GCGDeckStorageExcelConfig(data::GCGDeckStorageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckStorageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckStorageExcelConfig = v2;
};

// Line 90: range 0000000014DE7B82-0000000014DE7BAC
void __cdecl data::GCGDeckStorageExcelConfig::~GCGDeckStorageExcelConfig(data::GCGDeckStorageExcelConfig *const this)
{
  data::GCGDeckStorageExcelConfig::~GCGDeckStorageExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 103: range 0000000014D20E52-0000000014D20F91
void __cdecl data::GCGDeckBackExcelConfig::GCGDeckBackExcelConfig(
        data::GCGDeckBackExcelConfig *const this,
        const data::GCGDeckBackExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  const data::GCGDeckBackExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGDeckBackExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeckBackExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_id);
  }
  item_id = v8->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
};

// Line 106: range 0000000014DE7B14-0000000014DE7B3E
void __cdecl data::GCGDeckBackExcelConfig::~GCGDeckBackExcelConfig(data::GCGDeckBackExcelConfig *const this)
{
  data::GCGDeckBackExcelConfig::~GCGDeckBackExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 106: range 0000000014DE7AD2-0000000014DE7B13
void __cdecl data::GCGDeckBackExcelConfig::~GCGDeckBackExcelConfig(data::GCGDeckBackExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckBackExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckBackExcelConfig = v2;
};

// Line 118: range 0000000014748382-000000001474852D
void __cdecl data::GCGDeckFieldExcelConfig::GCGDeckFieldExcelConfig(data::GCGDeckFieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckFieldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  std::string::basic_string(&this->stage_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_table_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_table_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->battle_table_id, v3);
  }
  this->battle_table_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_table_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dice_table_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dice_table_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->dice_table_id = 0;
  std::vector<std::string>::vector(&this->table_turn_hint_effect_list);
  std::vector<std::string>::vector(&this->stage_turn_hint_effect_list);
  std::vector<std::string>::vector(&this->stage_turn_hint_loop_effect_list);
  std::string::basic_string(&this->screen_click_hint_effect);
  std::string::basic_string(&this->enviro_path);
};

// Line 118: range 0000000014D210D2-0000000014D2142D
void __cdecl data::GCGDeckFieldExcelConfig::GCGDeckFieldExcelConfig(
        data::GCGDeckFieldExcelConfig *const this,
        const data::GCGDeckFieldExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  std::string *p_stage_prefab_path; // rsi
  uint32_t battle_table_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t dice_table_id; // ecx
  char v13; // dl
  const data::GCGDeckFieldExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGDeckFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeckFieldExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->item_id);
  }
  item_id = v14->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  p_stage_prefab_path = &v14->stage_prefab_path;
  std::string::basic_string(&this->stage_prefab_path, &v14->stage_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&v14->battle_table_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->battle_table_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->battle_table_id);
  }
  battle_table_id = v14->battle_table_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->battle_table_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_stage_prefab_path) = v10 != 0;
    __asan_report_store4(&this->battle_table_id, p_stage_prefab_path);
  }
  this->battle_table_id = battle_table_id;
  v11 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->dice_table_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->dice_table_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->dice_table_id);
  }
  dice_table_id = v14->dice_table_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->dice_table_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->dice_table_id, v11);
  }
  this->dice_table_id = dice_table_id;
  std::vector<std::string>::vector(&this->table_turn_hint_effect_list, &v14->table_turn_hint_effect_list);
  std::vector<std::string>::vector(&this->stage_turn_hint_effect_list, &v14->stage_turn_hint_effect_list);
  std::vector<std::string>::vector(&this->stage_turn_hint_loop_effect_list, &v14->stage_turn_hint_loop_effect_list);
  std::string::basic_string(&this->screen_click_hint_effect, &v14->screen_click_hint_effect);
  std::string::basic_string(&this->enviro_path, &v14->enviro_path);
};

// Line 121: range 0000000014DE7AA6-0000000014DE7AD0
void __cdecl data::GCGDeckFieldExcelConfig::~GCGDeckFieldExcelConfig(data::GCGDeckFieldExcelConfig *const this)
{
  data::GCGDeckFieldExcelConfig::~GCGDeckFieldExcelConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 121: range 0000000014DE7A02-0000000014DE7AA5
void __cdecl data::GCGDeckFieldExcelConfig::~GCGDeckFieldExcelConfig(data::GCGDeckFieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckFieldExcelConfig = v2;
  std::string::~string(&this->enviro_path);
  std::string::~string(&this->screen_click_hint_effect);
  std::vector<std::string>::~vector(&this->stage_turn_hint_loop_effect_list);
  std::vector<std::string>::~vector(&this->stage_turn_hint_effect_list);
  std::vector<std::string>::~vector(&this->table_turn_hint_effect_list);
  std::string::~string(&this->stage_prefab_path);
};

// Line 141: range 000000001474852E-000000001474867F
void __cdecl data::GCGDeckCardExcelConfig::GCGDeckCardExcelConfig(data::GCGDeckCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckCardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit, v3);
  }
  this->limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_character_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_character_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_character_id, v3);
  }
  this->related_character_id = 0;
  std::vector<data::GCGTagType>::vector(&this->related_character_tag_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_good_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_good_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_good_id, v3);
  }
  this->shop_good_id = 0;
};

// Line 141: range 0000000014D2156E-0000000014D217B2
void __cdecl data::GCGDeckCardExcelConfig::GCGDeckCardExcelConfig(
        data::GCGDeckCardExcelConfig *const this,
        const data::GCGDeckCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t limit; // ecx
  char v7; // dl
  uint32_t related_character_id; // ecx
  char v9; // al
  std::vector<data::GCGTagType> *p_related_character_tag_list; // rsi
  uint32_t shop_good_id; // ecx
  char v12; // al
  const data::GCGDeckCardExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGDeckCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeckCardExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->limit);
  }
  limit = v13->limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->limit, v5);
  }
  this->limit = limit;
  if ( *(_BYTE *)(((unsigned __int64)&v13->related_character_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->related_character_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->related_character_id);
  }
  related_character_id = v13->related_character_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->related_character_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->related_character_id, v5);
  }
  this->related_character_id = related_character_id;
  p_related_character_tag_list = &v13->related_character_tag_list;
  std::vector<data::GCGTagType>::vector(&this->related_character_tag_list, &v13->related_character_tag_list);
  if ( *(_BYTE *)(((unsigned __int64)&v13->shop_good_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->shop_good_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->shop_good_id);
  }
  shop_good_id = v13->shop_good_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->shop_good_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_related_character_tag_list) = v12 != 0;
    __asan_report_store4(&this->shop_good_id, p_related_character_tag_list);
  }
  this->shop_good_id = shop_good_id;
};

// Line 144: range 0000000014DE79D6-0000000014DE7A00
void __cdecl data::GCGDeckCardExcelConfig::~GCGDeckCardExcelConfig(data::GCGDeckCardExcelConfig *const this)
{
  data::GCGDeckCardExcelConfig::~GCGDeckCardExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 144: range 0000000014DE7984-0000000014DE79D5
void __cdecl data::GCGDeckCardExcelConfig::~GCGDeckCardExcelConfig(data::GCGDeckCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckCardExcelConfig = v2;
  std::vector<data::GCGTagType>::~vector(&this->related_character_tag_list);
};

// Line 159: range 0000000014748680-0000000014748827
void __cdecl data::GCGCardFaceExcelConfig::GCGCardFaceExcelConfig(data::GCGCardFaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGCardFaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardFaceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_face_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_face_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_face_type, v4);
  }
  this->card_face_type = GCG_CARD_FACE_NORMAL;
  if ( *(_BYTE *)(((unsigned __int64)&this->receive_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->receive_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->receive_condition, v4);
  }
  this->receive_condition = GCG_PURCHASE;
  std::vector<unsigned int>::vector(&this->shop_good_id_list);
  std::vector<unsigned int>::vector(&this->receive_param_list);
};

// Line 159: range 0000000014D218F4-0000000014D21BFF
void __cdecl data::GCGCardFaceExcelConfig::GCGCardFaceExcelConfig(
        data::GCGCardFaceExcelConfig *const this,
        const data::GCGCardFaceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  uint32_t card_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::GCGCardFaceType card_face_type; // ecx
  char v12; // dl
  data::GCGCardFaceReceiveCondition receive_condition; // ecx
  char v14; // al
  const data::GCGCardFaceExcelConfig *v15; // [rsp+0h] [rbp-20h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGCardFaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCardFaceExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->item_id);
  }
  item_id = v15->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->card_id);
  }
  card_id = v15->card_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->card_id, v5);
  }
  this->card_id = card_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->card_face_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->card_face_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->card_face_type);
  }
  card_face_type = v15->card_face_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->card_face_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->card_face_type, v10);
  }
  this->card_face_type = card_face_type;
  if ( *(_BYTE *)(((unsigned __int64)&v15->receive_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->receive_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->receive_condition);
  }
  receive_condition = v15->receive_condition;
  v14 = *(_BYTE *)(((unsigned __int64)&this->receive_condition >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->receive_condition, v10);
  }
  this->receive_condition = receive_condition;
  std::vector<unsigned int>::vector(&this->shop_good_id_list, &v15->shop_good_id_list);
  std::vector<unsigned int>::vector(&this->receive_param_list, &v15->receive_param_list);
};

// Line 162: range 0000000014DE7958-0000000014DE7982
void __cdecl data::GCGCardFaceExcelConfig::~GCGCardFaceExcelConfig(data::GCGCardFaceExcelConfig *const this)
{
  data::GCGCardFaceExcelConfig::~GCGCardFaceExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 162: range 0000000014DE78F6-0000000014DE7957
void __cdecl data::GCGCardFaceExcelConfig::~GCGCardFaceExcelConfig(data::GCGCardFaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCardFaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardFaceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->receive_param_list);
  std::vector<unsigned int>::~vector(&this->shop_good_id_list);
};

// Line 179: range 00000000147B7D40-00000000147B7E4F
data::GCGProficiencyReward *__cdecl data::GCGProficiencyReward::operator=(
        data::GCGProficiencyReward *const this,
        const data::GCGProficiencyReward *a2)
{
  uint32_t proficiency; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t reward_id; // ecx
  char v6; // dl
  const data::GCGProficiencyReward *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->proficiency);
  }
  proficiency = a2->proficiency;
  v3 = *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->proficiency, a2);
  }
  this->proficiency = proficiency;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_id);
  }
  reward_id = v8->reward_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->reward_id, v4);
  }
  this->reward_id = reward_id;
  return this;
};

// Line 179: range 0000000014C84F9C-0000000014C85061
void __cdecl data::GCGProficiencyReward::GCGProficiencyReward(data::GCGProficiencyReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGProficiencyReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proficiency, v1);
  }
  this->proficiency = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->reward_id = 0;
};

// Line 179: range 0000000014DBBBA6-0000000014DBBCE5
void __cdecl data::GCGProficiencyReward::GCGProficiencyReward(
        data::GCGProficiencyReward *const this,
        const data::GCGProficiencyReward *a2)
{
  int (**v2)(...); // rdx
  uint32_t proficiency; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  const data::GCGProficiencyReward *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGProficiencyReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->proficiency);
  }
  proficiency = a2->proficiency;
  v4 = *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->proficiency, a2);
  }
  this->proficiency = proficiency;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_id);
  }
  reward_id = v8->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 182: range 0000000014BB2BBC-0000000014BB2BE6
void __cdecl data::GCGProficiencyReward::~GCGProficiencyReward(data::GCGProficiencyReward *const this)
{
  data::GCGProficiencyReward::~GCGProficiencyReward(this);
  operator delete(this, 0x10uLL);
};

// Line 182: range 0000000014BB2B7A-0000000014BB2BBB
void __cdecl data::GCGProficiencyReward::~GCGProficiencyReward(data::GCGProficiencyReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGProficiencyReward = v2;
};

// Line 192: range 000000001474887C-000000001474890B
void __cdecl data::GCGProficiencyRewardExcelConfig::GCGProficiencyRewardExcelConfig(
        data::GCGProficiencyRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGProficiencyRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id, v1);
  }
  this->card_id = 0;
  std::vector<data::GCGProficiencyReward>::vector(&this->proficiency_reward_list);
};

// Line 192: range 0000000014D21D40-0000000014D21E15
void __cdecl data::GCGProficiencyRewardExcelConfig::GCGProficiencyRewardExcelConfig(
        data::GCGProficiencyRewardExcelConfig *const this,
        const data::GCGProficiencyRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t card_id; // ecx
  char v4; // al
  const data::GCGProficiencyRewardExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGProficiencyRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->card_id, a2);
  }
  this->card_id = card_id;
  std::vector<data::GCGProficiencyReward>::vector(&this->proficiency_reward_list, &v5->proficiency_reward_list);
};

// Line 195: range 0000000014DE78CA-0000000014DE78F4
void __cdecl data::GCGProficiencyRewardExcelConfig::~GCGProficiencyRewardExcelConfig(
        data::GCGProficiencyRewardExcelConfig *const this)
{
  data::GCGProficiencyRewardExcelConfig::~GCGProficiencyRewardExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 195: range 0000000014DE7878-0000000014DE78C9
void __cdecl data::GCGProficiencyRewardExcelConfig::~GCGProficiencyRewardExcelConfig(
        data::GCGProficiencyRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGProficiencyRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGProficiencyRewardExcelConfig = v2;
  std::vector<data::GCGProficiencyReward>::~vector(&this->proficiency_reward_list);
};
