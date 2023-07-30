// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/AudioOneTimeEvent.h

// Line 20: range 0000000012138B92-0000000012138C2C
void __cdecl data::AudioOneTimeEvent::AudioOneTimeEvent(data::AudioOneTimeEvent *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->event_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v1);
  }
  this->duration = 0.0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 20: range 0000000012606A3C-0000000012606B59
void __cdecl data::AudioOneTimeEvent::AudioOneTimeEvent(
        data::AudioOneTimeEvent *const this,
        const data::AudioOneTimeEvent *a2)
{
  float duration; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->event_name, &a2->event_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, a2);
  }
  this->duration = duration;
  v3 = ((_BYTE)a2 + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 00000000122F3BD8-00000000122F3CF5
void __cdecl data::AudioOneTimeEvent::AudioOneTimeEvent(
        data::AudioOneTimeEvent *const this,
        data::AudioOneTimeEvent *a2)
{
  float duration; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->event_name, &a2->event_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, a2);
  }
  this->duration = duration;
  v3 = ((_BYTE)a2 + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000012138C2E-0000000012138C48
void __cdecl data::AudioOneTimeEvent::~AudioOneTimeEvent(data::AudioOneTimeEvent *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_name);
};

// Line 44: range 0000000012136432-0000000012136497
void __cdecl data::WwiseSwitch::WwiseSwitch(data::WwiseSwitch *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->switch_grp);
  data::ConfigWwiseString::ConfigWwiseString(&this->target_val);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 44: range 00000000122EBE12-00000000122EBEC8
void __cdecl data::WwiseSwitch::WwiseSwitch(data::WwiseSwitch *const this, data::WwiseSwitch *a2)
{
  data::ConfigWwiseString *p_target_val; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->switch_grp, &a2->switch_grp);
  p_target_val = &a2->target_val;
  data::ConfigWwiseString::ConfigWwiseString(&this->target_val, p_target_val);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_target_val, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_target_val) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_val, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 44: range 0000000012136498-00000000121364C2
void __cdecl data::WwiseSwitch::~WwiseSwitch(data::WwiseSwitch *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->target_val);
  data::ConfigWwiseString::~ConfigWwiseString(&this->switch_grp);
};

// Line 73: range 00000000121364C4-000000001213655E
void __cdecl data::WwiseRTPC::WwiseRTPC(data::WwiseRTPC *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->rtpc_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_val, v1);
  }
  this->target_val = 0.0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 73: range 00000000122EC65A-00000000122EC777
void __cdecl data::WwiseRTPC::WwiseRTPC(data::WwiseRTPC *const this, data::WwiseRTPC *a2)
{
  float target_val; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->rtpc_key, &a2->rtpc_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_val);
  }
  target_val = a2->target_val;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_val, a2);
  }
  this->target_val = target_val;
  v3 = ((_BYTE)a2 + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 73: range 0000000012136560-000000001213657A
void __cdecl data::WwiseRTPC::~WwiseRTPC(data::WwiseRTPC *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->rtpc_key);
};
