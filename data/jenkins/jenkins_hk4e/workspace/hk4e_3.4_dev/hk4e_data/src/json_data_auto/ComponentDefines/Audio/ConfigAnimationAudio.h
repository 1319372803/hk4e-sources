// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigAnimationAudio.h

// Line 21: range 0000000012163730-0000000012163809
void __cdecl data::ConfigFluctuatedValue::ConfigFluctuatedValue(data::ConfigFluctuatedValue *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->upper = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lower >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lower >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lower, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->lower = 0.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 45: range 000000001216380A-000000001216387F
void __cdecl data::ConfigAnimationRecurrentSpeech::ConfigAnimationRecurrentSpeech(
        data::ConfigAnimationRecurrentSpeech *const this)
{
  __int64 v1; // rsi

  data::ConfigFluctuatedValue::ConfigFluctuatedValue(&this->start);
  data::ConfigFluctuatedValue::ConfigFluctuatedValue(&this->interval);
  data::ConfigWwiseString::ConfigWwiseString(&this->event_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 45: range 00000000125634AE-0000000012563721
void __cdecl data::ConfigAnimationRecurrentSpeech::ConfigAnimationRecurrentSpeech(
        data::ConfigAnimationRecurrentSpeech *const this,
        const data::ConfigAnimationRecurrentSpeech *a2)
{
  data::ConfigWwiseString *p_event_name; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->start.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->start.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->start.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->start.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 12LL);
  }
  *(_QWORD *)&this->start.upper = *(_QWORD *)&a2->start.upper;
  *(_DWORD *)&this->start.is_json_loaded = *(_DWORD *)&a2->start.is_json_loaded;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->interval.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->interval.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->interval, 12LL);
  }
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->interval >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->interval >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->interval.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->interval.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->interval, 12LL);
  }
  this->interval = a2->interval;
  p_event_name = &a2->event_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->event_name, &a2->event_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_event_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_event_name) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_event_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 45: range 0000000012163880-000000001216389E
void __cdecl data::ConfigAnimationRecurrentSpeech::~ConfigAnimationRecurrentSpeech(
        data::ConfigAnimationRecurrentSpeech *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_name);
};

// Line 77: range 000000000ED73BAE-000000000ED73C23
void __cdecl data::ConfigAnimationAudio::ConfigAnimationAudio(data::ConfigAnimationAudio *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_transition_in);
  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_transition_out);
  std::unordered_map<std::string,data::ConfigAnimationRecurrentSpeech>::unordered_map(&this->recurrent_speeches);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 77: range 0000000012213EE2-0000000012213FEB
void __cdecl data::ConfigAnimationAudio::ConfigAnimationAudio(
        data::ConfigAnimationAudio *const this,
        const data::ConfigAnimationAudio *a2)
{
  data::ConfigAnimationRecurrentSpeechMap *p_recurrent_speeches; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_transition_in, &a2->on_transition_in);
  std::vector<data::ConfigStateAudioEvent>::vector(&this->on_transition_out, &a2->on_transition_out);
  p_recurrent_speeches = &a2->recurrent_speeches;
  std::unordered_map<std::string,data::ConfigAnimationRecurrentSpeech>::unordered_map(
    &this->recurrent_speeches,
    p_recurrent_speeches);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_recurrent_speeches, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_recurrent_speeches) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_recurrent_speeches, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 77: range 0000000012213FEC-0000000012214026
void __cdecl data::ConfigAnimationAudio::~ConfigAnimationAudio(data::ConfigAnimationAudio *const this)
{
  std::unordered_map<std::string,data::ConfigAnimationRecurrentSpeech>::~unordered_map(&this->recurrent_speeches);
  std::vector<data::ConfigStateAudioEvent>::~vector(&this->on_transition_out);
  std::vector<data::ConfigStateAudioEvent>::~vector(&this->on_transition_in);
};
