// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFleurFairExcelConfig.h

// Line 63: range 0000000012EBE188-0000000012EBE1E0
void __cdecl FleurFairDungeonStatGroupVariableParam::FleurFairDungeonStatGroupVariableParam(
        FleurFairDungeonStatGroupVariableParam *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->variable_value, v1);
  }
  this->variable_value = 0;
};

// Line 63: range 00000000130AC820-00000000130AC8BA
void __cdecl FleurFairDungeonStatGroupVariableParam::FleurFairDungeonStatGroupVariableParam(
        FleurFairDungeonStatGroupVariableParam *const this,
        const FleurFairDungeonStatGroupVariableParam *a2)
{
  int32_t variable_value; // ecx
  char v3; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->variable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->variable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->variable_value);
  }
  variable_value = a2->variable_value;
  v3 = *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->variable_value, a2);
  }
  this->variable_value = variable_value;
};

// Line 63: range 0000000012EBE1E2-0000000012EBE1FC
void __cdecl FleurFairDungeonStatGroupVariableParam::~FleurFairDungeonStatGroupVariableParam(
        FleurFairDungeonStatGroupVariableParam *const this)
{
  std::string::~string(this);
};

// Line 69: range 0000000012EBE1FE-0000000012EBE256
void __cdecl FleurFairDungeonStatMonsterHurtParam::FleurFairDungeonStatMonsterHurtParam(
        FleurFairDungeonStatMonsterHurtParam *const this)
{
  __int64 v1; // rsi

  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->group_monster_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage, v1);
  }
  this->damage = 0;
};

// Line 69: range 00000000130ACC14-00000000130ACCAE
void __cdecl FleurFairDungeonStatMonsterHurtParam::FleurFairDungeonStatMonsterHurtParam(
        FleurFairDungeonStatMonsterHurtParam *const this,
        const FleurFairDungeonStatMonsterHurtParam *a2)
{
  uint32_t damage; // ecx
  char v3; // al

  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(
    &this->group_monster_map,
    &a2->group_monster_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage);
  }
  damage = a2->damage;
  v3 = *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->damage, a2);
  }
  this->damage = damage;
};

// Line 69: range 0000000012EBE258-0000000012EBE272
void __cdecl FleurFairDungeonStatMonsterHurtParam::~FleurFairDungeonStatMonsterHurtParam(
        FleurFairDungeonStatMonsterHurtParam *const this)
{
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->group_monster_map);
};
