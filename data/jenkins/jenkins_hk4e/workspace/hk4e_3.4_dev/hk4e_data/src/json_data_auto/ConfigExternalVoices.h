// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigExternalVoices.h

// Line 40: range 000000001213C836-000000001213C92E
void __cdecl data::ConfigExternalVoiceSound::ConfigExternalVoiceSound(data::ConfigExternalVoiceSound *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rate, v1);
  }
  this->rate = 0.0;
  std::string::basic_string(&this->avatar_name);
  std::string::basic_string(&this->emotion);
  if ( *(_BYTE *)(((unsigned __int64)&this->gender >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gender >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gender, v1);
  }
  this->gender = 0;
  v2 = ((_BYTE)this + 108) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 40: range 0000000012747B84-0000000012747D84
void __cdecl data::ConfigExternalVoiceSound::ConfigExternalVoiceSound(
        data::ConfigExternalVoiceSound *const this,
        const data::ConfigExternalVoiceSound *a2)
{
  float rate; // xmm0_4
  std::string *p_emotion; // rsi
  int32_t gender; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rate);
  }
  rate = a2->rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rate, a2);
  }
  this->rate = rate;
  std::string::basic_string(&this->avatar_name, &a2->avatar_name);
  p_emotion = &a2->emotion;
  std::string::basic_string(&this->emotion, &a2->emotion);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gender >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gender >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gender);
  }
  gender = a2->gender;
  v5 = *(_BYTE *)(((unsigned __int64)&this->gender >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_emotion) = v5 != 0;
    __asan_report_store4(&this->gender, p_emotion);
  }
  this->gender = gender;
  v6 = ((_BYTE)a2 + 108) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 40: range 00000000122FF402-00000000122FF5CA
void __cdecl data::ConfigExternalVoiceSound::ConfigExternalVoiceSound(
        data::ConfigExternalVoiceSound *const this,
        data::ConfigExternalVoiceSound *a2)
{
  float rate; // xmm0_4
  std::string *p_emotion; // rsi
  int32_t gender; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rate);
  }
  rate = a2->rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rate, a2);
  }
  this->rate = rate;
  std::string::basic_string(&this->avatar_name, &a2->avatar_name);
  p_emotion = &a2->emotion;
  std::string::basic_string(&this->emotion, &a2->emotion);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gender >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gender >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gender);
  }
  gender = a2->gender;
  v5 = *(_BYTE *)(((unsigned __int64)&this->gender >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_emotion) = v5 != 0;
    __asan_report_store4(&this->gender, p_emotion);
  }
  this->gender = gender;
  v6 = ((_BYTE)a2 + 108) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 40: range 000000001213C930-000000001213C96A
void __cdecl data::ConfigExternalVoiceSound::~ConfigExternalVoiceSound(data::ConfigExternalVoiceSound *const this)
{
  std::string::~string(&this->emotion);
  std::string::~string(&this->avatar_name);
  std::string::~string(this);
};

// Line 72: range 000000001213C96C-000000001213CA01
void __cdecl data::ConfigExternalVoiceInferiorItem::ConfigExternalVoiceInferiorItem(
        data::ConfigExternalVoiceInferiorItem *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->include, v1, &this->include);
  this->include = 0;
  v2 = ((_BYTE)this + 33) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 72: range 00000000127479EA-0000000012747B05
void __cdecl data::ConfigExternalVoiceInferiorItem::ConfigExternalVoiceInferiorItem(
        data::ConfigExternalVoiceInferiorItem *const this,
        const data::ConfigExternalVoiceInferiorItem *a2)
{
  bool include; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::ConfigExternalVoiceInferiorItem *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->include, a2, &a2->include);
  include = a2->include;
  v3 = *(_BYTE *)(((unsigned __int64)&this->include >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->include, a2, &this->include);
  }
  this->include = include;
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

// Line 72: range 00000000122FFD12-00000000122FFE2D
void __cdecl data::ConfigExternalVoiceInferiorItem::ConfigExternalVoiceInferiorItem(
        data::ConfigExternalVoiceInferiorItem *const this,
        data::ConfigExternalVoiceInferiorItem *a2)
{
  bool include; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigExternalVoiceInferiorItem *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->include, a2, &a2->include);
  include = a2->include;
  v3 = *(_BYTE *)(((unsigned __int64)&this->include >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->include, a2, &this->include);
  }
  this->include = include;
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

// Line 72: range 000000001213CA02-000000001213CA1C
void __cdecl data::ConfigExternalVoiceInferiorItem::~ConfigExternalVoiceInferiorItem(
        data::ConfigExternalVoiceInferiorItem *const this)
{
  std::string::~string(this);
};

// Line 101: range 000000001213CAC6-000000001213CE5B
void __cdecl data::ConfigExternalVoiceItem::ConfigExternalVoiceItem(data::ConfigExternalVoiceItem *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->_play_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_play_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_play_rate, v1);
  }
  this->_play_rate = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->_initial_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_initial_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_initial_delay, v2);
  }
  this->_initial_delay = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cooldown >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cooldown >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cooldown, v2);
  }
  this->_cooldown = 0;
  std::vector<data::ConfigExternalVoiceInferiorItem>::vector(&this->_interrupted_guids);
  std::vector<data::ConfigExternalVoiceInferiorItem>::vector(&this->_excluded_guids);
  if ( *(_BYTE *)(((unsigned __int64)&this->_queue_up_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_queue_up_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_queue_up_config, v2);
  }
  this->_queue_up_config = 0;
  std::string::basic_string(&this->_game_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&this->_game_trigger_args >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_game_trigger_args >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_game_trigger_args, v2);
  }
  this->_game_trigger_args = 0;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->_personal_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_personal_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_personal_config, v3);
  }
  this->_personal_config = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_view_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_view_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_view_config, v3);
  }
  this->_view_config = 0;
  v4 = ((_BYTE)this - 108) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->_clear_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->_clear_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->_clear_all, v4, v5);
  this->_clear_all = 0;
  v6 = ((_BYTE)this - 107) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->_is_global_stop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->_is_global_stop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->_is_global_stop, v6, v7);
  this->_is_global_stop = 0;
  v8 = ((_BYTE)this - 106) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->_is_play_on_team >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->_is_play_on_team >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->_is_play_on_team, v8, v9);
  this->_is_play_on_team = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_avoid_repeat >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_avoid_repeat >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_avoid_repeat, v8);
  }
  this->_avoid_repeat = 0;
  std::string::basic_string(&this->_parent_id);
  std::vector<data::ConfigExternalVoiceSound>::vector(&this->_source_names);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 101: range 000000001260E8AE-000000001260EFF1
void __cdecl data::ConfigExternalVoiceItem::ConfigExternalVoiceItem(
        data::ConfigExternalVoiceItem *const this,
        const data::ConfigExternalVoiceItem *a2)
{
  float play_rate; // xmm0_4
  float initial_delay; // xmm0_4
  __int64 v4; // rsi
  int32_t cooldown; // ecx
  char v6; // al
  data::ConfigExternalVoiceInferiorItemArray *p_excluded_guids; // rsi
  int32_t queue_up_config; // ecx
  char v9; // al
  std::string *p_game_trigger; // rsi
  uint32_t game_trigger_args; // ecx
  char v12; // al
  __int64 v13; // rsi
  int32_t personal_config; // ecx
  char v15; // dl
  int32_t view_config; // ecx
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool clear_all; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_global_stop; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_play_on_team; // cl
  char v31; // dl
  __int64 v32; // rdx
  int32_t avoid_repeat; // ecx
  char v34; // al
  data::ConfigExternalVoiceSoundArray *p_source_names; // rsi
  bool is_json_loaded; // cl
  char v37; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->_play_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_play_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_play_rate);
  }
  play_rate = a2->_play_rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->_play_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_play_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_play_rate, a2);
  }
  this->_play_rate = play_rate;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_initial_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->_initial_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->_initial_delay);
  }
  initial_delay = a2->_initial_delay;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->_initial_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_initial_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_initial_delay, v4);
  }
  this->_initial_delay = initial_delay;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_cooldown >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_cooldown >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_cooldown);
  }
  cooldown = a2->_cooldown;
  v6 = *(_BYTE *)(((unsigned __int64)&this->_cooldown >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->_cooldown, v4);
  }
  this->_cooldown = cooldown;
  std::vector<data::ConfigExternalVoiceInferiorItem>::vector(&this->_interrupted_guids, &a2->_interrupted_guids);
  p_excluded_guids = &a2->_excluded_guids;
  std::vector<data::ConfigExternalVoiceInferiorItem>::vector(&this->_excluded_guids, &a2->_excluded_guids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->_queue_up_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_queue_up_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_queue_up_config);
  }
  queue_up_config = a2->_queue_up_config;
  v9 = *(_BYTE *)(((unsigned __int64)&this->_queue_up_config >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_excluded_guids) = v9 != 0;
    __asan_report_store4(&this->_queue_up_config, p_excluded_guids);
  }
  this->_queue_up_config = queue_up_config;
  p_game_trigger = &a2->_game_trigger;
  std::string::basic_string(&this->_game_trigger, &a2->_game_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&a2->_game_trigger_args >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_game_trigger_args >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_game_trigger_args);
  }
  game_trigger_args = a2->_game_trigger_args;
  v12 = *(_BYTE *)(((unsigned __int64)&this->_game_trigger_args >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_game_trigger) = v12 != 0;
    __asan_report_store4(&this->_game_trigger_args, p_game_trigger);
  }
  this->_game_trigger_args = game_trigger_args;
  v13 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_personal_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->_personal_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->_personal_config);
  }
  personal_config = a2->_personal_config;
  v15 = *(_BYTE *)(((unsigned __int64)&this->_personal_config >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->_personal_config, v13);
  }
  this->_personal_config = personal_config;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_view_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_view_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_view_config);
  }
  view_config = a2->_view_config;
  v17 = *(_BYTE *)(((unsigned __int64)&this->_view_config >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->_view_config, v13);
  }
  this->_view_config = view_config;
  v18 = ((_BYTE)a2 - 108) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->_clear_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->_clear_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->_clear_all, v18, v19);
  clear_all = a2->_clear_all;
  v21 = *(_BYTE *)(((unsigned __int64)&this->_clear_all >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 108) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->_clear_all, v18, v22);
  this->_clear_all = clear_all;
  v23 = ((_BYTE)a2 - 107) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&a2->_is_global_stop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&a2->_is_global_stop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&a2->_is_global_stop, v23, v24);
  is_global_stop = a2->_is_global_stop;
  v26 = *(_BYTE *)(((unsigned __int64)&this->_is_global_stop >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 107) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->_is_global_stop, v23, v27);
  this->_is_global_stop = is_global_stop;
  v28 = ((_BYTE)a2 - 106) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->_is_play_on_team >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->_is_play_on_team >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->_is_play_on_team, v28, v29);
  is_play_on_team = a2->_is_play_on_team;
  v31 = *(_BYTE *)(((unsigned __int64)&this->_is_play_on_team >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 106) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->_is_play_on_team, v28, v32);
  this->_is_play_on_team = is_play_on_team;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_avoid_repeat >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_avoid_repeat >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_avoid_repeat);
  }
  avoid_repeat = a2->_avoid_repeat;
  v34 = *(_BYTE *)(((unsigned __int64)&this->_avoid_repeat >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v28) = v34 != 0;
    __asan_report_store4(&this->_avoid_repeat, v28);
  }
  this->_avoid_repeat = avoid_repeat;
  std::string::basic_string(&this->_parent_id, &a2->_parent_id);
  p_source_names = &a2->_source_names;
  std::vector<data::ConfigExternalVoiceSound>::vector(&this->_source_names, &a2->_source_names);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_source_names, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v37 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v37 < 0 )
  {
    LOBYTE(p_source_names) = v37 != 0;
    __asan_report_store1(&this->is_json_loaded, p_source_names, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 101: range 000000001213CE5C-000000001213CECA
void __cdecl data::ConfigExternalVoiceItem::~ConfigExternalVoiceItem(data::ConfigExternalVoiceItem *const this)
{
  std::vector<data::ConfigExternalVoiceSound>::~vector(&this->_source_names);
  std::string::~string(&this->_parent_id);
  std::string::~string(&this->_game_trigger);
  std::vector<data::ConfigExternalVoiceInferiorItem>::~vector(&this->_excluded_guids);
  std::vector<data::ConfigExternalVoiceInferiorItem>::~vector(&this->_interrupted_guids);
  std::string::~string(this);
};

// Line 165: range 0000000013C16D40-0000000013C16E15
void __cdecl data::VoiceTriggerIdentity::VoiceTriggerIdentity(data::VoiceTriggerIdentity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->_game_trigger = Invalid_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->_game_trigger_args >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_game_trigger_args >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_game_trigger_args, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->_game_trigger_args = 0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};
