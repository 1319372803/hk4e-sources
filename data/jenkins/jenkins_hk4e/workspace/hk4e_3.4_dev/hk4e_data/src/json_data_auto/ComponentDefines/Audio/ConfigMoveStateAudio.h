// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigMoveStateAudio.h

// Line 20: range 000000000ED765C8-000000000ED7662D
void __cdecl data::ConfigMoveStateAudio::ConfigMoveStateAudio(data::ConfigMoveStateAudio *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_state_begin);
  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_state_end);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 0000000012215C3E-0000000012215D17
void __cdecl data::ConfigMoveStateAudio::ConfigMoveStateAudio(
        data::ConfigMoveStateAudio *const this,
        const data::ConfigMoveStateAudio *a2)
{
  data::ConfigStateAudioEventList *p_on_state_end; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_state_begin, &a2->on_state_begin);
  p_on_state_end = &a2->on_state_end;
  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_state_end, p_on_state_end);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_on_state_end, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_on_state_end) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_state_end, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000012215D18-0000000012215D42
void __cdecl data::ConfigMoveStateAudio::~ConfigMoveStateAudio(data::ConfigMoveStateAudio *const this)
{
  std::vector<data::ConfigStateAudioEvent>::~vector(&this->on_state_end);
  std::vector<data::ConfigStateAudioEvent>::~vector(&this->on_state_begin);
};
