// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAmbience.h

// Line 21: range 000000001213660E-0000000012136773
void __cdecl data::AudioAmbiencePositionedEvent::AudioAmbiencePositionedEvent(
        data::AudioAmbiencePositionedEvent *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->event_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_init_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_init_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_init_delay, v1);
  }
  this->min_init_delay = 0.0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_init_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_init_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_init_delay, v2);
  }
  this->max_init_delay = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, v2);
  }
  this->min_interval = 0.0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_interval, v3);
  }
  this->max_interval = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 00000000122ED706-00000000122ED9A1
void __cdecl data::AudioAmbiencePositionedEvent::AudioAmbiencePositionedEvent(
        data::AudioAmbiencePositionedEvent *const this,
        data::AudioAmbiencePositionedEvent *a2)
{
  float min_init_delay; // xmm0_4
  float max_init_delay; // xmm0_4
  __int64 v4; // rsi
  float min_interval; // xmm0_4
  float max_interval; // xmm0_4
  __int64 v7; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->event_name, &a2->event_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_init_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_init_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_init_delay);
  }
  min_init_delay = a2->min_init_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_init_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_init_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_init_delay, a2);
  }
  this->min_init_delay = min_init_delay;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_init_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_init_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_init_delay);
  }
  max_init_delay = a2->max_init_delay;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_init_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_init_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_init_delay, v4);
  }
  this->max_init_delay = max_init_delay;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_interval);
  }
  min_interval = a2->min_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, v4);
  }
  this->min_interval = min_interval;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_interval);
  }
  max_interval = a2->max_interval;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_interval, v7);
  }
  this->max_interval = max_interval;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v7, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 0000000012136774-000000001213678E
void __cdecl data::AudioAmbiencePositionedEvent::~AudioAmbiencePositionedEvent(
        data::AudioAmbiencePositionedEvent *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_name);
};

// Line 68: range 0000000012136B34-0000000012136BC6
void __cdecl data::AudioTreeDataAssetNamePattern::AudioTreeDataAssetNamePattern(
        data::AudioTreeDataAssetNamePattern *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  std::string::basic_string(&this->pattern);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 68: range 00000000122EE7EC-00000000122EE8FA
void __cdecl data::AudioTreeDataAssetNamePattern::AudioTreeDataAssetNamePattern(
        data::AudioTreeDataAssetNamePattern *const this,
        data::AudioTreeDataAssetNamePattern *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  std::string *p_pattern; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::AudioTreeDataAssetNamePattern *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  p_pattern = &v7->pattern;
  std::string::basic_string(&this->pattern, &v7->pattern);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_pattern, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_pattern) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_pattern, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 68: range 0000000012136BC8-0000000012136BE6
void __cdecl data::AudioTreeDataAssetNamePattern::~AudioTreeDataAssetNamePattern(
        data::AudioTreeDataAssetNamePattern *const this)
{
  std::string::~string(&this->pattern);
};

// Line 157: range 0000000012136C58-0000000012136E49
void __cdecl data::AudioArea2DVolumeArea::AudioArea2DVolumeArea(data::AudioArea2DVolumeArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ambience, v1, &this->is_ambience);
  this->is_ambience = 0;
  std::vector<data::ConfigWwiseString>::vector(&this->enter_events);
  std::vector<data::ConfigWwiseString>::vector(&this->leave_events);
  if ( *(char *)(((unsigned __int64)&this->is_reverb >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reverb, v1, &this->is_reverb);
  this->is_reverb = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_bus_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0;
  v2 = ((_BYTE)this - 116) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->exclude_other, v2, v3);
  this->exclude_other = 0;
  v4 = ((_BYTE)this - 115) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->enable_change_states, v4, v5);
  this->enable_change_states = 0;
  std::vector<data::AudioStateOp>::vector(&this->enter_states);
  std::vector<data::AudioStateOp>::vector(&this->leave_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 157: range 0000000012136E4A-0000000012136EB8
void __cdecl data::AudioArea2DVolumeArea::~AudioArea2DVolumeArea(data::AudioArea2DVolumeArea *const this)
{
  std::vector<data::AudioStateOp>::~vector(&this->leave_states);
  std::vector<data::AudioStateOp>::~vector(&this->enter_states);
  data::ConfigWwiseString::~ConfigWwiseString(&this->aux_bus_name);
  std::vector<data::ConfigWwiseString>::~vector(&this->leave_events);
  std::vector<data::ConfigWwiseString>::~vector(&this->enter_events);
  std::string::~string(this);
};

// Line 236: range 0000000012137414-00000000121374AC
void __cdecl data::DirectionMask::DirectionMask(data::DirectionMask *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mask, v1);
  }
  this->mask = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 236: range 00000000122F03F8-00000000122F0512
void __cdecl data::DirectionMask::DirectionMask(data::DirectionMask *const this, data::DirectionMask *a2)
{
  uint32_t mask; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::DirectionMask *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mask);
  }
  mask = a2->mask;
  v3 = *(_BYTE *)(((unsigned __int64)&this->mask >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->mask, a2);
  }
  this->mask = mask;
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

// Line 236: range 00000000121374AE-00000000121374C8
void __cdecl data::DirectionMask::~DirectionMask(data::DirectionMask *const this)
{
  std::string::~string(this);
};

// Line 265: range 00000000121374CA-000000001213756C
void __cdecl data::LayeredSamplingData::LayeredSamplingData(data::LayeredSamplingData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->level = 0;
  std::vector<float>::vector(&this->vertices);
  std::vector<unsigned int>::vector(&this->masks);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 265: range 00000000122F0C9E-00000000122F0DC7
void __cdecl data::LayeredSamplingData::LayeredSamplingData(
        data::LayeredSamplingData *const this,
        data::LayeredSamplingData *a2)
{
  uint32_t level; // ecx
  char v3; // al
  data::UInt32Array *p_masks; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::LayeredSamplingData *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  level = a2->level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->level = level;
  std::vector<float>::vector(&this->vertices, &v7->vertices);
  p_masks = &v7->masks;
  std::vector<unsigned int>::vector(&this->masks, &v7->masks);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_masks, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_masks) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_masks, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 265: range 000000001213756E-000000001213759C
void __cdecl data::LayeredSamplingData::~LayeredSamplingData(data::LayeredSamplingData *const this)
{
  std::vector<unsigned int>::~vector(&this->masks);
  std::vector<float>::~vector(&this->vertices);
};

// Line 381: range 00000000121375D2-0000000012137687
void __cdecl data::ConfigSceneTagAudio::ConfigSceneTagAudio(data::ConfigSceneTagAudio *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_tag_id = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_grp);
  data::ConfigWwiseString::ConfigWwiseString(&this->off_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->on_value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 381: range 00000000122F1938-00000000122F1A82
void __cdecl data::ConfigSceneTagAudio::ConfigSceneTagAudio(
        data::ConfigSceneTagAudio *const this,
        data::ConfigSceneTagAudio *a2)
{
  uint32_t scene_tag_id; // ecx
  char v3; // al
  data::ConfigWwiseString *p_on_value; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigSceneTagAudio *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_tag_id = a2->scene_tag_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_tag_id = scene_tag_id;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_grp, &v7->state_grp);
  data::ConfigWwiseString::ConfigWwiseString(&this->off_value, &v7->off_value);
  p_on_value = &v7->on_value;
  data::ConfigWwiseString::ConfigWwiseString(&this->on_value, &v7->on_value);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_on_value, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_on_value) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 381: range 0000000012137688-00000000121376C6
void __cdecl data::ConfigSceneTagAudio::~ConfigSceneTagAudio(data::ConfigSceneTagAudio *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->on_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->off_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_grp);
};

// Line 569: range 00000000122EF1D2-00000000122EF587
void __cdecl data::AudioArea2DVolumeArea::AudioArea2DVolumeArea(
        data::AudioArea2DVolumeArea *const this,
        data::AudioArea2DVolumeArea *a2)
{
  bool is_ambience; // cl
  char v3; // al
  data::ConfigWwiseStringArray *p_leave_events; // rsi
  bool is_reverb; // cl
  char v6; // al
  data::ConfigWwiseString *p_aux_bus_name; // rsi
  int32_t priority; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool exclude_other; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool enable_change_states; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::AudioStateOpArray *p_leave_states; // rsi
  bool is_json_loaded; // cl
  char v22; // al
  data::AudioArea2DVolumeArea *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_ambience >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ambience, a2, &a2->is_ambience);
  is_ambience = a2->is_ambience;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_ambience, a2, &this->is_ambience);
  }
  this->is_ambience = is_ambience;
  std::vector<data::ConfigWwiseString>::vector(&this->enter_events, &v23->enter_events);
  p_leave_events = &v23->leave_events;
  std::vector<data::ConfigWwiseString>::vector(&this->leave_events, &v23->leave_events);
  if ( *(char *)(((unsigned __int64)&v23->is_reverb >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_reverb, p_leave_events, &v23->is_reverb);
  is_reverb = v23->is_reverb;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_reverb >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_leave_events) = v6 != 0;
    __asan_report_store1(&this->is_reverb, p_leave_events, &this->is_reverb);
  }
  this->is_reverb = is_reverb;
  p_aux_bus_name = &v23->aux_bus_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_bus_name, &v23->aux_bus_name);
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->priority);
  }
  priority = v23->priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_aux_bus_name) = v9 != 0;
    __asan_report_store4(&this->priority, p_aux_bus_name);
  }
  this->priority = priority;
  v10 = ((_BYTE)v23 - 116) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v23->exclude_other >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v23->exclude_other >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v23->exclude_other, v10, v11);
  exclude_other = v23->exclude_other;
  v13 = *(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 116) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->exclude_other, v10, v14);
  this->exclude_other = exclude_other;
  v15 = ((_BYTE)v23 - 115) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v23->enable_change_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v23->enable_change_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v23->enable_change_states, v15, v16);
  enable_change_states = v23->enable_change_states;
  v18 = *(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 115) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->enable_change_states, v15, v19);
  this->enable_change_states = enable_change_states;
  std::vector<data::AudioStateOp>::vector(&this->enter_states, &v23->enter_states);
  p_leave_states = &v23->leave_states;
  std::vector<data::AudioStateOp>::vector(&this->leave_states, &v23->leave_states);
  if ( *(char *)(((unsigned __int64)&v23->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_json_loaded, p_leave_states, &v23->is_json_loaded);
  is_json_loaded = v23->is_json_loaded;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v22 < 0 )
  {
    LOBYTE(p_leave_states) = v22 != 0;
    __asan_report_store1(&this->is_json_loaded, p_leave_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};
