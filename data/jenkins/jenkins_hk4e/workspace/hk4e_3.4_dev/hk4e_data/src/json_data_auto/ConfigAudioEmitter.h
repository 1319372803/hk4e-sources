// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigAudioEmitter.h

// Line 33: range 0000000013C0F72A-0000000013C0F8E1
void __cdecl data::ConfigAudioEmitter::ConfigAudioEmitter(data::ConfigAudioEmitter *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->emitter_lifetime = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->emit_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->emit_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->emit_interval, v2);
  }
  this->emit_interval = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_lifetime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_lifetime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inst_lifetime, v2);
  }
  this->inst_lifetime = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ending_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ending_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ending_duration, v3);
  }
  this->ending_duration = 0.0;
  data::ConfigWwiseString::ConfigWwiseString(&this->emit_event_name);
  data::ConfigWwiseString::ConfigWwiseString(&this->end_event_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->multi_position_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->multi_position_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->multi_position_type, v3);
  }
  this->multi_position_type = MultiSources_0;
  v4 = ((_BYTE)this + 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 33: range 00000000141DC04C-00000000141DC3A6
void __cdecl data::ConfigAudioEmitter::ConfigAudioEmitter(
        data::ConfigAudioEmitter *const this,
        const data::ConfigAudioEmitter *a2)
{
  float emitter_lifetime; // xmm0_4
  float emit_interval; // xmm0_4
  __int64 v4; // rsi
  float inst_lifetime; // xmm0_4
  float ending_duration; // xmm0_4
  data::ConfigWwiseString *p_end_event_name; // rsi
  data::AudioEmitterMultiPositionType multi_position_type; // ecx
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
  emitter_lifetime = a2->emitter_lifetime;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->emitter_lifetime = emitter_lifetime;
  if ( *(_BYTE *)(((unsigned __int64)&a2->emit_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->emit_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->emit_interval);
  }
  emit_interval = a2->emit_interval;
  v4 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->emit_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->emit_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->emit_interval, v4);
  }
  this->emit_interval = emit_interval;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inst_lifetime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inst_lifetime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inst_lifetime);
  }
  inst_lifetime = a2->inst_lifetime;
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_lifetime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_lifetime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inst_lifetime, v4);
  }
  this->inst_lifetime = inst_lifetime;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ending_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ending_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ending_duration);
  }
  ending_duration = a2->ending_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->ending_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ending_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ending_duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->ending_duration = ending_duration;
  data::ConfigWwiseString::ConfigWwiseString(&this->emit_event_name, &a2->emit_event_name);
  p_end_event_name = &a2->end_event_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->end_event_name, &a2->end_event_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->multi_position_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->multi_position_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->multi_position_type);
  }
  multi_position_type = a2->multi_position_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->multi_position_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_end_event_name) = v9 != 0;
    __asan_report_store4(&this->multi_position_type, p_end_event_name);
  }
  this->multi_position_type = multi_position_type;
  v10 = ((_BYTE)a2 + 100) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 33: range 0000000013C0F8E2-0000000013C0F910
void __cdecl data::ConfigAudioEmitter::~ConfigAudioEmitter(data::ConfigAudioEmitter *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->end_event_name);
  data::ConfigWwiseString::~ConfigWwiseString(&this->emit_event_name);
};
