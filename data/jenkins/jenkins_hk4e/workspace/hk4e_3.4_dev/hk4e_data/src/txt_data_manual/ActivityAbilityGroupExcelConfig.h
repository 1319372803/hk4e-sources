// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityAbilityGroupExcelConfig.h

// Line 22: range 0000000012EABB04-0000000012EABC26
data::ActivityAbilityGroupRuleConfig *__cdecl data::ActivityAbilityGroupRuleConfig::operator=(
        data::ActivityAbilityGroupRuleConfig *const this,
        const data::ActivityAbilityGroupRuleConfig *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t equip_id; // ecx
  char v6; // dl
  const data::ActivityAbilityGroupRuleConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  std::string::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v4 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->equip_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->equip_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->equip_id);
  }
  equip_id = v8->equip_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->equip_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->equip_id, v4);
  }
  this->equip_id = equip_id;
  return this;
};

// Line 22: range 000000001337D13A-000000001337D1D8
void __cdecl data::ActivityAbilityGroupRuleConfig::ActivityAbilityGroupRuleConfig(
        data::ActivityAbilityGroupRuleConfig *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->equip_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->equip_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->equip_id = 0;
};

// Line 22: range 000000001304BA52-000000001304BB71
void __cdecl data::ActivityAbilityGroupRuleConfig::ActivityAbilityGroupRuleConfig(
        data::ActivityAbilityGroupRuleConfig *const this,
        const data::ActivityAbilityGroupRuleConfig *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t equip_id; // ecx
  char v6; // dl
  const data::ActivityAbilityGroupRuleConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v7->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v4 = (((_BYTE)v7 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->equip_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->equip_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->equip_id);
  }
  equip_id = v7->equip_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->equip_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->equip_id, v4);
  }
  this->equip_id = equip_id;
};

// Line 22: range 0000000013407A5A-0000000013407B79
void __cdecl data::ActivityAbilityGroupRuleConfig::ActivityAbilityGroupRuleConfig(
        data::ActivityAbilityGroupRuleConfig *const this,
        data::ActivityAbilityGroupRuleConfig *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t equip_id; // ecx
  char v6; // dl
  data::ActivityAbilityGroupRuleConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v7->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v4 = (((_BYTE)v7 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->equip_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->equip_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->equip_id);
  }
  equip_id = v7->equip_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->equip_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->equip_id, v4);
  }
  this->equip_id = equip_id;
};

// Line 22: range 0000000012EABAE8-0000000012EABB02
void __cdecl data::ActivityAbilityGroupRuleConfig::~ActivityAbilityGroupRuleConfig(
        data::ActivityAbilityGroupRuleConfig *const this)
{
  std::string::~string(this);
};
