// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/AbilityGroup/ConfigAbilityGroup.h

// Line 58: range 000000000F786EFC-000000000F7870C8
data::ConfigAbilityGroup *__cdecl data::ConfigAbilityGroup::operator=(
        data::ConfigAbilityGroup *const this,
        const data::ConfigAbilityGroup *a2)
{
  data::AbilityGroupSourceType ability_group_source_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::AbilityGroupTargetType ability_group_target_type; // ecx
  char v6; // dl
  data::ConfigDynamicTalentList *p_target_talents; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigAbilityGroup *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  ability_group_source_type = a2->ability_group_source_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->ability_group_source_type = ability_group_source_type;
  v4 = (((_BYTE)v11 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->ability_group_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->ability_group_target_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->ability_group_target_type);
  }
  ability_group_target_type = v11->ability_group_target_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->ability_group_target_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->ability_group_target_type, v4);
  }
  this->ability_group_target_type = ability_group_target_type;
  std::vector<unsigned int>::operator=(&this->ability_group_target_idlist, &v11->ability_group_target_idlist);
  std::vector<data::ConfigEntityAbilityEntry>::operator=(&this->target_abilities, &v11->target_abilities);
  p_target_talents = &v11->target_talents;
  std::vector<data::ConfigDynamicTalent>::operator=(&this->target_talents, &v11->target_talents);
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_target_talents, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_target_talents) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_talents, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 58: range 000000000F9AFC04-000000000F9AFCFC
void __cdecl data::ConfigAbilityGroup::ConfigAbilityGroup(data::ConfigAbilityGroup *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->ability_group_source_type = ABILITY_GROUP_SOURCE_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_group_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_group_target_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_group_target_type, v2);
  }
  this->ability_group_target_type = ABILITY_GROUP_TARGET_NONE;
  std::vector<unsigned int>::vector(&this->ability_group_target_idlist);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->target_abilities);
  std::vector<data::ConfigDynamicTalent>::vector(&this->target_talents);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 58: range 0000000012638518-000000001263871D
void __cdecl data::ConfigAbilityGroup::ConfigAbilityGroup(
        data::ConfigAbilityGroup *const this,
        const data::ConfigAbilityGroup *a2)
{
  data::AbilityGroupSourceType ability_group_source_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::AbilityGroupTargetType ability_group_target_type; // ecx
  char v6; // dl
  data::ConfigDynamicTalentList *p_target_talents; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigAbilityGroup *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  ability_group_source_type = a2->ability_group_source_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->ability_group_source_type = ability_group_source_type;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->ability_group_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->ability_group_target_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->ability_group_target_type);
  }
  ability_group_target_type = v10->ability_group_target_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->ability_group_target_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->ability_group_target_type, v4);
  }
  this->ability_group_target_type = ability_group_target_type;
  std::vector<unsigned int>::vector(&this->ability_group_target_idlist, &v10->ability_group_target_idlist);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->target_abilities, &v10->target_abilities);
  p_target_talents = &v10->target_talents;
  std::vector<data::ConfigDynamicTalent>::vector(&this->target_talents, &v10->target_talents);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_target_talents, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_target_talents) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_talents, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 58: range 000000000F97205C-000000000F97209A
void __cdecl data::ConfigAbilityGroup::~ConfigAbilityGroup(data::ConfigAbilityGroup *const this)
{
  std::vector<data::ConfigDynamicTalent>::~vector(&this->target_talents);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->target_abilities);
  std::vector<unsigned int>::~vector(&this->ability_group_target_idlist);
};
