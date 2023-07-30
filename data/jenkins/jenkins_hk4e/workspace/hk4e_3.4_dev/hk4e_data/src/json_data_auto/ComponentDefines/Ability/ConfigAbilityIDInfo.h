// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityIDInfo.h

// Line 18: range 000000001215F1EC-000000001215F2A1
void __cdecl data::ConfigEntityAbilityEntry::ConfigEntityAbilityEntry(data::ConfigEntityAbilityEntry *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->ability_override);
  if ( *(char *)(((unsigned __int64)&this->light_weight_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->light_weight_remove, v1, &this->light_weight_remove);
  this->light_weight_remove = 0;
  v2 = ((_BYTE)this + 97) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 18: range 000000000EC0FA7A-000000000EC0FC03
void __cdecl data::ConfigEntityAbilityEntry::ConfigEntityAbilityEntry(
        data::ConfigEntityAbilityEntry *const this,
        const data::ConfigEntityAbilityEntry *a2)
{
  std::string *p_ability_override; // rsi
  bool light_weight_remove; // cl
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  p_ability_override = &a2->ability_override;
  std::string::basic_string(&this->ability_override, p_ability_override);
  if ( *(char *)(((unsigned __int64)&a2->light_weight_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->light_weight_remove, p_ability_override, &a2->light_weight_remove);
  light_weight_remove = a2->light_weight_remove;
  v4 = *(_BYTE *)(((unsigned __int64)&this->light_weight_remove >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_ability_override) = v4 != 0;
    __asan_report_store1(&this->light_weight_remove, p_ability_override, &this->light_weight_remove);
  }
  this->light_weight_remove = light_weight_remove;
  v5 = ((_BYTE)a2 + 97) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 18: range 00000000123431D0-0000000012343321
void __cdecl data::ConfigEntityAbilityEntry::ConfigEntityAbilityEntry(
        data::ConfigEntityAbilityEntry *const this,
        data::ConfigEntityAbilityEntry *a2)
{
  std::string *p_ability_override; // rsi
  bool light_weight_remove; // cl
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  p_ability_override = &a2->ability_override;
  std::string::basic_string(&this->ability_override, p_ability_override);
  if ( *(char *)(((unsigned __int64)&a2->light_weight_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->light_weight_remove, p_ability_override, &a2->light_weight_remove);
  light_weight_remove = a2->light_weight_remove;
  v4 = *(_BYTE *)(((unsigned __int64)&this->light_weight_remove >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_ability_override) = v4 != 0;
    __asan_report_store1(&this->light_weight_remove, p_ability_override, &this->light_weight_remove);
  }
  this->light_weight_remove = light_weight_remove;
  v5 = ((_BYTE)a2 + 97) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 75: range 000000000F94F2D2-000000000F94F426
data::ConfigEntityAbilityEntry *__cdecl data::ConfigEntityAbilityEntry::operator=(
        data::ConfigEntityAbilityEntry *const this,
        const data::ConfigEntityAbilityEntry *a2)
{
  std::string *p_ability_override; // rsi
  bool light_weight_remove; // cl
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::operator=(this, a2);
  std::string::operator=(&this->ability_name, &a2->ability_name);
  p_ability_override = &a2->ability_override;
  std::string::operator=(&this->ability_override, p_ability_override);
  if ( *(char *)(((unsigned __int64)&a2->light_weight_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->light_weight_remove, p_ability_override, &a2->light_weight_remove);
  light_weight_remove = a2->light_weight_remove;
  v4 = *(_BYTE *)(((unsigned __int64)&this->light_weight_remove >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_ability_override) = v4 != 0;
    __asan_report_store1(&this->light_weight_remove, p_ability_override, &this->light_weight_remove);
  }
  this->light_weight_remove = light_weight_remove;
  v5 = ((_BYTE)a2 + 97) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 75: range 000000000EC0FC72-000000000EC0FCAC
void __cdecl data::ConfigEntityAbilityEntry::~ConfigEntityAbilityEntry(data::ConfigEntityAbilityEntry *const this)
{
  std::string::~string(&this->ability_override);
  std::string::~string(&this->ability_name);
  std::string::~string(this);
};
