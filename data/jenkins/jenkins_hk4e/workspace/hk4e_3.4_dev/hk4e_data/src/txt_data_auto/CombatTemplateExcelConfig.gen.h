// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CombatTemplateExcelConfig.gen.h

// Line 42: range 00000000141B18E4-00000000141B1A23
void __cdecl data::TauntLevelTemplateExcelConfig::TauntLevelTemplateExcelConfig(
        data::TauntLevelTemplateExcelConfig *const this,
        const data::TauntLevelTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::TauntLevel type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t taunt_level_val; // ecx
  char v7; // dl
  const data::TauntLevelTemplateExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TauntLevelTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TauntLevelTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->taunt_level_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->taunt_level_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->taunt_level_val);
  }
  taunt_level_val = v8->taunt_level_val;
  v7 = *(_BYTE *)(((unsigned __int64)&this->taunt_level_val >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->taunt_level_val, v5);
  }
  this->taunt_level_val = taunt_level_val;
};

// Line 45: range 00000000142A3DE0-00000000142A3E21
void __cdecl data::TauntLevelTemplateExcelConfig::~TauntLevelTemplateExcelConfig(
        data::TauntLevelTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TauntLevelTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TauntLevelTemplateExcelConfig = v2;
};

// Line 45: range 00000000142A3E22-00000000142A3E4C
void __cdecl data::TauntLevelTemplateExcelConfig::~TauntLevelTemplateExcelConfig(
        data::TauntLevelTemplateExcelConfig *const this)
{
  data::TauntLevelTemplateExcelConfig::~TauntLevelTemplateExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 57: range 0000000013BF2316-0000000013BF242F
void __cdecl data::LockTemplateExcelConfig::LockTemplateExcelConfig(data::LockTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LockTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LockTemplateExcelConfig = v2;
  std::string::basic_string(&this->type);
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range, v1);
  }
  this->range = 0.0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_pri >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_pri, v3);
  }
  this->combat_pri = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_pri, v3);
  }
  this->normal_pri = 0.0;
};

// Line 57: range 00000000141B1B64-00000000141B1D3C
void __cdecl data::LockTemplateExcelConfig::LockTemplateExcelConfig(
        data::LockTemplateExcelConfig *const this,
        const data::LockTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  float range; // xmm0_4
  float combat_pri; // xmm0_4
  __int64 v5; // rsi
  float normal_pri; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::LockTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LockTemplateExcelConfig = v2;
  std::string::basic_string(&this->type, &a2->type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->range);
  }
  range = a2->range;
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range, &a2->type);
  }
  this->range = range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combat_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->combat_pri >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->combat_pri);
  }
  combat_pri = a2->combat_pri;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_pri >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_pri, v5);
  }
  this->combat_pri = combat_pri;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normal_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normal_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normal_pri);
  }
  normal_pri = a2->normal_pri;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_pri, v5);
  }
  this->normal_pri = normal_pri;
};

// Line 60: range 00000000142A3D62-00000000142A3DB3
void __cdecl data::LockTemplateExcelConfig::~LockTemplateExcelConfig(data::LockTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LockTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LockTemplateExcelConfig = v2;
  std::string::~string(&this->type);
};

// Line 60: range 00000000142A3DB4-00000000142A3DDE
void __cdecl data::LockTemplateExcelConfig::~LockTemplateExcelConfig(data::LockTemplateExcelConfig *const this)
{
  data::LockTemplateExcelConfig::~LockTemplateExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 74: range 0000000013BF2430-0000000013BF2519
void __cdecl data::HitLevelTemplateExcelConfig::HitLevelTemplateExcelConfig(
        data::HitLevelTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HitLevelTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HitLevelTemplateExcelConfig = v2;
  std::string::basic_string(&this->type);
  std::string::basic_string(&this->hit_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_impulse_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_impulse_x, v1);
  }
  this->hit_impulse_x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_impulse_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_impulse_y, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->hit_impulse_y = 0.0;
};

// Line 74: range 00000000141B1E38-00000000141B1FDA
void __cdecl data::HitLevelTemplateExcelConfig::HitLevelTemplateExcelConfig(
        data::HitLevelTemplateExcelConfig *const this,
        const data::HitLevelTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  float hit_impulse_x; // xmm0_4
  float hit_impulse_y; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::HitLevelTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HitLevelTemplateExcelConfig = v2;
  std::string::basic_string(&this->type, &a2->type);
  std::string::basic_string(&this->hit_level, &a2->hit_level);
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_impulse_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_impulse_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_impulse_x);
  }
  hit_impulse_x = a2->hit_impulse_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_impulse_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_impulse_x, &a2->hit_level);
  }
  this->hit_impulse_x = hit_impulse_x;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_impulse_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_impulse_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hit_impulse_y);
  }
  hit_impulse_y = a2->hit_impulse_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_impulse_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_impulse_y, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->hit_impulse_y = hit_impulse_y;
};

// Line 77: range 00000000142A3CD4-00000000142A3D35
void __cdecl data::HitLevelTemplateExcelConfig::~HitLevelTemplateExcelConfig(
        data::HitLevelTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HitLevelTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HitLevelTemplateExcelConfig = v2;
  std::string::~string(&this->hit_level);
  std::string::~string(&this->type);
};

// Line 77: range 00000000142A3D36-00000000142A3D60
void __cdecl data::HitLevelTemplateExcelConfig::~HitLevelTemplateExcelConfig(
        data::HitLevelTemplateExcelConfig *const this)
{
  data::HitLevelTemplateExcelConfig::~HitLevelTemplateExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 91: range 000000001410B0F4-000000001410B183
void __cdecl data::EntityPropPerMpConfig::EntityPropPerMpConfig(data::EntityPropPerMpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityPropPerMpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityPropPerMpConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_type, v1);
  }
  this->prop_type = FIGHT_PROP_NONE;
  std::vector<float>::vector(&this->prop_value_vec);
};

// Line 91: range 00000000141B178C-00000000141B1861
void __cdecl data::EntityPropPerMpConfig::EntityPropPerMpConfig(
        data::EntityPropPerMpConfig *const this,
        const data::EntityPropPerMpConfig *a2)
{
  int (**v2)(...); // rdx
  data::FightPropType prop_type; // ecx
  char v4; // al
  const data::EntityPropPerMpConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EntityPropPerMpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityPropPerMpConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  std::vector<float>::vector(&this->prop_value_vec, &v5->prop_value_vec);
};

// Line 94: range 0000000014030302-000000001403032C
void __cdecl data::EntityPropPerMpConfig::~EntityPropPerMpConfig(data::EntityPropPerMpConfig *const this)
{
  data::EntityPropPerMpConfig::~EntityPropPerMpConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 94: range 00000000140302B0-0000000014030301
void __cdecl data::EntityPropPerMpConfig::~EntityPropPerMpConfig(data::EntityPropPerMpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityPropPerMpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityPropPerMpConfig = v2;
  std::vector<float>::~vector(&this->prop_value_vec);
};

// Line 104: range 0000000013BF256E-0000000013BF25FD
void __cdecl data::EntityMultiPlayerExcelConfig::EntityMultiPlayerExcelConfig(
        data::EntityMultiPlayerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityMultiPlayerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityMultiPlayerExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::EntityPropPerMpConfig>::vector(&this->prop_per_vec);
};

// Line 104: range 00000000141B20D6-00000000141B21AB
void __cdecl data::EntityMultiPlayerExcelConfig::EntityMultiPlayerExcelConfig(
        data::EntityMultiPlayerExcelConfig *const this,
        const data::EntityMultiPlayerExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::EntityMultiPlayerExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EntityMultiPlayerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityMultiPlayerExcelConfig = v2;
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
  std::vector<data::EntityPropPerMpConfig>::vector(&this->prop_per_vec, &v5->prop_per_vec);
};

// Line 107: range 00000000142A3C56-00000000142A3CA7
void __cdecl data::EntityMultiPlayerExcelConfig::~EntityMultiPlayerExcelConfig(
        data::EntityMultiPlayerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityMultiPlayerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityMultiPlayerExcelConfig = v2;
  std::vector<data::EntityPropPerMpConfig>::~vector(&this->prop_per_vec);
};

// Line 107: range 00000000142A3CA8-00000000142A3CD2
void __cdecl data::EntityMultiPlayerExcelConfig::~EntityMultiPlayerExcelConfig(
        data::EntityMultiPlayerExcelConfig *const this)
{
  data::EntityMultiPlayerExcelConfig::~EntityMultiPlayerExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 119: range 00000000141B22EC-00000000141B23A6
void __cdecl data::ChargeBarStyleExcelConfig::ChargeBarStyleExcelConfig(
        data::ChargeBarStyleExcelConfig *const this,
        const data::ChargeBarStyleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ChargeBarStyleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChargeBarStyleExcelConfig = v2;
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
};

// Line 122: range 00000000142A3C2A-00000000142A3C54
void __cdecl data::ChargeBarStyleExcelConfig::~ChargeBarStyleExcelConfig(data::ChargeBarStyleExcelConfig *const this)
{
  data::ChargeBarStyleExcelConfig::~ChargeBarStyleExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 122: range 00000000142A3BE8-00000000142A3C29
void __cdecl data::ChargeBarStyleExcelConfig::~ChargeBarStyleExcelConfig(data::ChargeBarStyleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChargeBarStyleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChargeBarStyleExcelConfig = v2;
};

// Line 133: range 0000000013BF25FE-0000000013BF26BF
void __cdecl data::AttackAttenuationExcelConfig::AttackAttenuationExcelConfig(
        data::AttackAttenuationExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AttackAttenuationExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AttackAttenuationExcelConfig = v2;
  std::string::basic_string(&this->group);
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reset_cycle, v1);
  }
  this->reset_cycle = 0.0;
  std::vector<float>::vector(&this->durability_sequence);
  std::vector<float>::vector(&this->enbreak_sequence);
  std::vector<float>::vector(&this->damage_sequence);
};

// Line 133: range 00000000141B24E8-00000000141B2662
void __cdecl data::AttackAttenuationExcelConfig::AttackAttenuationExcelConfig(
        data::AttackAttenuationExcelConfig *const this,
        const data::AttackAttenuationExcelConfig *a2)
{
  int (**v2)(...); // rdx
  float reset_cycle; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::AttackAttenuationExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AttackAttenuationExcelConfig = v2;
  std::string::basic_string(&this->group, &a2->group);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reset_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reset_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reset_cycle);
  }
  reset_cycle = a2->reset_cycle;
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reset_cycle, &a2->group);
  }
  this->reset_cycle = reset_cycle;
  std::vector<float>::vector(&this->durability_sequence, &a2->durability_sequence);
  std::vector<float>::vector(&this->enbreak_sequence, &a2->enbreak_sequence);
  std::vector<float>::vector(&this->damage_sequence, &a2->damage_sequence);
};

// Line 136: range 00000000142A3BBC-00000000142A3BE6
void __cdecl data::AttackAttenuationExcelConfig::~AttackAttenuationExcelConfig(
        data::AttackAttenuationExcelConfig *const this)
{
  data::AttackAttenuationExcelConfig::~AttackAttenuationExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 136: range 00000000142A3B3A-00000000142A3BBB
void __cdecl data::AttackAttenuationExcelConfig::~AttackAttenuationExcelConfig(
        data::AttackAttenuationExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AttackAttenuationExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AttackAttenuationExcelConfig = v2;
  std::vector<float>::~vector(&this->damage_sequence);
  std::vector<float>::~vector(&this->enbreak_sequence);
  std::vector<float>::~vector(&this->durability_sequence);
  std::string::~string(&this->group);
};
