// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ElementExcelConfig.gen.h

// Line 18: range 00000000141C6D36-00000000141C6FF0
void __cdecl data::ElementCoeffExcelConfig::ElementCoeffExcelConfig(
        data::ElementCoeffExcelConfig *const this,
        const data::ElementCoeffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  float crash_co; // xmm0_4
  __int64 v6; // rsi
  float element_level_co; // xmm0_4
  float player_element_level_co; // xmm0_4
  __int64 v9; // rsi
  float player_shield_level_co; // xmm0_4
  const data::ElementCoeffExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ElementCoeffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ElementCoeffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v11->crash_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->crash_co >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->crash_co);
  }
  crash_co = v11->crash_co;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->crash_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crash_co >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crash_co, v6);
  }
  this->crash_co = crash_co;
  if ( *(_BYTE *)(((unsigned __int64)&v11->element_level_co >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->element_level_co >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->element_level_co);
  }
  element_level_co = v11->element_level_co;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_level_co >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_level_co >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_level_co, v6);
  }
  this->element_level_co = element_level_co;
  if ( *(_BYTE *)(((unsigned __int64)&v11->player_element_level_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->player_element_level_co >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->player_element_level_co);
  }
  player_element_level_co = v11->player_element_level_co;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_element_level_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_element_level_co >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_element_level_co, v9);
  }
  this->player_element_level_co = player_element_level_co;
  if ( *(_BYTE *)(((unsigned __int64)&v11->player_shield_level_co >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->player_shield_level_co >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->player_shield_level_co);
  }
  player_shield_level_co = v11->player_shield_level_co;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_shield_level_co >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_shield_level_co >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_shield_level_co, v9);
  }
  this->player_shield_level_co = player_shield_level_co;
};

// Line 21: range 00000000142A6466-00000000142A64A7
void __cdecl data::ElementCoeffExcelConfig::~ElementCoeffExcelConfig(data::ElementCoeffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElementCoeffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElementCoeffExcelConfig = v2;
};

// Line 21: range 00000000142A64A8-00000000142A64D2
void __cdecl data::ElementCoeffExcelConfig::~ElementCoeffExcelConfig(data::ElementCoeffExcelConfig *const this)
{
  data::ElementCoeffExcelConfig::~ElementCoeffExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 36: range 00000000141C7132-00000000141C76E4
void __cdecl data::ReactionEnergyExcelConfig::ReactionEnergyExcelConfig(
        data::ReactionEnergyExcelConfig *const this,
        const data::ReactionEnergyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ElementReactionType type; // ecx
  char v4; // al
  float min_durability; // xmm0_4
  __int64 v6; // rsi
  float max_durability; // xmm0_4
  float cost_ratio; // xmm0_4
  __int64 v9; // rsi
  uint32_t config_id; // ecx
  char v11; // al
  float pool_size; // xmm0_4
  __int64 v13; // rsi
  float pool_revive_period; // xmm0_4
  float pool_revive_energy; // xmm0_4
  __int64 v16; // rsi
  bool is_persistent; // cl
  char v18; // al
  float cost_period; // xmm0_4
  __int64 v20; // rsi
  uint32_t drop_prob; // ecx
  char v22; // al
  const data::ReactionEnergyExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReactionEnergyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReactionEnergyExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v23->min_durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->min_durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->min_durability);
  }
  min_durability = v23->min_durability;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_durability, v6);
  }
  this->min_durability = min_durability;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->max_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->max_durability);
  }
  max_durability = v23->max_durability;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_durability, v6);
  }
  this->max_durability = max_durability;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cost_ratio);
  }
  cost_ratio = v23->cost_ratio;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_ratio, v9);
  }
  this->cost_ratio = cost_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v23->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->config_id);
  }
  config_id = v23->config_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->config_id, v9);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->pool_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->pool_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->pool_size);
  }
  pool_size = v23->pool_size;
  v13 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pool_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pool_size, v13);
  }
  this->pool_size = pool_size;
  if ( *(_BYTE *)(((unsigned __int64)&v23->pool_revive_period >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->pool_revive_period >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->pool_revive_period);
  }
  pool_revive_period = v23->pool_revive_period;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_revive_period >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pool_revive_period >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pool_revive_period, v13);
  }
  this->pool_revive_period = pool_revive_period;
  if ( *(_BYTE *)(((unsigned __int64)&v23->pool_revive_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->pool_revive_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->pool_revive_energy);
  }
  pool_revive_energy = v23->pool_revive_energy;
  v16 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_revive_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pool_revive_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pool_revive_energy, v16);
  }
  this->pool_revive_energy = pool_revive_energy;
  if ( *(char *)(((unsigned __int64)&v23->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_persistent, v16, &v23->is_persistent);
  is_persistent = v23->is_persistent;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store1(&this->is_persistent, v16, &this->is_persistent);
  }
  this->is_persistent = is_persistent;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cost_period >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cost_period >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cost_period);
  }
  cost_period = v23->cost_period;
  v20 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_period >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_period >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_period, v20);
  }
  this->cost_period = cost_period;
  if ( *(_BYTE *)(((unsigned __int64)&v23->drop_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->drop_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->drop_prob);
  }
  drop_prob = v23->drop_prob;
  v22 = *(_BYTE *)(((unsigned __int64)&this->drop_prob >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->drop_prob, v20);
  }
  this->drop_prob = drop_prob;
};

// Line 39: range 00000000142A63F8-00000000142A6439
void __cdecl data::ReactionEnergyExcelConfig::~ReactionEnergyExcelConfig(data::ReactionEnergyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReactionEnergyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReactionEnergyExcelConfig = v2;
};

// Line 39: range 00000000142A643A-00000000142A6464
void __cdecl data::ReactionEnergyExcelConfig::~ReactionEnergyExcelConfig(data::ReactionEnergyExcelConfig *const this)
{
  data::ReactionEnergyExcelConfig::~ReactionEnergyExcelConfig(this);
  operator delete(this, 0x38uLL);
};
