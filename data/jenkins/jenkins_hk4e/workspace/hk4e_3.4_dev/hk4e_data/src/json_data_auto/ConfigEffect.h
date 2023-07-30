// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigEffect.h

// Line 82: range 000000001213B1B6-000000001213B24A
void __cdecl data::ConfigEffectWithThreshold::ConfigEffectWithThreshold(data::ConfigEffectWithThreshold *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->threshold = 0.0;
  std::string::basic_string(&this->effect_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 82: range 00000000122FAF22-00000000122FB033
void __cdecl data::ConfigEffectWithThreshold::ConfigEffectWithThreshold(
        data::ConfigEffectWithThreshold *const this,
        data::ConfigEffectWithThreshold *a2)
{
  float threshold; // xmm0_4
  std::string *p_effect_name; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  threshold = a2->threshold;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->threshold = threshold;
  p_effect_name = &a2->effect_name;
  std::string::basic_string(&this->effect_name, &a2->effect_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_effect_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_effect_name) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effect_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 82: range 000000001213B24C-000000001213B26A
void __cdecl data::ConfigEffectWithThreshold::~ConfigEffectWithThreshold(data::ConfigEffectWithThreshold *const this)
{
  std::string::~string(&this->effect_name);
};

// Line 111: range 000000001213B2C0-000000001213B352
void __cdecl data::ConfigRecoverEnergyEffect::ConfigRecoverEnergyEffect(data::ConfigRecoverEnergyEffect *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->element_type = None_0;
  std::vector<data::ConfigEffectWithThreshold>::vector(&this->effects);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 111: range 00000000122FB826-00000000122FB934
void __cdecl data::ConfigRecoverEnergyEffect::ConfigRecoverEnergyEffect(
        data::ConfigRecoverEnergyEffect *const this,
        data::ConfigRecoverEnergyEffect *a2)
{
  data::ElementType element_type; // ecx
  char v3; // al
  data::ConfigEffectWithThresholdArray *p_effects; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigRecoverEnergyEffect *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  element_type = a2->element_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->element_type = element_type;
  p_effects = &v7->effects;
  std::vector<data::ConfigEffectWithThreshold>::vector(&this->effects, &v7->effects);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_effects, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_effects) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effects, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 111: range 000000001213B354-000000001213B372
void __cdecl data::ConfigRecoverEnergyEffect::~ConfigRecoverEnergyEffect(data::ConfigRecoverEnergyEffect *const this)
{
  std::vector<data::ConfigEffectWithThreshold>::~vector(&this->effects);
};
