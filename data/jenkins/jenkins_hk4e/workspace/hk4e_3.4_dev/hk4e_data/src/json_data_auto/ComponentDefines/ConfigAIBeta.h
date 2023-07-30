// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigAIBeta.h

// Line 78: range 000000000ED90C36-000000000ED90C9B
void __cdecl data::ConfigAITarget::ConfigAITarget(data::ConfigAITarget *const this)
{
  __int64 v1; // rsi

  std::vector<data::AITargetSystemType>::vector(&this->default_target_prioritys);
  std::unordered_map<int,std::vector<data::AITargetSystemType>>::unordered_map(&this->specification_target_prioritys);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 78: range 000000000E8229E0-000000000E822AB9
void __cdecl data::ConfigAITarget::ConfigAITarget(data::ConfigAITarget *const this, const data::ConfigAITarget *a2)
{
  data::AITargetSystemTypeListMap *p_specification_target_prioritys; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::AITargetSystemType>::vector(&this->default_target_prioritys, &a2->default_target_prioritys);
  p_specification_target_prioritys = &a2->specification_target_prioritys;
  std::unordered_map<int,std::vector<data::AITargetSystemType>>::unordered_map(
    &this->specification_target_prioritys,
    p_specification_target_prioritys);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_specification_target_prioritys, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_specification_target_prioritys) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_specification_target_prioritys, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 78: range 000000000E822ABA-000000000E822AE4
void __cdecl data::ConfigAITarget::~ConfigAITarget(data::ConfigAITarget *const this)
{
  std::unordered_map<int,std::vector<data::AITargetSystemType>>::~unordered_map(&this->specification_target_prioritys);
  std::vector<data::AITargetSystemType>::~vector(&this->default_target_prioritys);
};

// Line 171: range 000000000ED8F550-000000000ED8F5EF
void __cdecl data::ConfigAISensing::ConfigAISensing(data::ConfigAISensing *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 1;
  std::unordered_map<std::string,data::ConfigAISensingSetting>::unordered_map(&this->settings);
  std::unordered_map<std::string,std::unordered_map<std::string,std::string>>::unordered_map(&this->templates);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 171: range 000000000E8213BC-000000000E82150D
void __cdecl data::ConfigAISensing::ConfigAISensing(data::ConfigAISensing *const this, const data::ConfigAISensing *a2)
{
  bool enable; // cl
  char v3; // al
  data::StringMapMap *p_templates; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigAISensing *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  std::unordered_map<std::string,data::ConfigAISensingSetting>::unordered_map(&this->settings, &v7->settings);
  p_templates = &v7->templates;
  std::unordered_map<std::string,std::unordered_map<std::string,std::string>>::unordered_map(
    &this->templates,
    &v7->templates);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_templates, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_templates) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_templates, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 171: range 000000000E82150E-000000000E82153C
void __cdecl data::ConfigAISensing::~ConfigAISensing(data::ConfigAISensing *const this)
{
  std::unordered_map<std::string,std::unordered_map<std::string,std::string>>::~unordered_map(&this->templates);
  std::unordered_map<std::string,data::ConfigAISensingSetting>::~unordered_map(&this->settings);
};

// Line 246: range 000000000ED8F74A-000000000ED8F943
void __cdecl data::ConfigAINeuronHitBuddySetting::ConfigAINeuronHitBuddySetting(
        data::ConfigAINeuronHitBuddySetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->feel_range = 20.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->responser_concern_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->responser_concern_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->responser_concern_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->responser_concern_type = CombatExcludeGWGO;
  if ( *(_BYTE *)(((unsigned __int64)&this->responser_camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->responser_camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->responser_camp_type, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->responser_camp_type = SelfCamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_responser_concern_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_responser_concern_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_responser_concern_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->trigger_responser_concern_type = CombatExcludeGWGO;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_responser_camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_responser_camp_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_responser_camp_type, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->trigger_responser_camp_type = Enemy;
  if ( *(_BYTE *)(((unsigned __int64)&this->reserve_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reserve_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reserve_time, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->reserve_time = 0.5;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 274: range 000000000ED8F944-000000000ED8F99E
void __cdecl data::ConfigAINeuronExtSettings::ConfigAINeuronExtSettings(data::ConfigAINeuronExtSettings *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  data::ConfigAINeuronHitBuddySetting::ConfigAINeuronHitBuddySetting(&this->HIT_BUDDY);
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 304: range 000000000ED8EE6E-000000000ED8EFD6
void __cdecl data::ConfigAIPrecombatSetting::ConfigAIPrecombatSetting(data::ConfigAIPrecombatSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->bio_clock_sleep_from = 23.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bio_clock_sleep_to >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bio_clock_sleep_to >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bio_clock_sleep_to, v2);
  }
  this->bio_clock_sleep_to = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiety_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiety_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->satiety_time, v2);
  }
  this->satiety_time = 0.5;
  std::unordered_map<data::ConfigWeatherType,std::vector<data::NeuronName>>::unordered_map(&this->override_weather_neuron_mapping);
  if ( *(char *)(((unsigned __int64)&this->need_music_slient >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_music_slient, v2, &this->need_music_slient);
  this->need_music_slient = 0;
  v3 = ((_BYTE)this + 73) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 304: range 000000000E820D5C-000000000E820FED
void __cdecl data::ConfigAIPrecombatSetting::ConfigAIPrecombatSetting(
        data::ConfigAIPrecombatSetting *const this,
        const data::ConfigAIPrecombatSetting *a2)
{
  float bio_clock_sleep_from; // xmm0_4
  float bio_clock_sleep_to; // xmm0_4
  __int64 v4; // rsi
  float satiety_time; // xmm0_4
  data::ConfigAIWeatherNeuronMap *p_override_weather_neuron_mapping; // rsi
  bool need_music_slient; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  bio_clock_sleep_from = a2->bio_clock_sleep_from;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->bio_clock_sleep_from = bio_clock_sleep_from;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bio_clock_sleep_to >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bio_clock_sleep_to >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bio_clock_sleep_to);
  }
  bio_clock_sleep_to = a2->bio_clock_sleep_to;
  v4 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bio_clock_sleep_to >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bio_clock_sleep_to >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bio_clock_sleep_to, v4);
  }
  this->bio_clock_sleep_to = bio_clock_sleep_to;
  if ( *(_BYTE *)(((unsigned __int64)&a2->satiety_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->satiety_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->satiety_time);
  }
  satiety_time = a2->satiety_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiety_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiety_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->satiety_time, v4);
  }
  this->satiety_time = satiety_time;
  p_override_weather_neuron_mapping = &a2->override_weather_neuron_mapping;
  std::unordered_map<data::ConfigWeatherType,std::vector<data::NeuronName>>::unordered_map(
    &this->override_weather_neuron_mapping,
    &a2->override_weather_neuron_mapping);
  if ( *(char *)(((unsigned __int64)&a2->need_music_slient >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->need_music_slient, p_override_weather_neuron_mapping, &a2->need_music_slient);
  need_music_slient = a2->need_music_slient;
  v8 = *(_BYTE *)(((unsigned __int64)&this->need_music_slient >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_override_weather_neuron_mapping) = v8 != 0;
    __asan_report_store1(&this->need_music_slient, p_override_weather_neuron_mapping, &this->need_music_slient);
  }
  this->need_music_slient = need_music_slient;
  v9 = ((_BYTE)a2 + 73) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_json_loaded, v9, v10);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 304: range 000000000E820FEE-000000000E82100C
void __cdecl data::ConfigAIPrecombatSetting::~ConfigAIPrecombatSetting(data::ConfigAIPrecombatSetting *const this)
{
  std::unordered_map<data::ConfigWeatherType,std::vector<data::NeuronName>>::~unordered_map(&this->override_weather_neuron_mapping);
};

// Line 331: range 000000000ED5FB9A-000000000ED5FDB5
void __cdecl data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(
        data::ConfigAIThreatScoreBaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIThreatScoreBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  if ( *(char *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable, v1, &this->enable);
  this->enable = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min, v4);
  }
  this->min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v4);
  }
  this->max = 0.0;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_operation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_operation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_operation, v5);
  }
  this->compare_operation = Less;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 331: range 00000000110E8814-00000000110E8BE2
void __cdecl data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(
        data::ConfigAIThreatScoreBaseSetting *const this,
        const data::ConfigAIThreatScoreBaseSetting *a2)
{
  std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting> *v2; // rsi
  int (**v3)(...); // rdx
  bool enable; // cl
  char v5; // al
  __int64 v6; // rsi
  int32_t weight; // ecx
  char v8; // dl
  float value; // xmm0_4
  float min; // xmm0_4
  __int64 v11; // rsi
  float max; // xmm0_4
  __int64 v13; // rsi
  data::OrderingType compare_operation; // ecx
  char v15; // dl
  bool is_json_loaded; // cl
  char v17; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>;
  std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAIThreatScoreBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v3;
  if ( *(char *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable, v2, &a2->enable);
  enable = a2->enable;
  v5 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->enable, v2, &this->enable);
  }
  this->enable = enable;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->weight);
  }
  weight = a2->weight;
  v8 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
    __asan_report_store4(&this->weight, v6);
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v6);
  }
  this->value = value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min);
  }
  min = a2->min;
  v11 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min, v11);
  }
  this->min = min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max);
  }
  max = a2->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v11);
  }
  this->max = max;
  v13 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_operation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_operation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_operation);
  }
  compare_operation = a2->compare_operation;
  v15 = *(_BYTE *)(((unsigned __int64)&this->compare_operation >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v15 )
    __asan_report_store4(&this->compare_operation, v13);
  this->compare_operation = compare_operation;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v13, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store1(&this->is_json_loaded, v13, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 344: range 00000000110E0544-00000000110E0595
void __cdecl data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(
        data::ConfigAIThreatScoreBaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIThreatScoreBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAIThreatScoreBaseSetting>);
};

// Line 344: range 00000000110E0596-00000000110E05C0
void __cdecl data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(
        data::ConfigAIThreatScoreBaseSetting *const this)
{
  data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(this);
  operator delete(this, 0x38uLL);
};

// Line 349: range 000000001009519C-00000000100951AC
const char *__cdecl data::ConfigAIThreatScoreBaseSetting::getTypeName(
        const data::ConfigAIThreatScoreBaseSetting *const this)
{
  return "ConfigAIThreatScoreBaseSetting";
};

// Line 350: range 00000000100951AE-000000001009534A
int32_t __cdecl data::ConfigAIThreatScoreBaseSetting::getHashNum(
        const data::ConfigAIThreatScoreBaseSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIThreatScoreBaseSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIThreatScoreBaseSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 369: range 000000000ED5FDB6-000000000ED5FE13
void __cdecl data::ConfigAITSAbilityGlobalValueSetting::ConfigAITSAbilityGlobalValueSetting(
        data::ConfigAITSAbilityGlobalValueSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSAbilityGlobalValueSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  std::string::basic_string(&this->cared_global_value_name);
};

// Line 369: range 00000000110E8E2C-00000000110E8EC2
void __cdecl data::ConfigAITSAbilityGlobalValueSetting::ConfigAITSAbilityGlobalValueSetting(
        data::ConfigAITSAbilityGlobalValueSetting *const this,
        const data::ConfigAITSAbilityGlobalValueSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSAbilityGlobalValueSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  std::string::basic_string(&this->cared_global_value_name, &a2->cared_global_value_name);
};

// Line 376: range 00000000113106E4-000000001131070E
void __cdecl data::ConfigAITSAbilityGlobalValueSetting::~ConfigAITSAbilityGlobalValueSetting(
        data::ConfigAITSAbilityGlobalValueSetting *const this)
{
  data::ConfigAITSAbilityGlobalValueSetting::~ConfigAITSAbilityGlobalValueSetting(this);
  operator delete(this, 0x58uLL);
};

// Line 376: range 0000000011310686-00000000113106E3
void __cdecl data::ConfigAITSAbilityGlobalValueSetting::~ConfigAITSAbilityGlobalValueSetting(
        data::ConfigAITSAbilityGlobalValueSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSAbilityGlobalValueSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  std::string::~string(&this->cared_global_value_name);
  data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(this);
};

// Line 381: range 000000001009534C-000000001009535C
const char *__cdecl data::ConfigAITSAbilityGlobalValueSetting::getTypeName(
        const data::ConfigAITSAbilityGlobalValueSetting *const this)
{
  return "ConfigAITSAbilityGlobalValueSetting";
};

// Line 382: range 000000001009535E-00000000100954FA
int32_t __cdecl data::ConfigAITSAbilityGlobalValueSetting::getHashNum(
        const data::ConfigAITSAbilityGlobalValueSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAITSAbilityGlobalValueSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAITSAbilityGlobalValueSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 398: range 00000000110E91AC-00000000110E91ED
void __cdecl data::ConfigAITSAbilityGlobalValueSettingFactory::ConfigAITSAbilityGlobalValueSettingFactory(
        data::ConfigAITSAbilityGlobalValueSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSAbilityGlobalValueSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITSAbilityGlobalValueSettingFactory = v2;
};

// Line 406: range 000000000ED601CE-000000000ED6021B
void __cdecl data::ConfigAITSTargetDistanceSetting::ConfigAITSTargetDistanceSetting(
        data::ConfigAITSTargetDistanceSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetDistanceSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
};

// Line 406: range 00000000110E94F6-00000000110E954E
void __cdecl data::ConfigAITSTargetDistanceSetting::ConfigAITSTargetDistanceSetting(
        data::ConfigAITSTargetDistanceSetting *const this,
        const data::ConfigAITSTargetDistanceSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetDistanceSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
};

// Line 412: range 000000001131060C-0000000011310659
void __cdecl data::ConfigAITSTargetDistanceSetting::~ConfigAITSTargetDistanceSetting(
        data::ConfigAITSTargetDistanceSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetDistanceSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(this);
};

// Line 412: range 000000001131065A-0000000011310684
void __cdecl data::ConfigAITSTargetDistanceSetting::~ConfigAITSTargetDistanceSetting(
        data::ConfigAITSTargetDistanceSetting *const this)
{
  data::ConfigAITSTargetDistanceSetting::~ConfigAITSTargetDistanceSetting(this);
  operator delete(this, 0x38uLL);
};

// Line 417: range 00000000100954FC-000000001009550C
const char *__cdecl data::ConfigAITSTargetDistanceSetting::getTypeName(
        const data::ConfigAITSTargetDistanceSetting *const this)
{
  return "ConfigAITSTargetDistanceSetting";
};

// Line 418: range 000000001009550E-00000000100956AA
int32_t __cdecl data::ConfigAITSTargetDistanceSetting::getHashNum(
        const data::ConfigAITSTargetDistanceSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAITSTargetDistanceSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAITSTargetDistanceSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 434: range 00000000110E9798-00000000110E97D9
void __cdecl data::ConfigAITSTargetDistanceSettingFactory::ConfigAITSTargetDistanceSettingFactory(
        data::ConfigAITSTargetDistanceSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetDistanceSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITSTargetDistanceSettingFactory = v2;
};

// Line 442: range 000000000ED60610-000000000ED6065D
void __cdecl data::ConfigAITSTargetBearingSetting::ConfigAITSTargetBearingSetting(
        data::ConfigAITSTargetBearingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetBearingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
};

// Line 442: range 00000000110E9AE2-00000000110E9B3A
void __cdecl data::ConfigAITSTargetBearingSetting::ConfigAITSTargetBearingSetting(
        data::ConfigAITSTargetBearingSetting *const this,
        const data::ConfigAITSTargetBearingSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAIThreatScoreBaseSetting::ConfigAIThreatScoreBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetBearingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
};

// Line 448: range 0000000011310592-00000000113105DF
void __cdecl data::ConfigAITSTargetBearingSetting::~ConfigAITSTargetBearingSetting(
        data::ConfigAITSTargetBearingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetBearingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIThreatScoreBaseSetting = v2;
  data::ConfigAIThreatScoreBaseSetting::~ConfigAIThreatScoreBaseSetting(this);
};

// Line 448: range 00000000113105E0-000000001131060A
void __cdecl data::ConfigAITSTargetBearingSetting::~ConfigAITSTargetBearingSetting(
        data::ConfigAITSTargetBearingSetting *const this)
{
  data::ConfigAITSTargetBearingSetting::~ConfigAITSTargetBearingSetting(this);
  operator delete(this, 0x38uLL);
};

// Line 453: range 00000000100956AC-00000000100956BC
const char *__cdecl data::ConfigAITSTargetBearingSetting::getTypeName(
        const data::ConfigAITSTargetBearingSetting *const this)
{
  return "ConfigAITSTargetBearingSetting";
};

// Line 454: range 00000000100956BE-000000001009585A
int32_t __cdecl data::ConfigAITSTargetBearingSetting::getHashNum(
        const data::ConfigAITSTargetBearingSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAITSTargetBearingSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAITSTargetBearingSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 470: range 00000000110E9D84-00000000110E9DC5
void __cdecl data::ConfigAITSTargetBearingSettingFactory::ConfigAITSTargetBearingSettingFactory(
        data::ConfigAITSTargetBearingSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITSTargetBearingSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITSTargetBearingSettingFactory = v2;
};

// Line 478: range 000000000ED8F9D8-000000000ED8FF9D
void __cdecl data::ConfigAIThreatSetting::ConfigAIThreatSetting(data::ConfigAIThreatSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clear_threat_target_distance, v2);
  }
  this->clear_threat_target_distance = 50.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_edge_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_edge_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_edge_distance, v2);
  }
  this->clear_threat_edge_distance = 4.75;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->clear_threat_by_lost_path >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_by_lost_path >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->clear_threat_by_lost_path, v3, v4);
  this->clear_threat_by_lost_path = 0;
  v5 = ((_BYTE)this + 13) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->clear_threat_by_target_out_of_zone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_by_target_out_of_zone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->clear_threat_by_target_out_of_zone, v5, v6);
  this->clear_threat_by_target_out_of_zone = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_timer_by_distance, v5);
  }
  this->clear_threat_timer_by_distance = 4.75;
  v7 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_lost_path >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_lost_path >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clear_threat_timer_by_lost_path, v7);
  }
  this->clear_threat_timer_by_lost_path = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_timer_by_target_out_of_zone, v7);
  }
  this->clear_threat_timer_by_target_out_of_zone = 5.0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->view_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->view_threat_grow, v8);
  }
  this->view_threat_grow = 100.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hear_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hear_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hear_threat_grow, v8);
  }
  this->hear_threat_grow = 40.0;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->feel_threat_grow, v9);
  }
  this->feel_threat_grow = 500.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_decrease_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->threat_decrease_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->threat_decrease_speed, v9);
  }
  this->threat_decrease_speed = 30.0;
  v10 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_broadcast_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->threat_broadcast_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->threat_broadcast_range, v10);
  }
  this->threat_broadcast_range = 12.0;
  std::vector<data::AIPoint>::vector(&this->view_attenuation);
  std::vector<data::AIPoint>::vector(&this->hear_attenuation);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_decrease_temper >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_decrease_temper >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_decrease_temper, v10);
  }
  this->time_decrease_temper = 1.0;
  v11 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->resist_taunt_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resist_taunt_level >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->resist_taunt_level, v11);
  }
  this->resist_taunt_level = Monster_TauntLevel_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->aux_score_change_target_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aux_score_change_target_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aux_score_change_target_cd, v11);
  }
  this->aux_score_change_target_cd = 0.0;
  if ( *(_WORD *)(((unsigned __int64)&this->ability_global_value_score_system >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAITSAbilityGlobalValueSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->target_distance_score_system >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAITSTargetDistanceSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->target_bearing_score_system >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAITSTargetBearingSetting>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v11, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 478: range 000000000E82176C-000000000E822092
void __cdecl data::ConfigAIThreatSetting::ConfigAIThreatSetting(
        data::ConfigAIThreatSetting *const this,
        const data::ConfigAIThreatSetting *a2)
{
  bool enable; // cl
  char v3; // al
  float clear_threat_target_distance; // xmm0_4
  __int64 v5; // rsi
  float clear_threat_edge_distance; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool clear_threat_by_lost_path; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool clear_threat_by_target_out_of_zone; // cl
  char v15; // dl
  __int64 v16; // rdx
  float clear_threat_timer_by_distance; // xmm0_4
  float clear_threat_timer_by_lost_path; // xmm0_4
  __int64 v19; // rsi
  float clear_threat_timer_by_target_out_of_zone; // xmm0_4
  float view_threat_grow; // xmm0_4
  __int64 v22; // rsi
  float hear_threat_grow; // xmm0_4
  float feel_threat_grow; // xmm0_4
  __int64 v25; // rsi
  float threat_decrease_speed; // xmm0_4
  float threat_broadcast_range; // xmm0_4
  float time_decrease_temper; // xmm0_4
  __int64 v29; // rsi
  data::TauntLevel resist_taunt_level; // ecx
  char v31; // dl
  float aux_score_change_target_cd; // xmm0_4
  data::ConfigAITSTargetBearingSettingPtr *p_target_bearing_score_system; // rsi
  bool is_json_loaded; // cl
  char v35; // al
  const data::ConfigAIThreatSetting *v36; // [rsp+0h] [rbp-20h]

  v36 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  if ( *(_BYTE *)(((unsigned __int64)&v36->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->clear_threat_target_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->clear_threat_target_distance);
  }
  clear_threat_target_distance = v36->clear_threat_target_distance;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clear_threat_target_distance, v5);
  }
  this->clear_threat_target_distance = clear_threat_target_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v36->clear_threat_edge_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->clear_threat_edge_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->clear_threat_edge_distance);
  }
  clear_threat_edge_distance = v36->clear_threat_edge_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_edge_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_edge_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_edge_distance, v5);
  }
  this->clear_threat_edge_distance = clear_threat_edge_distance;
  v7 = ((_BYTE)v36 + 12) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v36->clear_threat_by_lost_path >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v36->clear_threat_by_lost_path >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v36->clear_threat_by_lost_path, v7, v8);
  clear_threat_by_lost_path = v36->clear_threat_by_lost_path;
  v10 = *(_BYTE *)(((unsigned __int64)&this->clear_threat_by_lost_path >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->clear_threat_by_lost_path, v7, v11);
  this->clear_threat_by_lost_path = clear_threat_by_lost_path;
  v12 = ((_BYTE)v36 + 13) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v36->clear_threat_by_target_out_of_zone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v36->clear_threat_by_target_out_of_zone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v36->clear_threat_by_target_out_of_zone, v12, v13);
  clear_threat_by_target_out_of_zone = v36->clear_threat_by_target_out_of_zone;
  v15 = *(_BYTE *)(((unsigned __int64)&this->clear_threat_by_target_out_of_zone >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->clear_threat_by_target_out_of_zone, v12, v16);
  this->clear_threat_by_target_out_of_zone = clear_threat_by_target_out_of_zone;
  if ( *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->clear_threat_timer_by_distance);
  }
  clear_threat_timer_by_distance = v36->clear_threat_timer_by_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_timer_by_distance, v12);
  }
  this->clear_threat_timer_by_distance = clear_threat_timer_by_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_lost_path >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_lost_path >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->clear_threat_timer_by_lost_path);
  }
  clear_threat_timer_by_lost_path = v36->clear_threat_timer_by_lost_path;
  v19 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_lost_path >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_lost_path >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clear_threat_timer_by_lost_path, v19);
  }
  this->clear_threat_timer_by_lost_path = clear_threat_timer_by_lost_path;
  if ( *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->clear_threat_timer_by_target_out_of_zone);
  }
  clear_threat_timer_by_target_out_of_zone = v36->clear_threat_timer_by_target_out_of_zone;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_timer_by_target_out_of_zone >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_timer_by_target_out_of_zone, v19);
  }
  this->clear_threat_timer_by_target_out_of_zone = clear_threat_timer_by_target_out_of_zone;
  if ( *(_BYTE *)(((unsigned __int64)&v36->view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->view_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->view_threat_grow);
  }
  view_threat_grow = v36->view_threat_grow;
  v22 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->view_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->view_threat_grow, v22);
  }
  this->view_threat_grow = view_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&v36->hear_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->hear_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->hear_threat_grow);
  }
  hear_threat_grow = v36->hear_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&this->hear_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hear_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hear_threat_grow, v22);
  }
  this->hear_threat_grow = hear_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&v36->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->feel_threat_grow);
  }
  feel_threat_grow = v36->feel_threat_grow;
  v25 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->feel_threat_grow, v25);
  }
  this->feel_threat_grow = feel_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&v36->threat_decrease_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->threat_decrease_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->threat_decrease_speed);
  }
  threat_decrease_speed = v36->threat_decrease_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_decrease_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->threat_decrease_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->threat_decrease_speed, v25);
  }
  this->threat_decrease_speed = threat_decrease_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v36->threat_broadcast_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->threat_broadcast_range >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->threat_broadcast_range);
  }
  threat_broadcast_range = v36->threat_broadcast_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_broadcast_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->threat_broadcast_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->threat_broadcast_range, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->threat_broadcast_range = threat_broadcast_range;
  std::vector<data::AIPoint>::vector(&this->view_attenuation, &v36->view_attenuation);
  std::vector<data::AIPoint>::vector(&this->hear_attenuation, &v36->hear_attenuation);
  if ( *(_BYTE *)(((unsigned __int64)&v36->time_decrease_temper >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->time_decrease_temper >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->time_decrease_temper);
  }
  time_decrease_temper = v36->time_decrease_temper;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_decrease_temper >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_decrease_temper >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_decrease_temper, &v36->hear_attenuation);
  }
  this->time_decrease_temper = time_decrease_temper;
  v29 = (((_BYTE)v36 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v36->resist_taunt_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->resist_taunt_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->resist_taunt_level);
  }
  resist_taunt_level = v36->resist_taunt_level;
  v31 = *(_BYTE *)(((unsigned __int64)&this->resist_taunt_level >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v31 != 0;
  if ( v31 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v31 )
    __asan_report_store4(&this->resist_taunt_level, v29);
  this->resist_taunt_level = resist_taunt_level;
  if ( *(_BYTE *)(((unsigned __int64)&v36->aux_score_change_target_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->aux_score_change_target_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->aux_score_change_target_cd);
  }
  aux_score_change_target_cd = v36->aux_score_change_target_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->aux_score_change_target_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aux_score_change_target_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aux_score_change_target_cd, v29);
  }
  this->aux_score_change_target_cd = aux_score_change_target_cd;
  std::shared_ptr<data::ConfigAITSAbilityGlobalValueSetting>::shared_ptr(
    &this->ability_global_value_score_system,
    &v36->ability_global_value_score_system);
  std::shared_ptr<data::ConfigAITSTargetDistanceSetting>::shared_ptr(
    &this->target_distance_score_system,
    &v36->target_distance_score_system);
  p_target_bearing_score_system = &v36->target_bearing_score_system;
  std::shared_ptr<data::ConfigAITSTargetBearingSetting>::shared_ptr(
    &this->target_bearing_score_system,
    &v36->target_bearing_score_system);
  if ( *(char *)(((unsigned __int64)&v36->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v36->is_json_loaded, p_target_bearing_score_system, &v36->is_json_loaded);
  is_json_loaded = v36->is_json_loaded;
  v35 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v35 < 0 )
  {
    LOBYTE(p_target_bearing_score_system) = v35 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_bearing_score_system, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 478: range 000000000E822094-000000000E8220F4
void __cdecl data::ConfigAIThreatSetting::~ConfigAIThreatSetting(data::ConfigAIThreatSetting *const this)
{
  std::shared_ptr<data::ConfigAITSTargetBearingSetting>::~shared_ptr(&this->target_bearing_score_system);
  std::shared_ptr<data::ConfigAITSTargetDistanceSetting>::~shared_ptr(&this->target_distance_score_system);
  std::shared_ptr<data::ConfigAITSAbilityGlobalValueSetting>::~shared_ptr(&this->ability_global_value_score_system);
  std::vector<data::AIPoint>::~vector(&this->hear_attenuation);
  std::vector<data::AIPoint>::~vector(&this->view_attenuation);
};

// Line 521: range 000000000ED8FF9E-000000000ED9006D
void __cdecl data::ConfigAIOrderMasterSetting::ConfigAIOrderMasterSetting(data::ConfigAIOrderMasterSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->servant_slot_amount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->servant_slot_amount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->servant_slot_amount, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->servant_slot_amount = 0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 545: range 000000000ED9006E-000000000ED900F7
void __cdecl data::ConfigAIOrderServantSetting::ConfigAIOrderServantSetting(
        data::ConfigAIOrderServantSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 568: range 000000000ED900F8-000000000ED9014D
void __cdecl data::ConfigAICommandSetting::ConfigAICommandSetting(data::ConfigAICommandSetting *const this)
{
  __int64 v1; // rsi

  std::vector<int>::vector(&this->accept_command_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 568: range 000000000E8220F6-000000000E822191
void __cdecl data::ConfigAICommandSetting::ConfigAICommandSetting(
        data::ConfigAICommandSetting *const this,
        const data::ConfigAICommandSetting *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<int>::vector(&this->accept_command_ids, &a2->accept_command_ids);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 568: range 000000000E822192-000000000E8221AC
void __cdecl data::ConfigAICommandSetting::~ConfigAICommandSetting(data::ConfigAICommandSetting *const this)
{
  std::vector<int>::~vector(&this->accept_command_ids);
};

// Line 569: range 00000000104C957A-00000000104C9808
void __cdecl data::ConfigAIPoseControlItem::ConfigAIPoseControlItem(
        data::ConfigAIPoseControlItem *const this,
        data::ConfigAIPoseControlItem *a2)
{
  float min_time; // xmm0_4
  float max_time; // xmm0_4
  __int64 v4; // rsi
  int32_t pose_id; // ecx
  char v6; // al
  data::Int32Array *p_random_pose; // rsi
  bool switch_only_in_can_do_skill_state; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  min_time = a2->min_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->min_time = min_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_time);
  }
  max_time = a2->max_time;
  v4 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_time, v4);
  }
  this->max_time = max_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pose_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pose_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pose_id);
  }
  pose_id = a2->pose_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->pose_id, v4);
  }
  this->pose_id = pose_id;
  p_random_pose = &a2->random_pose;
  std::vector<int>::vector(&this->random_pose, &a2->random_pose);
  if ( *(char *)(((unsigned __int64)&a2->switch_only_in_can_do_skill_state >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->switch_only_in_can_do_skill_state, p_random_pose, &a2->switch_only_in_can_do_skill_state);
  switch_only_in_can_do_skill_state = a2->switch_only_in_can_do_skill_state;
  v9 = *(_BYTE *)(((unsigned __int64)&this->switch_only_in_can_do_skill_state >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_random_pose) = v9 != 0;
    __asan_report_store1(
      &this->switch_only_in_can_do_skill_state,
      p_random_pose,
      &this->switch_only_in_can_do_skill_state);
  }
  this->switch_only_in_can_do_skill_state = switch_only_in_can_do_skill_state;
  v10 = ((_BYTE)a2 + 41) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 591: range 000000000ED9014E-000000000ED901C3
void __cdecl data::ConfigAIOrderSetting::ConfigAIOrderSetting(data::ConfigAIOrderSetting *const this)
{
  __int64 v1; // rsi

  data::ConfigAIOrderMasterSetting::ConfigAIOrderMasterSetting(&this->master);
  data::ConfigAIOrderServantSetting::ConfigAIOrderServantSetting(&this->servant);
  data::ConfigAICommandSetting::ConfigAICommandSetting(&this->command_setting);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 591: range 000000000E8221AE-000000000E8223B3
void __cdecl data::ConfigAIOrderSetting::ConfigAIOrderSetting(
        data::ConfigAIOrderSetting *const this,
        const data::ConfigAIOrderSetting *a2)
{
  data::ConfigAICommandSetting *p_command_setting; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->master.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->master.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->master.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->master.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 12LL);
  }
  *(_QWORD *)&this->master.enable = *(_QWORD *)&a2->master.enable;
  *(_DWORD *)&this->master.is_json_loaded = *(_DWORD *)&a2->master.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&this->servant >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->servant >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->servant);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->servant >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a2->servant >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a2->servant);
  }
  this->servant = a2->servant;
  p_command_setting = &a2->command_setting;
  data::ConfigAICommandSetting::ConfigAICommandSetting(&this->command_setting, &a2->command_setting);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_command_setting, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_command_setting) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_command_setting, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 591: range 000000000E8223B4-000000000E8223D2
void __cdecl data::ConfigAIOrderSetting::~ConfigAIOrderSetting(data::ConfigAIOrderSetting *const this)
{
  data::ConfigAICommandSetting::~ConfigAICommandSetting(&this->command_setting);
};

// Line 616: range 000000000ED8F20C-000000000ED8F29B
void __cdecl data::ConfigAIBuddySetting::ConfigAIBuddySetting(data::ConfigAIBuddySetting *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 0;
  std::vector<unsigned int>::vector(&this->buddy_feature_tag_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 616: range 000000000E821208-000000000E821317
void __cdecl data::ConfigAIBuddySetting::ConfigAIBuddySetting(
        data::ConfigAIBuddySetting *const this,
        const data::ConfigAIBuddySetting *a2)
{
  bool enable; // cl
  char v3; // al
  data::UInt32List *p_buddy_feature_tag_ids; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigAIBuddySetting *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  p_buddy_feature_tag_ids = &v7->buddy_feature_tag_ids;
  std::vector<unsigned int>::vector(&this->buddy_feature_tag_ids, &v7->buddy_feature_tag_ids);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_buddy_feature_tag_ids, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_buddy_feature_tag_ids) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_buddy_feature_tag_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 616: range 000000000E821318-000000000E821336
void __cdecl data::ConfigAIBuddySetting::~ConfigAIBuddySetting(data::ConfigAIBuddySetting *const this)
{
  std::vector<unsigned int>::~vector(&this->buddy_feature_tag_ids);
};

// Line 640: range 000000000ED901C4-000000000ED90299
void __cdecl data::ConfigAIDefendArea::ConfigAIDefendArea(data::ConfigAIDefendArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defend_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defend_range, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->defend_range = 40.0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 664: range 0000000010106582-00000000101066DC
void __cdecl data::ConfigAIPoseControlItem::ConfigAIPoseControlItem(data::ConfigAIPoseControlItem *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->min_time = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_time, v2);
  }
  this->max_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pose_id, v2);
  }
  this->pose_id = 0;
  std::vector<int>::vector(&this->random_pose);
  if ( *(char *)(((unsigned __int64)&this->switch_only_in_can_do_skill_state >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->switch_only_in_can_do_skill_state, v2, &this->switch_only_in_can_do_skill_state);
  this->switch_only_in_can_do_skill_state = 0;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 664: range 000000000EC115EE-000000000EC1160C
void __cdecl data::ConfigAIPoseControlItem::~ConfigAIPoseControlItem(data::ConfigAIPoseControlItem *const this)
{
  std::vector<int>::~vector(&this->random_pose);
};

// Line 696: range 000000000ED90362-000000000ED903B7
void __cdecl data::ConfigAIPoseControl::ConfigAIPoseControl(data::ConfigAIPoseControl *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigAIPoseControlItem>::vector(&this->items);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 696: range 000000000E822504-000000000E82259F
void __cdecl data::ConfigAIPoseControl::ConfigAIPoseControl(
        data::ConfigAIPoseControl *const this,
        const data::ConfigAIPoseControl *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigAIPoseControlItem>::vector(&this->items, &a2->items);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 696: range 000000000E8225A0-000000000E8225BA
void __cdecl data::ConfigAIPoseControl::~ConfigAIPoseControl(data::ConfigAIPoseControl *const this)
{
  std::vector<data::ConfigAIPoseControlItem>::~vector(&this->items);
};

// Line 750: range 000000000ED8E81E-000000000ED8E9DD
void __cdecl data::ConfigAISnakelikeMove::ConfigAISnakelikeMove(data::ConfigAISnakelikeMove *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->min_curvature = 0.60000002;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_curvatrue >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_curvatrue >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_curvatrue, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_curvatrue = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_segment_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_segment_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_segment_distance, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->min_segment_distance = 4.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->segment_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->segment_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->segment_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->segment_count, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->segment_count = 8;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 777: range 000000000ED8E9DE-000000000ED8ED12
void __cdecl data::ConfigAIMove::ConfigAIMove(data::ConfigAIMove *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAIMove::ConfigAIMove;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 1;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_category, v5);
  }
  this->move_category = Land;
  if ( *(char *)(((unsigned __int64)&this->use_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_nav_mesh, v5, &this->use_nav_mesh);
  this->use_nav_mesh = 1;
  v6 = ((_BYTE)this + 9) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_to_the_moon, v6, v7);
  this->use_to_the_moon = 0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->nav_mesh_agent_name,
    "Undead01",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_walk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_walk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->almost_reached_distance_walk, "Undead01");
  }
  this->almost_reached_distance_walk = 1.0;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_run >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_run >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->almost_reached_distance_run, v8);
  }
  this->almost_reached_distance_run = 1.0;
  data::ConfigAISnakelikeMove::ConfigAISnakelikeMove(&this->snakelike_move_setting);
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length, v8);
  }
  this->length = 0.0;
  v9 = ((_BYTE)this + 84) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v9, v10);
  this->is_json_loaded = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 777: range 000000000E8207FC-000000000E820CF8
void __cdecl data::ConfigAIMove::ConfigAIMove(data::ConfigAIMove *const this, const data::ConfigAIMove *a2)
{
  bool enable; // cl
  char v3; // al
  __int64 v4; // rsi
  data::MoveCategoryAI move_category; // ecx
  char v6; // dl
  bool use_nav_mesh; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool use_to_the_moon; // cl
  char v12; // dl
  __int64 v13; // rdx
  float almost_reached_distance_walk; // xmm0_4
  float almost_reached_distance_run; // xmm0_4
  __int64 v16; // rdx
  float length; // xmm0_4
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool is_json_loaded; // cl
  char v21; // dl
  __int64 v22; // rdx
  const data::ConfigAIMove *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  v4 = (((_BYTE)v23 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->move_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->move_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->move_category);
  }
  move_category = v23->move_category;
  v6 = *(_BYTE *)(((unsigned __int64)&this->move_category >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->move_category, v4);
  this->move_category = move_category;
  if ( *(char *)(((unsigned __int64)&v23->use_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->use_nav_mesh, v4, &v23->use_nav_mesh);
  use_nav_mesh = v23->use_nav_mesh;
  v8 = *(_BYTE *)(((unsigned __int64)&this->use_nav_mesh >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->use_nav_mesh, v4, &this->use_nav_mesh);
  }
  this->use_nav_mesh = use_nav_mesh;
  v9 = ((_BYTE)v23 + 9) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v23->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v23->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v23->use_to_the_moon, v9, v10);
  use_to_the_moon = v23->use_to_the_moon;
  v12 = *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 9) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->use_to_the_moon, v9, v13);
  this->use_to_the_moon = use_to_the_moon;
  std::string::basic_string(&this->nav_mesh_agent_name, &v23->nav_mesh_agent_name);
  if ( *(_BYTE *)(((unsigned __int64)&v23->almost_reached_distance_walk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->almost_reached_distance_walk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->almost_reached_distance_walk);
  }
  almost_reached_distance_walk = v23->almost_reached_distance_walk;
  if ( *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_walk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_walk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->almost_reached_distance_walk, &v23->nav_mesh_agent_name);
  }
  this->almost_reached_distance_walk = almost_reached_distance_walk;
  if ( *(_BYTE *)(((unsigned __int64)&v23->almost_reached_distance_run >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->almost_reached_distance_run >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->almost_reached_distance_run);
  }
  almost_reached_distance_run = v23->almost_reached_distance_run;
  if ( *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_run >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->almost_reached_distance_run >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->almost_reached_distance_run, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->almost_reached_distance_run = almost_reached_distance_run;
  if ( *(char *)(((unsigned __int64)&this->snakelike_move_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->snakelike_move_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->snakelike_move_setting.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->snakelike_move_setting, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&v23->snakelike_move_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v23->snakelike_move_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v23 + 79) & 7) >= *(_BYTE *)(((unsigned __int64)(&v23->snakelike_move_setting.is_json_loaded
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v23->snakelike_move_setting, 24LL);
  }
  v16 = *(_QWORD *)&v23->snakelike_move_setting.min_segment_distance;
  *(_QWORD *)&this->snakelike_move_setting.min_curvature = *(_QWORD *)&v23->snakelike_move_setting.min_curvature;
  *(_QWORD *)&this->snakelike_move_setting.min_segment_distance = v16;
  *(_QWORD *)&this->snakelike_move_setting.segment_count = *(_QWORD *)&v23->snakelike_move_setting.segment_count;
  if ( *(_BYTE *)(((unsigned __int64)&v23->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->length);
  }
  length = v23->length;
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length, v23);
  }
  this->length = length;
  v18 = ((_BYTE)v23 + 84) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v23->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v23->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v23->is_json_loaded, v18, v19);
  is_json_loaded = v23->is_json_loaded;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_json_loaded, v18, v22);
  this->is_json_loaded = is_json_loaded;
};

// Line 777: range 000000000E820CFA-000000000E820D18
void __cdecl data::ConfigAIMove::~ConfigAIMove(data::ConfigAIMove *const this)
{
  std::string::~string(&this->nav_mesh_agent_name);
};

// Line 808: range 000000000ED9029A-000000000ED90329
void __cdecl data::ConfigAIFlySetting::ConfigAIFlySetting(data::ConfigAIFlySetting *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 0;
  std::vector<int>::vector(&this->floating_poses);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 808: range 000000000E8223D4-000000000E8224E3
void __cdecl data::ConfigAIFlySetting::ConfigAIFlySetting(
        data::ConfigAIFlySetting *const this,
        const data::ConfigAIFlySetting *a2)
{
  bool enable; // cl
  char v3; // al
  data::Int32List *p_floating_poses; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigAIFlySetting *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  p_floating_poses = &v7->floating_poses;
  std::vector<int>::vector(&this->floating_poses, &v7->floating_poses);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_floating_poses, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_floating_poses) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_floating_poses, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 808: range 000000000E8224E4-000000000E822502
void __cdecl data::ConfigAIFlySetting::~ConfigAIFlySetting(data::ConfigAIFlySetting *const this)
{
  std::vector<int>::~vector(&this->floating_poses);
};

// Line 820: range 000000000EDA4C30-000000000EDA4E0B
void __cdecl data::ConfigAIMixinActions::ConfigAIMixinActions(
        data::ConfigAIMixinActions *const this,
        const data::ConfigAIMixinActions *a2)
{
  data::ConfigAIMixinSetFloatArray *p_set_animator_float; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_pose_bool, &a2->set_pose_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_pose_int, &a2->set_pose_int);
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_pose_float, &a2->set_pose_float);
  std::vector<data::ConfigAIMixinSetAnimatorTrigger>::vector(&this->set_animator_trigger, &a2->set_animator_trigger);
  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_animator_bool, &a2->set_animator_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_animator_int, &a2->set_animator_int);
  p_set_animator_float = &a2->set_animator_float;
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_animator_float, p_set_animator_float);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_set_animator_float, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_set_animator_float) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_set_animator_float, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 820: range 000000000EDA9B08-000000000EDA9BA3
void __cdecl data::ConfigAIMixinSetAnimatorTrigger::ConfigAIMixinSetAnimatorTrigger(
        data::ConfigAIMixinSetAnimatorTrigger *const this,
        const data::ConfigAIMixinSetAnimatorTrigger *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 820: range 000000000EDA91A0-000000000EDA92BB
void __cdecl data::ConfigAIMixinSetBool::ConfigAIMixinSetBool(
        data::ConfigAIMixinSetBool *const this,
        const data::ConfigAIMixinSetBool *a2)
{
  bool value; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::ConfigAIMixinSetBool *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, a2, &a2->value);
  value = a2->value;
  v3 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->value, a2, &this->value);
  }
  this->value = value;
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

// Line 820: range 000000000EC121C0-000000000EC12299
void __cdecl data::ConfigAIMixinSetControllerCondition::ConfigAIMixinSetControllerCondition(
        data::ConfigAIMixinSetControllerCondition *const this,
        const data::ConfigAIMixinSetControllerCondition *a2)
{
  data::ConfigAIMixinSetControllerParameterArray *p_settings; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<int>::vector(&this->pose_ids, &a2->pose_ids);
  p_settings = &a2->settings;
  std::vector<data::ConfigAIMixinSetControllerParameter>::vector(&this->settings, p_settings);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_settings, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_settings) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_settings, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 820: range 000000000EDA97E4-000000000EDA9901
void __cdecl data::ConfigAIMixinSetFloat::ConfigAIMixinSetFloat(
        data::ConfigAIMixinSetFloat *const this,
        const data::ConfigAIMixinSetFloat *a2)
{
  float value; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
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

// Line 820: range 000000000EDA94C2-000000000EDA95DC
void __cdecl data::ConfigAIMixinSetInt::ConfigAIMixinSetInt(
        data::ConfigAIMixinSetInt *const this,
        const data::ConfigAIMixinSetInt *a2)
{
  int32_t value; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::ConfigAIMixinSetInt *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v3 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
  v4 = ((_BYTE)v9 + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 820: range 000000000EC112F0-000000000EC1157E
void __cdecl data::ConfigAIPoseControlItem::ConfigAIPoseControlItem(
        data::ConfigAIPoseControlItem *const this,
        const data::ConfigAIPoseControlItem *a2)
{
  float min_time; // xmm0_4
  float max_time; // xmm0_4
  __int64 v4; // rsi
  int32_t pose_id; // ecx
  char v6; // al
  data::Int32Array *p_random_pose; // rsi
  bool switch_only_in_can_do_skill_state; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  min_time = a2->min_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->min_time = min_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_time);
  }
  max_time = a2->max_time;
  v4 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_time, v4);
  }
  this->max_time = max_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pose_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pose_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pose_id);
  }
  pose_id = a2->pose_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->pose_id, v4);
  }
  this->pose_id = pose_id;
  p_random_pose = &a2->random_pose;
  std::vector<int>::vector(&this->random_pose, &a2->random_pose);
  if ( *(char *)(((unsigned __int64)&a2->switch_only_in_can_do_skill_state >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->switch_only_in_can_do_skill_state, p_random_pose, &a2->switch_only_in_can_do_skill_state);
  switch_only_in_can_do_skill_state = a2->switch_only_in_can_do_skill_state;
  v9 = *(_BYTE *)(((unsigned __int64)&this->switch_only_in_can_do_skill_state >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_random_pose) = v9 != 0;
    __asan_report_store1(
      &this->switch_only_in_can_do_skill_state,
      p_random_pose,
      &this->switch_only_in_can_do_skill_state);
  }
  this->switch_only_in_can_do_skill_state = switch_only_in_can_do_skill_state;
  v10 = ((_BYTE)a2 + 41) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 852: range 000000000ED60A52-000000000ED60AA7
void __cdecl data::ConfigAITacticCondition::ConfigAITacticCondition(data::ConfigAITacticCondition *const this)
{
  __int64 v1; // rsi

  std::vector<int>::vector(&this->pose);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 852: range 00000000103021E0-000000001030227B
void __cdecl data::ConfigAITacticCondition::ConfigAITacticCondition(
        data::ConfigAITacticCondition *const this,
        const data::ConfigAITacticCondition *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<int>::vector(&this->pose, &a2->pose);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 852: range 000000000ED60AA8-000000000ED60AC2
void __cdecl data::ConfigAITacticCondition::~ConfigAITacticCondition(data::ConfigAITacticCondition *const this)
{
  std::vector<int>::~vector(&this->pose);
};

// Line 875: range 000000000ED60AFC-000000000ED60BE3
void __cdecl data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(data::ConfigAITacticBaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigAITacticBaseSetting>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAITacticBaseSetting>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAITacticBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( *(char *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable, v1, &this->enable);
  this->enable = 0;
  data::ConfigAITacticCondition::ConfigAITacticCondition(&this->condition);
  std::vector<data::NeuronName>::vector(&this->nerve_trigger);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 875: range 00000000110EA9FA-00000000110EABB8
void __cdecl data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
        data::ConfigAITacticBaseSetting *const this,
        const data::ConfigAITacticBaseSetting *a2)
{
  std::enable_shared_from_this<data::ConfigAITacticBaseSetting> *v2; // rsi
  int (**v3)(...); // rdx
  bool enable; // cl
  char v5; // al
  data::ConfigNeuronNameList *p_nerve_trigger; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAITacticBaseSetting>;
  std::enable_shared_from_this<data::ConfigAITacticBaseSetting>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAITacticBaseSetting>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAITacticBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAITacticBaseSetting = v3;
  if ( *(char *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable, v2, &a2->enable);
  enable = a2->enable;
  v5 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->enable, v2, &this->enable);
  }
  this->enable = enable;
  data::ConfigAITacticCondition::ConfigAITacticCondition(&this->condition, &a2->condition);
  p_nerve_trigger = &a2->nerve_trigger;
  std::vector<data::NeuronName>::vector(&this->nerve_trigger, &a2->nerve_trigger);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_nerve_trigger, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_nerve_trigger) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_nerve_trigger, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 885: range 000000000ED60BE4-000000000ED60C55
void __cdecl data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(data::ConfigAITacticBaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAITacticBaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::vector<data::NeuronName>::~vector(&this->nerve_trigger);
  data::ConfigAITacticCondition::~ConfigAITacticCondition(&this->condition);
  std::enable_shared_from_this<data::ConfigAITacticBaseSetting>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAITacticBaseSetting>);
};

// Line 885: range 000000000ED60C56-000000000ED60C80
void __cdecl data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(data::ConfigAITacticBaseSetting *const this)
{
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
  operator delete(this, 0x60uLL);
};

// Line 890: range 000000001009585C-000000001009586C
const char *__cdecl data::ConfigAITacticBaseSetting::getTypeName(const data::ConfigAITacticBaseSetting *const this)
{
  return "ConfigAITacticBaseSetting";
};

// Line 891: range 000000001009586E-0000000010095A0A
int32_t __cdecl data::ConfigAITacticBaseSetting::getHashNum(const data::ConfigAITacticBaseSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAITacticBaseSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAITacticBaseSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 940: range 000000000ED60C82-000000000ED60ECD
void __cdecl data::ConfigAIReturnToBornPosData::ConfigAIReturnToBornPosData(
        data::ConfigAIReturnToBornPosData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fadeout_begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fadeout_begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fadeout_begin_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->fadeout_begin_time = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fadeout_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fadeout_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fadeout_end_time, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->fadeout_end_time = -1.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->spacial, v1, v2);
  this->spacial = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->perform_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->perform_time, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->perform_time = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_time_after_return >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->perform_time_after_return >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->perform_time_after_return, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->perform_time_after_return = -1.0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 976: range 000000000ED61028-000000000ED61095
void __cdecl data::ConfigAIReturnToBornPosSetting::ConfigAIReturnToBornPosSetting(
        data::ConfigAIReturnToBornPosSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReturnToBornPosSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIReturnToBornPosData::ConfigAIReturnToBornPosData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIReturnToBornPosData>::unordered_map(&this->specification);
};

// Line 976: range 00000000110EAEA2-00000000110EB03E
void __cdecl data::ConfigAIReturnToBornPosSetting::ConfigAIReturnToBornPosSetting(
        data::ConfigAIReturnToBornPosSetting *const this,
        const data::ConfigAIReturnToBornPosSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReturnToBornPosSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 32LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 32LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.fadeout_begin_time;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.fadeout_begin_time = v3;
  v4 = *(_QWORD *)&a2->default_setting.perform_time_after_return;
  *(_QWORD *)&this->default_setting.spacial = *(_QWORD *)&a2->default_setting.spacial;
  *(_QWORD *)&this->default_setting.perform_time_after_return = v4;
  std::unordered_map<int,data::ConfigAIReturnToBornPosData>::unordered_map(&this->specification, &a2->specification);
};

// Line 984: range 0000000011310508-0000000011310565
void __cdecl data::ConfigAIReturnToBornPosSetting::~ConfigAIReturnToBornPosSetting(
        data::ConfigAIReturnToBornPosSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReturnToBornPosSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIReturnToBornPosData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 984: range 0000000011310566-0000000011310590
void __cdecl data::ConfigAIReturnToBornPosSetting::~ConfigAIReturnToBornPosSetting(
        data::ConfigAIReturnToBornPosSetting *const this)
{
  data::ConfigAIReturnToBornPosSetting::~ConfigAIReturnToBornPosSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 989: range 0000000010095A0C-0000000010095A1C
const char *__cdecl data::ConfigAIReturnToBornPosSetting::getTypeName(
        const data::ConfigAIReturnToBornPosSetting *const this)
{
  return "ConfigAIReturnToBornPosSetting";
};

// Line 990: range 0000000010095A1E-0000000010095BBA
int32_t __cdecl data::ConfigAIReturnToBornPosSetting::getHashNum(
        const data::ConfigAIReturnToBornPosSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIReturnToBornPosSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIReturnToBornPosSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1006: range 00000000110EB328-00000000110EB369
void __cdecl data::ConfigAIReturnToBornPosSettingFactory::ConfigAIReturnToBornPosSettingFactory(
        data::ConfigAIReturnToBornPosSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReturnToBornPosSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIReturnToBornPosSettingFactory = v2;
};

// Line 1014: range 000000000ED61456-000000000ED61777
void __cdecl data::ConfigAIWanderData::ConfigAIWanderData(data::ConfigAIWanderData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_max, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cd_max = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_min, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->cd_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_born, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->distance_from_born = 50.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_min, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->distance_from_current_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_max, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->distance_from_current_max = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->move_type = Straight;
  v1 = ((_BYTE)this + 32) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->amphibious_mode_on, v1, v2);
  this->amphibious_mode_on = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_limitation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_limitation >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->amphibious_mode_limitation, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->amphibious_mode_limitation = 30.0;
  v3 = ((_BYTE)this + 40) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1053: range 000000000ED618D2-000000000ED61951
void __cdecl data::ConfigAIWanderSetting::ConfigAIWanderSetting(data::ConfigAIWanderSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::vector<int>::vector(&this->threat_level_limit);
  data::ConfigAIWanderData::ConfigAIWanderData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIWanderData>::unordered_map(&this->specification);
};

// Line 1053: range 00000000110EB672-00000000110EB861
void __cdecl data::ConfigAIWanderSetting::ConfigAIWanderSetting(
        data::ConfigAIWanderSetting *const this,
        const data::ConfigAIWanderSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::vector<int>::vector(&this->threat_level_limit, &a2->threat_level_limit);
  if ( *(char *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 44LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 44LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.cd_max;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.cd_max = v3;
  v4 = *(_QWORD *)&a2->default_setting.distance_from_current_max;
  *(_QWORD *)&this->default_setting.distance_from_born = *(_QWORD *)&a2->default_setting.distance_from_born;
  *(_QWORD *)&this->default_setting.distance_from_current_max = v4;
  *(_QWORD *)&this->default_setting.amphibious_mode_on = *(_QWORD *)&a2->default_setting.amphibious_mode_on;
  *(_DWORD *)&this->default_setting.is_json_loaded = *(_DWORD *)&a2->default_setting.is_json_loaded;
  std::unordered_map<int,data::ConfigAIWanderData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1062: range 00000000113104DC-0000000011310506
void __cdecl data::ConfigAIWanderSetting::~ConfigAIWanderSetting(data::ConfigAIWanderSetting *const this)
{
  data::ConfigAIWanderSetting::~ConfigAIWanderSetting(this);
  operator delete(this, 0xE0uLL);
};

// Line 1062: range 000000001131046C-00000000113104DB
void __cdecl data::ConfigAIWanderSetting::~ConfigAIWanderSetting(data::ConfigAIWanderSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIWanderData>::~unordered_map(&this->specification);
  std::vector<int>::~vector(&this->threat_level_limit);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 1067: range 0000000010095BBC-0000000010095BCC
const char *__cdecl data::ConfigAIWanderSetting::getTypeName(const data::ConfigAIWanderSetting *const this)
{
  return "ConfigAIWanderSetting";
};

// Line 1068: range 0000000010095BCE-0000000010095D6A
int32_t __cdecl data::ConfigAIWanderSetting::getHashNum(const data::ConfigAIWanderSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIWanderSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIWanderSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1084: range 00000000110EBB4A-00000000110EBB8B
void __cdecl data::ConfigAIWanderSettingFactory::ConfigAIWanderSettingFactory(
        data::ConfigAIWanderSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIWanderSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIWanderSettingFactory = v2;
};

// Line 1092: range 000000000ED61D06-000000000ED61E33
void __cdecl data::ConfigAIParallelToData::ConfigAIParallelToData(data::ConfigAIParallelToData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->angle_offset_min = -15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angle_offset_max, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->angle_offset_max = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1124: range 000000000ED61F8E-000000000ED61FFB
void __cdecl data::ConfigAIParallelToSetting::ConfigAIParallelToSetting(data::ConfigAIParallelToSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIParallelToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIParallelToData::ConfigAIParallelToData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIParallelToData>::unordered_map(&this->specification);
};

// Line 1124: range 00000000110EBE94-00000000110EC020
void __cdecl data::ConfigAIParallelToSetting::ConfigAIParallelToSetting(
        data::ConfigAIParallelToSetting *const this,
        const data::ConfigAIParallelToSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIParallelToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 16LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 16LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.turn_speed_override;
  *(_QWORD *)&this->default_setting.angle_offset_min = *(_QWORD *)&a2->default_setting.angle_offset_min;
  *(_QWORD *)&this->default_setting.turn_speed_override = v3;
  std::unordered_map<int,data::ConfigAIParallelToData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1132: range 0000000011310440-000000001131046A
void __cdecl data::ConfigAIParallelToSetting::~ConfigAIParallelToSetting(data::ConfigAIParallelToSetting *const this)
{
  data::ConfigAIParallelToSetting::~ConfigAIParallelToSetting(this);
  operator delete(this, 0xA8uLL);
};

// Line 1132: range 00000000113103E2-000000001131043F
void __cdecl data::ConfigAIParallelToSetting::~ConfigAIParallelToSetting(data::ConfigAIParallelToSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIParallelToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIParallelToData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1137: range 0000000010095D6C-0000000010095D7C
const char *__cdecl data::ConfigAIParallelToSetting::getTypeName(const data::ConfigAIParallelToSetting *const this)
{
  return "ConfigAIParallelToSetting";
};

// Line 1138: range 0000000010095D7E-0000000010095F1A
int32_t __cdecl data::ConfigAIParallelToSetting::getHashNum(const data::ConfigAIParallelToSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIParallelToSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIParallelToSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1154: range 00000000110EC30A-00000000110EC34B
void __cdecl data::ConfigAIParallelToSettingFactory::ConfigAIParallelToSettingFactory(
        data::ConfigAIParallelToSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIParallelToSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIParallelToSettingFactory = v2;
};

// Line 1162: range 000000000ED623AA-000000000ED6250B
void __cdecl data::ConfigAIFollowScriptedPathData::ConfigAIFollowScriptedPathData(
        data::ConfigAIFollowScriptedPathData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->turn_speed_override_walk = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_run >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_run >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_run, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override_run = -1.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->spacial, v1, v2);
  this->spacial = 0;
  v3 = ((_BYTE)this + 9) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->spacial_roll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->spacial_roll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->spacial_roll, v3, v4);
  this->spacial_roll = 0;
  v5 = ((_BYTE)this + 10) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 1195: range 000000000ED62666-000000000ED626D3
void __cdecl data::ConfigAIFollowScriptedPathSetting::ConfigAIFollowScriptedPathSetting(
        data::ConfigAIFollowScriptedPathSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowScriptedPathSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFollowScriptedPathData::ConfigAIFollowScriptedPathData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFollowScriptedPathData>::unordered_map(&this->specification);
};

// Line 1195: range 00000000110EC654-00000000110EC7DE
void __cdecl data::ConfigAIFollowScriptedPathSetting::ConfigAIFollowScriptedPathSetting(
        data::ConfigAIFollowScriptedPathSetting *const this,
        const data::ConfigAIFollowScriptedPathSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowScriptedPathSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 12LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 12LL);
  }
  this->default_setting = a2->default_setting;
  std::unordered_map<int,data::ConfigAIFollowScriptedPathData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1203: range 0000000011310358-00000000113103B5
void __cdecl data::ConfigAIFollowScriptedPathSetting::~ConfigAIFollowScriptedPathSetting(
        data::ConfigAIFollowScriptedPathSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowScriptedPathSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFollowScriptedPathData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1203: range 00000000113103B6-00000000113103E0
void __cdecl data::ConfigAIFollowScriptedPathSetting::~ConfigAIFollowScriptedPathSetting(
        data::ConfigAIFollowScriptedPathSetting *const this)
{
  data::ConfigAIFollowScriptedPathSetting::~ConfigAIFollowScriptedPathSetting(this);
  operator delete(this, 0xA0uLL);
};

// Line 1208: range 0000000010095F1C-0000000010095F2C
const char *__cdecl data::ConfigAIFollowScriptedPathSetting::getTypeName(
        const data::ConfigAIFollowScriptedPathSetting *const this)
{
  return "ConfigAIFollowScriptedPathSetting";
};

// Line 1209: range 0000000010095F2E-00000000100960CA
int32_t __cdecl data::ConfigAIFollowScriptedPathSetting::getHashNum(
        const data::ConfigAIFollowScriptedPathSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFollowScriptedPathSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFollowScriptedPathSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1225: range 00000000110ECAC8-00000000110ECB09
void __cdecl data::ConfigAIFollowScriptedPathSettingFactory::ConfigAIFollowScriptedPathSettingFactory(
        data::ConfigAIFollowScriptedPathSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowScriptedPathSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFollowScriptedPathSettingFactory = v2;
};

// Line 1233: range 000000000ED62A8E-000000000ED62C41
void __cdecl data::ConfigAIFollowServerRouteData::ConfigAIFollowServerRouteData(
        data::ConfigAIFollowServerRouteData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_walk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_walk >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_walk, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override_walk = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_run >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_run >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_run, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->turn_speed_override_run = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_range, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->check_range = 2.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->special, v1, v2);
  this->special = 0;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1267: range 000000000ED62D9C-000000000ED62E09
void __cdecl data::ConfigAIFollowServerRouteSetting::ConfigAIFollowServerRouteSetting(
        data::ConfigAIFollowServerRouteSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowServerRouteSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFollowServerRouteData::ConfigAIFollowServerRouteData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFollowServerRouteData>::unordered_map(&this->specification);
};

// Line 1267: range 00000000110ECE12-00000000110ECFA4
void __cdecl data::ConfigAIFollowServerRouteSetting::ConfigAIFollowServerRouteSetting(
        data::ConfigAIFollowServerRouteSetting *const this,
        const data::ConfigAIFollowServerRouteSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowServerRouteSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 20LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 20LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.turn_speed_override_run;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.turn_speed_override_run = v3;
  *(_DWORD *)&this->default_setting.special = *(_DWORD *)&a2->default_setting.special;
  std::unordered_map<int,data::ConfigAIFollowServerRouteData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1275: range 000000001131032C-0000000011310356
void __cdecl data::ConfigAIFollowServerRouteSetting::~ConfigAIFollowServerRouteSetting(
        data::ConfigAIFollowServerRouteSetting *const this)
{
  data::ConfigAIFollowServerRouteSetting::~ConfigAIFollowServerRouteSetting(this);
  operator delete(this, 0xA8uLL);
};

// Line 1275: range 00000000113102CE-000000001131032B
void __cdecl data::ConfigAIFollowServerRouteSetting::~ConfigAIFollowServerRouteSetting(
        data::ConfigAIFollowServerRouteSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowServerRouteSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFollowServerRouteData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1280: range 00000000100960CC-00000000100960DC
const char *__cdecl data::ConfigAIFollowServerRouteSetting::getTypeName(
        const data::ConfigAIFollowServerRouteSetting *const this)
{
  return "ConfigAIFollowServerRouteSetting";
};

// Line 1281: range 00000000100960DE-000000001009627A
int32_t __cdecl data::ConfigAIFollowServerRouteSetting::getHashNum(
        const data::ConfigAIFollowServerRouteSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFollowServerRouteSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFollowServerRouteSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1297: range 00000000110ED28E-00000000110ED2CF
void __cdecl data::ConfigAIFollowServerRouteSettingFactory::ConfigAIFollowServerRouteSettingFactory(
        data::ConfigAIFollowServerRouteSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFollowServerRouteSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFollowServerRouteSettingFactory = v2;
};

// Line 1305: range 000000000ED631B8-000000000ED632D3
void __cdecl data::ConfigAIInvestigateData::ConfigAIInvestigateData(data::ConfigAIInvestigateData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->look_around_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->look_around_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->look_around_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->look_around_time = 3.5;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->spacial >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->spacial, v1, v2);
  this->spacial = 0;
  v3 = ((_BYTE)this + 9) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1337: range 000000000ED6342E-000000000ED6349B
void __cdecl data::ConfigAIInvestigateSetting::ConfigAIInvestigateSetting(data::ConfigAIInvestigateSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIInvestigateSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIInvestigateData::ConfigAIInvestigateData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIInvestigateData>::unordered_map(&this->specification);
};

// Line 1337: range 00000000110ED5D8-00000000110ED762
void __cdecl data::ConfigAIInvestigateSetting::ConfigAIInvestigateSetting(
        data::ConfigAIInvestigateSetting *const this,
        const data::ConfigAIInvestigateSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIInvestigateSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 12LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 12LL);
  }
  this->default_setting = a2->default_setting;
  std::unordered_map<int,data::ConfigAIInvestigateData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1345: range 00000000113102A2-00000000113102CC
void __cdecl data::ConfigAIInvestigateSetting::~ConfigAIInvestigateSetting(
        data::ConfigAIInvestigateSetting *const this)
{
  data::ConfigAIInvestigateSetting::~ConfigAIInvestigateSetting(this);
  operator delete(this, 0xA0uLL);
};

// Line 1345: range 0000000011310244-00000000113102A1
void __cdecl data::ConfigAIInvestigateSetting::~ConfigAIInvestigateSetting(
        data::ConfigAIInvestigateSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIInvestigateSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIInvestigateData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1350: range 000000001009627C-000000001009628C
const char *__cdecl data::ConfigAIInvestigateSetting::getTypeName(const data::ConfigAIInvestigateSetting *const this)
{
  return "ConfigAIInvestigateSetting";
};

// Line 1351: range 000000001009628E-000000001009642A
int32_t __cdecl data::ConfigAIInvestigateSetting::getHashNum(const data::ConfigAIInvestigateSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIInvestigateSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIInvestigateSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1367: range 00000000110EDA4C-00000000110EDA8D
void __cdecl data::ConfigAIInvestigateSettingFactory::ConfigAIInvestigateSettingFactory(
        data::ConfigAIInvestigateSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIInvestigateSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIInvestigateSettingFactory = v2;
};

// Line 1375: range 0000000010108E74-0000000010108FE3
void __cdecl data::ConfigAIPickActionPointCriteria::ConfigAIPickActionPointCriteria(
        data::ConfigAIPickActionPointCriteria *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->point_type = InvalidPoint;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_distance, v2);
  }
  this->detect_distance = 35.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_level, v2);
  }
  this->speed_level = 1;
  std::vector<int>::vector(&this->pose);
  std::vector<data::NeuronName>::vector(&this->nerve_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, v2);
  }
  this->skill_id = 0;
  v3 = ((_BYTE)this + 68) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1375: range 0000000010CC689E-0000000010CC6B6A
void __cdecl data::ConfigAIPickActionPointCriteria::ConfigAIPickActionPointCriteria(
        data::ConfigAIPickActionPointCriteria *const this,
        const data::ConfigAIPickActionPointCriteria *a2)
{
  data::ActionPointType point_type; // ecx
  char v3; // al
  float detect_distance; // xmm0_4
  __int64 v5; // rsi
  int32_t speed_level; // ecx
  char v7; // al
  data::ConfigNeuronNameList *p_nerve_trigger; // rsi
  int32_t skill_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // dl
  __int64 v15; // rdx
  const data::ConfigAIPickActionPointCriteria *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_type = a2->point_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->point_type = point_type;
  if ( *(_BYTE *)(((unsigned __int64)&v16->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->detect_distance);
  }
  detect_distance = v16->detect_distance;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_distance, v5);
  }
  this->detect_distance = detect_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v16->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->speed_level);
  }
  speed_level = v16->speed_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->speed_level, v5);
  }
  this->speed_level = speed_level;
  std::vector<int>::vector(&this->pose, &v16->pose);
  p_nerve_trigger = &v16->nerve_trigger;
  std::vector<data::NeuronName>::vector(&this->nerve_trigger, &v16->nerve_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&v16->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->skill_id);
  }
  skill_id = v16->skill_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_nerve_trigger) = v10 != 0;
    __asan_report_store4(&this->skill_id, p_nerve_trigger);
  }
  this->skill_id = skill_id;
  v11 = ((_BYTE)v16 + 68) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v16->is_json_loaded, v11, v12);
  is_json_loaded = v16->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_json_loaded, v11, v15);
  this->is_json_loaded = is_json_loaded;
};

// Line 1375: range 00000000104D188C-00000000104D1B31
void __cdecl data::ConfigAIPickActionPointCriteria::ConfigAIPickActionPointCriteria(
        data::ConfigAIPickActionPointCriteria *const this,
        data::ConfigAIPickActionPointCriteria *a2)
{
  data::ActionPointType point_type; // ecx
  char v3; // al
  float detect_distance; // xmm0_4
  __int64 v5; // rsi
  int32_t speed_level; // ecx
  char v7; // al
  data::ConfigNeuronNameList *p_nerve_trigger; // rsi
  int32_t skill_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // dl
  __int64 v15; // rdx
  data::ConfigAIPickActionPointCriteria *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_type = a2->point_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->point_type = point_type;
  if ( *(_BYTE *)(((unsigned __int64)&v16->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->detect_distance);
  }
  detect_distance = v16->detect_distance;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_distance, v5);
  }
  this->detect_distance = detect_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v16->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->speed_level);
  }
  speed_level = v16->speed_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->speed_level, v5);
  }
  this->speed_level = speed_level;
  std::vector<int>::vector(&this->pose, &v16->pose);
  p_nerve_trigger = &v16->nerve_trigger;
  std::vector<data::NeuronName>::vector(&this->nerve_trigger, &v16->nerve_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&v16->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->skill_id);
  }
  skill_id = v16->skill_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_nerve_trigger) = v10 != 0;
    __asan_report_store4(&this->skill_id, p_nerve_trigger);
  }
  this->skill_id = skill_id;
  v11 = ((_BYTE)v16 + 68) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v16->is_json_loaded, v11, v12);
  is_json_loaded = v16->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_json_loaded, v11, v15);
  this->is_json_loaded = is_json_loaded;
};

// Line 1375: range 0000000010108FE4-0000000010109012
void __cdecl data::ConfigAIPickActionPointCriteria::~ConfigAIPickActionPointCriteria(
        data::ConfigAIPickActionPointCriteria *const this)
{
  std::vector<data::NeuronName>::~vector(&this->nerve_trigger);
  std::vector<int>::~vector(&this->pose);
};

// Line 1408: range 000000000ED6388E-000000000ED638E3
void __cdecl data::ConfigAIReactActionPointData::ConfigAIReactActionPointData(
        data::ConfigAIReactActionPointData *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigAIPickActionPointCriteria>::vector(&this->react_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1408: range 000000001030AE58-000000001030AEF3
void __cdecl data::ConfigAIReactActionPointData::ConfigAIReactActionPointData(
        data::ConfigAIReactActionPointData *const this,
        const data::ConfigAIReactActionPointData *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigAIPickActionPointCriteria>::vector(&this->react_list, &a2->react_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1408: range 0000000010109030-000000001010904A
void __cdecl data::ConfigAIReactActionPointData::~ConfigAIReactActionPointData(
        data::ConfigAIReactActionPointData *const this)
{
  std::vector<data::ConfigAIPickActionPointCriteria>::~vector(&this->react_list);
};

// Line 1438: range 000000000ED63A3E-000000000ED63AAB
void __cdecl data::ConfigAIReactActionPointSetting::ConfigAIReactActionPointSetting(
        data::ConfigAIReactActionPointSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReactActionPointSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIReactActionPointData::ConfigAIReactActionPointData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIReactActionPointData>::unordered_map(&this->specification);
};

// Line 1438: range 00000000110EDD96-00000000110EDE5C
void __cdecl data::ConfigAIReactActionPointSetting::ConfigAIReactActionPointSetting(
        data::ConfigAIReactActionPointSetting *const this,
        const data::ConfigAIReactActionPointSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReactActionPointSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIReactActionPointData::ConfigAIReactActionPointData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAIReactActionPointData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1446: range 0000000011310218-0000000011310242
void __cdecl data::ConfigAIReactActionPointSetting::~ConfigAIReactActionPointSetting(
        data::ConfigAIReactActionPointSetting *const this)
{
  data::ConfigAIReactActionPointSetting::~ConfigAIReactActionPointSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 1446: range 00000000113101AA-0000000011310217
void __cdecl data::ConfigAIReactActionPointSetting::~ConfigAIReactActionPointSetting(
        data::ConfigAIReactActionPointSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReactActionPointSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIReactActionPointData>::~unordered_map(&this->specification);
  data::ConfigAIReactActionPointData::~ConfigAIReactActionPointData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 1451: range 000000001009642C-000000001009643C
const char *__cdecl data::ConfigAIReactActionPointSetting::getTypeName(
        const data::ConfigAIReactActionPointSetting *const this)
{
  return "ConfigAIReactActionPointSetting";
};

// Line 1452: range 000000001009643E-00000000100965DA
int32_t __cdecl data::ConfigAIReactActionPointSetting::getHashNum(
        const data::ConfigAIReactActionPointSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIReactActionPointSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIReactActionPointSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1468: range 00000000110EE146-00000000110EE187
void __cdecl data::ConfigAIReactActionPointSettingFactory::ConfigAIReactActionPointSettingFactory(
        data::ConfigAIReactActionPointSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIReactActionPointSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIReactActionPointSettingFactory = v2;
};

// Line 1476: range 000000000ED63E6C-000000000ED64025
void __cdecl data::ConfigAIPatrolFollowData::ConfigAIPatrolFollowData(data::ConfigAIPatrolFollowData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inner_distance, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->inner_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level_inner, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->speed_level_inner = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->out_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->out_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->out_distance = 35.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_distance, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->stop_distance = 2.0;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1510: range 000000000ED64180-000000000ED641ED
void __cdecl data::ConfigAIPatrolFollowSetting::ConfigAIPatrolFollowSetting(
        data::ConfigAIPatrolFollowSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIPatrolFollowSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIPatrolFollowData::ConfigAIPatrolFollowData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIPatrolFollowData>::unordered_map(&this->specification);
};

// Line 1510: range 00000000110EE490-00000000110EE624
void __cdecl data::ConfigAIPatrolFollowSetting::ConfigAIPatrolFollowSetting(
        data::ConfigAIPatrolFollowSetting *const this,
        const data::ConfigAIPatrolFollowSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIPatrolFollowSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 24LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 24LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.speed_level_inner;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.speed_level_inner = v3;
  *(_QWORD *)&this->default_setting.stop_distance = *(_QWORD *)&a2->default_setting.stop_distance;
  std::unordered_map<int,data::ConfigAIPatrolFollowData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1518: range 0000000011310120-000000001131017D
void __cdecl data::ConfigAIPatrolFollowSetting::~ConfigAIPatrolFollowSetting(
        data::ConfigAIPatrolFollowSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIPatrolFollowSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIPatrolFollowData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1518: range 000000001131017E-00000000113101A8
void __cdecl data::ConfigAIPatrolFollowSetting::~ConfigAIPatrolFollowSetting(
        data::ConfigAIPatrolFollowSetting *const this)
{
  data::ConfigAIPatrolFollowSetting::~ConfigAIPatrolFollowSetting(this);
  operator delete(this, 0xB0uLL);
};

// Line 1523: range 00000000100965DC-00000000100965EC
const char *__cdecl data::ConfigAIPatrolFollowSetting::getTypeName(const data::ConfigAIPatrolFollowSetting *const this)
{
  return "ConfigAIPatrolFollowSetting";
};

// Line 1524: range 00000000100965EE-000000001009678A
int32_t __cdecl data::ConfigAIPatrolFollowSetting::getHashNum(const data::ConfigAIPatrolFollowSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIPatrolFollowSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIPatrolFollowSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1540: range 00000000110EE90E-00000000110EE94F
void __cdecl data::ConfigAIPatrolFollowSettingFactory::ConfigAIPatrolFollowSettingFactory(
        data::ConfigAIPatrolFollowSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIPatrolFollowSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIPatrolFollowSettingFactory = v2;
};

// Line 1548: range 000000000ED645A2-000000000ED649A9
void __cdecl data::ConfigAICombatFollowMoveData::ConfigAICombatFollowMoveData(
        data::ConfigAICombatFollowMoveData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->start_distance = 35.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_distance, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->stop_distance = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->middle_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->middle_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->middle_distance, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->middle_distance = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inner_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->inner_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_outer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_outer >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level_outer, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->speed_level_outer = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_middle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_middle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level_middle, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->speed_level_middle = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level_inner, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->speed_level_inner = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_angle, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->start_angle = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->outer_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->outer_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->outer_angle, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->outer_angle = 90.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_outer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_outer >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_outer, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->turn_speed_override_outer = -1.0;
  v1 = ((_BYTE)this + 44) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_melee_slot >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->use_melee_slot >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->use_melee_slot, v1, v2);
  this->use_melee_slot = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_out_damp_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_out_damp_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_out_damp_range, (((_BYTE)this + 48) & 7u) + 3);
  }
  this->move_out_damp_range = 1.0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1590: range 000000000ED64B04-000000000ED64B73
void __cdecl data::ConfigAICombatFollowMoveSetting::ConfigAICombatFollowMoveSetting(
        data::ConfigAICombatFollowMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFollowMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAICombatFollowMoveData::ConfigAICombatFollowMoveData(&this->default_setting);
  std::unordered_map<int,data::ConfigAICombatFollowMoveData>::unordered_map(&this->specification);
};

// Line 1590: range 00000000110EEC58-00000000110EEE1D
void __cdecl data::ConfigAICombatFollowMoveSetting::ConfigAICombatFollowMoveSetting(
        data::ConfigAICombatFollowMoveSetting *const this,
        const data::ConfigAICombatFollowMoveSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFollowMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 56LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 56LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.middle_distance;
  *(_QWORD *)&this->default_setting.start_distance = *(_QWORD *)&a2->default_setting.start_distance;
  *(_QWORD *)&this->default_setting.middle_distance = v3;
  v4 = *(_QWORD *)&a2->default_setting.speed_level_inner;
  *(_QWORD *)&this->default_setting.speed_level_outer = *(_QWORD *)&a2->default_setting.speed_level_outer;
  *(_QWORD *)&this->default_setting.speed_level_inner = v4;
  v5 = *(_QWORD *)&a2->default_setting.turn_speed_override_outer;
  *(_QWORD *)&this->default_setting.outer_angle = *(_QWORD *)&a2->default_setting.outer_angle;
  *(_QWORD *)&this->default_setting.turn_speed_override_outer = v5;
  *(_QWORD *)&this->default_setting.move_out_damp_range = *(_QWORD *)&a2->default_setting.move_out_damp_range;
  std::unordered_map<int,data::ConfigAICombatFollowMoveData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1598: range 0000000011310094-00000000113100F3
void __cdecl data::ConfigAICombatFollowMoveSetting::~ConfigAICombatFollowMoveSetting(
        data::ConfigAICombatFollowMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFollowMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAICombatFollowMoveData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1598: range 00000000113100F4-000000001131011E
void __cdecl data::ConfigAICombatFollowMoveSetting::~ConfigAICombatFollowMoveSetting(
        data::ConfigAICombatFollowMoveSetting *const this)
{
  data::ConfigAICombatFollowMoveSetting::~ConfigAICombatFollowMoveSetting(this);
  operator delete(this, 0xD0uLL);
};

// Line 1603: range 000000001009678C-000000001009679C
const char *__cdecl data::ConfigAICombatFollowMoveSetting::getTypeName(
        const data::ConfigAICombatFollowMoveSetting *const this)
{
  return "ConfigAICombatFollowMoveSetting";
};

// Line 1604: range 000000001009679E-000000001009693A
int32_t __cdecl data::ConfigAICombatFollowMoveSetting::getHashNum(
        const data::ConfigAICombatFollowMoveSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAICombatFollowMoveSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAICombatFollowMoveSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1620: range 00000000110EF106-00000000110EF147
void __cdecl data::ConfigAICombatFollowMoveSettingFactory::ConfigAICombatFollowMoveSettingFactory(
        data::ConfigAICombatFollowMoveSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFollowMoveSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICombatFollowMoveSettingFactory = v2;
};

// Line 1628: range 000000000ED64F28-000000000ED651B9
void __cdecl data::ConfigAIMeleeChargeData::ConfigAIMeleeChargeData(data::ConfigAIMeleeChargeData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_distance_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_distance_min, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->start_distance_min = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_distance_max, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->start_distance_max = 35.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_distance, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->stop_distance = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inner_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inner_distance, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->inner_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_inner >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level_inner, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->speed_level_inner = 1;
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_melee_slot >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->use_melee_slot >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->use_melee_slot, v1, v2);
  this->use_melee_slot = 1;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1665: range 000000000ED65314-000000000ED65381
void __cdecl data::ConfigAIMeleeChargeSetting::ConfigAIMeleeChargeSetting(data::ConfigAIMeleeChargeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMeleeChargeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIMeleeChargeData::ConfigAIMeleeChargeData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIMeleeChargeData>::unordered_map(&this->specification);
};

// Line 1665: range 00000000110EF450-00000000110EF5EC
void __cdecl data::ConfigAIMeleeChargeSetting::ConfigAIMeleeChargeSetting(
        data::ConfigAIMeleeChargeSetting *const this,
        const data::ConfigAIMeleeChargeSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMeleeChargeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 32LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 32LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.start_distance_min;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.start_distance_min = v3;
  v4 = *(_QWORD *)&a2->default_setting.speed_level_inner;
  *(_QWORD *)&this->default_setting.stop_distance = *(_QWORD *)&a2->default_setting.stop_distance;
  *(_QWORD *)&this->default_setting.speed_level_inner = v4;
  std::unordered_map<int,data::ConfigAIMeleeChargeData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1673: range 0000000011310068-0000000011310092
void __cdecl data::ConfigAIMeleeChargeSetting::~ConfigAIMeleeChargeSetting(
        data::ConfigAIMeleeChargeSetting *const this)
{
  data::ConfigAIMeleeChargeSetting::~ConfigAIMeleeChargeSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 1673: range 000000001131000A-0000000011310067
void __cdecl data::ConfigAIMeleeChargeSetting::~ConfigAIMeleeChargeSetting(
        data::ConfigAIMeleeChargeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMeleeChargeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIMeleeChargeData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 1678: range 000000001009693C-000000001009694C
const char *__cdecl data::ConfigAIMeleeChargeSetting::getTypeName(const data::ConfigAIMeleeChargeSetting *const this)
{
  return "ConfigAIMeleeChargeSetting";
};

// Line 1679: range 000000001009694E-0000000010096AEA
int32_t __cdecl data::ConfigAIMeleeChargeSetting::getHashNum(const data::ConfigAIMeleeChargeSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIMeleeChargeSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIMeleeChargeSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1695: range 00000000110EF8D6-00000000110EF917
void __cdecl data::ConfigAIMeleeChargeSettingFactory::ConfigAIMeleeChargeSettingFactory(
        data::ConfigAIMeleeChargeSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMeleeChargeSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIMeleeChargeSettingFactory = v2;
};

// Line 1703: range 000000000ED65742-000000000ED65907
void __cdecl data::ConfigAIFacingMoveWeight::ConfigAIFacingMoveWeight(data::ConfigAIFacingMoveWeight *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->stop = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->forward = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->back >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->back = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->left = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->right = 1.0;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1730: range 000000000ED65908-000000000ED65F23
void __cdecl data::ConfigAIFacingMoveData::ConfigAIFacingMoveData(data::ConfigAIFacingMoveData *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAIFacingMoveData::ConfigAIFacingMoveData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->range_min, v5);
  }
  this->range_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range_max, v5);
  }
  this->range_max = 99.0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_min, v6);
  }
  this->rest_time_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rest_time_max, v6);
  }
  this->rest_time_max = 2.0;
  v7 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->facing_move_turn_interval, v7);
  }
  this->facing_move_turn_interval = 0.80000001;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->facing_move_min_avoidance_velecity, v7);
  }
  this->facing_move_min_avoidance_velecity = 0.375;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_detect_range, v8);
  }
  this->obstacle_detect_range = -1.0;
  data::ConfigAIFacingMoveWeight::ConfigAIFacingMoveWeight(&this->facing_move_weight);
  if ( *(char *)(((unsigned __int64)&this->need_has_path >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_has_path, v8, &this->need_has_path);
  this->need_has_path = 1;
  v9 = ((_BYTE)this + 57) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->amphibious_move_permeability >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->amphibious_move_permeability >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->amphibious_move_permeability, v9, v10);
  this->amphibious_move_permeability = 0;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->amphibious_water_to_land,
    "1111",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->amphibious_land_to_water,
    "1111",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->restricted_by_defend_area, "1111", &this->restricted_by_defend_area);
  this->restricted_by_defend_area = 0;
  v11 = ((_BYTE)this - 127) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->ignore_rbdaout_of_zone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->ignore_rbdaout_of_zone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->ignore_rbdaout_of_zone, v11, v12);
  this->ignore_rbdaout_of_zone = 1;
  v13 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_defend_area >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_defend_area >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_defend_area, v13);
  }
  this->distance_to_defend_area = 2.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v13, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1730: range 000000001030F586-000000001030FDE6
void __cdecl data::ConfigAIFacingMoveData::ConfigAIFacingMoveData(
        data::ConfigAIFacingMoveData *const this,
        const data::ConfigAIFacingMoveData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float range_min; // xmm0_4
  __int64 v5; // rsi
  float range_max; // xmm0_4
  float rest_time_min; // xmm0_4
  __int64 v8; // rsi
  float rest_time_max; // xmm0_4
  float facing_move_turn_interval; // xmm0_4
  __int64 v11; // rsi
  float facing_move_min_avoidance_velecity; // xmm0_4
  float obstacle_detect_range; // xmm0_4
  const data::ConfigAIFacingMoveData *v14; // rsi
  __int64 v15; // rdx
  bool need_has_path; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool amphibious_move_permeability; // cl
  char v21; // dl
  __int64 v22; // rdx
  std::string *p_amphibious_land_to_water; // rsi
  bool restricted_by_defend_area; // cl
  char v25; // al
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool ignore_rbdaout_of_zone; // cl
  char v29; // dl
  __int64 v30; // rdx
  float distance_to_defend_area; // xmm0_4
  __int64 v32; // rsi
  bool is_json_loaded; // cl
  char v34; // al
  const data::ConfigAIFacingMoveData *v35; // [rsp+0h] [rbp-20h]

  v35 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v35->range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->range_min);
  }
  range_min = v35->range_min;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->range_min, v5);
  }
  this->range_min = range_min;
  if ( *(_BYTE *)(((unsigned __int64)&v35->range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->range_max);
  }
  range_max = v35->range_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range_max, v5);
  }
  this->range_max = range_max;
  if ( *(_BYTE *)(((unsigned __int64)&v35->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->rest_time_min);
  }
  rest_time_min = v35->rest_time_min;
  v8 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_min, v8);
  }
  this->rest_time_min = rest_time_min;
  if ( *(_BYTE *)(((unsigned __int64)&v35->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->rest_time_max);
  }
  rest_time_max = v35->rest_time_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rest_time_max, v8);
  }
  this->rest_time_max = rest_time_max;
  if ( *(_BYTE *)(((unsigned __int64)&v35->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->facing_move_turn_interval >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->facing_move_turn_interval);
  }
  facing_move_turn_interval = v35->facing_move_turn_interval;
  v11 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->facing_move_turn_interval, v11);
  }
  this->facing_move_turn_interval = facing_move_turn_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v35->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->facing_move_min_avoidance_velecity);
  }
  facing_move_min_avoidance_velecity = v35->facing_move_min_avoidance_velecity;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->facing_move_min_avoidance_velecity, v11);
  }
  this->facing_move_min_avoidance_velecity = facing_move_min_avoidance_velecity;
  if ( *(_BYTE *)(((unsigned __int64)&v35->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->obstacle_detect_range >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->obstacle_detect_range);
  }
  obstacle_detect_range = v35->obstacle_detect_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_detect_range, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->obstacle_detect_range = obstacle_detect_range;
  if ( *(char *)(((unsigned __int64)&this->facing_move_weight >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->facing_move_weight.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->facing_move_weight.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->facing_move_weight, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&v35->facing_move_weight >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v35->facing_move_weight.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v35 + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(&v35->facing_move_weight.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v35->facing_move_weight, 24LL);
  }
  v14 = v35;
  v15 = *(_QWORD *)&v35->facing_move_weight.back;
  *(_QWORD *)&this->facing_move_weight.stop = *(_QWORD *)&v35->facing_move_weight.stop;
  *(_QWORD *)&this->facing_move_weight.back = v15;
  *(_QWORD *)&this->facing_move_weight.right = *(_QWORD *)&v35->facing_move_weight.right;
  if ( *(char *)(((unsigned __int64)&v35->need_has_path >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->need_has_path, v35, &v35->need_has_path);
  need_has_path = v35->need_has_path;
  v17 = *(_BYTE *)(((unsigned __int64)&this->need_has_path >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v14) = v17 != 0;
    __asan_report_store1(&this->need_has_path, v14, &this->need_has_path);
  }
  this->need_has_path = need_has_path;
  v18 = ((_BYTE)v35 + 57) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v35->amphibious_move_permeability >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v35->amphibious_move_permeability >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v35->amphibious_move_permeability, v18, v19);
  amphibious_move_permeability = v35->amphibious_move_permeability;
  v21 = *(_BYTE *)(((unsigned __int64)&this->amphibious_move_permeability >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->amphibious_move_permeability, v18, v22);
  this->amphibious_move_permeability = amphibious_move_permeability;
  std::string::basic_string(&this->amphibious_water_to_land, &v35->amphibious_water_to_land);
  p_amphibious_land_to_water = &v35->amphibious_land_to_water;
  std::string::basic_string(&this->amphibious_land_to_water, &v35->amphibious_land_to_water);
  if ( *(char *)(((unsigned __int64)&v35->restricted_by_defend_area >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->restricted_by_defend_area, p_amphibious_land_to_water, &v35->restricted_by_defend_area);
  restricted_by_defend_area = v35->restricted_by_defend_area;
  v25 = *(_BYTE *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_amphibious_land_to_water) = v25 != 0;
    __asan_report_store1(&this->restricted_by_defend_area, p_amphibious_land_to_water, &this->restricted_by_defend_area);
  }
  this->restricted_by_defend_area = restricted_by_defend_area;
  v26 = ((_BYTE)v35 - 127) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&v35->ignore_rbdaout_of_zone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&v35->ignore_rbdaout_of_zone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&v35->ignore_rbdaout_of_zone, v26, v27);
  ignore_rbdaout_of_zone = v35->ignore_rbdaout_of_zone;
  v29 = *(_BYTE *)(((unsigned __int64)&this->ignore_rbdaout_of_zone >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((((unsigned __int8)this - 127) & 7) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->ignore_rbdaout_of_zone, v26, v30);
  this->ignore_rbdaout_of_zone = ignore_rbdaout_of_zone;
  if ( *(_BYTE *)(((unsigned __int64)&v35->distance_to_defend_area >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->distance_to_defend_area >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->distance_to_defend_area);
  }
  distance_to_defend_area = v35->distance_to_defend_area;
  v32 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_defend_area >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_defend_area >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_defend_area, v32);
  }
  this->distance_to_defend_area = distance_to_defend_area;
  if ( *(char *)(((unsigned __int64)&v35->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->is_json_loaded, v32, &v35->is_json_loaded);
  is_json_loaded = v35->is_json_loaded;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store1(&this->is_json_loaded, v32, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1730: range 0000000010109B14-0000000010109B42
void __cdecl data::ConfigAIFacingMoveData::~ConfigAIFacingMoveData(data::ConfigAIFacingMoveData *const this)
{
  std::string::~string(&this->amphibious_land_to_water);
  std::string::~string(&this->amphibious_water_to_land);
};

// Line 1775: range 000000000ED6607E-000000000ED66110
void __cdecl data::ConfigAIFacingMoveSetting::ConfigAIFacingMoveSetting(data::ConfigAIFacingMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFacingMoveData::ConfigAIFacingMoveData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFacingMoveData>::unordered_map(&this->specification);
};

// Line 1775: range 00000000110EFC20-00000000110EFCEB
void __cdecl data::ConfigAIFacingMoveSetting::ConfigAIFacingMoveSetting(
        data::ConfigAIFacingMoveSetting *const this,
        const data::ConfigAIFacingMoveSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFacingMoveData::ConfigAIFacingMoveData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAIFacingMoveData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1783: range 000000001130FFDE-0000000011310008
void __cdecl data::ConfigAIFacingMoveSetting::~ConfigAIFacingMoveSetting(data::ConfigAIFacingMoveSetting *const this)
{
  data::ConfigAIFacingMoveSetting::~ConfigAIFacingMoveSetting(this);
  operator delete(this, 0x128uLL);
};

// Line 1783: range 000000001130FF6E-000000001130FFDD
void __cdecl data::ConfigAIFacingMoveSetting::~ConfigAIFacingMoveSetting(data::ConfigAIFacingMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFacingMoveData>::~unordered_map(&this->specification);
  data::ConfigAIFacingMoveData::~ConfigAIFacingMoveData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 1788: range 0000000010096AEC-0000000010096AFC
const char *__cdecl data::ConfigAIFacingMoveSetting::getTypeName(const data::ConfigAIFacingMoveSetting *const this)
{
  return "ConfigAIFacingMoveSetting";
};

// Line 1789: range 0000000010096AFE-0000000010096C9A
int32_t __cdecl data::ConfigAIFacingMoveSetting::getHashNum(const data::ConfigAIFacingMoveSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFacingMoveSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFacingMoveSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1805: range 00000000110EFFD4-00000000110F0015
void __cdecl data::ConfigAIFacingMoveSettingFactory::ConfigAIFacingMoveSettingFactory(
        data::ConfigAIFacingMoveSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFacingMoveSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFacingMoveSettingFactory = v2;
};

// Line 1813: range 000000000ED66554-000000000ED667D3
void __cdecl data::ConfigAISurroundData::ConfigAISurroundData(data::ConfigAISurroundData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, v2);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_distance, v2);
  }
  this->start_distance = 12.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surround_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surround_radius, v3);
  }
  this->surround_radius = 10.0;
  std::vector<std::string>::vector(&this->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_distance, v3);
  }
  this->detect_front_distance = 5.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_front_offset_up, v4);
  }
  this->detect_front_offset_up = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_forward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_forward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_offset_forward, v4);
  }
  this->detect_front_offset_forward = 0.0;
  v5 = ((_BYTE)this + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->amphibious_mode_on, v5, v6);
  this->amphibious_mode_on = 0;
  v7 = ((_BYTE)this + 53) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 1813: range 0000000010310E5E-00000000103112F6
void __cdecl data::ConfigAISurroundData::ConfigAISurroundData(
        data::ConfigAISurroundData *const this,
        const data::ConfigAISurroundData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float turn_speed_override; // xmm0_4
  __int64 v5; // rsi
  float start_distance; // xmm0_4
  float surround_radius; // xmm0_4
  float detect_front_distance; // xmm0_4
  float detect_front_offset_up; // xmm0_4
  __int64 v10; // rsi
  float detect_front_offset_forward; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool amphibious_mode_on; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool is_json_loaded; // cl
  char v20; // dl
  __int64 v21; // rdx
  const data::ConfigAISurroundData *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v22->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->turn_speed_override);
  }
  turn_speed_override = v22->turn_speed_override;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, v5);
  }
  this->turn_speed_override = turn_speed_override;
  if ( *(_BYTE *)(((unsigned __int64)&v22->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->start_distance);
  }
  start_distance = v22->start_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_distance, v5);
  }
  this->start_distance = start_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v22->surround_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->surround_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->surround_radius);
  }
  surround_radius = v22->surround_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surround_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surround_radius, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->surround_radius = surround_radius;
  std::vector<std::string>::vector(&this->turning_states, &v22->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&v22->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->detect_front_distance);
  }
  detect_front_distance = v22->detect_front_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_distance, &v22->turning_states);
  }
  this->detect_front_distance = detect_front_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v22->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->detect_front_offset_up >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->detect_front_offset_up);
  }
  detect_front_offset_up = v22->detect_front_offset_up;
  v10 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_front_offset_up, v10);
  }
  this->detect_front_offset_up = detect_front_offset_up;
  if ( *(_BYTE *)(((unsigned __int64)&v22->detect_front_offset_forward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->detect_front_offset_forward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->detect_front_offset_forward);
  }
  detect_front_offset_forward = v22->detect_front_offset_forward;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_forward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_forward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_offset_forward, v10);
  }
  this->detect_front_offset_forward = detect_front_offset_forward;
  v12 = ((_BYTE)v22 + 52) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v22->amphibious_mode_on >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v22->amphibious_mode_on >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v22->amphibious_mode_on, v12, v13);
  amphibious_mode_on = v22->amphibious_mode_on;
  v15 = *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->amphibious_mode_on, v12, v16);
  this->amphibious_mode_on = amphibious_mode_on;
  v17 = ((_BYTE)v22 + 53) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v22->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v22->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v22->is_json_loaded, v17, v18);
  is_json_loaded = v22->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_json_loaded, v17, v21);
  this->is_json_loaded = is_json_loaded;
};

// Line 1813: range 0000000010109DF6-0000000010109E14
void __cdecl data::ConfigAISurroundData::~ConfigAISurroundData(data::ConfigAISurroundData *const this)
{
  std::vector<std::string>::~vector(&this->turning_states);
};

// Line 1851: range 000000000ED6692E-000000000ED6699D
void __cdecl data::ConfigAISurroundSetting::ConfigAISurroundSetting(data::ConfigAISurroundSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISurroundData::ConfigAISurroundData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISurroundData>::unordered_map(&this->specification);
};

// Line 1851: range 00000000110F031E-00000000110F03E9
void __cdecl data::ConfigAISurroundSetting::ConfigAISurroundSetting(
        data::ConfigAISurroundSetting *const this,
        const data::ConfigAISurroundSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISurroundData::ConfigAISurroundData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAISurroundData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1859: range 000000001130FF42-000000001130FF6C
void __cdecl data::ConfigAISurroundSetting::~ConfigAISurroundSetting(data::ConfigAISurroundSetting *const this)
{
  data::ConfigAISurroundSetting::~ConfigAISurroundSetting(this);
  operator delete(this, 0xD0uLL);
};

// Line 1859: range 000000001130FED2-000000001130FF41
void __cdecl data::ConfigAISurroundSetting::~ConfigAISurroundSetting(data::ConfigAISurroundSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISurroundData>::~unordered_map(&this->specification);
  data::ConfigAISurroundData::~ConfigAISurroundData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 1864: range 0000000010096C9C-0000000010096CAC
const char *__cdecl data::ConfigAISurroundSetting::getTypeName(const data::ConfigAISurroundSetting *const this)
{
  return "ConfigAISurroundSetting";
};

// Line 1865: range 0000000010096CAE-0000000010096E4A
int32_t __cdecl data::ConfigAISurroundSetting::getHashNum(const data::ConfigAISurroundSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISurroundSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISurroundSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1881: range 00000000110F06D2-00000000110F0713
void __cdecl data::ConfigAISurroundSettingFactory::ConfigAISurroundSettingFactory(
        data::ConfigAISurroundSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISurroundSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISurroundSettingFactory = v2;
};

// Line 1889: range 000000000ED66D52-000000000ED67180
void __cdecl data::ConfigAIGroupSurroundData::ConfigAIGroupSurroundData(data::ConfigAIGroupSurroundData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, v2);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_distance, v2);
  }
  this->start_distance = 6.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surround_radius_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surround_radius_min, v3);
  }
  this->surround_radius_min = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surround_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->surround_radius_max, v3);
  }
  this->surround_radius_max = 5.0;
  std::vector<std::string>::vector(&this->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_distance, v3);
  }
  this->detect_front_distance = 5.0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_front_offset_up, v4);
  }
  this->detect_front_offset_up = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v4);
  }
  this->cd = 5.0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exit_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exit_distance_max, v5);
  }
  this->exit_distance_max = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_distance_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_distance_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_distance_min, v5);
  }
  this->exit_distance_min = 2.0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clock_wise_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clock_wise_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clock_wise_weight, v6);
  }
  this->clock_wise_weight = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_collision_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_collision_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_collision_radius, v6);
  }
  this->detect_collision_radius = 2.0;
  v7 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_collision_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_collision_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_collision_distance, v7);
  }
  this->detect_collision_distance = 3.0;
  if ( *(char *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->amphibious_mode_on, v7, &this->amphibious_mode_on);
  this->amphibious_mode_on = 0;
  v8 = ((_BYTE)this + 81) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v8, v9);
  this->is_json_loaded = 0;
};

// Line 1889: range 000000001031236E-0000000010312AFC
void __cdecl data::ConfigAIGroupSurroundData::ConfigAIGroupSurroundData(
        data::ConfigAIGroupSurroundData *const this,
        const data::ConfigAIGroupSurroundData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float turn_speed_override; // xmm0_4
  __int64 v5; // rsi
  float start_distance; // xmm0_4
  float surround_radius_min; // xmm0_4
  __int64 v8; // rsi
  float surround_radius_max; // xmm0_4
  float detect_front_distance; // xmm0_4
  float detect_front_offset_up; // xmm0_4
  __int64 v12; // rsi
  float cd; // xmm0_4
  float exit_distance_max; // xmm0_4
  __int64 v15; // rsi
  float exit_distance_min; // xmm0_4
  float clock_wise_weight; // xmm0_4
  __int64 v18; // rsi
  float detect_collision_radius; // xmm0_4
  float detect_collision_distance; // xmm0_4
  __int64 v21; // rsi
  bool amphibious_mode_on; // cl
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_json_loaded; // cl
  char v27; // dl
  __int64 v28; // rdx
  const data::ConfigAIGroupSurroundData *v29; // [rsp+0h] [rbp-10h]

  v29 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v29->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->turn_speed_override);
  }
  turn_speed_override = v29->turn_speed_override;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, v5);
  }
  this->turn_speed_override = turn_speed_override;
  if ( *(_BYTE *)(((unsigned __int64)&v29->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->start_distance);
  }
  start_distance = v29->start_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_distance, v5);
  }
  this->start_distance = start_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v29->surround_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->surround_radius_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->surround_radius_min);
  }
  surround_radius_min = v29->surround_radius_min;
  v8 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surround_radius_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surround_radius_min, v8);
  }
  this->surround_radius_min = surround_radius_min;
  if ( *(_BYTE *)(((unsigned __int64)&v29->surround_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->surround_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->surround_radius_max);
  }
  surround_radius_max = v29->surround_radius_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->surround_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surround_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->surround_radius_max, v8);
  }
  this->surround_radius_max = surround_radius_max;
  std::vector<std::string>::vector(&this->turning_states, &v29->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&v29->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->detect_front_distance);
  }
  detect_front_distance = v29->detect_front_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_front_distance, &v29->turning_states);
  }
  this->detect_front_distance = detect_front_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v29->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->detect_front_offset_up >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->detect_front_offset_up);
  }
  detect_front_offset_up = v29->detect_front_offset_up;
  v12 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_front_offset_up >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_front_offset_up, v12);
  }
  this->detect_front_offset_up = detect_front_offset_up;
  if ( *(_BYTE *)(((unsigned __int64)&v29->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->cd);
  }
  cd = v29->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v12);
  }
  this->cd = cd;
  if ( *(_BYTE *)(((unsigned __int64)&v29->exit_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->exit_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->exit_distance_max);
  }
  exit_distance_max = v29->exit_distance_max;
  v15 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exit_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exit_distance_max, v15);
  }
  this->exit_distance_max = exit_distance_max;
  if ( *(_BYTE *)(((unsigned __int64)&v29->exit_distance_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->exit_distance_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->exit_distance_min);
  }
  exit_distance_min = v29->exit_distance_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_distance_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_distance_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_distance_min, v15);
  }
  this->exit_distance_min = exit_distance_min;
  if ( *(_BYTE *)(((unsigned __int64)&v29->clock_wise_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->clock_wise_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->clock_wise_weight);
  }
  clock_wise_weight = v29->clock_wise_weight;
  v18 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->clock_wise_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clock_wise_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clock_wise_weight, v18);
  }
  this->clock_wise_weight = clock_wise_weight;
  if ( *(_BYTE *)(((unsigned __int64)&v29->detect_collision_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->detect_collision_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->detect_collision_radius);
  }
  detect_collision_radius = v29->detect_collision_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_collision_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_collision_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_collision_radius, v18);
  }
  this->detect_collision_radius = detect_collision_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v29->detect_collision_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->detect_collision_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->detect_collision_distance);
  }
  detect_collision_distance = v29->detect_collision_distance;
  v21 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_collision_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_collision_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_collision_distance, v21);
  }
  this->detect_collision_distance = detect_collision_distance;
  if ( *(char *)(((unsigned __int64)&v29->amphibious_mode_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v29->amphibious_mode_on, v21, &v29->amphibious_mode_on);
  amphibious_mode_on = v29->amphibious_mode_on;
  v23 = *(_BYTE *)(((unsigned __int64)&this->amphibious_mode_on >> 3) + 0x7FFF8000);
  if ( v23 < 0 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store1(&this->amphibious_mode_on, v21, &this->amphibious_mode_on);
  }
  this->amphibious_mode_on = amphibious_mode_on;
  v24 = ((_BYTE)v29 + 81) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v29->is_json_loaded, v24, v25);
  is_json_loaded = v29->is_json_loaded;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_json_loaded, v24, v28);
  this->is_json_loaded = is_json_loaded;
};

// Line 1889: range 000000001010A0C8-000000001010A0E6
void __cdecl data::ConfigAIGroupSurroundData::~ConfigAIGroupSurroundData(data::ConfigAIGroupSurroundData *const this)
{
  std::vector<std::string>::~vector(&this->turning_states);
};

// Line 1933: range 000000000ED672DC-000000000ED6734B
void __cdecl data::ConfigAIGroupSurroundSetting::ConfigAIGroupSurroundSetting(
        data::ConfigAIGroupSurroundSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIGroupSurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIGroupSurroundData::ConfigAIGroupSurroundData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIGroupSurroundData>::unordered_map(&this->specification);
};

// Line 1933: range 00000000110F0A1C-00000000110F0AE7
void __cdecl data::ConfigAIGroupSurroundSetting::ConfigAIGroupSurroundSetting(
        data::ConfigAIGroupSurroundSetting *const this,
        const data::ConfigAIGroupSurroundSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIGroupSurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIGroupSurroundData::ConfigAIGroupSurroundData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAIGroupSurroundData>::unordered_map(&this->specification, &a2->specification);
};

// Line 1941: range 000000001130FEA6-000000001130FED0
void __cdecl data::ConfigAIGroupSurroundSetting::~ConfigAIGroupSurroundSetting(
        data::ConfigAIGroupSurroundSetting *const this)
{
  data::ConfigAIGroupSurroundSetting::~ConfigAIGroupSurroundSetting(this);
  operator delete(this, 0xF0uLL);
};

// Line 1941: range 000000001130FE36-000000001130FEA5
void __cdecl data::ConfigAIGroupSurroundSetting::~ConfigAIGroupSurroundSetting(
        data::ConfigAIGroupSurroundSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIGroupSurroundSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIGroupSurroundData>::~unordered_map(&this->specification);
  data::ConfigAIGroupSurroundData::~ConfigAIGroupSurroundData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 1946: range 0000000010096E4C-0000000010096E5C
const char *__cdecl data::ConfigAIGroupSurroundSetting::getTypeName(
        const data::ConfigAIGroupSurroundSetting *const this)
{
  return "ConfigAIGroupSurroundSetting";
};

// Line 1947: range 0000000010096E5E-0000000010096FFA
int32_t __cdecl data::ConfigAIGroupSurroundSetting::getHashNum(const data::ConfigAIGroupSurroundSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIGroupSurroundSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIGroupSurroundSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1963: range 00000000110F0DD0-00000000110F0E11
void __cdecl data::ConfigAIGroupSurroundSettingFactory::ConfigAIGroupSurroundSettingFactory(
        data::ConfigAIGroupSurroundSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIGroupSurroundSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIGroupSurroundSettingFactory = v2;
};

// Line 1971: range 000000000ED676F6-000000000ED67901
void __cdecl data::ConfigAIFindBackData::ConfigAIFindBackData(data::ConfigAIFindBackData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cd = 3.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->overtime >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->overtime >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->overtime, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->overtime = 8.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_lrspace >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_lrspace >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_lrspace, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->target_lrspace = 2.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_back_space >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_back_space >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_back_space, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->target_back_space = 2.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2006: range 000000000ED67A5C-000000000ED67AC9
void __cdecl data::ConfigAIFindBackSetting::ConfigAIFindBackSetting(data::ConfigAIFindBackSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFindBackSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFindBackData::ConfigAIFindBackData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFindBackData>::unordered_map(&this->specification);
};

// Line 2006: range 00000000110F111A-00000000110F12B4
void __cdecl data::ConfigAIFindBackSetting::ConfigAIFindBackSetting(
        data::ConfigAIFindBackSetting *const this,
        const data::ConfigAIFindBackSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFindBackSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 28LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 28LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.cd;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.cd = v3;
  *(_QWORD *)&this->default_setting.target_lrspace = *(_QWORD *)&a2->default_setting.target_lrspace;
  *(_DWORD *)&this->default_setting.is_json_loaded = *(_DWORD *)&a2->default_setting.is_json_loaded;
  std::unordered_map<int,data::ConfigAIFindBackData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2014: range 000000001130FE0A-000000001130FE34
void __cdecl data::ConfigAIFindBackSetting::~ConfigAIFindBackSetting(data::ConfigAIFindBackSetting *const this)
{
  data::ConfigAIFindBackSetting::~ConfigAIFindBackSetting(this);
  operator delete(this, 0xB0uLL);
};

// Line 2014: range 000000001130FDAC-000000001130FE09
void __cdecl data::ConfigAIFindBackSetting::~ConfigAIFindBackSetting(data::ConfigAIFindBackSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFindBackSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFindBackData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2019: range 0000000010096FFC-000000001009700C
const char *__cdecl data::ConfigAIFindBackSetting::getTypeName(const data::ConfigAIFindBackSetting *const this)
{
  return "ConfigAIFindBackSetting";
};

// Line 2020: range 000000001009700E-00000000100971AA
int32_t __cdecl data::ConfigAIFindBackSetting::getHashNum(const data::ConfigAIFindBackSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFindBackSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFindBackSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2036: range 00000000110F159E-00000000110F15DF
void __cdecl data::ConfigAIFindBackSettingFactory::ConfigAIFindBackSettingFactory(
        data::ConfigAIFindBackSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFindBackSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFindBackSettingFactory = v2;
};

// Line 2044: range 000000000ED67E7E-000000000ED680C9
void __cdecl data::ConfigAICombatFixedMoveData::ConfigAICombatFixedMoveData(
        data::ConfigAICombatFixedMoveData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->point_type = InvalidPoint;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_action_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_action_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_action_point, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->cd_action_point = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_distance, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->detect_distance = 35.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->overtime >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->overtime >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->overtime, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->overtime = 8.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->skill_id = 0;
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2080: range 000000000ED68224-000000000ED68291
void __cdecl data::ConfigAICombatFixedMoveSetting::ConfigAICombatFixedMoveSetting(
        data::ConfigAICombatFixedMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFixedMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAICombatFixedMoveData::ConfigAICombatFixedMoveData(&this->default_setting);
  std::unordered_map<int,data::ConfigAICombatFixedMoveData>::unordered_map(&this->specification);
};

// Line 2080: range 00000000110F18E8-00000000110F1A84
void __cdecl data::ConfigAICombatFixedMoveSetting::ConfigAICombatFixedMoveSetting(
        data::ConfigAICombatFixedMoveSetting *const this,
        const data::ConfigAICombatFixedMoveSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFixedMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 32LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 32LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.point_type = *(_QWORD *)&a2->default_setting.point_type;
  *(_QWORD *)&this->default_setting.speed_level = v3;
  v4 = *(_QWORD *)&a2->default_setting.skill_id;
  *(_QWORD *)&this->default_setting.detect_distance = *(_QWORD *)&a2->default_setting.detect_distance;
  *(_QWORD *)&this->default_setting.skill_id = v4;
  std::unordered_map<int,data::ConfigAICombatFixedMoveData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2088: range 000000001130FD80-000000001130FDAA
void __cdecl data::ConfigAICombatFixedMoveSetting::~ConfigAICombatFixedMoveSetting(
        data::ConfigAICombatFixedMoveSetting *const this)
{
  data::ConfigAICombatFixedMoveSetting::~ConfigAICombatFixedMoveSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 2088: range 000000001130FD22-000000001130FD7F
void __cdecl data::ConfigAICombatFixedMoveSetting::~ConfigAICombatFixedMoveSetting(
        data::ConfigAICombatFixedMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFixedMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAICombatFixedMoveData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2093: range 00000000100971AC-00000000100971BC
const char *__cdecl data::ConfigAICombatFixedMoveSetting::getTypeName(
        const data::ConfigAICombatFixedMoveSetting *const this)
{
  return "ConfigAICombatFixedMoveSetting";
};

// Line 2094: range 00000000100971BE-000000001009735A
int32_t __cdecl data::ConfigAICombatFixedMoveSetting::getHashNum(
        const data::ConfigAICombatFixedMoveSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAICombatFixedMoveSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAICombatFixedMoveSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2110: range 00000000110F1D6E-00000000110F1DAF
void __cdecl data::ConfigAICombatFixedMoveSettingFactory::ConfigAICombatFixedMoveSettingFactory(
        data::ConfigAICombatFixedMoveSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICombatFixedMoveSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICombatFixedMoveSettingFactory = v2;
};

// Line 2118: range 000000000ED68652-000000000ED68941
void __cdecl data::ConfigAICrabMoveData::ConfigAICrabMoveData(data::ConfigAICrabMoveData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius_min, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->radius_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius_max, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->radius_max = 8.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_time_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->move_time_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_time_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_time_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_time_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->move_time_max = 4.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_min, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->rest_time_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_max, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->rest_time_max = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_front_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_front_distance, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->detect_front_distance = 1.0;
  v1 = ((_BYTE)this + 36) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2156: range 000000000ED68A9C-000000000ED68B0B
void __cdecl data::ConfigAICrabMoveSetting::ConfigAICrabMoveSetting(data::ConfigAICrabMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICrabMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAICrabMoveData::ConfigAICrabMoveData(&this->default_setting);
  std::unordered_map<int,data::ConfigAICrabMoveData>::unordered_map(&this->specification);
};

// Line 2156: range 00000000110F20B8-00000000110F2261
void __cdecl data::ConfigAICrabMoveSetting::ConfigAICrabMoveSetting(
        data::ConfigAICrabMoveSetting *const this,
        const data::ConfigAICrabMoveSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICrabMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 40LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 40LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.radius_min;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.radius_min = v3;
  v4 = *(_QWORD *)&a2->default_setting.rest_time_min;
  *(_QWORD *)&this->default_setting.move_time_min = *(_QWORD *)&a2->default_setting.move_time_min;
  *(_QWORD *)&this->default_setting.rest_time_min = v4;
  *(_QWORD *)&this->default_setting.detect_front_distance = *(_QWORD *)&a2->default_setting.detect_front_distance;
  std::unordered_map<int,data::ConfigAICrabMoveData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2164: range 000000001130FCF6-000000001130FD20
void __cdecl data::ConfigAICrabMoveSetting::~ConfigAICrabMoveSetting(data::ConfigAICrabMoveSetting *const this)
{
  data::ConfigAICrabMoveSetting::~ConfigAICrabMoveSetting(this);
  operator delete(this, 0xC0uLL);
};

// Line 2164: range 000000001130FC96-000000001130FCF5
void __cdecl data::ConfigAICrabMoveSetting::~ConfigAICrabMoveSetting(data::ConfigAICrabMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICrabMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAICrabMoveData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2169: range 000000001009735C-000000001009736C
const char *__cdecl data::ConfigAICrabMoveSetting::getTypeName(const data::ConfigAICrabMoveSetting *const this)
{
  return "ConfigAICrabMoveSetting";
};

// Line 2170: range 000000001009736E-000000001009750A
int32_t __cdecl data::ConfigAICrabMoveSetting::getHashNum(const data::ConfigAICrabMoveSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAICrabMoveSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAICrabMoveSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2186: range 00000000110F254A-00000000110F258B
void __cdecl data::ConfigAICrabMoveSettingFactory::ConfigAICrabMoveSettingFactory(
        data::ConfigAICrabMoveSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICrabMoveSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICrabMoveSettingFactory = v2;
};

// Line 2194: range 000000000ED68EC6-000000000ED69341
void __cdecl data::ConfigAIFleeData::ConfigAIFleeData(data::ConfigAIFleeData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cd = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->trigger_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_angle, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->flee_angle = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_number_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_number_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_number_min, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->flee_number_min = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_number_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_number_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_number_max, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->flee_number_max = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_min, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->flee_distance_min = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_max, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->flee_distance_max = 30.0;
  v1 = ((_BYTE)this + 36) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->turn_to_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->turn_to_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->turn_to_target, v1, v2);
  this->turn_to_target = 0;
  v3 = ((_BYTE)this + 37) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->restricted_by_defend_area, v3, v4);
  this->restricted_by_defend_area = 0;
  v5 = ((_BYTE)this + 38) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->expand_flee_angle_when_blocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->expand_flee_angle_when_blocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->expand_flee_angle_when_blocked, v5, v6);
  this->expand_flee_angle_when_blocked = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_self_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_self_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_self_time, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->kill_self_time = -1.0;
  v7 = ((_BYTE)this + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->prefer_water_position >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->prefer_water_position >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->prefer_water_position, v7, v8);
  this->prefer_water_position = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_threat_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clear_threat_time, (((_BYTE)this + 48) & 7u) + 3);
  }
  this->clear_threat_time = -1.0;
  v9 = ((_BYTE)this + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v9, v10);
  this->is_json_loaded = 0;
};

// Line 2238: range 000000000ED6949C-000000000ED6950B
void __cdecl data::ConfigAIFleeSetting::ConfigAIFleeSetting(data::ConfigAIFleeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFleeData::ConfigAIFleeData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFleeData>::unordered_map(&this->specification);
};

// Line 2238: range 00000000110F2894-00000000110F2A59
void __cdecl data::ConfigAIFleeSetting::ConfigAIFleeSetting(
        data::ConfigAIFleeSetting *const this,
        const data::ConfigAIFleeSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 56LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 56LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.cd;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.cd = v3;
  v4 = *(_QWORD *)&a2->default_setting.flee_number_max;
  *(_QWORD *)&this->default_setting.flee_angle = *(_QWORD *)&a2->default_setting.flee_angle;
  *(_QWORD *)&this->default_setting.flee_number_max = v4;
  v5 = *(_QWORD *)&a2->default_setting.kill_self_time;
  *(_QWORD *)&this->default_setting.flee_distance_max = *(_QWORD *)&a2->default_setting.flee_distance_max;
  *(_QWORD *)&this->default_setting.kill_self_time = v5;
  *(_QWORD *)&this->default_setting.clear_threat_time = *(_QWORD *)&a2->default_setting.clear_threat_time;
  std::unordered_map<int,data::ConfigAIFleeData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2246: range 000000001130FC0A-000000001130FC69
void __cdecl data::ConfigAIFleeSetting::~ConfigAIFleeSetting(data::ConfigAIFleeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFleeData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2246: range 000000001130FC6A-000000001130FC94
void __cdecl data::ConfigAIFleeSetting::~ConfigAIFleeSetting(data::ConfigAIFleeSetting *const this)
{
  data::ConfigAIFleeSetting::~ConfigAIFleeSetting(this);
  operator delete(this, 0xD0uLL);
};

// Line 2251: range 000000001009750C-000000001009751C
const char *__cdecl data::ConfigAIFleeSetting::getTypeName(const data::ConfigAIFleeSetting *const this)
{
  return "ConfigAIFleeSetting";
};

// Line 2252: range 000000001009751E-00000000100976BA
int32_t __cdecl data::ConfigAIFleeSetting::getHashNum(const data::ConfigAIFleeSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFleeSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFleeSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2268: range 00000000110F2D42-00000000110F2D83
void __cdecl data::ConfigAIFleeSettingFactory::ConfigAIFleeSettingFactory(data::ConfigAIFleeSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFleeSettingFactory = v2;
};

// Line 2276: range 000000000ED698C0-000000000ED69B13
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingData::ConfigAIFleeOnBlockAvatarLandingData(
        data::ConfigAIFleeOnBlockAvatarLandingData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_distance, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->trigger_distance = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_angle, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->flee_angle = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->flee_distance_min = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->flee_distance_max = 30.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->neuron_trigger_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->neuron_trigger_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->neuron_trigger_cd, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->neuron_trigger_cd = 0.0;
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2312: range 000000000ED69C6E-000000000ED69CDB
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::ConfigAIFleeOnBlockAvatarLandingSetting(
        data::ConfigAIFleeOnBlockAvatarLandingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeOnBlockAvatarLandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFleeOnBlockAvatarLandingData::ConfigAIFleeOnBlockAvatarLandingData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFleeOnBlockAvatarLandingData>::unordered_map(&this->specification);
};

// Line 2312: range 00000000110F308C-00000000110F3228
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::ConfigAIFleeOnBlockAvatarLandingSetting(
        data::ConfigAIFleeOnBlockAvatarLandingSetting *const this,
        const data::ConfigAIFleeOnBlockAvatarLandingSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeOnBlockAvatarLandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 32LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 32LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.trigger_distance;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.trigger_distance = v3;
  v4 = *(_QWORD *)&a2->default_setting.neuron_trigger_cd;
  *(_QWORD *)&this->default_setting.flee_distance_min = *(_QWORD *)&a2->default_setting.flee_distance_min;
  *(_QWORD *)&this->default_setting.neuron_trigger_cd = v4;
  std::unordered_map<int,data::ConfigAIFleeOnBlockAvatarLandingData>::unordered_map(
    &this->specification,
    &a2->specification);
};

// Line 2320: range 000000001130FBDE-000000001130FC08
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::~ConfigAIFleeOnBlockAvatarLandingSetting(
        data::ConfigAIFleeOnBlockAvatarLandingSetting *const this)
{
  data::ConfigAIFleeOnBlockAvatarLandingSetting::~ConfigAIFleeOnBlockAvatarLandingSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 2320: range 000000001130FB80-000000001130FBDD
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::~ConfigAIFleeOnBlockAvatarLandingSetting(
        data::ConfigAIFleeOnBlockAvatarLandingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeOnBlockAvatarLandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFleeOnBlockAvatarLandingData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2325: range 00000000100976BC-00000000100976CC
const char *__cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::getTypeName(
        const data::ConfigAIFleeOnBlockAvatarLandingSetting *const this)
{
  return "ConfigAIFleeOnBlockAvatarLandingSetting";
};

// Line 2326: range 00000000100976CE-000000001009786A
int32_t __cdecl data::ConfigAIFleeOnBlockAvatarLandingSetting::getHashNum(
        const data::ConfigAIFleeOnBlockAvatarLandingSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFleeOnBlockAvatarLandingSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFleeOnBlockAvatarLandingSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2342: range 00000000110F3512-00000000110F3553
void __cdecl data::ConfigAIFleeOnBlockAvatarLandingSettingFactory::ConfigAIFleeOnBlockAvatarLandingSettingFactory(
        data::ConfigAIFleeOnBlockAvatarLandingSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFleeOnBlockAvatarLandingSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFleeOnBlockAvatarLandingSettingFactory = v2;
};

// Line 2350: range 000000000ED6A0D4-000000000ED6A2D2
void __cdecl data::ConfigAISpacialChaseData::ConfigAISpacialChaseData(data::ConfigAISpacialChaseData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chase_start_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chase_start_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chase_start_distance, v2);
  }
  this->chase_start_distance = 8.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chase_stop_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chase_stop_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chase_stop_distance, v2);
  }
  this->chase_stop_distance = 4.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yoffset_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yoffset_min, v3);
  }
  this->yoffset_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yoffset_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->yoffset_max, v3);
  }
  this->yoffset_max = 4.0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->segment_distance, v4);
  }
  this->segment_distance = -1.0;
  std::vector<data::ConfigAIRaycastCondition>::vector(&this->can_start_range_by_raycast);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2350: range 00000000103195A4-000000001031993A
void __cdecl data::ConfigAISpacialChaseData::ConfigAISpacialChaseData(
        data::ConfigAISpacialChaseData *const this,
        const data::ConfigAISpacialChaseData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float chase_start_distance; // xmm0_4
  __int64 v5; // rsi
  float chase_stop_distance; // xmm0_4
  float yoffset_min; // xmm0_4
  __int64 v8; // rsi
  float yoffset_max; // xmm0_4
  float segment_distance; // xmm0_4
  data::ConfigAIRaycastConditionList *p_can_start_range_by_raycast; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  const data::ConfigAISpacialChaseData *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v14->chase_start_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->chase_start_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->chase_start_distance);
  }
  chase_start_distance = v14->chase_start_distance;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chase_start_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chase_start_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chase_start_distance, v5);
  }
  this->chase_start_distance = chase_start_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v14->chase_stop_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->chase_stop_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->chase_stop_distance);
  }
  chase_stop_distance = v14->chase_stop_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->chase_stop_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chase_stop_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chase_stop_distance, v5);
  }
  this->chase_stop_distance = chase_stop_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v14->yoffset_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->yoffset_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->yoffset_min);
  }
  yoffset_min = v14->yoffset_min;
  v8 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yoffset_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yoffset_min, v8);
  }
  this->yoffset_min = yoffset_min;
  if ( *(_BYTE *)(((unsigned __int64)&v14->yoffset_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->yoffset_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->yoffset_max);
  }
  yoffset_max = v14->yoffset_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yoffset_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->yoffset_max, v8);
  }
  this->yoffset_max = yoffset_max;
  if ( *(_BYTE *)(((unsigned __int64)&v14->segment_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->segment_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->segment_distance);
  }
  segment_distance = v14->segment_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->segment_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->segment_distance, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->segment_distance = segment_distance;
  p_can_start_range_by_raycast = &v14->can_start_range_by_raycast;
  std::vector<data::ConfigAIRaycastCondition>::vector(
    &this->can_start_range_by_raycast,
    &v14->can_start_range_by_raycast);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_can_start_range_by_raycast, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_can_start_range_by_raycast) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_can_start_range_by_raycast, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2350: range 000000001010B114-000000001010B132
void __cdecl data::ConfigAISpacialChaseData::~ConfigAISpacialChaseData(data::ConfigAISpacialChaseData *const this)
{
  std::vector<data::ConfigAIRaycastCondition>::~vector(&this->can_start_range_by_raycast);
};

// Line 2386: range 000000000ED6A42E-000000000ED6A49D
void __cdecl data::ConfigAISpacialChaseSetting::ConfigAISpacialChaseSetting(
        data::ConfigAISpacialChaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialChaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialChaseData::ConfigAISpacialChaseData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISpacialChaseData>::unordered_map(&this->specification);
};

// Line 2386: range 00000000110F385C-00000000110F3927
void __cdecl data::ConfigAISpacialChaseSetting::ConfigAISpacialChaseSetting(
        data::ConfigAISpacialChaseSetting *const this,
        const data::ConfigAISpacialChaseSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialChaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialChaseData::ConfigAISpacialChaseData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAISpacialChaseData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2394: range 000000001130FAE4-000000001130FB53
void __cdecl data::ConfigAISpacialChaseSetting::~ConfigAISpacialChaseSetting(
        data::ConfigAISpacialChaseSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialChaseSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISpacialChaseData>::~unordered_map(&this->specification);
  data::ConfigAISpacialChaseData::~ConfigAISpacialChaseData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 2394: range 000000001130FB54-000000001130FB7E
void __cdecl data::ConfigAISpacialChaseSetting::~ConfigAISpacialChaseSetting(
        data::ConfigAISpacialChaseSetting *const this)
{
  data::ConfigAISpacialChaseSetting::~ConfigAISpacialChaseSetting(this);
  operator delete(this, 0xD0uLL);
};

// Line 2399: range 000000001009786C-000000001009787C
const char *__cdecl data::ConfigAISpacialChaseSetting::getTypeName(const data::ConfigAISpacialChaseSetting *const this)
{
  return "ConfigAISpacialChaseSetting";
};

// Line 2400: range 000000001009787E-0000000010097A1A
int32_t __cdecl data::ConfigAISpacialChaseSetting::getHashNum(const data::ConfigAISpacialChaseSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISpacialChaseSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISpacialChaseSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2416: range 00000000110F3C10-00000000110F3C51
void __cdecl data::ConfigAISpacialChaseSettingFactory::ConfigAISpacialChaseSettingFactory(
        data::ConfigAISpacialChaseSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialChaseSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISpacialChaseSettingFactory = v2;
};

// Line 2424: range 000000000ED6A852-000000000ED6AC05
void __cdecl data::ConfigAISpacialProbeData::ConfigAISpacialProbeData(data::ConfigAISpacialProbeData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_max, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cd_max = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_min, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->cd_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->terrain_offset_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->terrain_offset_max = 4.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_born, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->distance_from_born = 50.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_min, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance_from_current_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_max, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->distance_from_current_max = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->probe_number_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->probe_number_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->probe_number_min, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->probe_number_min = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->probe_number_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->probe_number_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->probe_number_max, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->probe_number_max = 1;
  v1 = ((_BYTE)this + 44) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_double_ray >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->use_double_ray >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->use_double_ray, v1, v2);
  this->use_double_ray = 0;
  v3 = ((_BYTE)this + 45) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2465: range 000000000ED6AD60-000000000ED6ADCF
void __cdecl data::ConfigAISpacialProbeSetting::ConfigAISpacialProbeSetting(
        data::ConfigAISpacialProbeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialProbeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialProbeData::ConfigAISpacialProbeData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISpacialProbeData>::unordered_map(&this->specification);
};

// Line 2465: range 00000000110F3F5A-00000000110F4111
void __cdecl data::ConfigAISpacialProbeSetting::ConfigAISpacialProbeSetting(
        data::ConfigAISpacialProbeSetting *const this,
        const data::ConfigAISpacialProbeSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialProbeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 48LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 48LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.cd_max;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.cd_max = v3;
  v4 = *(_QWORD *)&a2->default_setting.distance_from_born;
  *(_QWORD *)&this->default_setting.terrain_offset_min = *(_QWORD *)&a2->default_setting.terrain_offset_min;
  *(_QWORD *)&this->default_setting.distance_from_born = v4;
  v5 = *(_QWORD *)&a2->default_setting.probe_number_max;
  *(_QWORD *)&this->default_setting.distance_from_current_max = *(_QWORD *)&a2->default_setting.distance_from_current_max;
  *(_QWORD *)&this->default_setting.probe_number_max = v5;
  std::unordered_map<int,data::ConfigAISpacialProbeData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2473: range 000000001130FA58-000000001130FAB7
void __cdecl data::ConfigAISpacialProbeSetting::~ConfigAISpacialProbeSetting(
        data::ConfigAISpacialProbeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialProbeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISpacialProbeData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2473: range 000000001130FAB8-000000001130FAE2
void __cdecl data::ConfigAISpacialProbeSetting::~ConfigAISpacialProbeSetting(
        data::ConfigAISpacialProbeSetting *const this)
{
  data::ConfigAISpacialProbeSetting::~ConfigAISpacialProbeSetting(this);
  operator delete(this, 0xC8uLL);
};

// Line 2478: range 0000000010097A1C-0000000010097A2C
const char *__cdecl data::ConfigAISpacialProbeSetting::getTypeName(const data::ConfigAISpacialProbeSetting *const this)
{
  return "ConfigAISpacialProbeSetting";
};

// Line 2479: range 0000000010097A2E-0000000010097BCA
int32_t __cdecl data::ConfigAISpacialProbeSetting::getHashNum(const data::ConfigAISpacialProbeSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISpacialProbeSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISpacialProbeSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2495: range 00000000110F43FA-00000000110F443B
void __cdecl data::ConfigAISpacialProbeSettingFactory::ConfigAISpacialProbeSettingFactory(
        data::ConfigAISpacialProbeSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialProbeSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISpacialProbeSettingFactory = v2;
};

// Line 2503: range 000000000ED6B18E-000000000ED6B2B5
void __cdecl data::ConfigAISpacialAdjustData::ConfigAISpacialAdjustData(data::ConfigAISpacialAdjustData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->ylow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ylow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ylow, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->ylow = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->yhigh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yhigh >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yhigh, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->yhigh = 4.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2535: range 000000000ED6B410-000000000ED6B47D
void __cdecl data::ConfigAISpacialAdjustSetting::ConfigAISpacialAdjustSetting(
        data::ConfigAISpacialAdjustSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialAdjustSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialAdjustData::ConfigAISpacialAdjustData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISpacialAdjustData>::unordered_map(&this->specification);
};

// Line 2535: range 00000000110F4744-00000000110F48D0
void __cdecl data::ConfigAISpacialAdjustSetting::ConfigAISpacialAdjustSetting(
        data::ConfigAISpacialAdjustSetting *const this,
        const data::ConfigAISpacialAdjustSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialAdjustSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 16LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 16LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.yhigh;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.yhigh = v3;
  std::unordered_map<int,data::ConfigAISpacialAdjustData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2543: range 000000001130F9CE-000000001130FA2B
void __cdecl data::ConfigAISpacialAdjustSetting::~ConfigAISpacialAdjustSetting(
        data::ConfigAISpacialAdjustSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialAdjustSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISpacialAdjustData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2543: range 000000001130FA2C-000000001130FA56
void __cdecl data::ConfigAISpacialAdjustSetting::~ConfigAISpacialAdjustSetting(
        data::ConfigAISpacialAdjustSetting *const this)
{
  data::ConfigAISpacialAdjustSetting::~ConfigAISpacialAdjustSetting(this);
  operator delete(this, 0xA8uLL);
};

// Line 2548: range 0000000010097BCC-0000000010097BDC
const char *__cdecl data::ConfigAISpacialAdjustSetting::getTypeName(
        const data::ConfigAISpacialAdjustSetting *const this)
{
  return "ConfigAISpacialAdjustSetting";
};

// Line 2549: range 0000000010097BDE-0000000010097D7A
int32_t __cdecl data::ConfigAISpacialAdjustSetting::getHashNum(const data::ConfigAISpacialAdjustSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISpacialAdjustSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISpacialAdjustSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2565: range 00000000110F4BBA-00000000110F4BFB
void __cdecl data::ConfigAISpacialAdjustSettingFactory::ConfigAISpacialAdjustSettingFactory(
        data::ConfigAISpacialAdjustSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialAdjustSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISpacialAdjustSettingFactory = v2;
};

// Line 2573: range 000000000ED6B82C-000000000ED6B891
void __cdecl data::ConfigAISpacialWanderConeWeightData::ConfigAISpacialWanderConeWeightData(
        data::ConfigAISpacialWanderConeWeightData *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned int>::vector(&this->normal_area_weight);
  std::vector<unsigned int>::vector(&this->edge_area_weight);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2573: range 000000001031CDB0-000000001031CE89
void __cdecl data::ConfigAISpacialWanderConeWeightData::ConfigAISpacialWanderConeWeightData(
        data::ConfigAISpacialWanderConeWeightData *const this,
        const data::ConfigAISpacialWanderConeWeightData *a2)
{
  data::UInt32List *p_edge_area_weight; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<unsigned int>::vector(&this->normal_area_weight, &a2->normal_area_weight);
  p_edge_area_weight = &a2->edge_area_weight;
  std::vector<unsigned int>::vector(&this->edge_area_weight, p_edge_area_weight);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_edge_area_weight, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_edge_area_weight) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_edge_area_weight, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2573: range 000000001010B94A-000000001010B974
void __cdecl data::ConfigAISpacialWanderConeWeightData::~ConfigAISpacialWanderConeWeightData(
        data::ConfigAISpacialWanderConeWeightData *const this)
{
  std::vector<unsigned int>::~vector(&this->edge_area_weight);
  std::vector<unsigned int>::~vector(&this->normal_area_weight);
};

// Line 2597: range 000000000ED6B892-000000000ED6BBFF
void __cdecl data::ConfigAISpacialWanderData::ConfigAISpacialWanderData(data::ConfigAISpacialWanderData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, v2);
  }
  this->turn_speed_override = -1.0;
  std::vector<std::string>::vector(&this->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_max, v2);
  }
  this->cd_max = 0.0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_min, v3);
  }
  this->cd_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->terrain_offset_min, v3);
  }
  this->terrain_offset_min = 2.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_max, v4);
  }
  this->terrain_offset_max = 4.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_from_born, v4);
  }
  this->distance_from_born = 50.0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_min, v5);
  }
  this->distance_from_current_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_from_current_max, v5);
  }
  this->distance_from_current_max = 10.0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_edge >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_edge >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_edge, v6);
  }
  this->distance_from_edge = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cone_angle_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cone_angle_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cone_angle_threshold, v6);
  }
  this->cone_angle_threshold = 20.0;
  data::ConfigAISpacialWanderConeWeightData::ConfigAISpacialWanderConeWeightData(&this->cone_weight);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2597: range 000000001031CE8A-000000001031D4E0
void __cdecl data::ConfigAISpacialWanderData::ConfigAISpacialWanderData(
        data::ConfigAISpacialWanderData *const this,
        const data::ConfigAISpacialWanderData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float turn_speed_override; // xmm0_4
  float cd_max; // xmm0_4
  float cd_min; // xmm0_4
  __int64 v7; // rsi
  float terrain_offset_min; // xmm0_4
  float terrain_offset_max; // xmm0_4
  __int64 v10; // rsi
  float distance_from_born; // xmm0_4
  float distance_from_current_min; // xmm0_4
  __int64 v13; // rsi
  float distance_from_current_max; // xmm0_4
  float distance_from_edge; // xmm0_4
  __int64 v16; // rsi
  float cone_angle_threshold; // xmm0_4
  data::ConfigAISpacialWanderConeWeightData *p_cone_weight; // rsi
  bool is_json_loaded; // cl
  char v20; // al
  const data::ConfigAISpacialWanderData *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v21->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->turn_speed_override);
  }
  turn_speed_override = v21->turn_speed_override;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = turn_speed_override;
  std::vector<std::string>::vector(&this->turning_states, &v21->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&v21->cd_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->cd_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->cd_max);
  }
  cd_max = v21->cd_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_max, &v21->turning_states);
  }
  this->cd_max = cd_max;
  if ( *(_BYTE *)(((unsigned __int64)&v21->cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->cd_min);
  }
  cd_min = v21->cd_min;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_min, v7);
  }
  this->cd_min = cd_min;
  if ( *(_BYTE *)(((unsigned __int64)&v21->terrain_offset_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->terrain_offset_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->terrain_offset_min);
  }
  terrain_offset_min = v21->terrain_offset_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->terrain_offset_min, v7);
  }
  this->terrain_offset_min = terrain_offset_min;
  if ( *(_BYTE *)(((unsigned __int64)&v21->terrain_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->terrain_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->terrain_offset_max);
  }
  terrain_offset_max = v21->terrain_offset_max;
  v10 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_max, v10);
  }
  this->terrain_offset_max = terrain_offset_max;
  if ( *(_BYTE *)(((unsigned __int64)&v21->distance_from_born >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->distance_from_born >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->distance_from_born);
  }
  distance_from_born = v21->distance_from_born;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_from_born >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_from_born, v10);
  }
  this->distance_from_born = distance_from_born;
  if ( *(_BYTE *)(((unsigned __int64)&v21->distance_from_current_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->distance_from_current_min >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->distance_from_current_min);
  }
  distance_from_current_min = v21->distance_from_current_min;
  v13 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_current_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_current_min, v13);
  }
  this->distance_from_current_min = distance_from_current_min;
  if ( *(_BYTE *)(((unsigned __int64)&v21->distance_from_current_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->distance_from_current_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->distance_from_current_max);
  }
  distance_from_current_max = v21->distance_from_current_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_from_current_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_from_current_max, v13);
  }
  this->distance_from_current_max = distance_from_current_max;
  if ( *(_BYTE *)(((unsigned __int64)&v21->distance_from_edge >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->distance_from_edge >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->distance_from_edge);
  }
  distance_from_edge = v21->distance_from_edge;
  v16 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_from_edge >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_from_edge >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_from_edge, v16);
  }
  this->distance_from_edge = distance_from_edge;
  if ( *(_BYTE *)(((unsigned __int64)&v21->cone_angle_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->cone_angle_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->cone_angle_threshold);
  }
  cone_angle_threshold = v21->cone_angle_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&this->cone_angle_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cone_angle_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cone_angle_threshold, v16);
  }
  this->cone_angle_threshold = cone_angle_threshold;
  p_cone_weight = &v21->cone_weight;
  data::ConfigAISpacialWanderConeWeightData::ConfigAISpacialWanderConeWeightData(&this->cone_weight, &v21->cone_weight);
  if ( *(char *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_json_loaded, p_cone_weight, &v21->is_json_loaded);
  is_json_loaded = v21->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_cone_weight) = v20 != 0;
    __asan_report_store1(&this->is_json_loaded, p_cone_weight, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2597: range 000000001010B976-000000001010B9A4
void __cdecl data::ConfigAISpacialWanderData::~ConfigAISpacialWanderData(data::ConfigAISpacialWanderData *const this)
{
  data::ConfigAISpacialWanderConeWeightData::~ConfigAISpacialWanderConeWeightData(&this->cone_weight);
  std::vector<std::string>::~vector(&this->turning_states);
};

// Line 2639: range 000000000ED6BD5A-000000000ED6BDC9
void __cdecl data::ConfigAISpacialWanderSetting::ConfigAISpacialWanderSetting(
        data::ConfigAISpacialWanderSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialWanderData::ConfigAISpacialWanderData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISpacialWanderData>::unordered_map(&this->specification);
};

// Line 2639: range 00000000110F4F04-00000000110F4FCF
void __cdecl data::ConfigAISpacialWanderSetting::ConfigAISpacialWanderSetting(
        data::ConfigAISpacialWanderSetting *const this,
        const data::ConfigAISpacialWanderSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialWanderData::ConfigAISpacialWanderData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAISpacialWanderData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2647: range 000000001130F9A2-000000001130F9CC
void __cdecl data::ConfigAISpacialWanderSetting::~ConfigAISpacialWanderSetting(
        data::ConfigAISpacialWanderSetting *const this)
{
  data::ConfigAISpacialWanderSetting::~ConfigAISpacialWanderSetting(this);
  operator delete(this, 0x120uLL);
};

// Line 2647: range 000000001130F932-000000001130F9A1
void __cdecl data::ConfigAISpacialWanderSetting::~ConfigAISpacialWanderSetting(
        data::ConfigAISpacialWanderSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialWanderSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISpacialWanderData>::~unordered_map(&this->specification);
  data::ConfigAISpacialWanderData::~ConfigAISpacialWanderData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 2652: range 0000000010097D7C-0000000010097D8C
const char *__cdecl data::ConfigAISpacialWanderSetting::getTypeName(
        const data::ConfigAISpacialWanderSetting *const this)
{
  return "ConfigAISpacialWanderSetting";
};

// Line 2653: range 0000000010097D8E-0000000010097F2A
int32_t __cdecl data::ConfigAISpacialWanderSetting::getHashNum(const data::ConfigAISpacialWanderSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISpacialWanderSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISpacialWanderSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2669: range 00000000110F52B8-00000000110F52F9
void __cdecl data::ConfigAISpacialWanderSettingFactory::ConfigAISpacialWanderSettingFactory(
        data::ConfigAISpacialWanderSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialWanderSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISpacialWanderSettingFactory = v2;
};

// Line 2677: range 000000000ED6C184-000000000ED6C25F
void __cdecl data::ConfigAIBirdCirclingData::ConfigAIBirdCirclingData(data::ConfigAIBirdCirclingData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->radius = 20.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2708: range 000000000ED6C3BA-000000000ED6C427
void __cdecl data::ConfigAIBirdCirclingSetting::ConfigAIBirdCirclingSetting(
        data::ConfigAIBirdCirclingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBirdCirclingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIBirdCirclingData::ConfigAIBirdCirclingData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIBirdCirclingData>::unordered_map(&this->specification);
};

// Line 2708: range 00000000110F5602-00000000110F578C
void __cdecl data::ConfigAIBirdCirclingSetting::ConfigAIBirdCirclingSetting(
        data::ConfigAIBirdCirclingSetting *const this,
        const data::ConfigAIBirdCirclingSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBirdCirclingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 12LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 12LL);
  }
  this->default_setting = a2->default_setting;
  std::unordered_map<int,data::ConfigAIBirdCirclingData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2716: range 000000001130F906-000000001130F930
void __cdecl data::ConfigAIBirdCirclingSetting::~ConfigAIBirdCirclingSetting(
        data::ConfigAIBirdCirclingSetting *const this)
{
  data::ConfigAIBirdCirclingSetting::~ConfigAIBirdCirclingSetting(this);
  operator delete(this, 0xA0uLL);
};

// Line 2716: range 000000001130F8A8-000000001130F905
void __cdecl data::ConfigAIBirdCirclingSetting::~ConfigAIBirdCirclingSetting(
        data::ConfigAIBirdCirclingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBirdCirclingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIBirdCirclingData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2721: range 0000000010097F2C-0000000010097F3C
const char *__cdecl data::ConfigAIBirdCirclingSetting::getTypeName(const data::ConfigAIBirdCirclingSetting *const this)
{
  return "ConfigAIBirdCirclingSetting";
};

// Line 2722: range 0000000010097F3E-00000000100980DA
int32_t __cdecl data::ConfigAIBirdCirclingSetting::getHashNum(const data::ConfigAIBirdCirclingSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIBirdCirclingSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIBirdCirclingSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2738: range 00000000110F5A76-00000000110F5AB7
void __cdecl data::ConfigAIBirdCirclingSettingFactory::ConfigAIBirdCirclingSettingFactory(
        data::ConfigAIBirdCirclingSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBirdCirclingSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIBirdCirclingSettingFactory = v2;
};

// Line 2746: range 000000000ED6C7E2-000000000ED6C8F1
void __cdecl data::ConfigAIScriptedMoveToData::ConfigAIScriptedMoveToData(data::ConfigAIScriptedMoveToData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is3_d >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is3_d >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is3_d, v1, v2);
  this->is3_d = 0;
  v3 = ((_BYTE)this + 5) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->stop_by_obstacle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->stop_by_obstacle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->stop_by_obstacle, v3, v4);
  this->stop_by_obstacle = 0;
  v5 = ((_BYTE)this + 6) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 2778: range 000000000ED6CA4C-000000000ED6CAB9
void __cdecl data::ConfigAIScriptedMoveToSetting::ConfigAIScriptedMoveToSetting(
        data::ConfigAIScriptedMoveToSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIScriptedMoveToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIScriptedMoveToData::ConfigAIScriptedMoveToData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIScriptedMoveToData>::unordered_map(&this->specification);
};

// Line 2778: range 00000000110F5DC0-00000000110F5F44
void __cdecl data::ConfigAIScriptedMoveToSetting::ConfigAIScriptedMoveToSetting(
        data::ConfigAIScriptedMoveToSetting *const this,
        const data::ConfigAIScriptedMoveToSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIScriptedMoveToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 8LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 8LL);
  }
  this->default_setting = a2->default_setting;
  std::unordered_map<int,data::ConfigAIScriptedMoveToData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2786: range 000000001130F81E-000000001130F87B
void __cdecl data::ConfigAIScriptedMoveToSetting::~ConfigAIScriptedMoveToSetting(
        data::ConfigAIScriptedMoveToSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIScriptedMoveToSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIScriptedMoveToData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2786: range 000000001130F87C-000000001130F8A6
void __cdecl data::ConfigAIScriptedMoveToSetting::~ConfigAIScriptedMoveToSetting(
        data::ConfigAIScriptedMoveToSetting *const this)
{
  data::ConfigAIScriptedMoveToSetting::~ConfigAIScriptedMoveToSetting(this);
  operator delete(this, 0xA0uLL);
};

// Line 2791: range 00000000100980DC-00000000100980EC
const char *__cdecl data::ConfigAIScriptedMoveToSetting::getTypeName(
        const data::ConfigAIScriptedMoveToSetting *const this)
{
  return "ConfigAIScriptedMoveToSetting";
};

// Line 2792: range 00000000100980EE-000000001009828A
int32_t __cdecl data::ConfigAIScriptedMoveToSetting::getHashNum(const data::ConfigAIScriptedMoveToSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIScriptedMoveToSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIScriptedMoveToSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2808: range 00000000110F622E-00000000110F626F
void __cdecl data::ConfigAIScriptedMoveToSettingFactory::ConfigAIScriptedMoveToSettingFactory(
        data::ConfigAIScriptedMoveToSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIScriptedMoveToSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIScriptedMoveToSettingFactory = v2;
};

// Line 2816: range 000000000ED6CE74-000000000ED6CFE7
void __cdecl data::ConfigAILandingData::ConfigAILandingData(data::ConfigAILandingData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->landing_angle_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->landing_angle_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->landing_angle_max, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->landing_angle_max = 65.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->landing_angle_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->landing_angle_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->landing_angle_min, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->landing_angle_min = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->landing_terrain_altitude >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->landing_terrain_altitude >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->landing_terrain_altitude, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->landing_terrain_altitude = 3.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2849: range 000000000ED6D142-000000000ED6D1AF
void __cdecl data::ConfigAILandingSetting::ConfigAILandingSetting(data::ConfigAILandingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAILandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAILandingData::ConfigAILandingData(&this->default_setting);
  std::unordered_map<int,data::ConfigAILandingData>::unordered_map(&this->specification);
};

// Line 2849: range 00000000110F6578-00000000110F670A
void __cdecl data::ConfigAILandingSetting::ConfigAILandingSetting(
        data::ConfigAILandingSetting *const this,
        const data::ConfigAILandingSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAILandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 20LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 20LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.landing_angle_min;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.landing_angle_min = v3;
  *(_DWORD *)&this->default_setting.is_json_loaded = *(_DWORD *)&a2->default_setting.is_json_loaded;
  std::unordered_map<int,data::ConfigAILandingData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2857: range 000000001130F7F2-000000001130F81C
void __cdecl data::ConfigAILandingSetting::~ConfigAILandingSetting(data::ConfigAILandingSetting *const this)
{
  data::ConfigAILandingSetting::~ConfigAILandingSetting(this);
  operator delete(this, 0xA8uLL);
};

// Line 2857: range 000000001130F794-000000001130F7F1
void __cdecl data::ConfigAILandingSetting::~ConfigAILandingSetting(data::ConfigAILandingSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAILandingSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAILandingData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2862: range 000000001009828C-000000001009829C
const char *__cdecl data::ConfigAILandingSetting::getTypeName(const data::ConfigAILandingSetting *const this)
{
  return "ConfigAILandingSetting";
};

// Line 2863: range 000000001009829E-000000001009843A
int32_t __cdecl data::ConfigAILandingSetting::getHashNum(const data::ConfigAILandingSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAILandingSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAILandingSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2879: range 00000000110F69F4-00000000110F6A35
void __cdecl data::ConfigAILandingSettingFactory::ConfigAILandingSettingFactory(
        data::ConfigAILandingSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAILandingSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAILandingSettingFactory = v2;
};

// Line 2887: range 000000000ED6D55E-000000000ED6D769
void __cdecl data::ConfigAIExtractionData::ConfigAIExtractionData(data::ConfigAIExtractionData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->extraction_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extraction_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extraction_distance, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->extraction_distance = 30.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extraction_angle_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extraction_angle_max >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extraction_angle_max, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->extraction_angle_max = 30.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extraction_angle_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extraction_angle_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extraction_angle_min, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->extraction_angle_min = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_distance, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->trigger_distance = 200.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_self_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_self_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_self_time, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->kill_self_time = -1.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2922: range 000000000ED6D8C4-000000000ED6D931
void __cdecl data::ConfigAIExtractionSetting::ConfigAIExtractionSetting(data::ConfigAIExtractionSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIExtractionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIExtractionData::ConfigAIExtractionData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIExtractionData>::unordered_map(&this->specification);
};

// Line 2922: range 00000000110F6D3E-00000000110F6ED8
void __cdecl data::ConfigAIExtractionSetting::ConfigAIExtractionSetting(
        data::ConfigAIExtractionSetting *const this,
        const data::ConfigAIExtractionSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIExtractionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 28LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 28LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.extraction_angle_max;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.extraction_angle_max = v3;
  *(_QWORD *)&this->default_setting.trigger_distance = *(_QWORD *)&a2->default_setting.trigger_distance;
  *(_DWORD *)&this->default_setting.is_json_loaded = *(_DWORD *)&a2->default_setting.is_json_loaded;
  std::unordered_map<int,data::ConfigAIExtractionData>::unordered_map(&this->specification, &a2->specification);
};

// Line 2930: range 000000001130F70A-000000001130F767
void __cdecl data::ConfigAIExtractionSetting::~ConfigAIExtractionSetting(data::ConfigAIExtractionSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIExtractionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIExtractionData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 2930: range 000000001130F768-000000001130F792
void __cdecl data::ConfigAIExtractionSetting::~ConfigAIExtractionSetting(data::ConfigAIExtractionSetting *const this)
{
  data::ConfigAIExtractionSetting::~ConfigAIExtractionSetting(this);
  operator delete(this, 0xB0uLL);
};

// Line 2935: range 000000001009843C-000000001009844C
const char *__cdecl data::ConfigAIExtractionSetting::getTypeName(const data::ConfigAIExtractionSetting *const this)
{
  return "ConfigAIExtractionSetting";
};

// Line 2936: range 000000001009844E-00000000100985EA
int32_t __cdecl data::ConfigAIExtractionSetting::getHashNum(const data::ConfigAIExtractionSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIExtractionSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIExtractionSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2952: range 00000000110F71C2-00000000110F7203
void __cdecl data::ConfigAIExtractionSettingFactory::ConfigAIExtractionSettingFactory(
        data::ConfigAIExtractionSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIExtractionSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIExtractionSettingFactory = v2;
};

// Line 2960: range 000000000ED6DCE6-000000000ED6DFBD
void __cdecl data::ConfigAIBrownianMotionData::ConfigAIBrownianMotionData(data::ConfigAIBrownianMotionData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_cd_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_cd_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_cd_min, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->move_cd_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_cd_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_cd_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_cd_max, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->move_cd_max = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->terrain_offset_min = 1.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_offset_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_offset_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->terrain_offset_max = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->motion_radius, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->motion_radius = 2.0;
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->recalc_center_on_leave_current_zone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->recalc_center_on_leave_current_zone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->recalc_center_on_leave_current_zone, v1, v2);
  this->recalc_center_on_leave_current_zone = 0;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->recalc_center_on_attach_pos_change >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->recalc_center_on_attach_pos_change >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->recalc_center_on_attach_pos_change, v3, v4);
  this->recalc_center_on_attach_pos_change = 1;
  v5 = ((_BYTE)this + 30) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 2998: range 000000000ED6E118-000000000ED6E185
void __cdecl data::ConfigAIBrownianMotionSetting::ConfigAIBrownianMotionSetting(
        data::ConfigAIBrownianMotionSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBrownianMotionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIBrownianMotionData::ConfigAIBrownianMotionData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIBrownianMotionData>::unordered_map(&this->specification);
};

// Line 2998: range 00000000110F750C-00000000110F76A8
void __cdecl data::ConfigAIBrownianMotionSetting::ConfigAIBrownianMotionSetting(
        data::ConfigAIBrownianMotionSetting *const this,
        const data::ConfigAIBrownianMotionSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBrownianMotionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 1) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 32LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 1) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 32LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.move_cd_min;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.move_cd_min = v3;
  v4 = *(_QWORD *)&a2->default_setting.motion_radius;
  *(_QWORD *)&this->default_setting.terrain_offset_min = *(_QWORD *)&a2->default_setting.terrain_offset_min;
  *(_QWORD *)&this->default_setting.motion_radius = v4;
  std::unordered_map<int,data::ConfigAIBrownianMotionData>::unordered_map(&this->specification, &a2->specification);
};

// Line 3006: range 000000001130F680-000000001130F6DD
void __cdecl data::ConfigAIBrownianMotionSetting::~ConfigAIBrownianMotionSetting(
        data::ConfigAIBrownianMotionSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBrownianMotionSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIBrownianMotionData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 3006: range 000000001130F6DE-000000001130F708
void __cdecl data::ConfigAIBrownianMotionSetting::~ConfigAIBrownianMotionSetting(
        data::ConfigAIBrownianMotionSetting *const this)
{
  data::ConfigAIBrownianMotionSetting::~ConfigAIBrownianMotionSetting(this);
  operator delete(this, 0xB8uLL);
};

// Line 3011: range 00000000100985EC-00000000100985FC
const char *__cdecl data::ConfigAIBrownianMotionSetting::getTypeName(
        const data::ConfigAIBrownianMotionSetting *const this)
{
  return "ConfigAIBrownianMotionSetting";
};

// Line 3012: range 00000000100985FE-000000001009879A
int32_t __cdecl data::ConfigAIBrownianMotionSetting::getHashNum(const data::ConfigAIBrownianMotionSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIBrownianMotionSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIBrownianMotionSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3028: range 00000000110F7992-00000000110F79D3
void __cdecl data::ConfigAIBrownianMotionSettingFactory::ConfigAIBrownianMotionSettingFactory(
        data::ConfigAIBrownianMotionSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIBrownianMotionSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIBrownianMotionSettingFactory = v2;
};

// Line 3036: range 000000000ED6FDBA-000000000ED6FE95
void __cdecl data::ConfigAIFishingBitesBaitData::ConfigAIFishingBitesBaitData(
        data::ConfigAIFishingBitesBaitData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3067: range 000000000ED6FFF0-000000000ED7005D
void __cdecl data::ConfigAIFishingBitesBaitSetting::ConfigAIFishingBitesBaitSetting(
        data::ConfigAIFishingBitesBaitSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingBitesBaitSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFishingBitesBaitData::ConfigAIFishingBitesBaitData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFishingBitesBaitData>::unordered_map(&this->specification);
};

// Line 3067: range 00000000110F7CDC-00000000110F7E66
void __cdecl data::ConfigAIFishingBitesBaitSetting::ConfigAIFishingBitesBaitSetting(
        data::ConfigAIFishingBitesBaitSetting *const this,
        const data::ConfigAIFishingBitesBaitSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingBitesBaitSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 12LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 12LL);
  }
  this->default_setting = a2->default_setting;
  std::unordered_map<int,data::ConfigAIFishingBitesBaitData>::unordered_map(&this->specification, &a2->specification);
};

// Line 3075: range 000000001130F5F6-000000001130F653
void __cdecl data::ConfigAIFishingBitesBaitSetting::~ConfigAIFishingBitesBaitSetting(
        data::ConfigAIFishingBitesBaitSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingBitesBaitSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFishingBitesBaitData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 3075: range 000000001130F654-000000001130F67E
void __cdecl data::ConfigAIFishingBitesBaitSetting::~ConfigAIFishingBitesBaitSetting(
        data::ConfigAIFishingBitesBaitSetting *const this)
{
  data::ConfigAIFishingBitesBaitSetting::~ConfigAIFishingBitesBaitSetting(this);
  operator delete(this, 0xA0uLL);
};

// Line 3080: range 000000001009879C-00000000100987AC
const char *__cdecl data::ConfigAIFishingBitesBaitSetting::getTypeName(
        const data::ConfigAIFishingBitesBaitSetting *const this)
{
  return "ConfigAIFishingBitesBaitSetting";
};

// Line 3081: range 00000000100987AE-000000001009894A
int32_t __cdecl data::ConfigAIFishingBitesBaitSetting::getHashNum(
        const data::ConfigAIFishingBitesBaitSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFishingBitesBaitSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFishingBitesBaitSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3097: range 00000000110F8150-00000000110F8191
void __cdecl data::ConfigAIFishingBitesBaitSettingFactory::ConfigAIFishingBitesBaitSettingFactory(
        data::ConfigAIFishingBitesBaitSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingBitesBaitSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFishingBitesBaitSettingFactory = v2;
};

// Line 3105: range 000000000ED70418-000000000ED705D7
void __cdecl data::ConfigAIFishingPretendBitesData::ConfigAIFishingPretendBitesData(
        data::ConfigAIFishingPretendBitesData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_pretend_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_pretend_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_pretend_distance, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->min_pretend_distance = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_pretend_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_pretend_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_pretend_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->max_pretend_distance = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->cd = 10.0;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3139: range 000000000ED70732-000000000ED7079F
void __cdecl data::ConfigAIFishingPretendBitesSetting::ConfigAIFishingPretendBitesSetting(
        data::ConfigAIFishingPretendBitesSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingPretendBitesSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFishingPretendBitesData::ConfigAIFishingPretendBitesData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFishingPretendBitesData>::unordered_map(&this->specification);
};

// Line 3139: range 00000000110F849A-00000000110F862E
void __cdecl data::ConfigAIFishingPretendBitesSetting::ConfigAIFishingPretendBitesSetting(
        data::ConfigAIFishingPretendBitesSetting *const this,
        const data::ConfigAIFishingPretendBitesSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingPretendBitesSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 24LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 24LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.min_pretend_distance;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.min_pretend_distance = v3;
  *(_QWORD *)&this->default_setting.cd = *(_QWORD *)&a2->default_setting.cd;
  std::unordered_map<int,data::ConfigAIFishingPretendBitesData>::unordered_map(&this->specification, &a2->specification);
};

// Line 3147: range 000000001130F5CA-000000001130F5F4
void __cdecl data::ConfigAIFishingPretendBitesSetting::~ConfigAIFishingPretendBitesSetting(
        data::ConfigAIFishingPretendBitesSetting *const this)
{
  data::ConfigAIFishingPretendBitesSetting::~ConfigAIFishingPretendBitesSetting(this);
  operator delete(this, 0xB0uLL);
};

// Line 3147: range 000000001130F56C-000000001130F5C9
void __cdecl data::ConfigAIFishingPretendBitesSetting::~ConfigAIFishingPretendBitesSetting(
        data::ConfigAIFishingPretendBitesSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingPretendBitesSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFishingPretendBitesData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 3152: range 000000001009894C-000000001009895C
const char *__cdecl data::ConfigAIFishingPretendBitesSetting::getTypeName(
        const data::ConfigAIFishingPretendBitesSetting *const this)
{
  return "ConfigAIFishingPretendBitesSetting";
};

// Line 3153: range 000000001009895E-0000000010098AFA
int32_t __cdecl data::ConfigAIFishingPretendBitesSetting::getHashNum(
        const data::ConfigAIFishingPretendBitesSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFishingPretendBitesSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFishingPretendBitesSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3169: range 00000000110F8918-00000000110F8959
void __cdecl data::ConfigAIFishingPretendBitesSettingFactory::ConfigAIFishingPretendBitesSettingFactory(
        data::ConfigAIFishingPretendBitesSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingPretendBitesSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFishingPretendBitesSettingFactory = v2;
};

// Line 3177: range 000000000ED70B54-000000000ED70E1F
void __cdecl data::ConfigAIFishingFleeData::ConfigAIFishingFleeData(data::ConfigAIFishingFleeData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->turn_speed_override = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_angle, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->flee_angle = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->flee_duration = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->flee_distance_min = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_distance_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_distance_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->flee_distance_max = 30.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->turn_to_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->turn_to_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->turn_to_target, v1, v2);
  this->turn_to_target = 0;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->restricted_by_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->restricted_by_defend_area, v3, v4);
  this->restricted_by_defend_area = 0;
  v5 = ((_BYTE)this + 26) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->expand_flee_angle_when_blocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->expand_flee_angle_when_blocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->expand_flee_angle_when_blocked, v5, v6);
  this->expand_flee_angle_when_blocked = 1;
  v7 = ((_BYTE)this + 27) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 3215: range 000000000ED70F7A-000000000ED70FE7
void __cdecl data::ConfigAIFishingFleeSetting::ConfigAIFishingFleeSetting(data::ConfigAIFishingFleeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIFishingFleeData::ConfigAIFishingFleeData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIFishingFleeData>::unordered_map(&this->specification);
};

// Line 3215: range 00000000110F8C62-00000000110F8DFC
void __cdecl data::ConfigAIFishingFleeSetting::ConfigAIFishingFleeSetting(
        data::ConfigAIFishingFleeSetting *const this,
        const data::ConfigAIFishingFleeSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->default_setting.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting.is_json_loaded >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 28LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&a2->default_setting.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting.is_json_loaded >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 28LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.flee_angle;
  *(_QWORD *)&this->default_setting.speed_level = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.flee_angle = v3;
  *(_QWORD *)&this->default_setting.flee_distance_min = *(_QWORD *)&a2->default_setting.flee_distance_min;
  *(_DWORD *)&this->default_setting.turn_to_target = *(_DWORD *)&a2->default_setting.turn_to_target;
  std::unordered_map<int,data::ConfigAIFishingFleeData>::unordered_map(&this->specification, &a2->specification);
};

// Line 3223: range 000000001130F540-000000001130F56A
void __cdecl data::ConfigAIFishingFleeSetting::~ConfigAIFishingFleeSetting(
        data::ConfigAIFishingFleeSetting *const this)
{
  data::ConfigAIFishingFleeSetting::~ConfigAIFishingFleeSetting(this);
  operator delete(this, 0xB0uLL);
};

// Line 3223: range 000000001130F4E2-000000001130F53F
void __cdecl data::ConfigAIFishingFleeSetting::~ConfigAIFishingFleeSetting(
        data::ConfigAIFishingFleeSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingFleeSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIFishingFleeData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 3228: range 0000000010098AFC-0000000010098B0C
const char *__cdecl data::ConfigAIFishingFleeSetting::getTypeName(const data::ConfigAIFishingFleeSetting *const this)
{
  return "ConfigAIFishingFleeSetting";
};

// Line 3229: range 0000000010098B0E-0000000010098CAA
int32_t __cdecl data::ConfigAIFishingFleeSetting::getHashNum(const data::ConfigAIFishingFleeSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIFishingFleeSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIFishingFleeSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3245: range 00000000110F90E6-00000000110F9127
void __cdecl data::ConfigAIFishingFleeSettingFactory::ConfigAIFishingFleeSettingFactory(
        data::ConfigAIFishingFleeSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIFishingFleeSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIFishingFleeSettingFactory = v2;
};

// Line 3253: range 000000000ED6E6B8-000000000ED6ECA5
void __cdecl data::ConfigAISpacialFacingMoveProbability::ConfigAISpacialFacingMoveProbability(
        data::ConfigAISpacialFacingMoveProbability *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->stop = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->forward = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->right = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->up = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->forward_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_max, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->forward_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_min, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->back_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_max, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->back_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right_min, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->right_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right_max, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->right_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left_min, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->left_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left_max, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->left_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_min, (((_BYTE)this + 48) & 7u) + 3);
  }
  this->up_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_max, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->up_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->down_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->down_min, (((_BYTE)this + 56) & 7u) + 3);
  }
  this->down_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->down_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->down_max, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->down_max = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 64) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_height, (((_BYTE)this + 64) & 7u) + 3);
  }
  this->best_height = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_height, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->min_height = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 72) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_height, (((_BYTE)this + 72) & 7u) + 3);
  }
  this->max_height = 3.0;
  v1 = ((_BYTE)this + 76) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3294: range 000000000ED6E546-000000000ED6E6B7
void __cdecl data::ConfigAIRangeXZ_Y::ConfigAIRangeXZ_Y(data::ConfigAIRangeXZ_Y *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->xz_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->xz_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->xz_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->xz_max, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->xz_max = 99.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymin, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->ymin = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymax, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->ymax = 99.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3320: range 000000001010F974-000000001010FAED
void __cdecl data::ConfigAIAngleXZ_Y::ConfigAIAngleXZ_Y(data::ConfigAIAngleXZ_Y *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->xz_min = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->xz_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->xz_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->xz_max, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->xz_max = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymin, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->ymin = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymax, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->ymax = -1.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3346: range 000000000ED6ECA6-000000000ED6F10A
void __cdecl data::ConfigAISpacialFacingMoveData::ConfigAISpacialFacingMoveData(
        data::ConfigAISpacialFacingMoveData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->speed_level = 1;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->range_radius_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->range_radius_min, v2);
  }
  this->range_radius_min = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range_radius_max, v2);
  }
  this->range_radius_max = 99.0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->range_xz__ylimit_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->range_xz__ylimit_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->range_xz__ylimit_enable, v3, v4);
  this->range_xz__ylimit_enable = 0;
  data::ConfigAIRangeXZ_Y::ConfigAIRangeXZ_Y(&this->range_limit_xz__y);
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_min, v5);
  }
  this->rest_time_min = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rest_time_max, v5);
  }
  this->rest_time_max = 2.0;
  v6 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->facing_move_turn_interval, v6);
  }
  this->facing_move_turn_interval = 0.80000001;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->facing_move_min_avoidance_velecity, v6);
  }
  this->facing_move_min_avoidance_velecity = 0.375;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_detect_range, v7);
  }
  this->obstacle_detect_range = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_up_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->obstacle_up_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->obstacle_up_range, v7);
  }
  this->obstacle_up_range = 2.0;
  v8 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_max_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_max_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_max_angle, v8);
  }
  this->obstacle_max_angle = 120.0;
  data::ConfigAISpacialFacingMoveProbability::ConfigAISpacialFacingMoveProbability(&this->spacial_facing_move_probability);
  std::vector<data::ConfigAIRaycastCondition>::vector(&this->can_start_range_by_raycast);
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_run >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_run >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_speed_override_in_run, v8);
  }
  this->turn_speed_override_in_run = -1.0;
  v9 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_idle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_idle >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_in_idle, v9);
  }
  this->turn_speed_override_in_idle = -1.0;
  if ( *(char *)(((unsigned __int64)&this->use_aniamtor_velocity_in_idle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_aniamtor_velocity_in_idle, v9, &this->use_aniamtor_velocity_in_idle);
  this->use_aniamtor_velocity_in_idle = 0;
  v10 = ((_BYTE)this - 79) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v10, v11);
  this->is_json_loaded = 0;
};

// Line 3346: range 000000001032751A-0000000010327F05
void __cdecl data::ConfigAISpacialFacingMoveData::ConfigAISpacialFacingMoveData(
        data::ConfigAISpacialFacingMoveData *const this,
        const data::ConfigAISpacialFacingMoveData *a2)
{
  int32_t speed_level; // ecx
  char v3; // al
  float range_radius_min; // xmm0_4
  __int64 v5; // rsi
  float range_radius_max; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool range_xz__ylimit_enable; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rdx
  float rest_time_min; // xmm0_4
  __int64 v14; // rsi
  float rest_time_max; // xmm0_4
  float facing_move_turn_interval; // xmm0_4
  __int64 v17; // rsi
  float facing_move_min_avoidance_velecity; // xmm0_4
  float obstacle_detect_range; // xmm0_4
  __int64 v20; // rsi
  float obstacle_up_range; // xmm0_4
  float obstacle_max_angle; // xmm0_4
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  float turn_speed_override_in_run; // xmm0_4
  float turn_speed_override_in_idle; // xmm0_4
  __int64 v30; // rsi
  bool use_aniamtor_velocity_in_idle; // cl
  char v32; // al
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool is_json_loaded; // cl
  char v36; // dl
  __int64 v37; // rdx
  const data::ConfigAISpacialFacingMoveData *v38; // [rsp+0h] [rbp-20h]

  v38 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  speed_level = a2->speed_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v38->range_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->range_radius_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->range_radius_min);
  }
  range_radius_min = v38->range_radius_min;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_radius_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->range_radius_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->range_radius_min, v5);
  }
  this->range_radius_min = range_radius_min;
  if ( *(_BYTE *)(((unsigned __int64)&v38->range_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->range_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->range_radius_max);
  }
  range_radius_max = v38->range_radius_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_radius_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_radius_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range_radius_max, v5);
  }
  this->range_radius_max = range_radius_max;
  v7 = ((_BYTE)v38 + 12) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v38->range_xz__ylimit_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v38->range_xz__ylimit_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v38->range_xz__ylimit_enable, v7, v8);
  range_xz__ylimit_enable = v38->range_xz__ylimit_enable;
  v10 = *(_BYTE *)(((unsigned __int64)&this->range_xz__ylimit_enable >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->range_xz__ylimit_enable, v7, v11);
  this->range_xz__ylimit_enable = range_xz__ylimit_enable;
  if ( *(char *)(((unsigned __int64)&this->range_limit_xz__y >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->range_limit_xz__y.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->range_limit_xz__y.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->range_limit_xz__y, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&v38->range_limit_xz__y >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v38->range_limit_xz__y.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v38 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v38->range_limit_xz__y.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v38->range_limit_xz__y, 20LL);
  }
  v12 = *(_QWORD *)&v38->range_limit_xz__y.ymin;
  *(_QWORD *)&this->range_limit_xz__y.xz_min = *(_QWORD *)&v38->range_limit_xz__y.xz_min;
  *(_QWORD *)&this->range_limit_xz__y.ymin = v12;
  *(_DWORD *)&this->range_limit_xz__y.is_json_loaded = *(_DWORD *)&v38->range_limit_xz__y.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->rest_time_min);
  }
  rest_time_min = v38->rest_time_min;
  v14 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_time_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_time_min, v14);
  }
  this->rest_time_min = rest_time_min;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->rest_time_max);
  }
  rest_time_max = v38->rest_time_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rest_time_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rest_time_max, v14);
  }
  this->rest_time_max = rest_time_max;
  if ( *(_BYTE *)(((unsigned __int64)&v38->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->facing_move_turn_interval >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->facing_move_turn_interval);
  }
  facing_move_turn_interval = v38->facing_move_turn_interval;
  v17 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->facing_move_turn_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->facing_move_turn_interval, v17);
  }
  this->facing_move_turn_interval = facing_move_turn_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v38->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->facing_move_min_avoidance_velecity);
  }
  facing_move_min_avoidance_velecity = v38->facing_move_min_avoidance_velecity;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->facing_move_min_avoidance_velecity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->facing_move_min_avoidance_velecity, v17);
  }
  this->facing_move_min_avoidance_velecity = facing_move_min_avoidance_velecity;
  if ( *(_BYTE *)(((unsigned __int64)&v38->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->obstacle_detect_range >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->obstacle_detect_range);
  }
  obstacle_detect_range = v38->obstacle_detect_range;
  v20 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_detect_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_detect_range, v20);
  }
  this->obstacle_detect_range = obstacle_detect_range;
  if ( *(_BYTE *)(((unsigned __int64)&v38->obstacle_up_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->obstacle_up_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->obstacle_up_range);
  }
  obstacle_up_range = v38->obstacle_up_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_up_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->obstacle_up_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->obstacle_up_range, v20);
  }
  this->obstacle_up_range = obstacle_up_range;
  if ( *(_BYTE *)(((unsigned __int64)&v38->obstacle_max_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->obstacle_max_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->obstacle_max_angle);
  }
  obstacle_max_angle = v38->obstacle_max_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_max_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obstacle_max_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obstacle_max_angle, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->obstacle_max_angle = obstacle_max_angle;
  if ( *(char *)(((unsigned __int64)&this->spacial_facing_move_probability >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->spacial_facing_move_probability.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 113) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->spacial_facing_move_probability.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spacial_facing_move_probability, 80LL);
  }
  if ( *(char *)(((unsigned __int64)&v38->spacial_facing_move_probability >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v38->spacial_facing_move_probability.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v38 - 113) & 7) >= *(_BYTE *)(((unsigned __int64)(&v38->spacial_facing_move_probability.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v38->spacial_facing_move_probability, 80LL);
  }
  v23 = *(_QWORD *)&v38->spacial_facing_move_probability.right;
  *(_QWORD *)&this->spacial_facing_move_probability.stop = *(_QWORD *)&v38->spacial_facing_move_probability.stop;
  *(_QWORD *)&this->spacial_facing_move_probability.right = v23;
  v24 = *(_QWORD *)&v38->spacial_facing_move_probability.back_min;
  *(_QWORD *)&this->spacial_facing_move_probability.forward_min = *(_QWORD *)&v38->spacial_facing_move_probability.forward_min;
  *(_QWORD *)&this->spacial_facing_move_probability.back_min = v24;
  v25 = *(_QWORD *)&v38->spacial_facing_move_probability.left_min;
  *(_QWORD *)&this->spacial_facing_move_probability.right_min = *(_QWORD *)&v38->spacial_facing_move_probability.right_min;
  *(_QWORD *)&this->spacial_facing_move_probability.left_min = v25;
  v26 = *(_QWORD *)&v38->spacial_facing_move_probability.down_min;
  *(_QWORD *)&this->spacial_facing_move_probability.up_min = *(_QWORD *)&v38->spacial_facing_move_probability.up_min;
  *(_QWORD *)&this->spacial_facing_move_probability.down_min = v26;
  v27 = *(_QWORD *)&v38->spacial_facing_move_probability.max_height;
  *(_QWORD *)&this->spacial_facing_move_probability.best_height = *(_QWORD *)&v38->spacial_facing_move_probability.best_height;
  *(_QWORD *)&this->spacial_facing_move_probability.max_height = v27;
  std::vector<data::ConfigAIRaycastCondition>::vector(
    &this->can_start_range_by_raycast,
    &v38->can_start_range_by_raycast);
  if ( *(_BYTE *)(((unsigned __int64)&v38->turn_speed_override_in_run >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->turn_speed_override_in_run >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->turn_speed_override_in_run);
  }
  turn_speed_override_in_run = v38->turn_speed_override_in_run;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_run >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_run >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_speed_override_in_run, &v38->can_start_range_by_raycast);
  }
  this->turn_speed_override_in_run = turn_speed_override_in_run;
  if ( *(_BYTE *)(((unsigned __int64)&v38->turn_speed_override_in_idle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->turn_speed_override_in_idle >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->turn_speed_override_in_idle);
  }
  turn_speed_override_in_idle = v38->turn_speed_override_in_idle;
  v30 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_idle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_speed_override_in_idle >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_speed_override_in_idle, v30);
  }
  this->turn_speed_override_in_idle = turn_speed_override_in_idle;
  if ( *(char *)(((unsigned __int64)&v38->use_aniamtor_velocity_in_idle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->use_aniamtor_velocity_in_idle, v30, &v38->use_aniamtor_velocity_in_idle);
  use_aniamtor_velocity_in_idle = v38->use_aniamtor_velocity_in_idle;
  v32 = *(_BYTE *)(((unsigned __int64)&this->use_aniamtor_velocity_in_idle >> 3) + 0x7FFF8000);
  if ( v32 < 0 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store1(&this->use_aniamtor_velocity_in_idle, v30, &this->use_aniamtor_velocity_in_idle);
  }
  this->use_aniamtor_velocity_in_idle = use_aniamtor_velocity_in_idle;
  v33 = ((_BYTE)v38 - 79) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&v38->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&v38->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&v38->is_json_loaded, v33, v34);
  is_json_loaded = v38->is_json_loaded;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this - 79) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_json_loaded, v33, v37);
  this->is_json_loaded = is_json_loaded;
};

// Line 3346: range 000000001010D1E8-000000001010D208
void __cdecl data::ConfigAISpacialFacingMoveData::~ConfigAISpacialFacingMoveData(
        data::ConfigAISpacialFacingMoveData *const this)
{
  std::vector<data::ConfigAIRaycastCondition>::~vector(&this->can_start_range_by_raycast);
};

// Line 3392: range 000000000ED6F266-000000000ED6F2D5
void __cdecl data::ConfigAISpacialFacingMoveSetting::ConfigAISpacialFacingMoveSetting(
        data::ConfigAISpacialFacingMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialFacingMoveData::ConfigAISpacialFacingMoveData(&this->default_setting);
  std::unordered_map<int,data::ConfigAISpacialFacingMoveData>::unordered_map(&this->specification);
};

// Line 3392: range 00000000110F9430-00000000110F94FB
void __cdecl data::ConfigAISpacialFacingMoveSetting::ConfigAISpacialFacingMoveSetting(
        data::ConfigAISpacialFacingMoveSetting *const this,
        const data::ConfigAISpacialFacingMoveSetting *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAISpacialFacingMoveData::ConfigAISpacialFacingMoveData(&this->default_setting, &a2->default_setting);
  std::unordered_map<int,data::ConfigAISpacialFacingMoveData>::unordered_map(&this->specification, &a2->specification);
};

// Line 3400: range 000000001130F446-000000001130F4B5
void __cdecl data::ConfigAISpacialFacingMoveSetting::~ConfigAISpacialFacingMoveSetting(
        data::ConfigAISpacialFacingMoveSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialFacingMoveSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAISpacialFacingMoveData>::~unordered_map(&this->specification);
  data::ConfigAISpacialFacingMoveData::~ConfigAISpacialFacingMoveData(&this->default_setting);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting(this);
};

// Line 3400: range 000000001130F4B6-000000001130F4E0
void __cdecl data::ConfigAISpacialFacingMoveSetting::~ConfigAISpacialFacingMoveSetting(
        data::ConfigAISpacialFacingMoveSetting *const this)
{
  data::ConfigAISpacialFacingMoveSetting::~ConfigAISpacialFacingMoveSetting(this);
  operator delete(this, 0x150uLL);
};

// Line 3405: range 0000000010098CAC-0000000010098CBC
const char *__cdecl data::ConfigAISpacialFacingMoveSetting::getTypeName(
        const data::ConfigAISpacialFacingMoveSetting *const this)
{
  return "ConfigAISpacialFacingMoveSetting";
};

// Line 3406: range 0000000010098CBE-0000000010098E5A
int32_t __cdecl data::ConfigAISpacialFacingMoveSetting::getHashNum(
        const data::ConfigAISpacialFacingMoveSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAISpacialFacingMoveSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAISpacialFacingMoveSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3422: range 00000000110F97E4-00000000110F9825
void __cdecl data::ConfigAISpacialFacingMoveSettingFactory::ConfigAISpacialFacingMoveSettingFactory(
        data::ConfigAISpacialFacingMoveSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAISpacialFacingMoveSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAISpacialFacingMoveSettingFactory = v2;
};

// Line 3430: range 000000000ED6F690-000000000ED6F843
void __cdecl data::ConfigAIMoveToSpecialAlertTargetData::ConfigAIMoveToSpecialAlertTargetData(
        data::ConfigAIMoveToSpecialAlertTargetData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->begin_action_wait_time = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_alert_distance_limit, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->force_alert_distance_limit = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_level, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->speed_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->decrease_temper_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->decrease_temper_factor >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->decrease_temper_factor, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->decrease_temper_factor = 30.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_arrived_search_action >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->use_arrived_search_action >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->use_arrived_search_action, v1, v2);
  this->use_arrived_search_action = 0;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 3464: range 000000000ED6F99E-000000000ED6FA0B
void __cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::ConfigAIMoveToSpecialAlertTargetSetting(
        data::ConfigAIMoveToSpecialAlertTargetSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMoveToSpecialAlertTargetSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  data::ConfigAIMoveToSpecialAlertTargetData::ConfigAIMoveToSpecialAlertTargetData(&this->default_setting);
  std::unordered_map<int,data::ConfigAIMoveToSpecialAlertTargetData>::unordered_map(&this->specification);
};

// Line 3464: range 00000000110F9B2E-00000000110F9CC0
void __cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::ConfigAIMoveToSpecialAlertTargetSetting(
        data::ConfigAIMoveToSpecialAlertTargetSetting *const this,
        const data::ConfigAIMoveToSpecialAlertTargetSetting *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigAITacticBaseSetting::ConfigAITacticBaseSetting(
    (data::ConfigAITacticBaseSetting *const)this,
    (const data::ConfigAITacticBaseSetting *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMoveToSpecialAlertTargetSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->default_setting.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->default_setting, 20LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->default_setting >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 111) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->default_setting.is_json_loaded + 2) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->default_setting, 20LL);
  }
  v3 = *(_QWORD *)&a2->default_setting.speed_level;
  *(_QWORD *)&this->default_setting.begin_action_wait_time = *(_QWORD *)&a2->default_setting.begin_action_wait_time;
  *(_QWORD *)&this->default_setting.speed_level = v3;
  *(_DWORD *)&this->default_setting.use_arrived_search_action = *(_DWORD *)&a2->default_setting.use_arrived_search_action;
  std::unordered_map<int,data::ConfigAIMoveToSpecialAlertTargetData>::unordered_map(
    &this->specification,
    &a2->specification);
};

// Line 3472: range 000000001130F3BC-000000001130F419
void __cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::~ConfigAIMoveToSpecialAlertTargetSetting(
        data::ConfigAIMoveToSpecialAlertTargetSetting *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMoveToSpecialAlertTargetSetting + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAITacticBaseSetting = v2;
  std::unordered_map<int,data::ConfigAIMoveToSpecialAlertTargetData>::~unordered_map(&this->specification);
  data::ConfigAITacticBaseSetting::~ConfigAITacticBaseSetting((data::ConfigAITacticBaseSetting *const)this);
};

// Line 3472: range 000000001130F41A-000000001130F444
void __cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::~ConfigAIMoveToSpecialAlertTargetSetting(
        data::ConfigAIMoveToSpecialAlertTargetSetting *const this)
{
  data::ConfigAIMoveToSpecialAlertTargetSetting::~ConfigAIMoveToSpecialAlertTargetSetting(this);
  operator delete(this, 0xA8uLL);
};

// Line 3477: range 0000000010098E5C-0000000010098E6C
const char *__cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::getTypeName(
        const data::ConfigAIMoveToSpecialAlertTargetSetting *const this)
{
  return "ConfigAIMoveToSpecialAlertTargetSetting";
};

// Line 3478: range 0000000010098E6E-000000001009900A
int32_t __cdecl data::ConfigAIMoveToSpecialAlertTargetSetting::getHashNum(
        const data::ConfigAIMoveToSpecialAlertTargetSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIMoveToSpecialAlertTargetSetting::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAIMoveToSpecialAlertTargetSetting",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3494: range 00000000110F9FAA-00000000110F9FEB
void __cdecl data::ConfigAIMoveToSpecialAlertTargetSettingFactory::ConfigAIMoveToSpecialAlertTargetSettingFactory(
        data::ConfigAIMoveToSpecialAlertTargetSettingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAIMoveToSpecialAlertTargetSettingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAIMoveToSpecialAlertTargetSettingFactory = v2;
};

// Line 3544: range 000000000ED8F132-000000000ED8F20A
void __cdecl data::ConfigAICombatSetting::ConfigAICombatSetting(data::ConfigAICombatSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::unordered_map<data::ConfigAICombatPhase,std::vector<int>>::unordered_map(&this->combat_phases);
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_role >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_role >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_role, v1);
  }
  this->combat_role = UNCLASSIFIED;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->broadcast_fear_on_death >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->broadcast_fear_on_death >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->broadcast_fear_on_death, v2, v3);
  this->broadcast_fear_on_death = 1;
  v4 = ((_BYTE)this + 61) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 3544: range 000000000E821050-000000000E8211EA
void __cdecl data::ConfigAICombatSetting::ConfigAICombatSetting(
        data::ConfigAICombatSetting *const this,
        const data::ConfigAICombatSetting *a2)
{
  data::ConfigAICombatRole combat_role; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool broadcast_fear_on_death; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx
  const data::ConfigAICombatSetting *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  std::unordered_map<data::ConfigAICombatPhase,std::vector<int>>::unordered_map(
    &this->combat_phases,
    &a2->combat_phases);
  if ( *(_BYTE *)(((unsigned __int64)&v14->combat_role >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->combat_role >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combat_role);
  }
  combat_role = a2->combat_role;
  v3 = *(_BYTE *)(((unsigned __int64)&this->combat_role >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->combat_role, a2);
  }
  this->combat_role = combat_role;
  v4 = ((_BYTE)v14 + 60) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v14->broadcast_fear_on_death >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v14->broadcast_fear_on_death >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v14->broadcast_fear_on_death, v4, v5);
  broadcast_fear_on_death = v14->broadcast_fear_on_death;
  v7 = *(_BYTE *)(((unsigned __int64)&this->broadcast_fear_on_death >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->broadcast_fear_on_death, v4, v8);
  this->broadcast_fear_on_death = broadcast_fear_on_death;
  v9 = ((_BYTE)v14 + 61) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v14->is_json_loaded, v9, v10);
  is_json_loaded = v14->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 61) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 3544: range 000000000E8211EC-000000000E821206
void __cdecl data::ConfigAICombatSetting::~ConfigAICombatSetting(data::ConfigAICombatSetting *const this)
{
  std::unordered_map<data::ConfigAICombatPhase,std::vector<int>>::~unordered_map(&this->combat_phases);
};

// Line 3633: range 000000001010FAEE-000000001010FC5F
void __cdecl data::ConfigAICastRangeXZ_Y::ConfigAICastRangeXZ_Y(data::ConfigAICastRangeXZ_Y *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->cast_range_xzmin = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_xzmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_xzmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_xzmax, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->cast_range_xzmax = 999.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_ymin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_ymin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_ymin, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cast_range_ymin = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_ymax, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->cast_range_ymax = 999.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3659: range 000000001010FC60-0000000010110284
void __cdecl data::ConfigAISkillCastCondition::ConfigAISkillCastCondition(data::ConfigAISkillCastCondition *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi

  std::vector<int>::vector(&this->pose);
  if ( *(char *)(((unsigned __int64)&this->need_re_init_cd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_re_init_cd, v1, &this->need_re_init_cd);
  this->need_re_init_cd = 0;
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_target_angle_xz >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_target_angle_xz, v2);
  }
  this->min_target_angle_xz = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_target_angle_xz >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_target_angle_xz, v2);
  }
  this->max_target_angle_xz = -1.0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_target_angle_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_target_angle_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_target_angle_y, v3);
  }
  this->max_target_angle_y = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_target_angle_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_target_angle_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_target_angle_y, v3);
  }
  this->min_target_angle_y = -1.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pick_range_min, v4);
  }
  this->pick_range_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_range_max, v4);
  }
  this->pick_range_max = 999.0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_range_ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pick_range_ymax, v5);
  }
  this->pick_range_ymax = 999.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_range_ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_range_ymin, v5);
  }
  this->pick_range_ymin = 0.0;
  std::vector<data::ConfigAIRaycastCondition>::vector(&this->pick_range_by_raycast);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_anchor_range_min, v5);
  }
  this->skill_anchor_range_min = 0.0;
  v6 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_anchor_range_max, v6);
  }
  this->skill_anchor_range_max = 999.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_anchor_target_angle_min, v6);
  }
  this->skill_anchor_target_angle_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_max >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_anchor_target_angle_max, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->skill_anchor_target_angle_max = 360.0;
  data::ConfigAIAngleXZ_Y::ConfigAIAngleXZ_Y(&this->skill_anchor_angle);
  v7 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_min >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_skill_anchor_range_min, v7);
  }
  this->target_skill_anchor_range_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_skill_anchor_range_max, v7);
  }
  this->target_skill_anchor_range_max = 999.0;
  v8 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_type, v8);
  }
  this->cast_range_type = RangeDefault;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cast_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cast_range_min, v8);
  }
  this->cast_range_min = 0.0;
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_max, v9);
  }
  this->cast_range_max = 999.0;
  data::ConfigAICastRangeXZ_Y::ConfigAICastRangeXZ_Y(&this->cast_range_xz__y);
  std::vector<std::string>::vector(&this->global_values);
  if ( *(char *)(((unsigned __int64)&this->global_values_logic_and >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->global_values_logic_and, v9, &this->global_values_logic_and);
  this->global_values_logic_and = 1;
  v10 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->global_values_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->global_values_target_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->global_values_target_type, v10);
  }
  this->global_values_target_type = TARGET;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v10, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 3659: range 000000000EB513BA-000000000EB520F2
void __cdecl data::ConfigAISkillCastCondition::ConfigAISkillCastCondition(
        data::ConfigAISkillCastCondition *const this,
        const data::ConfigAISkillCastCondition *a2)
{
  bool need_re_init_cd; // cl
  char v3; // al
  float min_target_angle_xz; // xmm0_4
  __int64 v5; // rsi
  float max_target_angle_xz; // xmm0_4
  float max_target_angle_y; // xmm0_4
  __int64 v8; // rsi
  float min_target_angle_y; // xmm0_4
  float pick_range_min; // xmm0_4
  __int64 v11; // rsi
  float pick_range_max; // xmm0_4
  float pick_range_ymax; // xmm0_4
  __int64 v14; // rsi
  float pick_range_ymin; // xmm0_4
  float skill_anchor_range_min; // xmm0_4
  float skill_anchor_range_max; // xmm0_4
  __int64 v18; // rsi
  float skill_anchor_target_angle_min; // xmm0_4
  float skill_anchor_target_angle_max; // xmm0_4
  __int64 v21; // rdx
  float target_skill_anchor_range_min; // xmm0_4
  __int64 v23; // rsi
  float target_skill_anchor_range_max; // xmm0_4
  __int64 v25; // rsi
  data::CondfigAIRangeType cast_range_type; // ecx
  char v27; // dl
  float cast_range_min; // xmm0_4
  float cast_range_max; // xmm0_4
  __int64 v30; // rdx
  data::StringList *p_global_values; // rsi
  bool global_values_logic_and; // cl
  char v33; // al
  __int64 v34; // rsi
  data::AISkillTargetType global_values_target_type; // ecx
  char v36; // dl
  bool is_json_loaded; // cl
  char v38; // al
  const data::ConfigAISkillCastCondition *v39; // [rsp+0h] [rbp-20h]

  v39 = a2;
  std::vector<int>::vector(&this->pose, &a2->pose);
  if ( *(char *)(((unsigned __int64)&a2->need_re_init_cd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->need_re_init_cd, a2, &a2->need_re_init_cd);
  need_re_init_cd = a2->need_re_init_cd;
  v3 = *(_BYTE *)(((unsigned __int64)&this->need_re_init_cd >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->need_re_init_cd, a2, &this->need_re_init_cd);
  }
  this->need_re_init_cd = need_re_init_cd;
  if ( *(_BYTE *)(((unsigned __int64)&v39->min_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->min_target_angle_xz >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->min_target_angle_xz);
  }
  min_target_angle_xz = v39->min_target_angle_xz;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_target_angle_xz >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_target_angle_xz, v5);
  }
  this->min_target_angle_xz = min_target_angle_xz;
  if ( *(_BYTE *)(((unsigned __int64)&v39->max_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->max_target_angle_xz >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->max_target_angle_xz);
  }
  max_target_angle_xz = v39->max_target_angle_xz;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_target_angle_xz >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_target_angle_xz >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_target_angle_xz, v5);
  }
  this->max_target_angle_xz = max_target_angle_xz;
  if ( *(_BYTE *)(((unsigned __int64)&v39->max_target_angle_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->max_target_angle_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->max_target_angle_y);
  }
  max_target_angle_y = v39->max_target_angle_y;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_target_angle_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_target_angle_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_target_angle_y, v8);
  }
  this->max_target_angle_y = max_target_angle_y;
  if ( *(_BYTE *)(((unsigned __int64)&v39->min_target_angle_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->min_target_angle_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->min_target_angle_y);
  }
  min_target_angle_y = v39->min_target_angle_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_target_angle_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_target_angle_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_target_angle_y, v8);
  }
  this->min_target_angle_y = min_target_angle_y;
  if ( *(_BYTE *)(((unsigned __int64)&v39->pick_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->pick_range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->pick_range_min);
  }
  pick_range_min = v39->pick_range_min;
  v11 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_range_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pick_range_min, v11);
  }
  this->pick_range_min = pick_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&v39->pick_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->pick_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->pick_range_max);
  }
  pick_range_max = v39->pick_range_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_range_max, v11);
  }
  this->pick_range_max = pick_range_max;
  if ( *(_BYTE *)(((unsigned __int64)&v39->pick_range_ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->pick_range_ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->pick_range_ymax);
  }
  pick_range_ymax = v39->pick_range_ymax;
  v14 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_range_ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pick_range_ymax, v14);
  }
  this->pick_range_ymax = pick_range_ymax;
  if ( *(_BYTE *)(((unsigned __int64)&v39->pick_range_ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->pick_range_ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->pick_range_ymin);
  }
  pick_range_ymin = v39->pick_range_ymin;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_range_ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_range_ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_range_ymin, v14);
  }
  this->pick_range_ymin = pick_range_ymin;
  std::vector<data::ConfigAIRaycastCondition>::vector(&this->pick_range_by_raycast, &v39->pick_range_by_raycast);
  if ( *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->skill_anchor_range_min);
  }
  skill_anchor_range_min = v39->skill_anchor_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_anchor_range_min, &v39->pick_range_by_raycast);
  }
  this->skill_anchor_range_min = skill_anchor_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_range_max >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->skill_anchor_range_max);
  }
  skill_anchor_range_max = v39->skill_anchor_range_max;
  v18 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_anchor_range_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_anchor_range_max, v18);
  }
  this->skill_anchor_range_max = skill_anchor_range_max;
  if ( *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->skill_anchor_target_angle_min);
  }
  skill_anchor_target_angle_min = v39->skill_anchor_target_angle_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_anchor_target_angle_min, v18);
  }
  this->skill_anchor_target_angle_min = skill_anchor_target_angle_min;
  if ( *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_target_angle_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->skill_anchor_target_angle_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->skill_anchor_target_angle_max);
  }
  skill_anchor_target_angle_max = v39->skill_anchor_target_angle_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_anchor_target_angle_max >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_anchor_target_angle_max, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->skill_anchor_target_angle_max = skill_anchor_target_angle_max;
  if ( *(char *)(((unsigned __int64)&this->skill_anchor_angle >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->skill_anchor_angle.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->skill_anchor_angle.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->skill_anchor_angle, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&v39->skill_anchor_angle >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v39->skill_anchor_angle.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v39 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&v39->skill_anchor_angle.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v39->skill_anchor_angle, 20LL);
  }
  v21 = *(_QWORD *)&v39->skill_anchor_angle.ymin;
  *(_QWORD *)&this->skill_anchor_angle.xz_min = *(_QWORD *)&v39->skill_anchor_angle.xz_min;
  *(_QWORD *)&this->skill_anchor_angle.ymin = v21;
  *(_DWORD *)&this->skill_anchor_angle.is_json_loaded = *(_DWORD *)&v39->skill_anchor_angle.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&v39->target_skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->target_skill_anchor_range_min >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->target_skill_anchor_range_min);
  }
  target_skill_anchor_range_min = v39->target_skill_anchor_range_min;
  v23 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_min >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_skill_anchor_range_min, v23);
  }
  this->target_skill_anchor_range_min = target_skill_anchor_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&v39->target_skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->target_skill_anchor_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->target_skill_anchor_range_max);
  }
  target_skill_anchor_range_max = v39->target_skill_anchor_range_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_skill_anchor_range_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_skill_anchor_range_max, v23);
  }
  this->target_skill_anchor_range_max = target_skill_anchor_range_max;
  v25 = (((_BYTE)v39 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->cast_range_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->cast_range_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->cast_range_type);
  }
  cast_range_type = v39->cast_range_type;
  v27 = *(_BYTE *)(((unsigned __int64)&this->cast_range_type >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v27 != 0;
  if ( v27 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v27 )
    __asan_report_store4(&this->cast_range_type, v25);
  this->cast_range_type = cast_range_type;
  if ( *(_BYTE *)(((unsigned __int64)&v39->cast_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->cast_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->cast_range_min);
  }
  cast_range_min = v39->cast_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cast_range_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cast_range_min, v25);
  }
  this->cast_range_min = cast_range_min;
  if ( *(_BYTE *)(((unsigned __int64)&v39->cast_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->cast_range_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->cast_range_max);
  }
  cast_range_max = v39->cast_range_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->cast_range_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cast_range_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cast_range_max, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->cast_range_max = cast_range_max;
  if ( *(char *)(((unsigned __int64)&this->cast_range_xz__y >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->cast_range_xz__y.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->cast_range_xz__y.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->cast_range_xz__y, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&v39->cast_range_xz__y >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v39->cast_range_xz__y.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v39 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&v39->cast_range_xz__y.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v39->cast_range_xz__y, 20LL);
  }
  v30 = *(_QWORD *)&v39->cast_range_xz__y.cast_range_ymin;
  *(_QWORD *)&this->cast_range_xz__y.cast_range_xzmin = *(_QWORD *)&v39->cast_range_xz__y.cast_range_xzmin;
  *(_QWORD *)&this->cast_range_xz__y.cast_range_ymin = v30;
  *(_DWORD *)&this->cast_range_xz__y.is_json_loaded = *(_DWORD *)&v39->cast_range_xz__y.is_json_loaded;
  p_global_values = &v39->global_values;
  std::vector<std::string>::vector(&this->global_values, &v39->global_values);
  if ( *(char *)(((unsigned __int64)&v39->global_values_logic_and >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v39->global_values_logic_and, p_global_values, &v39->global_values_logic_and);
  global_values_logic_and = v39->global_values_logic_and;
  v33 = *(_BYTE *)(((unsigned __int64)&this->global_values_logic_and >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(p_global_values) = v33 != 0;
    __asan_report_store1(&this->global_values_logic_and, p_global_values, &this->global_values_logic_and);
  }
  this->global_values_logic_and = global_values_logic_and;
  v34 = (((_BYTE)v39 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->global_values_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->global_values_target_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->global_values_target_type);
  }
  global_values_target_type = v39->global_values_target_type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->global_values_target_type >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  if ( v36 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v36 )
    __asan_report_store4(&this->global_values_target_type, v34);
  this->global_values_target_type = global_values_target_type;
  if ( *(char *)(((unsigned __int64)&v39->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v39->is_json_loaded, v34, &v39->is_json_loaded);
  is_json_loaded = v39->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store1(&this->is_json_loaded, v34, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3659: range 000000000EB520F4-000000000EB52130
void __cdecl data::ConfigAISkillCastCondition::~ConfigAISkillCastCondition(
        data::ConfigAISkillCastCondition *const this)
{
  std::vector<std::string>::~vector(&this->global_values);
  std::vector<data::ConfigAIRaycastCondition>::~vector(&this->pick_range_by_raycast);
  std::vector<int>::~vector(&this->pose);
};

// Line 3706: range 0000000010110322-0000000010110486
void __cdecl data::ConfigAIBuddyScoring::ConfigAIBuddyScoring(data::ConfigAIBuddyScoring *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->hp_factor = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_weight, v2);
  }
  this->hp_weight = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dist_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dist_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dist_factor, v2);
  }
  this->dist_factor = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dist_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dist_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dist_weight, v3);
  }
  this->dist_weight = 1;
  std::vector<float>::vector(&this->role_scores);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 3706: range 000000000EB5226C-000000000EB524FF
void __cdecl data::ConfigAIBuddyScoring::ConfigAIBuddyScoring(
        data::ConfigAIBuddyScoring *const this,
        const data::ConfigAIBuddyScoring *a2)
{
  int32_t hp_factor; // ecx
  char v3; // al
  float hp_weight; // xmm0_4
  __int64 v5; // rsi
  float dist_factor; // xmm0_4
  __int64 v7; // rsi
  int32_t dist_weight; // ecx
  char v9; // dl
  data::FloatList *p_role_scores; // rsi
  bool is_json_loaded; // cl
  char v12; // al
  const data::ConfigAIBuddyScoring *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  hp_factor = a2->hp_factor;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->hp_factor = hp_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v13->hp_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->hp_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->hp_weight);
  }
  hp_weight = v13->hp_weight;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_weight, v5);
  }
  this->hp_weight = hp_weight;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dist_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->dist_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->dist_factor);
  }
  dist_factor = v13->dist_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->dist_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dist_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dist_factor, v5);
  }
  this->dist_factor = dist_factor;
  v7 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dist_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->dist_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->dist_weight);
  }
  dist_weight = v13->dist_weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dist_weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->dist_weight, v7);
  }
  this->dist_weight = dist_weight;
  p_role_scores = &v13->role_scores;
  std::vector<float>::vector(&this->role_scores, &v13->role_scores);
  if ( *(char *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_json_loaded, p_role_scores, &v13->is_json_loaded);
  is_json_loaded = v13->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_role_scores) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, p_role_scores, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3706: range 000000000EB52500-000000000EB5251E
void __cdecl data::ConfigAIBuddyScoring::~ConfigAIBuddyScoring(data::ConfigAIBuddyScoring *const this)
{
  std::vector<float>::~vector(&this->role_scores);
};

// Line 3733: range 0000000010110488-0000000010110520
void __cdecl data::ConfigAIBuddySkillCondition::ConfigAIBuddySkillCondition(
        data::ConfigAIBuddySkillCondition *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->select_range = 20.0;
  data::ConfigAIBuddyScoring::ConfigAIBuddyScoring(&this->buddy_scoring);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 3733: range 000000000EB52520-000000000EB52631
void __cdecl data::ConfigAIBuddySkillCondition::ConfigAIBuddySkillCondition(
        data::ConfigAIBuddySkillCondition *const this,
        const data::ConfigAIBuddySkillCondition *a2)
{
  float select_range; // xmm0_4
  data::ConfigAIBuddyScoring *p_buddy_scoring; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  select_range = a2->select_range;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->select_range = select_range;
  p_buddy_scoring = &a2->buddy_scoring;
  data::ConfigAIBuddyScoring::ConfigAIBuddyScoring(&this->buddy_scoring, &a2->buddy_scoring);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_buddy_scoring, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_buddy_scoring) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_buddy_scoring, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3733: range 000000000EB52632-000000000EB52650
void __cdecl data::ConfigAIBuddySkillCondition::~ConfigAIBuddySkillCondition(
        data::ConfigAIBuddySkillCondition *const this)
{
  data::ConfigAIBuddyScoring::~ConfigAIBuddyScoring(&this->buddy_scoring);
};

// Line 3757: range 0000000010110522-0000000010110631
void __cdecl data::ConfigAINerveSkill::ConfigAINerveSkill(data::ConfigAINerveSkill *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->nerve_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nerve_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->nerve_target_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->nerve_target_type = None_23;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->change_threat_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->change_threat_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->change_threat_target, v3, v4);
  this->change_threat_target = 0;
  v5 = ((_BYTE)this + 9) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 3782: range 000000000ED90774-000000000ED908DD
void __cdecl data::ConfigAISkillDynamicCD::ConfigAISkillDynamicCD(data::ConfigAISkillDynamicCD *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_cd, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->min_cd = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_cd, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->max_cd = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->formula_max_target_dis_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->formula_max_target_dis_xz >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->formula_max_target_dis_xz, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->formula_max_target_dis_xz = 10.0;
  v3 = ((_BYTE)this + 16) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 3815: range 000000000ED908DE-000000000ED90948
void __cdecl data::ConfigAISkillSetting::ConfigAISkillSetting(data::ConfigAISkillSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  std::unordered_map<unsigned char,std::vector<unsigned int>>::unordered_map(&this->skill_elite_set);
  data::ConfigAISkillDynamicCD::ConfigAISkillDynamicCD(&this->dynamic_cd);
  v1 = ((_BYTE)this + 76) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3815: range 000000000E8227AC-000000000E82293F
void __cdecl data::ConfigAISkillSetting::ConfigAISkillSetting(
        data::ConfigAISkillSetting *const this,
        const data::ConfigAISkillSetting *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::unordered_map<unsigned char,std::vector<unsigned int>>::unordered_map(
    &this->skill_elite_set,
    &a2->skill_elite_set);
  if ( *(char *)(((unsigned __int64)&this->dynamic_cd >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->dynamic_cd.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->dynamic_cd.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dynamic_cd, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->dynamic_cd >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->dynamic_cd.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->dynamic_cd.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->dynamic_cd, 20LL);
  }
  v2 = *(_QWORD *)&a2->dynamic_cd.max_cd;
  *(_QWORD *)&this->dynamic_cd.enable = *(_QWORD *)&a2->dynamic_cd.enable;
  *(_QWORD *)&this->dynamic_cd.max_cd = v2;
  *(_DWORD *)&this->dynamic_cd.is_json_loaded = *(_DWORD *)&a2->dynamic_cd.is_json_loaded;
  v3 = ((_BYTE)a2 + 76) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 3815: range 000000000E822940-000000000E82295A
void __cdecl data::ConfigAISkillSetting::~ConfigAISkillSetting(data::ConfigAISkillSetting *const this)
{
  std::unordered_map<unsigned char,std::vector<unsigned int>>::~unordered_map(&this->skill_elite_set);
};

// Line 3868: range 0000000010110286-0000000010110320
void __cdecl data::ConfigAITurningStateSetting::ConfigAITurningStateSetting(
        data::ConfigAITurningStateSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::vector<std::string>::vector(&this->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&this->turning_state_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turning_state_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turning_state_angle, v1);
  }
  this->turning_state_angle = 0.0;
  v2 = ((_BYTE)this + 28) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 3868: range 000000000EB52132-000000000EB5224F
void __cdecl data::ConfigAITurningStateSetting::ConfigAITurningStateSetting(
        data::ConfigAITurningStateSetting *const this,
        const data::ConfigAITurningStateSetting *a2)
{
  float turning_state_angle; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::vector<std::string>::vector(&this->turning_states, &a2->turning_states);
  if ( *(_BYTE *)(((unsigned __int64)&a2->turning_state_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->turning_state_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->turning_state_angle);
  }
  turning_state_angle = a2->turning_state_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->turning_state_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turning_state_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turning_state_angle, a2);
  }
  this->turning_state_angle = turning_state_angle;
  v3 = ((_BYTE)a2 + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 3868: range 000000000EB52250-000000000EB5226A
void __cdecl data::ConfigAITurningStateSetting::~ConfigAITurningStateSetting(
        data::ConfigAITurningStateSetting *const this)
{
  std::vector<std::string>::~vector(&this->turning_states);
};

// Line 3892: range 0000000010110632-0000000010111202
void __cdecl data::ConfigAISkill::ConfigAISkill(data::ConfigAISkill *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  char v29[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAISkill::ConfigAISkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -202116351;
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_type, v1);
  }
  this->skill_type = Combat;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_skill_type, v5);
  }
  this->combat_skill_type = Unclassified;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = 5;
  v6 = ((_BYTE)this + 44) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->can_use_combat_skill_condition >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->can_use_combat_skill_condition >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->can_use_combat_skill_condition, v6, v7);
  this->can_use_combat_skill_condition = 0;
  v8 = ((_BYTE)this + 45) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->need_line_of_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->need_line_of_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->need_line_of_sight, v8, v9);
  this->need_line_of_sight = 0;
  v10 = ((_BYTE)this + 46) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->face_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->face_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->face_target, v10, v11);
  this->face_target = 0;
  v12 = ((_BYTE)this + 47) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->can_use_if_target_inactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->can_use_if_target_inactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->can_use_if_target_inactive, v12, v13);
  this->can_use_if_target_inactive = 0;
  if ( *(char *)(((unsigned __int64)&this->enable_skill_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_skill_prepare, v12, &this->enable_skill_prepare);
  this->enable_skill_prepare = 0;
  v14 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_prepare_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_prepare_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_prepare_timeout, v14);
  }
  this->skill_prepare_timeout = 5.0;
  if ( *(char *)(((unsigned __int64)&this->skill_prepare_give_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->skill_prepare_give_up, v14, &this->skill_prepare_give_up);
  this->skill_prepare_give_up = 0;
  v15 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_prepare_speed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_prepare_speed_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_prepare_speed_level, v15);
  }
  this->skill_prepare_speed_level = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_prepare_move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_prepare_move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_prepare_move_type, v15);
  }
  this->skill_prepare_move_type = Straight;
  data::ConfigAISkillCastCondition::ConfigAISkillCastCondition(&this->cast_condition);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v15);
  }
  this->cd = 0.0;
  v16 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_upper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_upper_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_upper_range, v16);
  }
  this->cd_upper_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_cd, v16);
  }
  this->initial_cd = 0.0;
  v17 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_cdupper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_cdupper_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_cdupper_range, v17);
  }
  this->initial_cdupper_range = 0.0;
  std::string::basic_string(&this->public_cdgroup);
  if ( *(char *)(((unsigned __int64)&this->ignore_gcd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_gcd, v17, &this->ignore_gcd);
  this->ignore_gcd = 0;
  v18 = ((_BYTE)this + 73) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->trigger_gcd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->trigger_gcd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->trigger_gcd, v18, v19);
  this->trigger_gcd = 1;
  v20 = ((_BYTE)this + 74) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->trigger_cdon_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->trigger_cdon_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->trigger_cdon_start, v20, v21);
  this->trigger_cdon_start = 0;
  v22 = ((_BYTE)this + 75) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->trigger_cdon_fail >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->trigger_cdon_fail >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->trigger_cdon_fail, v22, v23);
  this->trigger_cdon_fail = 1;
  v24 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_group_cdid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_group_cdid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_group_cdid, v24);
  }
  this->skill_group_cdid = -1;
  if ( *(char *)(((unsigned __int64)&this->trigger_dynamic_cd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->trigger_dynamic_cd, v24, &this->trigger_dynamic_cd);
  this->trigger_dynamic_cd = 1;
  v25 = ((_BYTE)this + 81) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->ignore_dynamic_cd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->ignore_dynamic_cd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->ignore_dynamic_cd, v25, v26);
  this->ignore_dynamic_cd = 0;
  std::vector<std::string>::vector(&this->state_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_querying_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_querying_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_querying_time, v25);
  }
  this->skill_querying_time = 1.0;
  data::ConfigAITurningStateSetting::ConfigAITurningStateSetting(&this->skill_prepare_turning_state);
  if ( *(_BYTE *)(((unsigned __int64)&this->command_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->command_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->command_id, v25);
  }
  this->command_id = -1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->flag_target_reachable,
    "10",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->flag_self_on_template_collider,
    "01",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    &this->flag_self_in_zone,
    "10",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    &this->flag_target_in_zone,
    "11",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  data::ConfigAIBuddySkillCondition::ConfigAIBuddySkillCondition(&this->buddy_skill_condition);
  std::vector<data::NeuronName>::vector(&this->nerve_trigger);
  data::ConfigAINerveSkill::ConfigAINerveSkill(&this->nerve_target);
  v27 = ((_BYTE)this - 124) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_json_loaded, v27, v28);
  this->is_json_loaded = 0;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3892: range 000000000EB52652-000000000EB536E2
void __cdecl data::ConfigAISkill::ConfigAISkill(data::ConfigAISkill *const this, const data::ConfigAISkill *a2)
{
  data::ConfigAISkillType skill_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ConfigAICombatSkillType combat_skill_type; // ecx
  char v6; // dl
  int32_t priority; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool can_use_combat_skill_condition; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool need_line_of_sight; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool face_target; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool can_use_if_target_inactive; // cl
  char v27; // dl
  __int64 v28; // rdx
  bool enable_skill_prepare; // cl
  char v30; // al
  float skill_prepare_timeout; // xmm0_4
  __int64 v32; // rsi
  bool skill_prepare_give_up; // cl
  char v34; // al
  __int64 v35; // rsi
  int32_t skill_prepare_speed_level; // ecx
  char v37; // dl
  data::AIBasicMoveType skill_prepare_move_type; // ecx
  char v39; // al
  float cd; // xmm0_4
  float cd_upper_range; // xmm0_4
  __int64 v42; // rsi
  float initial_cd; // xmm0_4
  float initial_cdupper_range; // xmm0_4
  std::string *p_public_cdgroup; // rsi
  bool ignore_gcd; // cl
  char v47; // al
  __int64 v48; // rsi
  __int64 v49; // rdx
  bool trigger_gcd; // cl
  char v51; // dl
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  bool trigger_cdon_start; // cl
  char v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  bool trigger_cdon_fail; // cl
  char v61; // dl
  __int64 v62; // rdx
  __int64 v63; // rsi
  int32_t skill_group_cdid; // ecx
  char v65; // dl
  bool trigger_dynamic_cd; // cl
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // rdx
  bool ignore_dynamic_cd; // cl
  char v71; // dl
  __int64 v72; // rdx
  float skill_querying_time; // xmm0_4
  data::ConfigAITurningStateSetting *p_skill_prepare_turning_state; // rsi
  int32_t command_id; // ecx
  char v76; // al
  __int64 v77; // rsi
  __int64 v78; // rdx
  bool is_json_loaded; // cl
  char v80; // dl
  __int64 v81; // rdx
  const data::ConfigAISkill *v82; // [rsp+0h] [rbp-20h]

  v82 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->skill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_type);
  }
  skill_type = a2->skill_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->skill_type, a2);
  }
  this->skill_type = skill_type;
  v4 = (((_BYTE)v82 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v82->combat_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->combat_skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->combat_skill_type);
  }
  combat_skill_type = v82->combat_skill_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->combat_skill_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->combat_skill_type, v4);
  }
  this->combat_skill_type = combat_skill_type;
  if ( *(_BYTE *)(((unsigned __int64)&v82->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->priority);
  }
  priority = v82->priority;
  v8 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = priority;
  v9 = ((_BYTE)v82 + 44) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v82->can_use_combat_skill_condition >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v82->can_use_combat_skill_condition >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v82->can_use_combat_skill_condition, v9, v10);
  can_use_combat_skill_condition = v82->can_use_combat_skill_condition;
  v12 = *(_BYTE *)(((unsigned __int64)&this->can_use_combat_skill_condition >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->can_use_combat_skill_condition, v9, v13);
  this->can_use_combat_skill_condition = can_use_combat_skill_condition;
  v14 = ((_BYTE)v82 + 45) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v82->need_line_of_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v82->need_line_of_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v82->need_line_of_sight, v14, v15);
  need_line_of_sight = v82->need_line_of_sight;
  v17 = *(_BYTE *)(((unsigned __int64)&this->need_line_of_sight >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->need_line_of_sight, v14, v18);
  this->need_line_of_sight = need_line_of_sight;
  v19 = ((_BYTE)v82 + 46) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v82->face_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v82->face_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v82->face_target, v19, v20);
  face_target = v82->face_target;
  v22 = *(_BYTE *)(((unsigned __int64)&this->face_target >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->face_target, v19, v23);
  this->face_target = face_target;
  v24 = ((_BYTE)v82 + 47) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v82->can_use_if_target_inactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v82->can_use_if_target_inactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v82->can_use_if_target_inactive, v24, v25);
  can_use_if_target_inactive = v82->can_use_if_target_inactive;
  v27 = *(_BYTE *)(((unsigned __int64)&this->can_use_if_target_inactive >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 47) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->can_use_if_target_inactive, v24, v28);
  this->can_use_if_target_inactive = can_use_if_target_inactive;
  if ( *(char *)(((unsigned __int64)&v82->enable_skill_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v82->enable_skill_prepare, v24, &v82->enable_skill_prepare);
  enable_skill_prepare = v82->enable_skill_prepare;
  v30 = *(_BYTE *)(((unsigned __int64)&this->enable_skill_prepare >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(v24) = v30 != 0;
    __asan_report_store1(&this->enable_skill_prepare, v24, &this->enable_skill_prepare);
  }
  this->enable_skill_prepare = enable_skill_prepare;
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_timeout >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->skill_prepare_timeout);
  }
  skill_prepare_timeout = v82->skill_prepare_timeout;
  v32 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_prepare_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_prepare_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_prepare_timeout, v32);
  }
  this->skill_prepare_timeout = skill_prepare_timeout;
  if ( *(char *)(((unsigned __int64)&v82->skill_prepare_give_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v82->skill_prepare_give_up, v32, &v82->skill_prepare_give_up);
  skill_prepare_give_up = v82->skill_prepare_give_up;
  v34 = *(_BYTE *)(((unsigned __int64)&this->skill_prepare_give_up >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store1(&this->skill_prepare_give_up, v32, &this->skill_prepare_give_up);
  }
  this->skill_prepare_give_up = skill_prepare_give_up;
  v35 = (((_BYTE)v82 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_speed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_speed_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->skill_prepare_speed_level);
  }
  skill_prepare_speed_level = v82->skill_prepare_speed_level;
  v37 = *(_BYTE *)(((unsigned __int64)&this->skill_prepare_speed_level >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->skill_prepare_speed_level, v35);
  }
  this->skill_prepare_speed_level = skill_prepare_speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->skill_prepare_move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->skill_prepare_move_type);
  }
  skill_prepare_move_type = v82->skill_prepare_move_type;
  v39 = *(_BYTE *)(((unsigned __int64)&this->skill_prepare_move_type >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store4(&this->skill_prepare_move_type, v35);
  }
  this->skill_prepare_move_type = skill_prepare_move_type;
  data::ConfigAISkillCastCondition::ConfigAISkillCastCondition(&this->cast_condition, &v82->cast_condition);
  if ( *(_BYTE *)(((unsigned __int64)&v82->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->cd);
  }
  cd = v82->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, &v82->cast_condition);
  }
  this->cd = cd;
  if ( *(_BYTE *)(((unsigned __int64)&v82->cd_upper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->cd_upper_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->cd_upper_range);
  }
  cd_upper_range = v82->cd_upper_range;
  v42 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_upper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_upper_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_upper_range, v42);
  }
  this->cd_upper_range = cd_upper_range;
  if ( *(_BYTE *)(((unsigned __int64)&v82->initial_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->initial_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->initial_cd);
  }
  initial_cd = v82->initial_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_cd, v42);
  }
  this->initial_cd = initial_cd;
  if ( *(_BYTE *)(((unsigned __int64)&v82->initial_cdupper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->initial_cdupper_range >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->initial_cdupper_range);
  }
  initial_cdupper_range = v82->initial_cdupper_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_cdupper_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_cdupper_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_cdupper_range, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->initial_cdupper_range = initial_cdupper_range;
  p_public_cdgroup = &v82->public_cdgroup;
  std::string::basic_string(&this->public_cdgroup, &v82->public_cdgroup);
  if ( *(char *)(((unsigned __int64)&v82->ignore_gcd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v82->ignore_gcd, p_public_cdgroup, &v82->ignore_gcd);
  ignore_gcd = v82->ignore_gcd;
  v47 = *(_BYTE *)(((unsigned __int64)&this->ignore_gcd >> 3) + 0x7FFF8000);
  if ( v47 < 0 )
  {
    LOBYTE(p_public_cdgroup) = v47 != 0;
    __asan_report_store1(&this->ignore_gcd, p_public_cdgroup, &this->ignore_gcd);
  }
  this->ignore_gcd = ignore_gcd;
  v48 = ((_BYTE)v82 + 73) & 7;
  v49 = (*(_BYTE *)(((unsigned __int64)&v82->trigger_gcd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v48 >= *(_BYTE *)(((unsigned __int64)&v82->trigger_gcd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v49 )
    __asan_report_load1(&v82->trigger_gcd, v48, v49);
  trigger_gcd = v82->trigger_gcd;
  v51 = *(_BYTE *)(((unsigned __int64)&this->trigger_gcd >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v51 != 0;
  v52 = (v51 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v51);
  if ( (_BYTE)v52 )
    __asan_report_store1(&this->trigger_gcd, v48, v52);
  this->trigger_gcd = trigger_gcd;
  v53 = ((_BYTE)v82 + 74) & 7;
  v54 = (*(_BYTE *)(((unsigned __int64)&v82->trigger_cdon_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v53 >= *(_BYTE *)(((unsigned __int64)&v82->trigger_cdon_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v54 )
    __asan_report_load1(&v82->trigger_cdon_start, v53, v54);
  trigger_cdon_start = v82->trigger_cdon_start;
  v56 = *(_BYTE *)(((unsigned __int64)&this->trigger_cdon_start >> 3) + 0x7FFF8000);
  LOBYTE(v53) = v56 != 0;
  v57 = (v56 != 0) & (unsigned __int8)((((unsigned __int8)this + 74) & 7) >= v56);
  if ( (_BYTE)v57 )
    __asan_report_store1(&this->trigger_cdon_start, v53, v57);
  this->trigger_cdon_start = trigger_cdon_start;
  v58 = ((_BYTE)v82 + 75) & 7;
  v59 = (*(_BYTE *)(((unsigned __int64)&v82->trigger_cdon_fail >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v58 >= *(_BYTE *)(((unsigned __int64)&v82->trigger_cdon_fail >> 3) + 0x7FFF8000));
  if ( (_BYTE)v59 )
    __asan_report_load1(&v82->trigger_cdon_fail, v58, v59);
  trigger_cdon_fail = v82->trigger_cdon_fail;
  v61 = *(_BYTE *)(((unsigned __int64)&this->trigger_cdon_fail >> 3) + 0x7FFF8000);
  LOBYTE(v58) = v61 != 0;
  v62 = (v61 != 0) & (unsigned __int8)((((unsigned __int8)this + 75) & 7) >= v61);
  if ( (_BYTE)v62 )
    __asan_report_store1(&this->trigger_cdon_fail, v58, v62);
  this->trigger_cdon_fail = trigger_cdon_fail;
  v63 = (((_BYTE)v82 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_group_cdid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v82 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->skill_group_cdid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v82->skill_group_cdid);
  }
  skill_group_cdid = v82->skill_group_cdid;
  v65 = *(_BYTE *)(((unsigned __int64)&this->skill_group_cdid >> 3) + 0x7FFF8000);
  LOBYTE(v63) = v65 != 0;
  if ( v65 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v65 )
    __asan_report_store4(&this->skill_group_cdid, v63);
  this->skill_group_cdid = skill_group_cdid;
  if ( *(char *)(((unsigned __int64)&v82->trigger_dynamic_cd >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v82->trigger_dynamic_cd, v63, &v82->trigger_dynamic_cd);
  trigger_dynamic_cd = v82->trigger_dynamic_cd;
  v67 = *(_BYTE *)(((unsigned __int64)&this->trigger_dynamic_cd >> 3) + 0x7FFF8000);
  if ( v67 < 0 )
  {
    LOBYTE(v63) = v67 != 0;
    __asan_report_store1(&this->trigger_dynamic_cd, v63, &this->trigger_dynamic_cd);
  }
  this->trigger_dynamic_cd = trigger_dynamic_cd;
  v68 = ((_BYTE)v82 + 81) & 7;
  v69 = (*(_BYTE *)(((unsigned __int64)&v82->ignore_dynamic_cd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v68 >= *(_BYTE *)(((unsigned __int64)&v82->ignore_dynamic_cd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v69 )
    __asan_report_load1(&v82->ignore_dynamic_cd, v68, v69);
  ignore_dynamic_cd = v82->ignore_dynamic_cd;
  v71 = *(_BYTE *)(((unsigned __int64)&this->ignore_dynamic_cd >> 3) + 0x7FFF8000);
  LOBYTE(v68) = v71 != 0;
  v72 = (v71 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v71);
  if ( (_BYTE)v72 )
    __asan_report_store1(&this->ignore_dynamic_cd, v68, v72);
  this->ignore_dynamic_cd = ignore_dynamic_cd;
  std::vector<std::string>::vector(&this->state_ids, &v82->state_ids);
  if ( *(_BYTE *)(((unsigned __int64)&v82->skill_querying_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->skill_querying_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->skill_querying_time);
  }
  skill_querying_time = v82->skill_querying_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_querying_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_querying_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_querying_time, &v82->state_ids);
  }
  this->skill_querying_time = skill_querying_time;
  p_skill_prepare_turning_state = &v82->skill_prepare_turning_state;
  data::ConfigAITurningStateSetting::ConfigAITurningStateSetting(
    &this->skill_prepare_turning_state,
    &v82->skill_prepare_turning_state);
  if ( *(_BYTE *)(((unsigned __int64)&v82->command_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v82->command_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v82->command_id);
  }
  command_id = v82->command_id;
  v76 = *(_BYTE *)(((unsigned __int64)&this->command_id >> 3) + 0x7FFF8000);
  if ( v76 != 0 && v76 <= 3 )
  {
    LOBYTE(p_skill_prepare_turning_state) = v76 != 0;
    __asan_report_store4(&this->command_id, p_skill_prepare_turning_state);
  }
  this->command_id = command_id;
  std::string::basic_string(&this->flag_target_reachable, &v82->flag_target_reachable);
  std::string::basic_string(&this->flag_self_on_template_collider, &v82->flag_self_on_template_collider);
  std::string::basic_string(&this->flag_self_in_zone, &v82->flag_self_in_zone);
  std::string::basic_string(&this->flag_target_in_zone, &v82->flag_target_in_zone);
  data::ConfigAIBuddySkillCondition::ConfigAIBuddySkillCondition(
    &this->buddy_skill_condition,
    &v82->buddy_skill_condition);
  std::vector<data::NeuronName>::vector(&this->nerve_trigger, &v82->nerve_trigger);
  if ( *(char *)(((unsigned __int64)&this->nerve_target >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->nerve_target.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->nerve_target.is_json_loaded + 2) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->nerve_target, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v82->nerve_target >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v82->nerve_target.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v82 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&v82->nerve_target.is_json_loaded + 2) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v82->nerve_target, 12LL);
  }
  this->nerve_target = v82->nerve_target;
  v77 = ((_BYTE)v82 - 124) & 7;
  v78 = (*(_BYTE *)(((unsigned __int64)&v82->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v77 >= *(_BYTE *)(((unsigned __int64)&v82->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v78 )
    __asan_report_load1(&v82->is_json_loaded, v77, v78);
  is_json_loaded = v82->is_json_loaded;
  v80 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v77) = v80 != 0;
  v81 = (v80 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v80);
  if ( (_BYTE)v81 )
    __asan_report_store1(&this->is_json_loaded, v77, v81);
  this->is_json_loaded = is_json_loaded;
};

// Line 3892: range 000000000EB536E4-000000000EB537B0
void __cdecl data::ConfigAISkill::~ConfigAISkill(data::ConfigAISkill *const this)
{
  std::vector<data::NeuronName>::~vector(&this->nerve_trigger);
  data::ConfigAIBuddySkillCondition::~ConfigAIBuddySkillCondition(&this->buddy_skill_condition);
  std::string::~string(&this->flag_target_in_zone);
  std::string::~string(&this->flag_self_in_zone);
  std::string::~string(&this->flag_self_on_template_collider);
  std::string::~string(&this->flag_target_reachable);
  data::ConfigAITurningStateSetting::~ConfigAITurningStateSetting(&this->skill_prepare_turning_state);
  std::vector<std::string>::~vector(&this->state_ids);
  std::string::~string(&this->public_cdgroup);
  data::ConfigAISkillCastCondition::~ConfigAISkillCastCondition(&this->cast_condition);
  std::string::~string(this);
};

// Line 3958: range 000000000ED903B8-000000000ED90441
void __cdecl data::ConfigAIUISetting::ConfigAIUISetting(data::ConfigAIUISetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->has_direction_indicator = 1;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 3999: range 000000000ED90442-000000000ED90517
void __cdecl data::ConfigAIProfilingSetting::ConfigAIProfilingSetting(data::ConfigAIProfilingSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->lod_strategy = Monster_1;
  std::vector<int>::vector(&this->static_poses);
  if ( *(_BYTE *)(((unsigned __int64)&this->move_culling_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_culling_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_culling_level, v1);
  }
  this->move_culling_level = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 3999: range 000000000E8225BC-000000000E822749
void __cdecl data::ConfigAIProfilingSetting::ConfigAIProfilingSetting(
        data::ConfigAIProfilingSetting *const this,
        const data::ConfigAIProfilingSetting *a2)
{
  data::AILodStrategyType lod_strategy; // ecx
  char v3; // al
  data::Int32List *p_static_poses; // rsi
  int32_t move_culling_level; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::ConfigAIProfilingSetting *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  lod_strategy = a2->lod_strategy;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->lod_strategy = lod_strategy;
  p_static_poses = &v12->static_poses;
  std::vector<int>::vector(&this->static_poses, &v12->static_poses);
  if ( *(_BYTE *)(((unsigned __int64)&v12->move_culling_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->move_culling_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->move_culling_level);
  }
  move_culling_level = v12->move_culling_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->move_culling_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_static_poses) = v6 != 0;
    __asan_report_store4(&this->move_culling_level, p_static_poses);
  }
  this->move_culling_level = move_culling_level;
  v7 = ((_BYTE)v12 + 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 3999: range 000000000E82274A-000000000E822768
void __cdecl data::ConfigAIProfilingSetting::~ConfigAIProfilingSetting(data::ConfigAIProfilingSetting *const this)
{
  std::vector<int>::~vector(&this->static_poses);
};

// Line 4024: range 000000000ED90518-000000000ED905E1
void __cdecl data::ConfigAINetworkSetting::ConfigAINetworkSetting(data::ConfigAINetworkSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->sync_skill = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->reset_hp_on_spawn >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->reset_hp_on_spawn >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->reset_hp_on_spawn, v3, v4);
  this->reset_hp_on_spawn = 1;
  v5 = ((_BYTE)this + 2) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 4048: range 0000000010111CB4-0000000010111D49
void __cdecl data::ConfigAIMixinSetBool::ConfigAIMixinSetBool(data::ConfigAIMixinSetBool *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value, v1, &this->value);
  this->value = 0;
  v2 = ((_BYTE)this + 33) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 4048: range 00000000104E936A-00000000104E9485
void __cdecl data::ConfigAIMixinSetBool::ConfigAIMixinSetBool(
        data::ConfigAIMixinSetBool *const this,
        data::ConfigAIMixinSetBool *a2)
{
  bool value; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigAIMixinSetBool *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, a2, &a2->value);
  value = a2->value;
  v3 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->value, a2, &this->value);
  }
  this->value = value;
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

// Line 4048: range 000000000EDA932A-000000000EDA9344
void __cdecl data::ConfigAIMixinSetBool::~ConfigAIMixinSetBool(data::ConfigAIMixinSetBool *const this)
{
  std::string::~string(this);
};

// Line 4072: range 0000000010111D4A-0000000010111DE2
void __cdecl data::ConfigAIMixinSetInt::ConfigAIMixinSetInt(data::ConfigAIMixinSetInt *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 4072: range 00000000104E9B98-00000000104E9CB2
void __cdecl data::ConfigAIMixinSetInt::ConfigAIMixinSetInt(
        data::ConfigAIMixinSetInt *const this,
        data::ConfigAIMixinSetInt *a2)
{
  int32_t value; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigAIMixinSetInt *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v3 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
  v4 = ((_BYTE)v9 + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 4072: range 000000000EDA964C-000000000EDA9666
void __cdecl data::ConfigAIMixinSetInt::~ConfigAIMixinSetInt(data::ConfigAIMixinSetInt *const this)
{
  std::string::~string(this);
};

// Line 4096: range 0000000010111DE4-0000000010111E7E
void __cdecl data::ConfigAIMixinSetFloat::ConfigAIMixinSetFloat(data::ConfigAIMixinSetFloat *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0.0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 4096: range 00000000104EA3C6-00000000104EA4E3
void __cdecl data::ConfigAIMixinSetFloat::ConfigAIMixinSetFloat(
        data::ConfigAIMixinSetFloat *const this,
        data::ConfigAIMixinSetFloat *a2)
{
  float value; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
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

// Line 4096: range 000000000EDA9970-000000000EDA998A
void __cdecl data::ConfigAIMixinSetFloat::~ConfigAIMixinSetFloat(data::ConfigAIMixinSetFloat *const this)
{
  std::string::~string(this);
};

// Line 4120: range 0000000010111E80-0000000010111ED5
void __cdecl data::ConfigAIMixinSetAnimatorTrigger::ConfigAIMixinSetAnimatorTrigger(
        data::ConfigAIMixinSetAnimatorTrigger *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4120: range 00000000104EABF6-00000000104EAC91
void __cdecl data::ConfigAIMixinSetAnimatorTrigger::ConfigAIMixinSetAnimatorTrigger(
        data::ConfigAIMixinSetAnimatorTrigger *const this,
        data::ConfigAIMixinSetAnimatorTrigger *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4120: range 000000000EDA9C12-000000000EDA9C2C
void __cdecl data::ConfigAIMixinSetAnimatorTrigger::~ConfigAIMixinSetAnimatorTrigger(
        data::ConfigAIMixinSetAnimatorTrigger *const this)
{
  std::string::~string(this);
};

// Line 4163: range 0000000010111FB6-0000000010112072
void __cdecl data::ConfigAIMixinActions::ConfigAIMixinActions(data::ConfigAIMixinActions *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_pose_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_pose_int);
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_pose_float);
  std::vector<data::ConfigAIMixinSetAnimatorTrigger>::vector(&this->set_animator_trigger);
  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_animator_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_animator_int);
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_animator_float);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4163: range 00000000104EB550-00000000104EB69C
void __cdecl data::ConfigAIMixinActions::ConfigAIMixinActions(
        data::ConfigAIMixinActions *const this,
        data::ConfigAIMixinActions *a2)
{
  data::ConfigAIMixinSetFloatArray *p_set_animator_float; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_pose_bool, &a2->set_pose_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_pose_int, &a2->set_pose_int);
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_pose_float, &a2->set_pose_float);
  std::vector<data::ConfigAIMixinSetAnimatorTrigger>::vector(&this->set_animator_trigger, &a2->set_animator_trigger);
  std::vector<data::ConfigAIMixinSetBool>::vector(&this->set_animator_bool, &a2->set_animator_bool);
  std::vector<data::ConfigAIMixinSetInt>::vector(&this->set_animator_int, &a2->set_animator_int);
  p_set_animator_float = &a2->set_animator_float;
  std::vector<data::ConfigAIMixinSetFloat>::vector(&this->set_animator_float, p_set_animator_float);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_set_animator_float, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_set_animator_float) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_set_animator_float, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4163: range 000000000EDA4E0C-000000000EDA4E88
void __cdecl data::ConfigAIMixinActions::~ConfigAIMixinActions(data::ConfigAIMixinActions *const this)
{
  std::vector<data::ConfigAIMixinSetFloat>::~vector(&this->set_animator_float);
  std::vector<data::ConfigAIMixinSetInt>::~vector(&this->set_animator_int);
  std::vector<data::ConfigAIMixinSetBool>::~vector(&this->set_animator_bool);
  std::vector<data::ConfigAIMixinSetAnimatorTrigger>::~vector(&this->set_animator_trigger);
  std::vector<data::ConfigAIMixinSetFloat>::~vector(&this->set_pose_float);
  std::vector<data::ConfigAIMixinSetInt>::~vector(&this->set_pose_int);
  std::vector<data::ConfigAIMixinSetBool>::~vector(&this->set_pose_bool);
};

// Line 4192: range 0000000010112074-00000000101120F0
void __cdecl data::ConfigAIMixinSetControllerParameter::ConfigAIMixinSetControllerParameter(
        data::ConfigAIMixinSetControllerParameter *const this)
{
  __int64 v1; // rsi

  std::vector<data::EntityType>::vector(&this->entity_types);
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_success);
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_fail);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4192: range 000000000EDA4E8A-000000000EDA4FA2
void __cdecl data::ConfigAIMixinSetControllerParameter::ConfigAIMixinSetControllerParameter(
        data::ConfigAIMixinSetControllerParameter *const this,
        const data::ConfigAIMixinSetControllerParameter *a2)
{
  data::ConfigAIMixinActions *p_on_fail; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::EntityType>::vector(&this->entity_types, &a2->entity_types);
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_success, &a2->on_success);
  p_on_fail = &a2->on_fail;
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_fail, p_on_fail);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_on_fail, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_on_fail) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_fail, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4192: range 00000000104EB69E-00000000104EB77E
void __cdecl data::ConfigAIMixinSetControllerParameter::ConfigAIMixinSetControllerParameter(
        data::ConfigAIMixinSetControllerParameter *const this,
        data::ConfigAIMixinSetControllerParameter *a2)
{
  data::ConfigAIMixinActions *p_on_fail; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::EntityType>::vector(&this->entity_types, &a2->entity_types);
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_success, &a2->on_success);
  p_on_fail = &a2->on_fail;
  data::ConfigAIMixinActions::ConfigAIMixinActions(&this->on_fail, p_on_fail);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_on_fail, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_on_fail) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_fail, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4192: range 000000000EDA5012-000000000EDA504E
void __cdecl data::ConfigAIMixinSetControllerParameter::~ConfigAIMixinSetControllerParameter(
        data::ConfigAIMixinSetControllerParameter *const this)
{
  data::ConfigAIMixinActions::~ConfigAIMixinActions(&this->on_fail);
  data::ConfigAIMixinActions::~ConfigAIMixinActions(&this->on_success);
  std::vector<data::EntityType>::~vector(&this->entity_types);
};

// Line 4222: range 000000001011212A-000000001011218F
void __cdecl data::ConfigAIMixinSetControllerCondition::ConfigAIMixinSetControllerCondition(
        data::ConfigAIMixinSetControllerCondition *const this)
{
  __int64 v1; // rsi

  std::vector<int>::vector(&this->pose_ids);
  std::vector<data::ConfigAIMixinSetControllerParameter>::vector(&this->settings);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4222: range 00000000104EBEEA-00000000104EBFA0
void __cdecl data::ConfigAIMixinSetControllerCondition::ConfigAIMixinSetControllerCondition(
        data::ConfigAIMixinSetControllerCondition *const this,
        data::ConfigAIMixinSetControllerCondition *a2)
{
  data::ConfigAIMixinSetControllerParameterArray *p_settings; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<int>::vector(&this->pose_ids, &a2->pose_ids);
  p_settings = &a2->settings;
  std::vector<data::ConfigAIMixinSetControllerParameter>::vector(&this->settings, p_settings);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_settings, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_settings) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_settings, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4222: range 000000000EC12308-000000000EC12332
void __cdecl data::ConfigAIMixinSetControllerCondition::~ConfigAIMixinSetControllerCondition(
        data::ConfigAIMixinSetControllerCondition *const this)
{
  std::vector<data::ConfigAIMixinSetControllerParameter>::~vector(&this->settings);
  std::vector<int>::~vector(&this->pose_ids);
};

// Line 4251: range 000000000ED90CD4-000000000ED90D29
void __cdecl data::ConfigAIMixinSetting::ConfigAIMixinSetting(data::ConfigAIMixinSetting *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigAIMixinSetControllerCondition>::vector(&this->set_controller_parameter_on_be_hit_by_entity_type);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4251: range 000000000E823D7A-000000000E823E15
void __cdecl data::ConfigAIMixinSetting::ConfigAIMixinSetting(
        data::ConfigAIMixinSetting *const this,
        const data::ConfigAIMixinSetting *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigAIMixinSetControllerCondition>::vector(
    &this->set_controller_parameter_on_be_hit_by_entity_type,
    &a2->set_controller_parameter_on_be_hit_by_entity_type);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4251: range 000000000E823E16-000000000E823E30
void __cdecl data::ConfigAIMixinSetting::~ConfigAIMixinSetting(data::ConfigAIMixinSetting *const this)
{
  std::vector<data::ConfigAIMixinSetControllerCondition>::~vector(&this->set_controller_parameter_on_be_hit_by_entity_type);
};

// Line 4274: range 000000000ED90D2A-000000000ED91B23
void __cdecl data::ConfigAIBeta::ConfigAIBeta(data::ConfigAIBeta *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->enable = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->friendliness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->friendliness >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->friendliness, v2);
  }
  this->friendliness = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->decision_archetype >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->decision_archetype >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->decision_archetype, v2);
  }
  this->decision_archetype = General_0;
  data::ConfigAIMove::ConfigAIMove(&this->move_setting);
  data::ConfigAIPrecombatSetting::ConfigAIPrecombatSetting(&this->precombat);
  data::ConfigAICombatSetting::ConfigAICombatSetting(&this->ai_combat);
  data::ConfigAIBuddySetting::ConfigAIBuddySetting(&this->buddy_setting);
  data::ConfigAISensing::ConfigAISensing(&this->sensing);
  std::unordered_map<std::string,std::vector<data::NeuronName>>::unordered_map(&this->neurons);
  data::ConfigAINeuronExtSettings::ConfigAINeuronExtSettings(&this->neuron_setting);
  data::ConfigAIThreatSetting::ConfigAIThreatSetting(&this->threat);
  data::ConfigAIOrderSetting::ConfigAIOrderSetting(&this->order);
  data::ConfigAIDefendArea::ConfigAIDefendArea(&this->defend_area);
  data::ConfigAIFlySetting::ConfigAIFlySetting(&this->fly);
  data::ConfigAIPoseControl::ConfigAIPoseControl(&this->pose_control);
  data::ConfigAIUISetting::ConfigAIUISetting(&this->ui);
  data::ConfigAIProfilingSetting::ConfigAIProfilingSetting(&this->profiling);
  data::ConfigAINetworkSetting::ConfigAINetworkSetting(&this->network);
  std::vector<data::ConfigAISkillGroupCD>::vector(&this->skill_group_cdconfigs);
  data::ConfigAISkillSetting::ConfigAISkillSetting(&this->skill_setting);
  std::unordered_map<std::string,data::ConfigAISkill>::unordered_map(&this->skills);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_gcd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_gcd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_gcd, v2);
  }
  this->skill_gcd = 1.0;
  data::ConfigAITarget::ConfigAITarget(&this->target);
  if ( *(_WORD *)(((unsigned __int64)&this->return_to_born_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIReturnToBornPosSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->wander_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIWanderSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->parallel_to_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIParallelToSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->follow_scripted_path_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFollowScriptedPathSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->follow_server_route_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFollowServerRouteSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->investigate_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIInvestigateSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->react_action_point_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIReactActionPointSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->patrol_follow_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIPatrolFollowSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->combat_follow_move_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAICombatFollowMoveSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->melee_charge_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIMeleeChargeSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->facing_move_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFacingMoveSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->surround_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISurroundSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->group_surround_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIGroupSurroundSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->find_back_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFindBackSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->combat_fixed_move_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAICombatFixedMoveSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->crab_move_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAICrabMoveSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->flee_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFleeSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->flee_on_block_avatar_landing_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFleeOnBlockAvatarLandingSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->spacial_chase_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISpacialChaseSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->spacial_probe_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISpacialProbeSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->spacial_adjust_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISpacialAdjustSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->spacial_wander_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISpacialWanderSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->bird_circling_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIBirdCirclingSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->scripted_move_to_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIScriptedMoveToSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->landing_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAILandingSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->extraction_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIExtractionSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->brownian_motion_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIBrownianMotionSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->spacial_facing_move_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAISpacialFacingMoveSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->move_to_special_alert_target_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIMoveToSpecialAlertTargetSetting>();
  data::ConfigAIMixinSetting::ConfigAIMixinSetting(&this->mixin);
  if ( *(_WORD *)(((unsigned __int64)&this->fishing_bites_bait_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFishingBitesBaitSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->fishing_pretend_bites_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFishingPretendBitesSetting>();
  if ( *(_WORD *)(((unsigned __int64)&this->fishing_flee_tactic >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAIFishingFleeSetting>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4274: range 000000000E82401E-000000000E824F83
void __cdecl data::ConfigAIBeta::ConfigAIBeta(data::ConfigAIBeta *const this, const data::ConfigAIBeta *a2)
{
  bool enable; // cl
  char v3; // al
  __int64 v4; // rsi
  int32_t friendliness; // ecx
  char v6; // dl
  data::DecisionArchetype decision_archetype; // ecx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  float skill_gcd; // xmm0_4
  data::ConfigAIFishingFleeSettingPtr *p_fishing_flee_tactic; // rsi
  bool is_json_loaded; // cl
  char v14; // al
  const data::ConfigAIBeta *v15; // [rsp+0h] [rbp-20h]

  v15 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  enable = a2->enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->enable = enable;
  v4 = (((_BYTE)v15 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->friendliness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->friendliness >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->friendliness);
  }
  friendliness = v15->friendliness;
  v6 = *(_BYTE *)(((unsigned __int64)&this->friendliness >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->friendliness, v4);
  }
  this->friendliness = friendliness;
  if ( *(_BYTE *)(((unsigned __int64)&v15->decision_archetype >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->decision_archetype >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->decision_archetype);
  }
  decision_archetype = v15->decision_archetype;
  v8 = *(_BYTE *)(((unsigned __int64)&this->decision_archetype >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->decision_archetype, v4);
  }
  this->decision_archetype = decision_archetype;
  data::ConfigAIMove::ConfigAIMove(&this->move_setting, &v15->move_setting);
  data::ConfigAIPrecombatSetting::ConfigAIPrecombatSetting(&this->precombat, &v15->precombat);
  data::ConfigAICombatSetting::ConfigAICombatSetting(&this->ai_combat, &v15->ai_combat);
  data::ConfigAIBuddySetting::ConfigAIBuddySetting(&this->buddy_setting, &v15->buddy_setting);
  data::ConfigAISensing::ConfigAISensing(&this->sensing, &v15->sensing);
  std::unordered_map<std::string,std::vector<data::NeuronName>>::unordered_map(&this->neurons, &v15->neurons);
  if ( *(char *)(((unsigned __int64)&this->neuron_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->neuron_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 9) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->neuron_setting.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->neuron_setting, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&v15->neuron_setting >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v15->neuron_setting.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 - 9) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->neuron_setting.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->neuron_setting, 32LL);
  }
  v9 = *(_QWORD *)&v15->neuron_setting.HIT_BUDDY.responser_camp_type;
  *(_QWORD *)&this->neuron_setting.HIT_BUDDY.feel_range = *(_QWORD *)&v15->neuron_setting.HIT_BUDDY.feel_range;
  *(_QWORD *)&this->neuron_setting.HIT_BUDDY.responser_camp_type = v9;
  v10 = *(_QWORD *)&v15->neuron_setting.HIT_BUDDY.is_json_loaded;
  *(_QWORD *)&this->neuron_setting.HIT_BUDDY.trigger_responser_camp_type = *(_QWORD *)&v15->neuron_setting.HIT_BUDDY.trigger_responser_camp_type;
  *(_QWORD *)&this->neuron_setting.HIT_BUDDY.is_json_loaded = v10;
  data::ConfigAIThreatSetting::ConfigAIThreatSetting(&this->threat, &v15->threat);
  data::ConfigAIOrderSetting::ConfigAIOrderSetting(&this->order, &v15->order);
  if ( *(char *)(((unsigned __int64)&this->defend_area >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->defend_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 29) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defend_area.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defend_area, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v15->defend_area >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v15->defend_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 - 29) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->defend_area.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->defend_area, 12LL);
  }
  this->defend_area = v15->defend_area;
  data::ConfigAIFlySetting::ConfigAIFlySetting(&this->fly, &v15->fly);
  data::ConfigAIPoseControl::ConfigAIPoseControl(&this->pose_control, &v15->pose_control);
  if ( *(_BYTE *)(((unsigned __int64)&this->ui >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ui >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->ui);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v15->ui >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->ui >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&v15->ui);
  }
  this->ui = v15->ui;
  data::ConfigAIProfilingSetting::ConfigAIProfilingSetting(&this->profiling, &v15->profiling);
  if ( *(char *)(((unsigned __int64)&this->network >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->network.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&this->network.is_json_loaded >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->network, 3LL);
  }
  if ( *(char *)(((unsigned __int64)&v15->network >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&v15->network.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->network.is_json_loaded >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->network, 3LL);
  }
  this->network = v15->network;
  std::vector<data::ConfigAISkillGroupCD>::vector(&this->skill_group_cdconfigs, &v15->skill_group_cdconfigs);
  data::ConfigAISkillSetting::ConfigAISkillSetting(&this->skill_setting, &v15->skill_setting);
  std::unordered_map<std::string,data::ConfigAISkill>::unordered_map(&this->skills, &v15->skills);
  if ( *(_BYTE *)(((unsigned __int64)&v15->skill_gcd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->skill_gcd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->skill_gcd);
  }
  skill_gcd = v15->skill_gcd;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_gcd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_gcd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_gcd, &v15->skills);
  }
  this->skill_gcd = skill_gcd;
  data::ConfigAITarget::ConfigAITarget(&this->target, &v15->target);
  std::shared_ptr<data::ConfigAIReturnToBornPosSetting>::shared_ptr(
    &this->return_to_born_tactic,
    &v15->return_to_born_tactic);
  std::shared_ptr<data::ConfigAIWanderSetting>::shared_ptr(&this->wander_tactic, &v15->wander_tactic);
  std::shared_ptr<data::ConfigAIParallelToSetting>::shared_ptr(&this->parallel_to_tactic, &v15->parallel_to_tactic);
  std::shared_ptr<data::ConfigAIFollowScriptedPathSetting>::shared_ptr(
    &this->follow_scripted_path_tactic,
    &v15->follow_scripted_path_tactic);
  std::shared_ptr<data::ConfigAIFollowServerRouteSetting>::shared_ptr(
    &this->follow_server_route_tactic,
    &v15->follow_server_route_tactic);
  std::shared_ptr<data::ConfigAIInvestigateSetting>::shared_ptr(&this->investigate_tactic, &v15->investigate_tactic);
  std::shared_ptr<data::ConfigAIReactActionPointSetting>::shared_ptr(
    &this->react_action_point_tactic,
    &v15->react_action_point_tactic);
  std::shared_ptr<data::ConfigAIPatrolFollowSetting>::shared_ptr(
    &this->patrol_follow_tactic,
    &v15->patrol_follow_tactic);
  std::shared_ptr<data::ConfigAICombatFollowMoveSetting>::shared_ptr(
    &this->combat_follow_move_tactic,
    &v15->combat_follow_move_tactic);
  std::shared_ptr<data::ConfigAIMeleeChargeSetting>::shared_ptr(&this->melee_charge_tactic, &v15->melee_charge_tactic);
  std::shared_ptr<data::ConfigAIFacingMoveSetting>::shared_ptr(&this->facing_move_tactic, &v15->facing_move_tactic);
  std::shared_ptr<data::ConfigAISurroundSetting>::shared_ptr(&this->surround_tactic, &v15->surround_tactic);
  std::shared_ptr<data::ConfigAIGroupSurroundSetting>::shared_ptr(
    &this->group_surround_tactic,
    &v15->group_surround_tactic);
  std::shared_ptr<data::ConfigAIFindBackSetting>::shared_ptr(&this->find_back_tactic, &v15->find_back_tactic);
  std::shared_ptr<data::ConfigAICombatFixedMoveSetting>::shared_ptr(
    &this->combat_fixed_move_tactic,
    &v15->combat_fixed_move_tactic);
  std::shared_ptr<data::ConfigAICrabMoveSetting>::shared_ptr(&this->crab_move_tactic, &v15->crab_move_tactic);
  std::shared_ptr<data::ConfigAIFleeSetting>::shared_ptr(&this->flee_tactic, &v15->flee_tactic);
  std::shared_ptr<data::ConfigAIFleeOnBlockAvatarLandingSetting>::shared_ptr(
    &this->flee_on_block_avatar_landing_tactic,
    &v15->flee_on_block_avatar_landing_tactic);
  std::shared_ptr<data::ConfigAISpacialChaseSetting>::shared_ptr(
    &this->spacial_chase_tactic,
    &v15->spacial_chase_tactic);
  std::shared_ptr<data::ConfigAISpacialProbeSetting>::shared_ptr(
    &this->spacial_probe_tactic,
    &v15->spacial_probe_tactic);
  std::shared_ptr<data::ConfigAISpacialAdjustSetting>::shared_ptr(
    &this->spacial_adjust_tactic,
    &v15->spacial_adjust_tactic);
  std::shared_ptr<data::ConfigAISpacialWanderSetting>::shared_ptr(
    &this->spacial_wander_tactic,
    &v15->spacial_wander_tactic);
  std::shared_ptr<data::ConfigAIBirdCirclingSetting>::shared_ptr(
    &this->bird_circling_tactic,
    &v15->bird_circling_tactic);
  std::shared_ptr<data::ConfigAIScriptedMoveToSetting>::shared_ptr(
    &this->scripted_move_to_tactic,
    &v15->scripted_move_to_tactic);
  std::shared_ptr<data::ConfigAILandingSetting>::shared_ptr(&this->landing_tactic, &v15->landing_tactic);
  std::shared_ptr<data::ConfigAIExtractionSetting>::shared_ptr(&this->extraction_tactic, &v15->extraction_tactic);
  std::shared_ptr<data::ConfigAIBrownianMotionSetting>::shared_ptr(
    &this->brownian_motion_tactic,
    &v15->brownian_motion_tactic);
  std::shared_ptr<data::ConfigAISpacialFacingMoveSetting>::shared_ptr(
    &this->spacial_facing_move_tactic,
    &v15->spacial_facing_move_tactic);
  std::shared_ptr<data::ConfigAIMoveToSpecialAlertTargetSetting>::shared_ptr(
    &this->move_to_special_alert_target_tactic,
    &v15->move_to_special_alert_target_tactic);
  data::ConfigAIMixinSetting::ConfigAIMixinSetting(&this->mixin, &v15->mixin);
  std::shared_ptr<data::ConfigAIFishingBitesBaitSetting>::shared_ptr(
    &this->fishing_bites_bait_tactic,
    &v15->fishing_bites_bait_tactic);
  std::shared_ptr<data::ConfigAIFishingPretendBitesSetting>::shared_ptr(
    &this->fishing_pretend_bites_tactic,
    &v15->fishing_pretend_bites_tactic);
  p_fishing_flee_tactic = &v15->fishing_flee_tactic;
  std::shared_ptr<data::ConfigAIFishingFleeSetting>::shared_ptr(&this->fishing_flee_tactic, &v15->fishing_flee_tactic);
  if ( *(char *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_json_loaded, p_fishing_flee_tactic, &v15->is_json_loaded);
  is_json_loaded = v15->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_fishing_flee_tactic) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fishing_flee_tactic, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4274: range 000000000E824F84-000000000E8252EE
void __cdecl data::ConfigAIBeta::~ConfigAIBeta(data::ConfigAIBeta *const this)
{
  std::shared_ptr<data::ConfigAIFishingFleeSetting>::~shared_ptr(&this->fishing_flee_tactic);
  std::shared_ptr<data::ConfigAIFishingPretendBitesSetting>::~shared_ptr(&this->fishing_pretend_bites_tactic);
  std::shared_ptr<data::ConfigAIFishingBitesBaitSetting>::~shared_ptr(&this->fishing_bites_bait_tactic);
  data::ConfigAIMixinSetting::~ConfigAIMixinSetting(&this->mixin);
  std::shared_ptr<data::ConfigAIMoveToSpecialAlertTargetSetting>::~shared_ptr(&this->move_to_special_alert_target_tactic);
  std::shared_ptr<data::ConfigAISpacialFacingMoveSetting>::~shared_ptr(&this->spacial_facing_move_tactic);
  std::shared_ptr<data::ConfigAIBrownianMotionSetting>::~shared_ptr(&this->brownian_motion_tactic);
  std::shared_ptr<data::ConfigAIExtractionSetting>::~shared_ptr(&this->extraction_tactic);
  std::shared_ptr<data::ConfigAILandingSetting>::~shared_ptr(&this->landing_tactic);
  std::shared_ptr<data::ConfigAIScriptedMoveToSetting>::~shared_ptr(&this->scripted_move_to_tactic);
  std::shared_ptr<data::ConfigAIBirdCirclingSetting>::~shared_ptr(&this->bird_circling_tactic);
  std::shared_ptr<data::ConfigAISpacialWanderSetting>::~shared_ptr(&this->spacial_wander_tactic);
  std::shared_ptr<data::ConfigAISpacialAdjustSetting>::~shared_ptr(&this->spacial_adjust_tactic);
  std::shared_ptr<data::ConfigAISpacialProbeSetting>::~shared_ptr(&this->spacial_probe_tactic);
  std::shared_ptr<data::ConfigAISpacialChaseSetting>::~shared_ptr(&this->spacial_chase_tactic);
  std::shared_ptr<data::ConfigAIFleeOnBlockAvatarLandingSetting>::~shared_ptr(&this->flee_on_block_avatar_landing_tactic);
  std::shared_ptr<data::ConfigAIFleeSetting>::~shared_ptr(&this->flee_tactic);
  std::shared_ptr<data::ConfigAICrabMoveSetting>::~shared_ptr(&this->crab_move_tactic);
  std::shared_ptr<data::ConfigAICombatFixedMoveSetting>::~shared_ptr(&this->combat_fixed_move_tactic);
  std::shared_ptr<data::ConfigAIFindBackSetting>::~shared_ptr(&this->find_back_tactic);
  std::shared_ptr<data::ConfigAIGroupSurroundSetting>::~shared_ptr(&this->group_surround_tactic);
  std::shared_ptr<data::ConfigAISurroundSetting>::~shared_ptr(&this->surround_tactic);
  std::shared_ptr<data::ConfigAIFacingMoveSetting>::~shared_ptr(&this->facing_move_tactic);
  std::shared_ptr<data::ConfigAIMeleeChargeSetting>::~shared_ptr(&this->melee_charge_tactic);
  std::shared_ptr<data::ConfigAICombatFollowMoveSetting>::~shared_ptr(&this->combat_follow_move_tactic);
  std::shared_ptr<data::ConfigAIPatrolFollowSetting>::~shared_ptr(&this->patrol_follow_tactic);
  std::shared_ptr<data::ConfigAIReactActionPointSetting>::~shared_ptr(&this->react_action_point_tactic);
  std::shared_ptr<data::ConfigAIInvestigateSetting>::~shared_ptr(&this->investigate_tactic);
  std::shared_ptr<data::ConfigAIFollowServerRouteSetting>::~shared_ptr(&this->follow_server_route_tactic);
  std::shared_ptr<data::ConfigAIFollowScriptedPathSetting>::~shared_ptr(&this->follow_scripted_path_tactic);
  std::shared_ptr<data::ConfigAIParallelToSetting>::~shared_ptr(&this->parallel_to_tactic);
  std::shared_ptr<data::ConfigAIWanderSetting>::~shared_ptr(&this->wander_tactic);
  std::shared_ptr<data::ConfigAIReturnToBornPosSetting>::~shared_ptr(&this->return_to_born_tactic);
  data::ConfigAITarget::~ConfigAITarget(&this->target);
  std::unordered_map<std::string,data::ConfigAISkill>::~unordered_map(&this->skills);
  data::ConfigAISkillSetting::~ConfigAISkillSetting(&this->skill_setting);
  std::vector<data::ConfigAISkillGroupCD>::~vector(&this->skill_group_cdconfigs);
  data::ConfigAIProfilingSetting::~ConfigAIProfilingSetting(&this->profiling);
  data::ConfigAIPoseControl::~ConfigAIPoseControl(&this->pose_control);
  data::ConfigAIFlySetting::~ConfigAIFlySetting(&this->fly);
  data::ConfigAIOrderSetting::~ConfigAIOrderSetting(&this->order);
  data::ConfigAIThreatSetting::~ConfigAIThreatSetting(&this->threat);
  std::unordered_map<std::string,std::vector<data::NeuronName>>::~unordered_map(&this->neurons);
  data::ConfigAISensing::~ConfigAISensing(&this->sensing);
  data::ConfigAIBuddySetting::~ConfigAIBuddySetting(&this->buddy_setting);
  data::ConfigAICombatSetting::~ConfigAICombatSetting(&this->ai_combat);
  data::ConfigAIPrecombatSetting::~ConfigAIPrecombatSetting(&this->precombat);
  data::ConfigAIMove::~ConfigAIMove(&this->move_setting);
};
