// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TrialAvatarExcelConfig.gen.h

// Line 39: range 000000000CE21C6A-000000000CE21D6D
void __cdecl data::TrialAvatarConfig::TrialAvatarConfig(data::TrialAvatarConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->promote_level, v3);
  }
  this->promote_level = 0;
};

// Line 39: range 000000000D37C992-000000000D37CB46
void __cdecl data::TrialAvatarConfig::TrialAvatarConfig(
        data::TrialAvatarConfig *const this,
        const data::TrialAvatarConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  uint32_t promote_level; // ecx
  char v9; // al
  const data::TrialAvatarConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialAvatarConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->level);
  }
  level = v10->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v10->promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->promote_level);
  }
  promote_level = v10->promote_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->promote_level, v5);
  }
  this->promote_level = promote_level;
};

// Line 42: range 000000000D492BE4-000000000D492C0E
void __cdecl data::TrialAvatarConfig::~TrialAvatarConfig(data::TrialAvatarConfig *const this)
{
  data::TrialAvatarConfig::~TrialAvatarConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 42: range 000000000D492BA2-000000000D492BE3
void __cdecl data::TrialAvatarConfig::~TrialAvatarConfig(data::TrialAvatarConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarConfig = v2;
};

// Line 51: range 000000000CE21D6E-000000000CE21E71
void __cdecl data::TrialWeaponConfig::TrialWeaponConfig(data::TrialWeaponConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TrialWeaponConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialWeaponConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_id, v1);
  }
  this->weapon_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->promote_level, v3);
  }
  this->promote_level = 0;
};

// Line 51: range 000000000D37CB48-000000000D37CCFC
void __cdecl data::TrialWeaponConfig::TrialWeaponConfig(
        data::TrialWeaponConfig *const this,
        const data::TrialWeaponConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t weapon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  uint32_t promote_level; // ecx
  char v9; // al
  const data::TrialWeaponConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialWeaponConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialWeaponConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_id);
  }
  weapon_id = a2->weapon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->weapon_id, a2);
  }
  this->weapon_id = weapon_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->level);
  }
  level = v10->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v10->promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->promote_level);
  }
  promote_level = v10->promote_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->promote_level, v5);
  }
  this->promote_level = promote_level;
};

// Line 54: range 000000000D492B76-000000000D492BA0
void __cdecl data::TrialWeaponConfig::~TrialWeaponConfig(data::TrialWeaponConfig *const this)
{
  data::TrialWeaponConfig::~TrialWeaponConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 54: range 000000000D492B34-000000000D492B75
void __cdecl data::TrialWeaponConfig::~TrialWeaponConfig(data::TrialWeaponConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialWeaponConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialWeaponConfig = v2;
};

// Line 63: range 000000000CE21E72-000000000CE22207
void __cdecl data::TrialAvatarExcelConfig::TrialAvatarExcelConfig(data::TrialAvatarExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_id, v1);
  }
  this->trial_avatar_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_param_list);
  std::vector<unsigned int>::vector(&this->trial_weapon_param_list);
  std::vector<unsigned int>::vector(&this->trial_reliquary_list);
  std::string::basic_string(&this->trial_reliquary_list_str);
  if ( *(char *)(((unsigned __int64)&this->is_trial_reliquary_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trial_reliquary_list_use_template, v1, &this->is_trial_reliquary_list_use_template);
  this->is_trial_reliquary_list_use_template = 0;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trial_skill_depot_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trial_skill_depot_id, v3);
  }
  this->trial_skill_depot_id = 0;
  std::vector<unsigned int>::vector(&this->trial_talent_list);
  std::string::basic_string(&this->trial_talent_list_str);
  if ( *(char *)(((unsigned __int64)&this->is_trial_talent_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trial_talent_list_use_template, v3, &this->is_trial_talent_list_use_template);
  this->is_trial_talent_list_use_template = 0;
  std::vector<unsigned int>::vector(&this->trial_inherent_proud_skill_list);
  std::string::basic_string(&this->trial_inherent_proud_skill_list_str);
  if ( *(char *)(((unsigned __int64)&this->is_trial_inherent_proud_skill_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_trial_inherent_proud_skill_list_use_template,
      v3,
      &this->is_trial_inherent_proud_skill_list_use_template);
  this->is_trial_inherent_proud_skill_list_use_template = 0;
  v4 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trial_core_proud_skill_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trial_core_proud_skill_level, v4);
  }
  this->trial_core_proud_skill_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_skill_level, v4);
  }
  this->trial_avatar_skill_level = 0;
  std::string::basic_string(&this->trial_avatar_skill_level_str);
  if ( *(char *)(((unsigned __int64)&this->is_trial_avatar_skill_level_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_trial_avatar_skill_level_use_template,
      v4,
      &this->is_trial_avatar_skill_level_use_template);
  this->is_trial_avatar_skill_level_use_template = 0;
  data::TrialAvatarConfig::TrialAvatarConfig(&this->avatar);
  data::TrialWeaponConfig::TrialWeaponConfig(&this->weapon);
  if ( *(char *)(((unsigned __int64)&this->is_dynamic_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dynamic_level, v4, &this->is_dynamic_level);
  this->is_dynamic_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->specified_costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->specified_costume_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->specified_costume_id, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->specified_costume_id = 0;
};

// Line 63: range 000000000D37CCFE-000000000D37D45A
void __cdecl data::TrialAvatarExcelConfig::TrialAvatarExcelConfig(
        data::TrialAvatarExcelConfig *const this,
        const data::TrialAvatarExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t trial_avatar_id; // ecx
  char v4; // al
  std::string *p_trial_reliquary_list_str; // rsi
  bool is_trial_reliquary_list_use_template; // cl
  char v7; // al
  __int64 v8; // rsi
  uint32_t trial_skill_depot_id; // ecx
  char v10; // dl
  std::string *p_trial_talent_list_str; // rsi
  bool is_trial_talent_list_use_template; // cl
  char v13; // al
  std::string *p_trial_inherent_proud_skill_list_str; // rsi
  bool is_trial_inherent_proud_skill_list_use_template; // cl
  char v16; // al
  __int64 v17; // rsi
  uint32_t trial_core_proud_skill_level; // ecx
  char v19; // dl
  uint32_t trial_avatar_skill_level; // ecx
  char v21; // al
  std::string *p_trial_avatar_skill_level_str; // rsi
  bool is_trial_avatar_skill_level_use_template; // cl
  char v24; // al
  data::TrialWeaponConfig *p_weapon; // rsi
  bool is_dynamic_level; // cl
  char v27; // al
  __int64 v28; // rsi
  uint32_t specified_costume_id; // ecx
  char v30; // dl
  const data::TrialAvatarExcelConfig *v31; // [rsp+0h] [rbp-20h]

  v31 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialAvatarExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trial_avatar_id);
  }
  trial_avatar_id = a2->trial_avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->trial_avatar_id, a2);
  }
  this->trial_avatar_id = trial_avatar_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_param_list, &v31->trial_avatar_param_list);
  std::vector<unsigned int>::vector(&this->trial_weapon_param_list, &v31->trial_weapon_param_list);
  std::vector<unsigned int>::vector(&this->trial_reliquary_list, &v31->trial_reliquary_list);
  p_trial_reliquary_list_str = &v31->trial_reliquary_list_str;
  std::string::basic_string(&this->trial_reliquary_list_str, &v31->trial_reliquary_list_str);
  if ( *(char *)(((unsigned __int64)&v31->is_trial_reliquary_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v31->is_trial_reliquary_list_use_template,
      p_trial_reliquary_list_str,
      &v31->is_trial_reliquary_list_use_template);
  is_trial_reliquary_list_use_template = v31->is_trial_reliquary_list_use_template;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_trial_reliquary_list_use_template >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_trial_reliquary_list_str) = v7 != 0;
    __asan_report_store1(
      &this->is_trial_reliquary_list_use_template,
      p_trial_reliquary_list_str,
      &this->is_trial_reliquary_list_use_template);
  }
  this->is_trial_reliquary_list_use_template = is_trial_reliquary_list_use_template;
  v8 = (((_BYTE)v31 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->trial_skill_depot_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->trial_skill_depot_id);
  }
  trial_skill_depot_id = v31->trial_skill_depot_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->trial_skill_depot_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->trial_skill_depot_id, v8);
  }
  this->trial_skill_depot_id = trial_skill_depot_id;
  std::vector<unsigned int>::vector(&this->trial_talent_list, &v31->trial_talent_list);
  p_trial_talent_list_str = &v31->trial_talent_list_str;
  std::string::basic_string(&this->trial_talent_list_str, &v31->trial_talent_list_str);
  if ( *(char *)(((unsigned __int64)&v31->is_trial_talent_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v31->is_trial_talent_list_use_template,
      p_trial_talent_list_str,
      &v31->is_trial_talent_list_use_template);
  is_trial_talent_list_use_template = v31->is_trial_talent_list_use_template;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_trial_talent_list_use_template >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_trial_talent_list_str) = v13 != 0;
    __asan_report_store1(
      &this->is_trial_talent_list_use_template,
      p_trial_talent_list_str,
      &this->is_trial_talent_list_use_template);
  }
  this->is_trial_talent_list_use_template = is_trial_talent_list_use_template;
  std::vector<unsigned int>::vector(&this->trial_inherent_proud_skill_list, &v31->trial_inherent_proud_skill_list);
  p_trial_inherent_proud_skill_list_str = &v31->trial_inherent_proud_skill_list_str;
  std::string::basic_string(&this->trial_inherent_proud_skill_list_str, &v31->trial_inherent_proud_skill_list_str);
  if ( *(char *)(((unsigned __int64)&v31->is_trial_inherent_proud_skill_list_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v31->is_trial_inherent_proud_skill_list_use_template,
      p_trial_inherent_proud_skill_list_str,
      &v31->is_trial_inherent_proud_skill_list_use_template);
  is_trial_inherent_proud_skill_list_use_template = v31->is_trial_inherent_proud_skill_list_use_template;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_trial_inherent_proud_skill_list_use_template >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_trial_inherent_proud_skill_list_str) = v16 != 0;
    __asan_report_store1(
      &this->is_trial_inherent_proud_skill_list_use_template,
      p_trial_inherent_proud_skill_list_str,
      &this->is_trial_inherent_proud_skill_list_use_template);
  }
  this->is_trial_inherent_proud_skill_list_use_template = is_trial_inherent_proud_skill_list_use_template;
  v17 = (((_BYTE)v31 - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->trial_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->trial_core_proud_skill_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->trial_core_proud_skill_level);
  }
  trial_core_proud_skill_level = v31->trial_core_proud_skill_level;
  v19 = *(_BYTE *)(((unsigned __int64)&this->trial_core_proud_skill_level >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this - 4) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->trial_core_proud_skill_level, v17);
  }
  this->trial_core_proud_skill_level = trial_core_proud_skill_level;
  if ( *(_BYTE *)(((unsigned __int64)&v31->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->trial_avatar_skill_level);
  }
  trial_avatar_skill_level = v31->trial_avatar_skill_level;
  v21 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store4(&this->trial_avatar_skill_level, v17);
  }
  this->trial_avatar_skill_level = trial_avatar_skill_level;
  p_trial_avatar_skill_level_str = &v31->trial_avatar_skill_level_str;
  std::string::basic_string(&this->trial_avatar_skill_level_str, &v31->trial_avatar_skill_level_str);
  if ( *(char *)(((unsigned __int64)&v31->is_trial_avatar_skill_level_use_template >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v31->is_trial_avatar_skill_level_use_template,
      p_trial_avatar_skill_level_str,
      &v31->is_trial_avatar_skill_level_use_template);
  is_trial_avatar_skill_level_use_template = v31->is_trial_avatar_skill_level_use_template;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_trial_avatar_skill_level_use_template >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(p_trial_avatar_skill_level_str) = v24 != 0;
    __asan_report_store1(
      &this->is_trial_avatar_skill_level_use_template,
      p_trial_avatar_skill_level_str,
      &this->is_trial_avatar_skill_level_use_template);
  }
  this->is_trial_avatar_skill_level_use_template = is_trial_avatar_skill_level_use_template;
  data::TrialAvatarConfig::TrialAvatarConfig(&this->avatar, &v31->avatar);
  p_weapon = &v31->weapon;
  data::TrialWeaponConfig::TrialWeaponConfig(&this->weapon, &v31->weapon);
  if ( *(char *)(((unsigned __int64)&v31->is_dynamic_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v31->is_dynamic_level, p_weapon, &v31->is_dynamic_level);
  is_dynamic_level = v31->is_dynamic_level;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_level >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(p_weapon) = v27 != 0;
    __asan_report_store1(&this->is_dynamic_level, p_weapon, &this->is_dynamic_level);
  }
  this->is_dynamic_level = is_dynamic_level;
  v28 = (((_BYTE)v31 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->specified_costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->specified_costume_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->specified_costume_id);
  }
  specified_costume_id = v31->specified_costume_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->specified_costume_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v30 )
  {
    LOBYTE(v28) = v30 != 0;
    __asan_report_store4(&this->specified_costume_id, v28);
  }
  this->specified_costume_id = specified_costume_id;
};

// Line 66: range 000000000D492A0A-000000000D492B07
void __cdecl data::TrialAvatarExcelConfig::~TrialAvatarExcelConfig(data::TrialAvatarExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarExcelConfig = v2;
  data::TrialWeaponConfig::~TrialWeaponConfig(&this->weapon);
  data::TrialAvatarConfig::~TrialAvatarConfig(&this->avatar);
  std::string::~string(&this->trial_avatar_skill_level_str);
  std::string::~string(&this->trial_inherent_proud_skill_list_str);
  std::vector<unsigned int>::~vector(&this->trial_inherent_proud_skill_list);
  std::string::~string(&this->trial_talent_list_str);
  std::vector<unsigned int>::~vector(&this->trial_talent_list);
  std::string::~string(&this->trial_reliquary_list_str);
  std::vector<unsigned int>::~vector(&this->trial_reliquary_list);
  std::vector<unsigned int>::~vector(&this->trial_weapon_param_list);
  std::vector<unsigned int>::~vector(&this->trial_avatar_param_list);
};

// Line 66: range 000000000D492B08-000000000D492B32
void __cdecl data::TrialAvatarExcelConfig::~TrialAvatarExcelConfig(data::TrialAvatarExcelConfig *const this)
{
  data::TrialAvatarExcelConfig::~TrialAvatarExcelConfig(this);
  operator delete(this, 0x168uLL);
};

// Line 97: range 000000000CE22208-000000000CE2239F
void __cdecl data::TrialReliquaryExcelConfig::TrialReliquaryExcelConfig(data::TrialReliquaryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TrialReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialReliquaryExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reliquary_id, v3);
  }
  this->reliquary_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->promote_level, v4);
  }
  this->promote_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_prop_id, v4);
  }
  this->main_prop_id = 0;
  std::vector<unsigned int>::vector(&this->append_prop_list);
};

// Line 97: range 000000000D37D59C-000000000D37D865
void __cdecl data::TrialReliquaryExcelConfig::TrialReliquaryExcelConfig(
        data::TrialReliquaryExcelConfig *const this,
        const data::TrialReliquaryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reliquary_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t promote_level; // ecx
  char v12; // dl
  uint32_t main_prop_id; // ecx
  char v14; // al
  const data::TrialReliquaryExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialReliquaryExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->reliquary_id);
  }
  reliquary_id = v15->reliquary_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reliquary_id, v5);
  }
  this->reliquary_id = reliquary_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->level);
  }
  level = v15->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->promote_level);
  }
  promote_level = v15->promote_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->promote_level, v10);
  }
  this->promote_level = promote_level;
  if ( *(_BYTE *)(((unsigned __int64)&v15->main_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->main_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->main_prop_id);
  }
  main_prop_id = v15->main_prop_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->main_prop_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->main_prop_id, v10);
  }
  this->main_prop_id = main_prop_id;
  std::vector<unsigned int>::vector(&this->append_prop_list, &v15->append_prop_list);
};

// Line 100: range 000000000D49298C-000000000D4929DD
void __cdecl data::TrialReliquaryExcelConfig::~TrialReliquaryExcelConfig(data::TrialReliquaryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialReliquaryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialReliquaryExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->append_prop_list);
};

// Line 100: range 000000000D4929DE-000000000D492A08
void __cdecl data::TrialReliquaryExcelConfig::~TrialReliquaryExcelConfig(data::TrialReliquaryExcelConfig *const this)
{
  data::TrialReliquaryExcelConfig::~TrialReliquaryExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 116: range 000000000CE223A0-000000000CE2248D
void __cdecl data::TrialAvatarTemplateExcelConfig::TrialAvatarTemplateExcelConfig(
        data::TrialAvatarTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_level, v1);
  }
  this->trial_avatar_level = 0;
  std::vector<unsigned int>::vector(&this->trial_reliquary_list);
  std::vector<unsigned int>::vector(&this->trial_talent_list);
  std::vector<unsigned int>::vector(&this->trial_inherent_proud_skill_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_skill_level, v1);
  }
  this->trial_avatar_skill_level = 0;
};

// Line 116: range 000000000D079304-000000000D0794C0
void __cdecl data::TrialAvatarTemplateExcelConfig::TrialAvatarTemplateExcelConfig(
        data::TrialAvatarTemplateExcelConfig *const this,
        const data::TrialAvatarTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t trial_avatar_level; // ecx
  char v4; // al
  std::vector<unsigned int> *p_trial_inherent_proud_skill_list; // rsi
  uint32_t trial_avatar_skill_level; // ecx
  char v7; // al
  const data::TrialAvatarTemplateExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TrialAvatarTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trial_avatar_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trial_avatar_level);
  }
  trial_avatar_level = a2->trial_avatar_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->trial_avatar_level, a2);
  }
  this->trial_avatar_level = trial_avatar_level;
  std::vector<unsigned int>::vector(&this->trial_reliquary_list, &v8->trial_reliquary_list);
  std::vector<unsigned int>::vector(&this->trial_talent_list, &v8->trial_talent_list);
  p_trial_inherent_proud_skill_list = &v8->trial_inherent_proud_skill_list;
  std::vector<unsigned int>::vector(&this->trial_inherent_proud_skill_list, &v8->trial_inherent_proud_skill_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->trial_avatar_skill_level);
  }
  trial_avatar_skill_level = v8->trial_avatar_skill_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_skill_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_trial_inherent_proud_skill_list) = v7 != 0;
    __asan_report_store4(&this->trial_avatar_skill_level, p_trial_inherent_proud_skill_list);
  }
  this->trial_avatar_skill_level = trial_avatar_skill_level;
};

// Line 119: range 000000000D492960-000000000D49298A
void __cdecl data::TrialAvatarTemplateExcelConfig::~TrialAvatarTemplateExcelConfig(
        data::TrialAvatarTemplateExcelConfig *const this)
{
  data::TrialAvatarTemplateExcelConfig::~TrialAvatarTemplateExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 119: range 000000000D4928EE-000000000D49295F
void __cdecl data::TrialAvatarTemplateExcelConfig::~TrialAvatarTemplateExcelConfig(
        data::TrialAvatarTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TrialAvatarTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TrialAvatarTemplateExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_inherent_proud_skill_list);
  std::vector<unsigned int>::~vector(&this->trial_talent_list);
  std::vector<unsigned int>::~vector(&this->trial_reliquary_list);
};
