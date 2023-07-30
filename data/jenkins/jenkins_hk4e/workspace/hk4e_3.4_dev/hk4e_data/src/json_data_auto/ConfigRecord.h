// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRecord.h

// Line 19: range 000000001217729C-0000000012177336
void __cdecl data::AnimatorFloat::AnimatorFloat(data::AnimatorFloat *const this)
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

// Line 19: range 000000001264E156-000000001264E273
void __cdecl data::AnimatorFloat::AnimatorFloat(data::AnimatorFloat *const this, const data::AnimatorFloat *a2)
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

// Line 19: range 0000000012374608-0000000012374725
void __cdecl data::AnimatorFloat::AnimatorFloat(data::AnimatorFloat *const this, data::AnimatorFloat *a2)
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

// Line 19: range 0000000012177338-0000000012177352
void __cdecl data::AnimatorFloat::~AnimatorFloat(data::AnimatorFloat *const this)
{
  std::string::~string(this);
};

// Line 43: range 0000000012177354-00000000121773EC
void __cdecl data::AnimatorInt::AnimatorInt(data::AnimatorInt *const this)
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

// Line 43: range 000000001264E2F2-000000001264E40C
void __cdecl data::AnimatorInt::AnimatorInt(data::AnimatorInt *const this, const data::AnimatorInt *a2)
{
  uint32_t value; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::AnimatorInt *v9; // [rsp+0h] [rbp-10h]

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

// Line 43: range 0000000012374EDA-0000000012374FF4
void __cdecl data::AnimatorInt::AnimatorInt(data::AnimatorInt *const this, data::AnimatorInt *a2)
{
  uint32_t value; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::AnimatorInt *v9; // [rsp+0h] [rbp-10h]

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

// Line 43: range 00000000121773EE-0000000012177408
void __cdecl data::AnimatorInt::~AnimatorInt(data::AnimatorInt *const this)
{
  std::string::~string(this);
};

// Line 67: range 000000001217740A-000000001217749F
void __cdecl data::AnimatorBool::AnimatorBool(data::AnimatorBool *const this)
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

// Line 67: range 000000001264E48C-000000001264E5A7
void __cdecl data::AnimatorBool::AnimatorBool(data::AnimatorBool *const this, const data::AnimatorBool *a2)
{
  bool value; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::AnimatorBool *v9; // [rsp+0h] [rbp-10h]

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

// Line 67: range 00000000123757AA-00000000123758C5
void __cdecl data::AnimatorBool::AnimatorBool(data::AnimatorBool *const this, data::AnimatorBool *a2)
{
  bool value; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::AnimatorBool *v9; // [rsp+0h] [rbp-10h]

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

// Line 67: range 00000000121774A0-00000000121774BA
void __cdecl data::AnimatorBool::~AnimatorBool(data::AnimatorBool *const this)
{
  std::string::~string(this);
};

// Line 115: range 00000000121774BC-0000000012177521
void __cdecl data::RecordOverrideTexture::RecordOverrideTexture(data::RecordOverrideTexture *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 115: range 000000001264E8F0-000000001264E9C9
void __cdecl data::RecordOverrideTexture::RecordOverrideTexture(
        data::RecordOverrideTexture *const this,
        const data::RecordOverrideTexture *a2)
{
  std::string *p_value; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_value = &a2->value;
  std::string::basic_string(&this->value, p_value);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_value, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_value) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 115: range 00000000123768EE-00000000123769A4
void __cdecl data::RecordOverrideTexture::RecordOverrideTexture(
        data::RecordOverrideTexture *const this,
        data::RecordOverrideTexture *a2)
{
  std::string *p_value; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_value = &a2->value;
  std::string::basic_string(&this->value, p_value);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_value, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_value) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 115: range 0000000012177522-000000001217754C
void __cdecl data::RecordOverrideTexture::~RecordOverrideTexture(data::RecordOverrideTexture *const this)
{
  std::string::~string(&this->value);
  std::string::~string(this);
};

// Line 164: range 000000001271BFAE-000000001271C0CD
void __cdecl data::AnimatorRecordState::AnimatorRecordState(data::AnimatorRecordState *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->short_name_hash = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state_length, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->state_length = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalized_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalized_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalized_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->normalized_time = 0.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 189: range 000000001271C0CE-000000001271C1ED
void __cdecl data::AnimatorRecordTransitionInfo::AnimatorRecordTransitionInfo(
        data::AnimatorRecordTransitionInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->transition_duration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalized_transition_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalized_transition_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalized_transition_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->normalized_transition_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_unit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_unit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_unit, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->duration_unit = 0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 214: range 000000001271BF28-000000001271BFAD
void __cdecl data::AnimatorParameters::AnimatorParameters(data::AnimatorParameters *const this)
{
  __int64 v1; // rsi

  std::vector<data::AnimatorFloat>::vector(&this->floats);
  std::vector<data::AnimatorInt>::vector(&this->ints);
  std::vector<data::AnimatorBool>::vector(&this->bools);
  std::vector<data::AnimatorTrigger>::vector(&this->triggers);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 214: range 00000000122AC7FC-00000000122AC935
void __cdecl data::AnimatorParameters::AnimatorParameters(
        data::AnimatorParameters *const this,
        const data::AnimatorParameters *a2)
{
  data::AnimatorTriggers *p_triggers; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::AnimatorFloat>::vector(&this->floats, &a2->floats);
  std::vector<data::AnimatorInt>::vector(&this->ints, &a2->ints);
  std::vector<data::AnimatorBool>::vector(&this->bools, &a2->bools);
  p_triggers = &a2->triggers;
  std::vector<data::AnimatorTrigger>::vector(&this->triggers, p_triggers);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_triggers, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_triggers) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_triggers, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 214: range 00000000122AC936-00000000122AC980
void __cdecl data::AnimatorParameters::~AnimatorParameters(data::AnimatorParameters *const this)
{
  std::vector<data::AnimatorTrigger>::~vector(&this->triggers);
  std::vector<data::AnimatorBool>::~vector(&this->bools);
  std::vector<data::AnimatorInt>::~vector(&this->ints);
  std::vector<data::AnimatorFloat>::~vector(&this->floats);
};

// Line 240: range 000000001271C1EE-000000001271C27A
void __cdecl data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(data::ConfigRecordAnimatorInfo *const this)
{
  __int64 v1; // rsi

  data::AnimatorParameters::AnimatorParameters(&this->animator_parameter);
  data::AnimatorRecordState::AnimatorRecordState(&this->current_state);
  data::AnimatorRecordState::AnimatorRecordState(&this->next_state);
  data::AnimatorRecordTransitionInfo::AnimatorRecordTransitionInfo(&this->transition_info);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 240: range 00000000122AC982-00000000122ACB69
void __cdecl data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(
        data::ConfigRecordAnimatorInfo *const this,
        const data::ConfigRecordAnimatorInfo *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // al

  data::AnimatorParameters::AnimatorParameters(&this->animator_parameter, &a2->animator_parameter);
  if ( *(_WORD *)(((unsigned __int64)&this->current_state >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->current_state >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->current_state);
  v2 = *(_QWORD *)&a2->current_state.normalized_time;
  *(_QWORD *)&this->current_state.short_name_hash = *(_QWORD *)&a2->current_state.short_name_hash;
  *(_QWORD *)&this->current_state.normalized_time = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->next_state >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->next_state >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->next_state);
  v3 = *(_QWORD *)&a2->next_state.normalized_time;
  *(_QWORD *)&this->next_state.short_name_hash = *(_QWORD *)&a2->next_state.short_name_hash;
  *(_QWORD *)&this->next_state.normalized_time = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->transition_info >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->transition_info >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->transition_info);
  v4 = *(_QWORD *)&a2->transition_info.duration_unit;
  *(_QWORD *)&this->transition_info.transition_duration = *(_QWORD *)&a2->transition_info.transition_duration;
  *(_QWORD *)&this->transition_info.duration_unit = v4;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(a2) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 240: range 00000000122ACB6A-00000000122ACB84
void __cdecl data::ConfigRecordAnimatorInfo::~ConfigRecordAnimatorInfo(data::ConfigRecordAnimatorInfo *const this)
{
  data::AnimatorParameters::~AnimatorParameters(&this->animator_parameter);
};

// Line 266: range 000000001217754E-00000000121775E8
void __cdecl data::RendererFloat::RendererFloat(data::RendererFloat *const this)
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

// Line 266: range 000000001264E754-000000001264E871
void __cdecl data::RendererFloat::RendererFloat(data::RendererFloat *const this, const data::RendererFloat *a2)
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

// Line 266: range 000000001237715A-0000000012377277
void __cdecl data::RendererFloat::RendererFloat(data::RendererFloat *const this, data::RendererFloat *a2)
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

// Line 266: range 00000000121775EA-0000000012177604
void __cdecl data::RendererFloat::~RendererFloat(data::RendererFloat *const this)
{
  std::string::~string(this);
};

// Line 290: range 0000000012177606-00000000121776A0
void __cdecl data::MaterialFloat::MaterialFloat(data::MaterialFloat *const this)
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

// Line 290: range 000000001264EA48-000000001264EB65
void __cdecl data::MaterialFloat::MaterialFloat(data::MaterialFloat *const this, const data::MaterialFloat *a2)
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

// Line 290: range 0000000012377A2C-0000000012377B49
void __cdecl data::MaterialFloat::MaterialFloat(data::MaterialFloat *const this, data::MaterialFloat *a2)
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

// Line 290: range 00000000121776A2-00000000121776BC
void __cdecl data::MaterialFloat::~MaterialFloat(data::MaterialFloat *const this)
{
  std::string::~string(this);
};

// Line 324: range 000000001271C2B4-000000001271C309
void __cdecl data::RecordRendererGlobalParameters::RecordRendererGlobalParameters(
        data::RecordRendererGlobalParameters *const this)
{
  __int64 v1; // rsi

  std::vector<data::RendererFloat>::vector(&this->floats);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 324: range 00000000122ACEEC-00000000122ACF87
void __cdecl data::RecordRendererGlobalParameters::RecordRendererGlobalParameters(
        data::RecordRendererGlobalParameters *const this,
        const data::RecordRendererGlobalParameters *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::RendererFloat>::vector(&this->floats, &a2->floats);
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

// Line 324: range 00000000122ACF88-00000000122ACFA2
void __cdecl data::RecordRendererGlobalParameters::~RecordRendererGlobalParameters(
        data::RecordRendererGlobalParameters *const this)
{
  std::vector<data::RendererFloat>::~vector(&this->floats);
};

// Line 347: range 000000001271C342-000000001271C3A7
void __cdecl data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(
        data::ConfigRecordRendererParameters *const this)
{
  __int64 v1; // rsi

  data::RecordRendererGlobalParameters::RecordRendererGlobalParameters(&this->global_parameter);
  std::vector<data::RecordOverrideTexture>::vector(&this->textures);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 347: range 00000000122ACFA4-00000000122AD07D
void __cdecl data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(
        data::ConfigRecordRendererParameters *const this,
        const data::ConfigRecordRendererParameters *a2)
{
  data::RecordOverrideTextures *p_textures; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::RecordRendererGlobalParameters::RecordRendererGlobalParameters(&this->global_parameter, &a2->global_parameter);
  p_textures = &a2->textures;
  std::vector<data::RecordOverrideTexture>::vector(&this->textures, p_textures);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_textures, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_textures) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_textures, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 347: range 00000000122AD07E-00000000122AD0A8
void __cdecl data::ConfigRecordRendererParameters::~ConfigRecordRendererParameters(
        data::ConfigRecordRendererParameters *const this)
{
  std::vector<data::RecordOverrideTexture>::~vector(&this->textures);
  data::RecordRendererGlobalParameters::~RecordRendererGlobalParameters(&this->global_parameter);
};

// Line 371: range 000000001271C3E0-000000001271C482
void __cdecl data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(
        data::ConfigRecordMaterialParameters *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->material_type = 0;
  std::vector<std::string>::vector(&this->texture_names);
  std::vector<data::MaterialFloat>::vector(&this->floats);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 371: range 00000000122AD410-00000000122AD560
void __cdecl data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(
        data::ConfigRecordMaterialParameters *const this,
        const data::ConfigRecordMaterialParameters *a2)
{
  uint32_t material_type; // ecx
  char v3; // al
  data::MaterialFloats *p_floats; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigRecordMaterialParameters *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  material_type = a2->material_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->material_type = material_type;
  std::vector<std::string>::vector(&this->texture_names, &v7->texture_names);
  p_floats = &v7->floats;
  std::vector<data::MaterialFloat>::vector(&this->floats, &v7->floats);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_floats, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_floats) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_floats, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 371: range 00000000122AD562-00000000122AD590
void __cdecl data::ConfigRecordMaterialParameters::~ConfigRecordMaterialParameters(
        data::ConfigRecordMaterialParameters *const this)
{
  std::vector<data::MaterialFloat>::~vector(&this->floats);
  std::vector<std::string>::~vector(&this->texture_names);
};

// Line 396: range 000000001271C484-000000001271C519
void __cdecl data::ConfigRecordRagdollParameters::ConfigRecordRagdollParameters(
        data::ConfigRecordRagdollParameters *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->prefab_hash = 0LL;
  data::Vector::Vector(&this->velocity_on_root);
  data::Vector::Vector(&this->explosion_force);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 445: range 00000000121782F0-0000000012178412
void __cdecl data::ConfigRecordEmoFunc::ConfigRecordEmoFunc(data::ConfigRecordEmoFunc *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = ResetEmotion;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->record_bool >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->record_bool >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->record_bool, v2, v3);
  this->record_bool = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_float, v2);
  }
  this->record_float = 0.0;
  std::vector<std::string>::vector(&this->string_arrays);
  std::vector<unsigned long>::vector(&this->ulongs);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 445: range 000000001264EBE4-000000001264EE2C
void __cdecl data::ConfigRecordEmoFunc::ConfigRecordEmoFunc(
        data::ConfigRecordEmoFunc *const this,
        const data::ConfigRecordEmoFunc *a2)
{
  data::EmoRecordTypeEnum type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool record_bool; // cl
  char v7; // dl
  __int64 v8; // rdx
  float record_float; // xmm0_4
  data::UInt64Array *p_ulongs; // rsi
  bool is_json_loaded; // cl
  char v12; // al
  const data::ConfigRecordEmoFunc *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = ((_BYTE)v13 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v13->record_bool >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v13->record_bool >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v13->record_bool, v4, v5);
  record_bool = v13->record_bool;
  v7 = *(_BYTE *)(((unsigned __int64)&this->record_bool >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->record_bool, v4, v8);
  this->record_bool = record_bool;
  if ( *(_BYTE *)(((unsigned __int64)&v13->record_float >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->record_float >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->record_float);
  }
  record_float = v13->record_float;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_float, v4);
  }
  this->record_float = record_float;
  std::vector<std::string>::vector(&this->string_arrays, &v13->string_arrays);
  p_ulongs = &v13->ulongs;
  std::vector<unsigned long>::vector(&this->ulongs, &v13->ulongs);
  if ( *(char *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_json_loaded, p_ulongs, &v13->is_json_loaded);
  is_json_loaded = v13->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_ulongs) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, p_ulongs, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 445: range 0000000012378A24-0000000012378C45
void __cdecl data::ConfigRecordEmoFunc::ConfigRecordEmoFunc(
        data::ConfigRecordEmoFunc *const this,
        data::ConfigRecordEmoFunc *a2)
{
  data::EmoRecordTypeEnum type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool record_bool; // cl
  char v7; // dl
  __int64 v8; // rdx
  float record_float; // xmm0_4
  data::UInt64Array *p_ulongs; // rsi
  bool is_json_loaded; // cl
  char v12; // al
  data::ConfigRecordEmoFunc *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = ((_BYTE)v13 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v13->record_bool >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v13->record_bool >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v13->record_bool, v4, v5);
  record_bool = v13->record_bool;
  v7 = *(_BYTE *)(((unsigned __int64)&this->record_bool >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->record_bool, v4, v8);
  this->record_bool = record_bool;
  if ( *(_BYTE *)(((unsigned __int64)&v13->record_float >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->record_float >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->record_float);
  }
  record_float = v13->record_float;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_float >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_float, v4);
  }
  this->record_float = record_float;
  std::vector<std::string>::vector(&this->string_arrays, &v13->string_arrays);
  p_ulongs = &v13->ulongs;
  std::vector<unsigned long>::vector(&this->ulongs, &v13->ulongs);
  if ( *(char *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_json_loaded, p_ulongs, &v13->is_json_loaded);
  is_json_loaded = v13->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_ulongs) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, p_ulongs, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 445: range 0000000012178414-0000000012178442
void __cdecl data::ConfigRecordEmoFunc::~ConfigRecordEmoFunc(data::ConfigRecordEmoFunc *const this)
{
  std::vector<unsigned long>::~vector(&this->ulongs);
  std::vector<std::string>::~vector(&this->string_arrays);
};

// Line 477: range 000000001271C552-000000001271C5B7
void __cdecl data::ConfigRecordEmoParameters::ConfigRecordEmoParameters(data::ConfigRecordEmoParameters *const this)
{
  __int64 v1; // rsi

  std::vector<data::Vector>::vector(&this->eye_info);
  std::vector<data::ConfigRecordEmoFunc>::vector(&this->emo_funcs);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 477: range 00000000122ADDE8-00000000122ADEC1
void __cdecl data::ConfigRecordEmoParameters::ConfigRecordEmoParameters(
        data::ConfigRecordEmoParameters *const this,
        const data::ConfigRecordEmoParameters *a2)
{
  data::ConfigRecordEmoFuncs *p_emo_funcs; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::Vector>::vector(&this->eye_info, &a2->eye_info);
  p_emo_funcs = &a2->emo_funcs;
  std::vector<data::ConfigRecordEmoFunc>::vector(&this->emo_funcs, p_emo_funcs);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_emo_funcs, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_emo_funcs) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_emo_funcs, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 477: range 00000000122ADEC2-00000000122ADEEC
void __cdecl data::ConfigRecordEmoParameters::~ConfigRecordEmoParameters(data::ConfigRecordEmoParameters *const this)
{
  std::vector<data::ConfigRecordEmoFunc>::~vector(&this->emo_funcs);
  std::vector<data::Vector>::~vector(&this->eye_info);
};

// Line 501: range 000000001271B328-000000001271B427
void __cdecl data::ConfigRecordActorBase::ConfigRecordActorBase(data::ConfigRecordActorBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigRecordActorBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigRecordActorBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordActorBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  data::Vector::Vector(&this->pos);
  data::Vector::Vector(&this->rot);
  data::Vector::Vector(&this->scale);
  if ( *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->serial_id, v1);
  }
  this->serial_id = 0;
  v3 = ((_BYTE)this + 76) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 501: range 000000001271B900-000000001271BB81
void __cdecl data::ConfigRecordActorBase::ConfigRecordActorBase(
        data::ConfigRecordActorBase *const this,
        const data::ConfigRecordActorBase *a2)
{
  std::enable_shared_from_this<data::ConfigRecordActorBase> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  uint32_t serial_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigRecordActorBase>;
  std::enable_shared_from_this<data::ConfigRecordActorBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigRecordActorBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigRecordActorBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigRecordActorBase = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->pos);
  v4 = *(_QWORD *)&a2->pos.z;
  *(_QWORD *)&this->pos.x = *(_QWORD *)&a2->pos.x;
  *(_QWORD *)&this->pos.z = v4;
  if ( *(_WORD *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->rot);
  v5 = *(_QWORD *)&a2->rot.z;
  *(_QWORD *)&this->rot.x = *(_QWORD *)&a2->rot.x;
  *(_QWORD *)&this->rot.z = v5;
  if ( *(_WORD *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->scale);
  v6 = *(_QWORD *)&a2->scale.z;
  *(_QWORD *)&this->scale.x = *(_QWORD *)&a2->scale.x;
  *(_QWORD *)&this->scale.z = v6;
  if ( *(_BYTE *)(((unsigned __int64)&a2->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->serial_id);
  }
  serial_id = a2->serial_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v2) = v8 != 0;
    __asan_report_store4(&this->serial_id, v2);
  }
  this->serial_id = serial_id;
  v9 = ((_BYTE)a2 + 76) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_json_loaded, v9, v10);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 512: range 000000001271BE1C-000000001271BE46
void __cdecl data::ConfigRecordActorBase::~ConfigRecordActorBase(data::ConfigRecordActorBase *const this)
{
  data::ConfigRecordActorBase::~ConfigRecordActorBase(this);
  operator delete(this, 0x50uLL);
};

// Line 512: range 000000001271BDCA-000000001271BE1B
void __cdecl data::ConfigRecordActorBase::~ConfigRecordActorBase(data::ConfigRecordActorBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordActorBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  std::enable_shared_from_this<data::ConfigRecordActorBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigRecordActorBase>);
};

// Line 517: range 0000000012176D8C-0000000012176D9C
const char *__cdecl data::ConfigRecordActorBase::getTypeName(const data::ConfigRecordActorBase *const this)
{
  return "ConfigRecordActorBase";
};

// Line 518: range 0000000012176D9E-0000000012176F3A
int32_t __cdecl data::ConfigRecordActorBase::getHashNum(const data::ConfigRecordActorBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRecordActorBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRecordActorBase",
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

// Line 537: range 000000001271C5B8-000000001271C65D
void __cdecl data::ConfigRecordEntity::ConfigRecordEntity(data::ConfigRecordEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigRecordActorBase::ConfigRecordActorBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(&this->animator_info);
  data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(&this->renderer_params);
  data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(&this->material_params);
  data::ConfigRecordRagdollParameters::ConfigRecordRagdollParameters(&this->ragdoll_params);
  data::ConfigRecordEmoParameters::ConfigRecordEmoParameters(&this->emo_params);
};

// Line 537: range 000000001271CA0C-000000001271CC75
void __cdecl data::ConfigRecordEntity::ConfigRecordEntity(
        data::ConfigRecordEntity *const this,
        const data::ConfigRecordEntity *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx

  data::ConfigRecordActorBase::ConfigRecordActorBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(&this->animator_info, &a2->animator_info);
  data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(&this->renderer_params, &a2->renderer_params);
  data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(&this->material_params, &a2->material_params);
  if ( *(char *)(((unsigned __int64)&this->ragdoll_params >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->ragdoll_params.is_json_loaded + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->ragdoll_params.is_json_loaded + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->ragdoll_params, 48LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->ragdoll_params >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->ragdoll_params.is_json_loaded + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->ragdoll_params.is_json_loaded + 7) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->ragdoll_params, 48LL);
  }
  v3 = *(_QWORD *)&a2->ragdoll_params.velocity_on_root.x;
  this->ragdoll_params.prefab_hash = a2->ragdoll_params.prefab_hash;
  *(_QWORD *)&this->ragdoll_params.velocity_on_root.x = v3;
  v4 = *(_QWORD *)&a2->ragdoll_params.explosion_force.x;
  *(_QWORD *)&this->ragdoll_params.velocity_on_root.z = *(_QWORD *)&a2->ragdoll_params.velocity_on_root.z;
  *(_QWORD *)&this->ragdoll_params.explosion_force.x = v4;
  v5 = *(_QWORD *)&a2->ragdoll_params.is_json_loaded;
  *(_QWORD *)&this->ragdoll_params.explosion_force.z = *(_QWORD *)&a2->ragdoll_params.explosion_force.z;
  *(_QWORD *)&this->ragdoll_params.is_json_loaded = v5;
  data::ConfigRecordEmoParameters::ConfigRecordEmoParameters(&this->emo_params, &a2->emo_params);
};

// Line 548: range 000000001274CBD6-000000001274CC69
void __cdecl data::ConfigRecordEntity::~ConfigRecordEntity(data::ConfigRecordEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordEmoParameters::~ConfigRecordEmoParameters(&this->emo_params);
  data::ConfigRecordMaterialParameters::~ConfigRecordMaterialParameters(&this->material_params);
  data::ConfigRecordRendererParameters::~ConfigRecordRendererParameters(&this->renderer_params);
  data::ConfigRecordAnimatorInfo::~ConfigRecordAnimatorInfo(&this->animator_info);
  data::ConfigRecordActorBase::~ConfigRecordActorBase(this);
};

// Line 548: range 000000001274CC6A-000000001274CC94
void __cdecl data::ConfigRecordEntity::~ConfigRecordEntity(data::ConfigRecordEntity *const this)
{
  data::ConfigRecordEntity::~ConfigRecordEntity(this);
  operator delete(this, 0x1D8uLL);
};

// Line 553: range 0000000012176F3C-0000000012176F4C
const char *__cdecl data::ConfigRecordEntity::getTypeName(const data::ConfigRecordEntity *const this)
{
  return "ConfigRecordEntity";
};

// Line 554: range 0000000012176F4E-00000000121770EA
int32_t __cdecl data::ConfigRecordEntity::getHashNum(const data::ConfigRecordEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRecordEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRecordEntity",
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

// Line 570: range 000000001271CF5E-000000001271CF9F
void __cdecl data::ConfigRecordEntityFactory::ConfigRecordEntityFactory(data::ConfigRecordEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordEntityFactory = v2;
};

// Line 578: range 000000001271D2A8-000000001271D329
void __cdecl data::ConfigRecordEffect::ConfigRecordEffect(data::ConfigRecordEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigRecordActorBase::ConfigRecordActorBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(&this->animator_info);
  data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(&this->renderer_params);
  data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(&this->material_params);
};

// Line 578: range 000000001271D6DE-000000001271D7E0
void __cdecl data::ConfigRecordEffect::ConfigRecordEffect(
        data::ConfigRecordEffect *const this,
        const data::ConfigRecordEffect *a2)
{
  int (**v2)(...); // rdx

  data::ConfigRecordActorBase::ConfigRecordActorBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordAnimatorInfo::ConfigRecordAnimatorInfo(&this->animator_info, &a2->animator_info);
  data::ConfigRecordRendererParameters::ConfigRecordRendererParameters(&this->renderer_params, &a2->renderer_params);
  data::ConfigRecordMaterialParameters::ConfigRecordMaterialParameters(&this->material_params, &a2->material_params);
};

// Line 587: range 000000001274CBAA-000000001274CBD4
void __cdecl data::ConfigRecordEffect::~ConfigRecordEffect(data::ConfigRecordEffect *const this)
{
  data::ConfigRecordEffect::~ConfigRecordEffect(this);
  operator delete(this, 0x170uLL);
};

// Line 587: range 000000001274CB28-000000001274CBA9
void __cdecl data::ConfigRecordEffect::~ConfigRecordEffect(data::ConfigRecordEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordActorBase = v2;
  data::ConfigRecordMaterialParameters::~ConfigRecordMaterialParameters(&this->material_params);
  data::ConfigRecordRendererParameters::~ConfigRecordRendererParameters(&this->renderer_params);
  data::ConfigRecordAnimatorInfo::~ConfigRecordAnimatorInfo(&this->animator_info);
  data::ConfigRecordActorBase::~ConfigRecordActorBase(this);
};

// Line 592: range 00000000121770EC-00000000121770FC
const char *__cdecl data::ConfigRecordEffect::getTypeName(const data::ConfigRecordEffect *const this)
{
  return "ConfigRecordEffect";
};

// Line 593: range 00000000121770FE-000000001217729A
int32_t __cdecl data::ConfigRecordEffect::getHashNum(const data::ConfigRecordEffect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRecordEffect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRecordEffect",
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

// Line 609: range 000000001271DACA-000000001271DB0B
void __cdecl data::ConfigRecordEffectFactory::ConfigRecordEffectFactory(data::ConfigRecordEffectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRecordEffectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRecordEffectFactory = v2;
};

// Line 624: range 0000000012178C7E-0000000012178D58
void __cdecl data::ConfigRecordFrame::ConfigRecordFrame(data::ConfigRecordFrame *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->delta_time = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frame_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->frame_count, v2);
  }
  this->frame_count = 0;
  std::vector<std::shared_ptr<data::ConfigRecordActorBase>>::vector(&this->actors);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 624: range 000000001237D6FA-000000001237D890
void __cdecl data::ConfigRecordFrame::ConfigRecordFrame(
        data::ConfigRecordFrame *const this,
        data::ConfigRecordFrame *a2)
{
  float delta_time; // xmm0_4
  __int64 v3; // rsi
  uint32_t frame_count; // ecx
  char v5; // dl
  data::ConfigRecordActorList *p_actors; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  delta_time = a2->delta_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->delta_time = delta_time;
  v3 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->frame_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->frame_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->frame_count);
  }
  frame_count = a2->frame_count;
  v5 = *(_BYTE *)(((unsigned __int64)&this->frame_count >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->frame_count, v3);
  }
  this->frame_count = frame_count;
  p_actors = &a2->actors;
  std::vector<std::shared_ptr<data::ConfigRecordActorBase>>::vector(&this->actors, &a2->actors);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_actors, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_actors) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_actors, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 624: range 0000000012178D5A-0000000012178D78
void __cdecl data::ConfigRecordFrame::~ConfigRecordFrame(data::ConfigRecordFrame *const this)
{
  std::vector<std::shared_ptr<data::ConfigRecordActorBase>>::~vector(&this->actors);
};

// Line 663: range 0000000012178D7A-0000000012178EC7
void __cdecl data::ConfigRecordActorInfo::ConfigRecordActorInfo(data::ConfigRecordActorInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_hash, v1);
  this->prefab_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->serial_id, v1);
  }
  this->serial_id = 0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->actor_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->actor_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->actor_type, v2);
  }
  this->actor_type = Entity_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v2);
  }
  this->config_id = 0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 663: range 000000001237E01C-000000001237E28A
void __cdecl data::ConfigRecordActorInfo::ConfigRecordActorInfo(
        data::ConfigRecordActorInfo *const this,
        data::ConfigRecordActorInfo *a2)
{
  uint64_t prefab_hash; // rdx
  uint32_t serial_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RecordActorType actor_type; // ecx
  char v7; // dl
  uint32_t config_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::ConfigRecordActorInfo *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->prefab_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->prefab_hash);
  prefab_hash = a2->prefab_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_hash, a2);
  this->prefab_hash = prefab_hash;
  if ( *(_BYTE *)(((unsigned __int64)&a2->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->serial_id);
  }
  serial_id = a2->serial_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->serial_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->serial_id, a2);
  }
  this->serial_id = serial_id;
  v5 = (((_BYTE)v15 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->actor_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->actor_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->actor_type);
  }
  actor_type = v15->actor_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->actor_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->actor_type, v5);
  }
  this->actor_type = actor_type;
  if ( *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->config_id);
  }
  config_id = v15->config_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->config_id, v5);
  }
  this->config_id = config_id;
  v10 = ((_BYTE)v15 + 52) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->is_json_loaded, v10, v11);
  is_json_loaded = v15->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 663: range 0000000012178EC8-0000000012178EE2
void __cdecl data::ConfigRecordActorInfo::~ConfigRecordActorInfo(data::ConfigRecordActorInfo *const this)
{
  std::string::~string(this);
};

// Line 728: range 0000000012178EE4-0000000012178F69
void __cdecl data::ConfigRecordPattern::ConfigRecordPattern(data::ConfigRecordPattern *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->bool_list);
  std::vector<std::string>::vector(&this->int_list);
  std::vector<std::string>::vector(&this->float_list);
  std::vector<std::string>::vector(&this->trigger_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 728: range 0000000012650444-000000001265057D
void __cdecl data::ConfigRecordPattern::ConfigRecordPattern(
        data::ConfigRecordPattern *const this,
        const data::ConfigRecordPattern *a2)
{
  data::StringList *p_trigger_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->bool_list, &a2->bool_list);
  std::vector<std::string>::vector(&this->int_list, &a2->int_list);
  std::vector<std::string>::vector(&this->float_list, &a2->float_list);
  p_trigger_list = &a2->trigger_list;
  std::vector<std::string>::vector(&this->trigger_list, p_trigger_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_trigger_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_trigger_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_trigger_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 728: range 0000000012178F6A-0000000012178FB4
void __cdecl data::ConfigRecordPattern::~ConfigRecordPattern(data::ConfigRecordPattern *const this)
{
  std::vector<std::string>::~vector(&this->trigger_list);
  std::vector<std::string>::~vector(&this->float_list);
  std::vector<std::string>::~vector(&this->int_list);
  std::vector<std::string>::~vector(&this->bool_list);
};
