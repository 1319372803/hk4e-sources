// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CodexExcelConfig.gen.h

// Line 123: range 00000000141AE554-00000000141AE803
void __cdecl data::QuestCodexExcelConfig::QuestCodexExcelConfig(
        data::QuestCodexExcelConfig *const this,
        const data::QuestCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t parent_quest_id; // ecx
  char v7; // dl
  uint32_t chapter_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t sort_order; // ecx
  char v12; // dl
  bool is_disuse; // cl
  char v14; // al
  const data::QuestCodexExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestCodexExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->parent_quest_id);
  }
  parent_quest_id = v15->parent_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->parent_quest_id, v5);
  }
  this->parent_quest_id = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->chapter_id);
  }
  chapter_id = v15->chapter_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->sort_order);
  }
  sort_order = v15->sort_order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->sort_order, v10);
  this->sort_order = sort_order;
  if ( *(char *)(((unsigned __int64)&v15->is_disuse >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_disuse, v10, &v15->is_disuse);
  is_disuse = v15->is_disuse;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_disuse, v10, &this->is_disuse);
  }
  this->is_disuse = is_disuse;
};

// Line 126: range 00000000142A493E-00000000142A497F
void __cdecl data::QuestCodexExcelConfig::~QuestCodexExcelConfig(data::QuestCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestCodexExcelConfig = v2;
};

// Line 126: range 00000000142A4980-00000000142A49AA
void __cdecl data::QuestCodexExcelConfig::~QuestCodexExcelConfig(data::QuestCodexExcelConfig *const this)
{
  data::QuestCodexExcelConfig::~QuestCodexExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 141: range 00000000141AE944-00000000141AEBF8
void __cdecl data::WeaponCodexExcelConfig::WeaponCodexExcelConfig(
        data::WeaponCodexExcelConfig *const this,
        const data::WeaponCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weapon_id; // ecx
  char v7; // dl
  uint32_t sort_order; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_disuse; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool show_only_unlocked; // cl
  char v18; // dl
  __int64 v19; // rdx
  const data::WeaponCodexExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeaponCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeaponCodexExcelConfig = v2;
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
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->weapon_id);
  }
  weapon_id = v20->weapon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weapon_id, v5);
  }
  this->weapon_id = weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->sort_order);
  }
  sort_order = v20->sort_order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sort_order, v5);
  }
  this->sort_order = sort_order;
  v10 = ((_BYTE)v20 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v20->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v20->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v20->is_disuse, v10, v11);
  is_disuse = v20->is_disuse;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_disuse, v10, v14);
  this->is_disuse = is_disuse;
  v15 = ((_BYTE)v20 + 21) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v20->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v20->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v20->show_only_unlocked, v15, v16);
  show_only_unlocked = v20->show_only_unlocked;
  v18 = *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 21) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->show_only_unlocked, v15, v19);
  this->show_only_unlocked = show_only_unlocked;
};

// Line 144: range 00000000142A4912-00000000142A493C
void __cdecl data::WeaponCodexExcelConfig::~WeaponCodexExcelConfig(data::WeaponCodexExcelConfig *const this)
{
  data::WeaponCodexExcelConfig::~WeaponCodexExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 144: range 00000000142A48D0-00000000142A4911
void __cdecl data::WeaponCodexExcelConfig::~WeaponCodexExcelConfig(data::WeaponCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponCodexExcelConfig = v2;
};

// Line 159: range 00000000141AED3A-00000000141AF2DC
void __cdecl data::ReliquaryCodexExcelConfig::ReliquaryCodexExcelConfig(
        data::ReliquaryCodexExcelConfig *const this,
        const data::ReliquaryCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t suit_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t cup_id; // ecx
  char v12; // dl
  uint32_t leather_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t cap_id; // ecx
  char v17; // dl
  uint32_t flower_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t sand_id; // ecx
  char v22; // dl
  uint32_t sort_order; // ecx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool is_disuse; // cl
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool show_only_unlocked; // cl
  char v33; // dl
  __int64 v34; // rdx
  const data::ReliquaryCodexExcelConfig *v35; // [rsp+0h] [rbp-10h]

  v35 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReliquaryCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReliquaryCodexExcelConfig = v2;
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
  v5 = (((_BYTE)v35 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->suit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->suit_id);
  }
  suit_id = v35->suit_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->suit_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->suit_id, v5);
  }
  this->suit_id = suit_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->level);
  }
  level = v35->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v35 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->cup_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->cup_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->cup_id);
  }
  cup_id = v35->cup_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cup_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cup_id, v10);
  }
  this->cup_id = cup_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->leather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->leather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->leather_id);
  }
  leather_id = v35->leather_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->leather_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->leather_id, v10);
  }
  this->leather_id = leather_id;
  v15 = (((_BYTE)v35 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->cap_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->cap_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->cap_id);
  }
  cap_id = v35->cap_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->cap_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->cap_id, v15);
  }
  this->cap_id = cap_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->flower_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->flower_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->flower_id);
  }
  flower_id = v35->flower_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->flower_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->flower_id, v15);
  }
  this->flower_id = flower_id;
  v20 = (((_BYTE)v35 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->sand_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->sand_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->sand_id);
  }
  sand_id = v35->sand_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->sand_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->sand_id, v20);
  }
  this->sand_id = sand_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->sort_order);
  }
  sort_order = v35->sort_order;
  v24 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->sort_order, v20);
  }
  this->sort_order = sort_order;
  v25 = ((_BYTE)v35 + 44) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v35->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v35->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v35->is_disuse, v25, v26);
  is_disuse = v35->is_disuse;
  v28 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->is_disuse, v25, v29);
  this->is_disuse = is_disuse;
  v30 = ((_BYTE)v35 + 45) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&v35->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&v35->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&v35->show_only_unlocked, v30, v31);
  show_only_unlocked = v35->show_only_unlocked;
  v33 = *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->show_only_unlocked, v30, v34);
  this->show_only_unlocked = show_only_unlocked;
};

// Line 162: range 00000000142A48A4-00000000142A48CE
void __cdecl data::ReliquaryCodexExcelConfig::~ReliquaryCodexExcelConfig(data::ReliquaryCodexExcelConfig *const this)
{
  data::ReliquaryCodexExcelConfig::~ReliquaryCodexExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 162: range 00000000142A4862-00000000142A48A3
void __cdecl data::ReliquaryCodexExcelConfig::~ReliquaryCodexExcelConfig(data::ReliquaryCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReliquaryCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReliquaryCodexExcelConfig = v2;
};

// Line 183: range 0000000013BF155C-0000000013BF17AB
void __cdecl data::AnimalCodexExcelConfig::AnimalCodexExcelConfig(data::AnimalCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = (int (**)(...))(&`vtable for'data::AnimalCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AnimalCodexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = CODEX_ANIMAL_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->describe_id, v3);
  }
  this->describe_id = 0;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_seen_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_seen_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_seen_active, v4, v5);
  this->is_seen_active = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_order, v4);
  }
  this->sort_order = 0;
  v6 = ((_BYTE)this + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_disuse, v6, v7);
  this->is_disuse = 0;
  v8 = ((_BYTE)this + 29) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_only_unlocked, v8, v9);
  this->show_only_unlocked = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count_type, v8);
  }
  this->count_type = CODEX_COUNT_TYPE_NONE;
  std::string::basic_string(&this->desc);
};

// Line 183: range 00000000141AF41E-00000000141AF857
void __cdecl data::AnimalCodexExcelConfig::AnimalCodexExcelConfig(
        data::AnimalCodexExcelConfig *const this,
        const data::AnimalCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::AnimalCodexType type; // ecx
  char v7; // dl
  uint32_t describe_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_seen_active; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t sort_order; // ecx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool is_disuse; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool show_only_unlocked; // cl
  char v25; // dl
  __int64 v26; // rdx
  data::AnimalCodexCountType count_type; // ecx
  char v28; // al
  const data::AnimalCodexExcelConfig *v29; // [rsp+0h] [rbp-10h]

  v29 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AnimalCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AnimalCodexExcelConfig = v2;
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
  v5 = (((_BYTE)v29 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->type);
  }
  type = v29->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v29->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->describe_id);
  }
  describe_id = v29->describe_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->describe_id, v5);
  }
  this->describe_id = describe_id;
  v10 = ((_BYTE)v29 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v29->is_seen_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v29->is_seen_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v29->is_seen_active, v10, v11);
  is_seen_active = v29->is_seen_active;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_seen_active >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_seen_active, v10, v14);
  this->is_seen_active = is_seen_active;
  if ( *(_BYTE *)(((unsigned __int64)&v29->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->sort_order);
  }
  sort_order = v29->sort_order;
  v16 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->sort_order, v10);
  }
  this->sort_order = sort_order;
  v17 = ((_BYTE)v29 + 28) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v29->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v29->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v29->is_disuse, v17, v18);
  is_disuse = v29->is_disuse;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_disuse, v17, v21);
  this->is_disuse = is_disuse;
  v22 = ((_BYTE)v29 + 29) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v29->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v29->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v29->show_only_unlocked, v22, v23);
  show_only_unlocked = v29->show_only_unlocked;
  v25 = *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->show_only_unlocked, v22, v26);
  this->show_only_unlocked = show_only_unlocked;
  if ( *(_BYTE *)(((unsigned __int64)&v29->count_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->count_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->count_type);
  }
  count_type = v29->count_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->count_type >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v22) = v28 != 0;
    __asan_report_store4(&this->count_type, v22);
  }
  this->count_type = count_type;
  std::string::basic_string(&this->desc, &v29->desc);
};

// Line 186: range 00000000142A4836-00000000142A4860
void __cdecl data::AnimalCodexExcelConfig::~AnimalCodexExcelConfig(data::AnimalCodexExcelConfig *const this)
{
  data::AnimalCodexExcelConfig::~AnimalCodexExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 186: range 00000000142A47E4-00000000142A4835
void __cdecl data::AnimalCodexExcelConfig::~AnimalCodexExcelConfig(data::AnimalCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AnimalCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AnimalCodexExcelConfig = v2;
  std::string::~string(&this->desc);
};

// Line 205: range 0000000013BF17AC-0000000013BF1A6C
void __cdecl data::MaterialCodexExcelConfig::MaterialCodexExcelConfig(data::MaterialCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::MaterialCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MaterialCodexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = CODEX_COLLECTION;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sort_order, v4);
  }
  this->sort_order = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->desc);
  std::string::basic_string(&this->icon);
  if ( *(char *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_disuse, v4, &this->is_disuse);
  this->is_disuse = 0;
  v5 = ((_BYTE)this + 121) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->show_only_unlocked, v5, v6);
  this->show_only_unlocked = 0;
  std::string::basic_string(&this->quest_replace_name1);
  std::string::basic_string(&this->quest_replace_desc1);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id1, v5);
  }
  this->quest_id1 = 0;
  std::string::basic_string(&this->quest_replace_name2);
  std::string::basic_string(&this->quest_replace_desc2);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id2, v5);
  }
  this->quest_id2 = 0;
};

// Line 205: range 00000000141AF998-00000000141AFF28
void __cdecl data::MaterialCodexExcelConfig::MaterialCodexExcelConfig(
        data::MaterialCodexExcelConfig *const this,
        const data::MaterialCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MaterialCodexType type; // ecx
  char v7; // dl
  uint32_t material_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t sort_order; // ecx
  char v12; // dl
  std::string *p_icon; // rsi
  bool is_disuse; // cl
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool show_only_unlocked; // cl
  char v19; // dl
  __int64 v20; // rdx
  std::string *p_quest_replace_desc1; // rsi
  uint32_t quest_id1; // ecx
  char v23; // al
  std::string *p_quest_replace_desc2; // rsi
  uint32_t quest_id2; // ecx
  char v26; // al
  const data::MaterialCodexExcelConfig *v27; // [rsp+0h] [rbp-20h]

  v27 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MaterialCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MaterialCodexExcelConfig = v2;
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
  v5 = (((_BYTE)v27 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->type);
  }
  type = v27->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v27->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->material_id);
  }
  material_id = v27->material_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  v10 = (((_BYTE)v27 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->sort_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->sort_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->sort_order);
  }
  sort_order = v27->sort_order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->sort_order, v10);
  }
  this->sort_order = sort_order;
  std::string::basic_string(&this->name, &v27->name);
  std::string::basic_string(&this->desc, &v27->desc);
  p_icon = &v27->icon;
  std::string::basic_string(&this->icon, &v27->icon);
  if ( *(char *)(((unsigned __int64)&v27->is_disuse >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->is_disuse, p_icon, &v27->is_disuse);
  is_disuse = v27->is_disuse;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_icon) = v15 != 0;
    __asan_report_store1(&this->is_disuse, p_icon, &this->is_disuse);
  }
  this->is_disuse = is_disuse;
  v16 = ((_BYTE)v27 + 121) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v27->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v27->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v27->show_only_unlocked, v16, v17);
  show_only_unlocked = v27->show_only_unlocked;
  v19 = *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->show_only_unlocked, v16, v20);
  this->show_only_unlocked = show_only_unlocked;
  std::string::basic_string(&this->quest_replace_name1, &v27->quest_replace_name1);
  p_quest_replace_desc1 = &v27->quest_replace_desc1;
  std::string::basic_string(&this->quest_replace_desc1, &v27->quest_replace_desc1);
  if ( *(_BYTE *)(((unsigned __int64)&v27->quest_id1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->quest_id1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->quest_id1);
  }
  quest_id1 = v27->quest_id1;
  v23 = *(_BYTE *)(((unsigned __int64)&this->quest_id1 >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_quest_replace_desc1) = v23 != 0;
    __asan_report_store4(&this->quest_id1, p_quest_replace_desc1);
  }
  this->quest_id1 = quest_id1;
  std::string::basic_string(&this->quest_replace_name2, &v27->quest_replace_name2);
  p_quest_replace_desc2 = &v27->quest_replace_desc2;
  std::string::basic_string(&this->quest_replace_desc2, &v27->quest_replace_desc2);
  if ( *(_BYTE *)(((unsigned __int64)&v27->quest_id2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->quest_id2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->quest_id2);
  }
  quest_id2 = v27->quest_id2;
  v26 = *(_BYTE *)(((unsigned __int64)&this->quest_id2 >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_quest_replace_desc2) = v26 != 0;
    __asan_report_store4(&this->quest_id2, p_quest_replace_desc2);
  }
  this->quest_id2 = quest_id2;
};

// Line 208: range 00000000142A47B8-00000000142A47E2
void __cdecl data::MaterialCodexExcelConfig::~MaterialCodexExcelConfig(data::MaterialCodexExcelConfig *const this)
{
  data::MaterialCodexExcelConfig::~MaterialCodexExcelConfig(this);
  operator delete(this, 0x110uLL);
};

// Line 208: range 00000000142A4700-00000000142A47B7
void __cdecl data::MaterialCodexExcelConfig::~MaterialCodexExcelConfig(data::MaterialCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MaterialCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MaterialCodexExcelConfig = v2;
  std::string::~string(&this->quest_replace_desc2);
  std::string::~string(&this->quest_replace_name2);
  std::string::~string(&this->quest_replace_desc1);
  std::string::~string(&this->quest_replace_name1);
  std::string::~string(&this->icon);
  std::string::~string(&this->desc);
  std::string::~string(&this->name);
};

// Line 233: range 00000000141B006A-00000000141B029E
void __cdecl data::BooksCodexExcelConfig::BooksCodexExcelConfig(
        data::BooksCodexExcelConfig *const this,
        const data::BooksCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  uint32_t sort_order; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_disuse; // cl
  char v13; // dl
  __int64 v14; // rdx
  const data::BooksCodexExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BooksCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BooksCodexExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->material_id);
  }
  material_id = v15->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->sort_order);
  }
  sort_order = v15->sort_order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sort_order, v5);
  }
  this->sort_order = sort_order;
  v10 = ((_BYTE)v15 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->is_disuse, v10, v11);
  is_disuse = v15->is_disuse;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_disuse, v10, v14);
  this->is_disuse = is_disuse;
};

// Line 236: range 00000000142A46D4-00000000142A46FE
void __cdecl data::BooksCodexExcelConfig::~BooksCodexExcelConfig(data::BooksCodexExcelConfig *const this)
{
  data::BooksCodexExcelConfig::~BooksCodexExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 236: range 00000000142A4692-00000000142A46D3
void __cdecl data::BooksCodexExcelConfig::~BooksCodexExcelConfig(data::BooksCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BooksCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BooksCodexExcelConfig = v2;
};

// Line 250: range 00000000141B03E0-00000000141B0614
void __cdecl data::PushTipsCodexExcelConfig::PushTipsCodexExcelConfig(
        data::PushTipsCodexExcelConfig *const this,
        const data::PushTipsCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t push_tip_id; // ecx
  char v7; // dl
  uint32_t sort_order; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_disuse; // cl
  char v13; // dl
  __int64 v14; // rdx
  const data::PushTipsCodexExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PushTipsCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PushTipsCodexExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->push_tip_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->push_tip_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->push_tip_id);
  }
  push_tip_id = v15->push_tip_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->push_tip_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->push_tip_id, v5);
  }
  this->push_tip_id = push_tip_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->sort_order);
  }
  sort_order = v15->sort_order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sort_order, v5);
  }
  this->sort_order = sort_order;
  v10 = ((_BYTE)v15 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->is_disuse, v10, v11);
  is_disuse = v15->is_disuse;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_disuse, v10, v14);
  this->is_disuse = is_disuse;
};

// Line 253: range 00000000142A4666-00000000142A4690
void __cdecl data::PushTipsCodexExcelConfig::~PushTipsCodexExcelConfig(data::PushTipsCodexExcelConfig *const this)
{
  data::PushTipsCodexExcelConfig::~PushTipsCodexExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 253: range 00000000142A4624-00000000142A4665
void __cdecl data::PushTipsCodexExcelConfig::~PushTipsCodexExcelConfig(data::PushTipsCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PushTipsCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PushTipsCodexExcelConfig = v2;
};

// Line 267: range 0000000013BF1A6E-0000000013BF1D7E
void __cdecl data::ViewCodexExcelConfig::ViewCodexExcelConfig(data::ViewCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ViewCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ViewCodexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->desc);
  std::string::basic_string(&this->image);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v4);
  }
  this->city_id = 0;
  v5 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->world_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->world_area_id, v5);
  }
  this->world_area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_order, v5);
  }
  this->sort_order = 0;
  v6 = ((_BYTE)this - 116) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_disuse, v6, v7);
  this->is_disuse = 0;
  v8 = ((_BYTE)this - 115) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_only_unlocked, v8, v9);
  this->show_only_unlocked = 0;
};

// Line 267: range 00000000141B0756-00000000141B0D2E
void __cdecl data::ViewCodexExcelConfig::ViewCodexExcelConfig(
        data::ViewCodexExcelConfig *const this,
        const data::ViewCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  uint32_t scene_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_id; // ecx
  char v12; // dl
  uint32_t config_id; // ecx
  char v14; // al
  std::string *p_image; // rsi
  uint32_t city_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t world_area_id; // ecx
  char v20; // dl
  uint32_t sort_order; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_disuse; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool show_only_unlocked; // cl
  char v31; // dl
  __int64 v32; // rdx
  const data::ViewCodexExcelConfig *v33; // [rsp+0h] [rbp-20h]

  v33 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ViewCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ViewCodexExcelConfig = v2;
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
  v5 = (((_BYTE)v33 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->gadget_id);
  }
  gadget_id = v33->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->scene_id);
  }
  scene_id = v33->scene_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  v10 = (((_BYTE)v33 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->group_id);
  }
  group_id = v33->group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_id, v10);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->config_id);
  }
  config_id = v33->config_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->config_id, v10);
  }
  this->config_id = config_id;
  std::string::basic_string(&this->name, &v33->name);
  std::string::basic_string(&this->desc, &v33->desc);
  p_image = &v33->image;
  std::string::basic_string(&this->image, &v33->image);
  if ( *(_BYTE *)(((unsigned __int64)&v33->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->city_id);
  }
  city_id = v33->city_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_image) = v17 != 0;
    __asan_report_store4(&this->city_id, p_image);
  }
  this->city_id = city_id;
  v18 = (((_BYTE)v33 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->world_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->world_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->world_area_id);
  }
  world_area_id = v33->world_area_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->world_area_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->world_area_id, v18);
  }
  this->world_area_id = world_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->sort_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->sort_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->sort_order);
  }
  sort_order = v33->sort_order;
  v22 = *(_BYTE *)(((unsigned __int64)&this->sort_order >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->sort_order, v18);
  }
  this->sort_order = sort_order;
  v23 = ((_BYTE)v33 - 116) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v33->is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v33->is_disuse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v33->is_disuse, v23, v24);
  is_disuse = v33->is_disuse;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 116) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_disuse, v23, v27);
  this->is_disuse = is_disuse;
  v28 = ((_BYTE)v33 - 115) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v33->show_only_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v33->show_only_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v33->show_only_unlocked, v28, v29);
  show_only_unlocked = v33->show_only_unlocked;
  v31 = *(_BYTE *)(((unsigned __int64)&this->show_only_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 115) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->show_only_unlocked, v28, v32);
  this->show_only_unlocked = show_only_unlocked;
};

// Line 270: range 00000000142A45F8-00000000142A4622
void __cdecl data::ViewCodexExcelConfig::~ViewCodexExcelConfig(data::ViewCodexExcelConfig *const this)
{
  data::ViewCodexExcelConfig::~ViewCodexExcelConfig(this);
  operator delete(this, 0x90uLL);
};

// Line 270: range 00000000142A4586-00000000142A45F7
void __cdecl data::ViewCodexExcelConfig::~ViewCodexExcelConfig(data::ViewCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ViewCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ViewCodexExcelConfig = v2;
  std::string::~string(&this->image);
  std::string::~string(&this->desc);
  std::string::~string(&this->name);
};
