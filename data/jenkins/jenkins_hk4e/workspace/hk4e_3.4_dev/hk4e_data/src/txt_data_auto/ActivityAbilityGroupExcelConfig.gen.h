// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityAbilityGroupExcelConfig.gen.h

// Line 16: range 0000000012EAE9BA-0000000012EAEB13
void __cdecl data::ActivityAbilityGroupExcelConfig::ActivityAbilityGroupExcelConfig(
        data::ActivityAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityAbilityGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index, v1);
  }
  this->index = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  std::string::basic_string(&this->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v3);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weapon_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->weapon_id = 0;
};

// Line 16: range 00000000130752CA-000000001307551E
void __cdecl data::ActivityAbilityGroupExcelConfig::ActivityAbilityGroupExcelConfig(
        data::ActivityAbilityGroupExcelConfig *const this,
        const data::ActivityAbilityGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t index; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  std::string *p_ability_group_name; // rsi
  uint32_t avatar_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t weapon_id; // ecx
  char v13; // dl
  const data::ActivityAbilityGroupExcelConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityAbilityGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v4 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->index, a2);
  }
  this->index = index;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->activity_id);
  }
  activity_id = v14->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  p_ability_group_name = &v14->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &v14->ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)&v14->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->avatar_id);
  }
  avatar_id = v14->avatar_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_ability_group_name) = v10 != 0;
    __asan_report_store4(&this->avatar_id, p_ability_group_name);
  }
  this->avatar_id = avatar_id;
  v11 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->weapon_id);
  }
  weapon_id = v14->weapon_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->weapon_id, v11);
  }
  this->weapon_id = weapon_id;
};

// Line 19: range 0000000013426456-00000000134264A7
void __cdecl data::ActivityAbilityGroupExcelConfig::~ActivityAbilityGroupExcelConfig(
        data::ActivityAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityAbilityGroupExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 19: range 00000000134264A8-00000000134264D2
void __cdecl data::ActivityAbilityGroupExcelConfig::~ActivityAbilityGroupExcelConfig(
        data::ActivityAbilityGroupExcelConfig *const this)
{
  data::ActivityAbilityGroupExcelConfig::~ActivityAbilityGroupExcelConfig(this);
  operator delete(this, 0x38uLL);
};
