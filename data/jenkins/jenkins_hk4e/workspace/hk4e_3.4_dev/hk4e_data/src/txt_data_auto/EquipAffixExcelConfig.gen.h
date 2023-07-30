// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/EquipAffixExcelConfig.gen.h

// Line 17: range 0000000013F78848-0000000013F789DF
data::EquipAffixExcelConfig *__cdecl data::EquipAffixExcelConfig::operator=(
        data::EquipAffixExcelConfig *const this,
        const data::EquipAffixExcelConfig *a2)
{
  uint32_t affix_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t id; // ecx
  char v6; // dl
  uint32_t level; // ecx
  char v8; // al
  const data::EquipAffixExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::BaseTalentConfig::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v10->affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->affix_id);
  }
  affix_id = a2->affix_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->affix_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->affix_id, a2);
  }
  this->affix_id = affix_id;
  v4 = (((_BYTE)v10 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->id);
  }
  id = v10->id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->id, v4);
  }
  this->id = id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->level);
  }
  level = v10->level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  return this;
};

// Line 17: range 0000000014736DD8-0000000014736EE7
void __cdecl data::EquipAffixExcelConfig::EquipAffixExcelConfig(data::EquipAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::BaseTalentConfig::BaseTalentConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::EquipAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->affix_id, v1);
  }
  this->affix_id = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->id, v3);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
};

// Line 17: range 0000000013E45B90-0000000013E45D57
void __cdecl data::EquipAffixExcelConfig::EquipAffixExcelConfig(
        data::EquipAffixExcelConfig *const this,
        const data::EquipAffixExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t affix_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  const data::EquipAffixExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::BaseTalentConfig::BaseTalentConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::EquipAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->affix_id);
  }
  affix_id = a2->affix_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->affix_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->affix_id, a2);
  }
  this->affix_id = affix_id;
  v5 = (((_BYTE)v10 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->id);
  }
  id = v10->id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->id, v5);
  }
  this->id = id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->level);
  }
  level = v10->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
};

// Line 21: range 0000000013F7851E-0000000013F7856B
void __cdecl data::EquipAffixExcelConfig::~EquipAffixExcelConfig(data::EquipAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EquipAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  data::BaseTalentConfig::~BaseTalentConfig(this);
};

// Line 21: range 0000000013F7856C-0000000013F78596
void __cdecl data::EquipAffixExcelConfig::~EquipAffixExcelConfig(data::EquipAffixExcelConfig *const this)
{
  data::EquipAffixExcelConfig::~EquipAffixExcelConfig(this);
  operator delete(this, 0x68uLL);
};
