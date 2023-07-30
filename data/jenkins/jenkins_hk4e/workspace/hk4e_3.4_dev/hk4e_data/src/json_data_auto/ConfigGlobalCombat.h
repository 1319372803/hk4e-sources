// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigGlobalCombat.h

// Line 87: range 000000000D76BE84-000000000D76BF1E
void __cdecl data::ConfigPublicAISkillCD::ConfigPublicAISkillCD(data::ConfigPublicAISkillCD *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, v1);
  }
  this->min_interval = 0.0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 87: range 000000000DD0C31E-000000000DD0C43B
void __cdecl data::ConfigPublicAISkillCD::ConfigPublicAISkillCD(
        data::ConfigPublicAISkillCD *const this,
        const data::ConfigPublicAISkillCD *a2)
{
  float min_interval; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_interval);
  }
  min_interval = a2->min_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, a2);
  }
  this->min_interval = min_interval;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 87: range 000000000D76BF20-000000000D76BF3A
void __cdecl data::ConfigPublicAISkillCD::~ConfigPublicAISkillCD(data::ConfigPublicAISkillCD *const this)
{
  std::string::~string(this);
};

// Line 199: range 00000000111A3886-00000000111A39F3
void __cdecl data::ConfigAvatarHitBucketSetting::ConfigAvatarHitBucketSetting(
        data::ConfigAvatarHitBucketSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->melee_bucket_count = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->melee_bucket_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->melee_bucket_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->melee_bucket_cd, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->melee_bucket_cd = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ranged_bucket_count, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->ranged_bucket_count = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ranged_bucket_cd, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->ranged_bucket_cd = 2.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 225: range 000000000D76BF70-000000000D76BFE5
void __cdecl data::ConfigBladeElementFx::ConfigBladeElementFx(data::ConfigBladeElementFx *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->color_a);
  std::string::basic_string(&this->color_b);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 225: range 000000000DD0C6F0-000000000DD0C7F9
void __cdecl data::ConfigBladeElementFx::ConfigBladeElementFx(
        data::ConfigBladeElementFx *const this,
        const data::ConfigBladeElementFx *a2)
{
  std::string *p_color_b; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->color_a, &a2->color_a);
  p_color_b = &a2->color_b;
  std::string::basic_string(&this->color_b, p_color_b);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_color_b, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_color_b) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_color_b, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 225: range 000000000D76BFE6-000000000D76C020
void __cdecl data::ConfigBladeElementFx::~ConfigBladeElementFx(data::ConfigBladeElementFx *const this)
{
  std::string::~string(&this->color_b);
  std::string::~string(&this->color_a);
  std::string::~string(this);
};

// Line 237: range 000000000D94FC34-000000000D94FD4F
void __cdecl data::GlobalValueRegister::GlobalValueRegister(
        data::GlobalValueRegister *const this,
        data::GlobalValueRegister *a2)
{
  bool is_vector; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::GlobalValueRegister *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_vector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_vector, a2, &a2->is_vector);
  is_vector = a2->is_vector;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_vector >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_vector, a2, &this->is_vector);
  }
  this->is_vector = is_vector;
  v4 = ((_BYTE)v9 + 33) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 335: range 000000000D76C0DE-000000000D76C180
void __cdecl data::ConfigElementShieldResistance::ConfigElementShieldResistance(
        data::ConfigElementShieldResistance *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->element_type = None_0;
  std::vector<float>::vector(&this->damage_ratio);
  std::vector<int>::vector(&this->restraint);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 335: range 000000000DD0CD90-000000000DD0CEE0
void __cdecl data::ConfigElementShieldResistance::ConfigElementShieldResistance(
        data::ConfigElementShieldResistance *const this,
        const data::ConfigElementShieldResistance *a2)
{
  data::ElementType element_type; // ecx
  char v3; // al
  data::Int32Array *p_restraint; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigElementShieldResistance *v7; // [rsp+0h] [rbp-20h]

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
  std::vector<float>::vector(&this->damage_ratio, &v7->damage_ratio);
  p_restraint = &v7->restraint;
  std::vector<int>::vector(&this->restraint, &v7->restraint);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_restraint, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_restraint) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_restraint, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 335: range 000000000D76C182-000000000D76C1B0
void __cdecl data::ConfigElementShieldResistance::~ConfigElementShieldResistance(
        data::ConfigElementShieldResistance *const this)
{
  std::vector<int>::~vector(&this->restraint);
  std::vector<float>::~vector(&this->damage_ratio);
};

// Line 391: range 000000000D76C1E6-000000000D76C25B
void __cdecl data::ConfigEliteShieldResistance::ConfigEliteShieldResistance(
        data::ConfigEliteShieldResistance *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::vector<float>::vector(&this->damage_ratio);
  std::vector<float>::vector(&this->damage_suffer_ratio);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 391: range 000000000DD0D1FA-000000000DD0D303
void __cdecl data::ConfigEliteShieldResistance::ConfigEliteShieldResistance(
        data::ConfigEliteShieldResistance *const this,
        const data::ConfigEliteShieldResistance *a2)
{
  data::FloatArray *p_damage_suffer_ratio; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::vector<float>::vector(&this->damage_ratio, &a2->damage_ratio);
  p_damage_suffer_ratio = &a2->damage_suffer_ratio;
  std::vector<float>::vector(&this->damage_suffer_ratio, p_damage_suffer_ratio);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_damage_suffer_ratio, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_damage_suffer_ratio) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_damage_suffer_ratio, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 391: range 000000000D76C25C-000000000D76C296
void __cdecl data::ConfigEliteShieldResistance::~ConfigEliteShieldResistance(
        data::ConfigEliteShieldResistance *const this)
{
  std::vector<float>::~vector(&this->damage_suffer_ratio);
  std::vector<float>::~vector(&this->damage_ratio);
  std::string::~string(this);
};

// Line 568: range 000000000D76C300-000000000D76C3B4
void __cdecl data::ConfigAttackAttenuation::ConfigAttackAttenuation(data::ConfigAttackAttenuation *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->reset_cycle = 0.0;
  std::vector<float>::vector(&this->durability_sequence);
  std::vector<float>::vector(&this->enbreak_sequence);
  std::vector<float>::vector(&this->damage_sequence);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 568: range 000000000DD0D8D4-000000000DD0DA57
void __cdecl data::ConfigAttackAttenuation::ConfigAttackAttenuation(
        data::ConfigAttackAttenuation *const this,
        const data::ConfigAttackAttenuation *a2)
{
  float reset_cycle; // xmm0_4
  data::FloatArray *p_damage_sequence; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  reset_cycle = a2->reset_cycle;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->reset_cycle = reset_cycle;
  std::vector<float>::vector(&this->durability_sequence, &a2->durability_sequence);
  std::vector<float>::vector(&this->enbreak_sequence, &a2->enbreak_sequence);
  p_damage_sequence = &a2->damage_sequence;
  std::vector<float>::vector(&this->damage_sequence, &a2->damage_sequence);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_damage_sequence, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_damage_sequence) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_damage_sequence, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 568: range 000000000D76C3B6-000000000D76C3F4
void __cdecl data::ConfigAttackAttenuation::~ConfigAttackAttenuation(data::ConfigAttackAttenuation *const this)
{
  std::vector<float>::~vector(&this->damage_sequence);
  std::vector<float>::~vector(&this->enbreak_sequence);
  std::vector<float>::~vector(&this->durability_sequence);
};

// Line 601: range 000000000D76C42A-000000000D76C4D2
void __cdecl data::ConfigGadgetCreationLimit::ConfigGadgetCreationLimit(data::ConfigGadgetCreationLimit *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  std::vector<unsigned int>::vector(&this->gadget_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_value, v1);
  }
  this->max_value = 0;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 601: range 000000000D94C0A2-000000000D94C1D7
void __cdecl data::ConfigGadgetCreationLimit::ConfigGadgetCreationLimit(
        data::ConfigGadgetCreationLimit *const this,
        data::ConfigGadgetCreationLimit *a2)
{
  std::vector<unsigned int> *p_gadget_ids; // rsi
  uint32_t max_value; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  p_gadget_ids = &a2->gadget_ids;
  std::vector<unsigned int>::vector(&this->gadget_ids, p_gadget_ids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_value);
  }
  max_value = a2->max_value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_gadget_ids) = v4 != 0;
    __asan_report_store4(&this->max_value, p_gadget_ids);
  }
  this->max_value = max_value;
  v5 = ((_BYTE)a2 + 60) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 601: range 000000000D76C4D4-000000000D76C4FE
void __cdecl data::ConfigGadgetCreationLimit::~ConfigGadgetCreationLimit(data::ConfigGadgetCreationLimit *const this)
{
  std::vector<unsigned int>::~vector(&this->gadget_ids);
  std::string::~string(this);
};

// Line 1106: range 000000000D76DF14-000000000D76DFA9
void __cdecl data::GlobalValueRegister::GlobalValueRegister(data::GlobalValueRegister *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_vector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_vector, v1, &this->is_vector);
  this->is_vector = 0;
  v2 = ((_BYTE)this + 33) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 1106: range 000000000D76DFAA-000000000D76DFC4
void __cdecl data::GlobalValueRegister::~GlobalValueRegister(data::GlobalValueRegister *const this)
{
  std::string::~string(this);
};
