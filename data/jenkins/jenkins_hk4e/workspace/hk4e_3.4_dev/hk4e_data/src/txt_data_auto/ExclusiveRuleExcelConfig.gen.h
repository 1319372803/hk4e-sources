// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ExclusiveRuleExcelConfig.gen.h

// Line 63: range 0000000014737D80-0000000014737E93
void __cdecl data::ExclusiveRuleExcelConfig::ExclusiveRuleExcelConfig(data::ExclusiveRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ExclusiveRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExclusiveRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->platform_type, v3);
  }
  this->platform_type = EXCLUSIVE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->rule_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rule_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rule_type, v3);
  }
  this->rule_type = EXCLUSIVE_RULE_NONE;
  std::vector<unsigned int>::vector(&this->object_ids);
};

// Line 63: range 0000000014D10D54-0000000014D10F23
void __cdecl data::ExclusiveRuleExcelConfig::ExclusiveRuleExcelConfig(
        data::ExclusiveRuleExcelConfig *const this,
        const data::ExclusiveRuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ExclusivePlatformType platform_type; // ecx
  char v7; // dl
  data::ExclusiveRuleType rule_type; // ecx
  char v9; // al
  const data::ExclusiveRuleExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExclusiveRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExclusiveRuleExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->platform_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->platform_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->platform_type);
  }
  platform_type = v10->platform_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->platform_type, v5);
  }
  this->platform_type = platform_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->rule_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->rule_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->rule_type);
  }
  rule_type = v10->rule_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->rule_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->rule_type, v5);
  }
  this->rule_type = rule_type;
  std::vector<unsigned int>::vector(&this->object_ids, &v10->object_ids);
};

// Line 66: range 0000000014DE86FA-0000000014DE874B
void __cdecl data::ExclusiveRuleExcelConfig::~ExclusiveRuleExcelConfig(data::ExclusiveRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExclusiveRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExclusiveRuleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->object_ids);
};

// Line 66: range 0000000014DE874C-0000000014DE8776
void __cdecl data::ExclusiveRuleExcelConfig::~ExclusiveRuleExcelConfig(data::ExclusiveRuleExcelConfig *const this)
{
  data::ExclusiveRuleExcelConfig::~ExclusiveRuleExcelConfig(this);
  operator delete(this, 0x30uLL);
};
