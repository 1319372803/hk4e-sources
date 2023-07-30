// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigStateLayers.h

// Line 76: range 00000000116938F0-00000000116939D1
void __cdecl data::ConfigAnimatorBoolean::ConfigAnimatorBoolean(data::ConfigAnimatorBoolean *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, v1);
  }
  this->normalize_start = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v2);
  }
  this->normalize_end = 1.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 76: range 0000000011875CC2-0000000011875E5D
void __cdecl data::ConfigAnimatorBoolean::ConfigAnimatorBoolean(
        data::ConfigAnimatorBoolean *const this,
        const data::ConfigAnimatorBoolean *a2)
{
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v4; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, a2);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v4);
  }
  this->normalize_end = normalize_end;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v4, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 76: range 000000001174547E-0000000011745619
void __cdecl data::ConfigAnimatorBoolean::ConfigAnimatorBoolean(
        data::ConfigAnimatorBoolean *const this,
        data::ConfigAnimatorBoolean *a2)
{
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v4; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, a2);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v4);
  }
  this->normalize_end = normalize_end;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v4, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 76: range 00000000116939D2-00000000116939EC
void __cdecl data::ConfigAnimatorBoolean::~ConfigAnimatorBoolean(data::ConfigAnimatorBoolean *const this)
{
  std::string::~string(this);
};

// Line 101: range 00000000116939EE-0000000011693B14
void __cdecl data::ConfigAnimatorFloat::ConfigAnimatorFloat(data::ConfigAnimatorFloat *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, v1);
  }
  this->normalize_start = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v2);
  }
  this->normalize_end = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v2);
  }
  this->value = 0.0;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 101: range 0000000011875EDC-00000000118760F9
void __cdecl data::ConfigAnimatorFloat::ConfigAnimatorFloat(
        data::ConfigAnimatorFloat *const this,
        const data::ConfigAnimatorFloat *a2)
{
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v4; // rsi
  float value; // xmm0_4
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, a2);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v4);
  }
  this->normalize_end = normalize_end;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v4);
  }
  this->value = value;
  v6 = ((_BYTE)a2 + 44) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 101: range 0000000011745DCE-0000000011745FEB
void __cdecl data::ConfigAnimatorFloat::ConfigAnimatorFloat(
        data::ConfigAnimatorFloat *const this,
        data::ConfigAnimatorFloat *a2)
{
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v4; // rsi
  float value; // xmm0_4
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, a2);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v4);
  }
  this->normalize_end = normalize_end;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v4);
  }
  this->value = value;
  v6 = ((_BYTE)a2 + 44) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 101: range 0000000011693B16-0000000011693B30
void __cdecl data::ConfigAnimatorFloat::~ConfigAnimatorFloat(data::ConfigAnimatorFloat *const this)
{
  std::string::~string(this);
};

// Line 166: range 0000000011693B32-0000000011693C63
void __cdecl data::ConfigEquipReattach::ConfigEquipReattach(data::ConfigEquipReattach *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  std::string::basic_string(&this->target_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, v1);
  }
  this->normalize_start = 0.0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v2);
  }
  this->normalize_end = 1.0;
  if ( *(char *)(((unsigned __int64)&this->range_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->range_time, v2, &this->range_time);
  this->range_time = 0;
  v3 = ((_BYTE)this + 73) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 166: range 0000000011876AC0-0000000011876D19
void __cdecl data::ConfigEquipReattach::ConfigEquipReattach(
        data::ConfigEquipReattach *const this,
        const data::ConfigEquipReattach *a2)
{
  std::string *p_target_point; // rsi
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v5; // rsi
  bool range_time; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_json_loaded; // cl
  char v11; // dl
  __int64 v12; // rdx

  std::string::basic_string(this, a2);
  p_target_point = &a2->target_point;
  std::string::basic_string(&this->target_point, p_target_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, p_target_point);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v5 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v5);
  }
  this->normalize_end = normalize_end;
  if ( *(char *)(((unsigned __int64)&a2->range_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->range_time, v5, &a2->range_time);
  range_time = a2->range_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->range_time >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->range_time, v5, &this->range_time);
  }
  this->range_time = range_time;
  v8 = ((_BYTE)a2 + 73) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_json_loaded, v8, v9);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v8, v12);
  this->is_json_loaded = is_json_loaded;
};

// Line 166: range 0000000011747032-0000000011747268
void __cdecl data::ConfigEquipReattach::ConfigEquipReattach(
        data::ConfigEquipReattach *const this,
        data::ConfigEquipReattach *a2)
{
  std::string *p_target_point; // rsi
  float normalize_start; // xmm0_4
  float normalize_end; // xmm0_4
  __int64 v5; // rsi
  bool range_time; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_json_loaded; // cl
  char v11; // dl
  __int64 v12; // rdx

  std::string::basic_string(this, a2);
  p_target_point = &a2->target_point;
  std::string::basic_string(&this->target_point, p_target_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normalize_start);
  }
  normalize_start = a2->normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normalize_start, p_target_point);
  }
  this->normalize_start = normalize_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->normalize_end);
  }
  normalize_end = a2->normalize_end;
  v5 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normalize_end, v5);
  }
  this->normalize_end = normalize_end;
  if ( *(char *)(((unsigned __int64)&a2->range_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->range_time, v5, &a2->range_time);
  range_time = a2->range_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->range_time >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->range_time, v5, &this->range_time);
  }
  this->range_time = range_time;
  v8 = ((_BYTE)a2 + 73) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_json_loaded, v8, v9);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v8, v12);
  this->is_json_loaded = is_json_loaded;
};

// Line 166: range 0000000011693C64-0000000011693C8E
void __cdecl data::ConfigEquipReattach::~ConfigEquipReattach(data::ConfigEquipReattach *const this)
{
  std::string::~string(&this->target_point);
  std::string::~string(this);
};

// Line 198: range 00000000118E1442-00000000118E1511
void __cdecl data::ConfigBaseStateIDInfo::ConfigBaseStateIDInfo(data::ConfigBaseStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigBaseStateIDInfo>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseStateIDInfo>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 198: range 00000000118E1AFA-00000000118E1C4F
void __cdecl data::ConfigBaseStateIDInfo::ConfigBaseStateIDInfo(
        data::ConfigBaseStateIDInfo *const this,
        const data::ConfigBaseStateIDInfo *a2)
{
  std::enable_shared_from_this<data::ConfigBaseStateIDInfo> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t priority; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseStateIDInfo>;
  std::enable_shared_from_this<data::ConfigBaseStateIDInfo>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseStateIDInfo>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseStateIDInfo = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v5 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->priority, v2);
  }
  this->priority = priority;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 206: range 00000000118E1EEA-00000000118E1F14
void __cdecl data::ConfigBaseStateIDInfo::~ConfigBaseStateIDInfo(data::ConfigBaseStateIDInfo *const this)
{
  data::ConfigBaseStateIDInfo::~ConfigBaseStateIDInfo(this);
  operator delete(this, 0x20uLL);
};

// Line 206: range 00000000118E1E98-00000000118E1EE9
void __cdecl data::ConfigBaseStateIDInfo::~ConfigBaseStateIDInfo(data::ConfigBaseStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  std::enable_shared_from_this<data::ConfigBaseStateIDInfo>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseStateIDInfo>);
};

// Line 211: range 00000000116912CE-00000000116912DE
const char *__cdecl data::ConfigBaseStateIDInfo::getTypeName(const data::ConfigBaseStateIDInfo *const this)
{
  return "ConfigBaseStateIDInfo";
};

// Line 212: range 00000000116912E0-000000001169147C
int32_t __cdecl data::ConfigBaseStateIDInfo::getHashNum(const data::ConfigBaseStateIDInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseStateIDInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseStateIDInfo",
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

// Line 231: range 00000000118E20E0-00000000118E24E3
void __cdecl data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo(data::ConfigNormalStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx

  data::ConfigBaseStateIDInfo::ConfigBaseStateIDInfo(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  std::unordered_map<std::string,std::vector<std::string>>::unordered_map(&this->animator_states);
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_type, v1);
  }
  this->move_type = normalMove;
  v3 = ((_BYTE)this + 92) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->combat_move_on_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->combat_move_on_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->combat_move_on_water, v3, v4);
  this->combat_move_on_water = 0;
  v5 = ((_BYTE)this + 93) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_do_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_do_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_do_skill, v5, v6);
  this->can_do_skill = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_do_skill_start, v5);
  }
  this->can_do_skill_start = 0.0;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->can_do_skill_end, v7);
  }
  this->can_do_skill_end = 1.0;
  if ( *(char *)(((unsigned __int64)&this->can_sync_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_sync_move, v7, &this->can_sync_move);
  this->can_sync_move = 0;
  v8 = ((_BYTE)this + 105) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->culling_model_always_animate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->culling_model_always_animate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->culling_model_always_animate, v8, v9);
  this->culling_model_always_animate = 0;
  v10 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->add_endure, v10);
  }
  this->add_endure = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mass_ratio, v10);
  }
  this->mass_ratio = 0.0;
  std::vector<std::string>::vector(&this->reset_animator_trigger_on_enter);
  std::vector<std::string>::vector(&this->reset_animator_trigger_on_exit);
  std::vector<data::ConfigAnimatorBoolean>::vector(&this->set_animator_boolean);
  std::vector<data::ConfigAnimatorFloat>::vector(&this->set_animator_float);
  if ( *(char *)(((unsigned __int64)&this->enable_rag_doll >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_rag_doll, v10, &this->enable_rag_doll);
  this->enable_rag_doll = 0;
  v11 = ((_BYTE)this - 39) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->need_face_to_anim_param >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->need_face_to_anim_param >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->need_face_to_anim_param, v11, v12);
  this->need_face_to_anim_param = 0;
  v13 = ((_BYTE)this - 38) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->enable_ccd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->enable_ccd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->enable_ccd, v13, v14);
  this->enable_ccd = 0;
  v15 = ((_BYTE)this - 37) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->handle_animator_state_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->handle_animator_state_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->handle_animator_state_immediately, v15, v16);
  this->handle_animator_state_immediately = 0;
};

// Line 231: range 00000000118E2898-00000000118E308A
void __cdecl data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo(
        data::ConfigNormalStateIDInfo *const this,
        const data::ConfigNormalStateIDInfo *a2)
{
  int (**v2)(...); // rdx
  data::StringListMap *p_animator_states; // rsi
  data::MoveType move_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool combat_move_on_water; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool can_do_skill; // cl
  char v14; // dl
  __int64 v15; // rdx
  float can_do_skill_start; // xmm0_4
  float can_do_skill_end; // xmm0_4
  __int64 v18; // rsi
  bool can_sync_move; // cl
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool culling_model_always_animate; // cl
  char v24; // dl
  __int64 v25; // rdx
  float add_endure; // xmm0_4
  __int64 v27; // rsi
  float mass_ratio; // xmm0_4
  data::ConfigAnimatorFloatList *p_set_animator_float; // rsi
  bool enable_rag_doll; // cl
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // rdx
  bool need_face_to_anim_param; // cl
  char v35; // dl
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool enable_ccd; // cl
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  bool handle_animator_state_immediately; // cl
  char v45; // dl
  __int64 v46; // rdx

  data::ConfigBaseStateIDInfo::ConfigBaseStateIDInfo(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  p_animator_states = &a2->animator_states;
  std::unordered_map<std::string,std::vector<std::string>>::unordered_map(&this->animator_states, &a2->animator_states);
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_animator_states) = v5 != 0;
    __asan_report_store4(&this->move_type, p_animator_states);
  }
  this->move_type = move_type;
  v6 = ((_BYTE)a2 + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->combat_move_on_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->combat_move_on_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->combat_move_on_water, v6, v7);
  combat_move_on_water = a2->combat_move_on_water;
  v9 = *(_BYTE *)(((unsigned __int64)&this->combat_move_on_water >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->combat_move_on_water, v6, v10);
  this->combat_move_on_water = combat_move_on_water;
  v11 = ((_BYTE)a2 + 93) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->can_do_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->can_do_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->can_do_skill, v11, v12);
  can_do_skill = a2->can_do_skill;
  v14 = *(_BYTE *)(((unsigned __int64)&this->can_do_skill >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 93) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->can_do_skill, v11, v15);
  this->can_do_skill = can_do_skill;
  if ( *(_BYTE *)(((unsigned __int64)&a2->can_do_skill_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->can_do_skill_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->can_do_skill_start);
  }
  can_do_skill_start = a2->can_do_skill_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_do_skill_start, v11);
  }
  this->can_do_skill_start = can_do_skill_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->can_do_skill_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->can_do_skill_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->can_do_skill_end);
  }
  can_do_skill_end = a2->can_do_skill_end;
  v18 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->can_do_skill_end, v18);
  }
  this->can_do_skill_end = can_do_skill_end;
  if ( *(char *)(((unsigned __int64)&a2->can_sync_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_sync_move, v18, &a2->can_sync_move);
  can_sync_move = a2->can_sync_move;
  v20 = *(_BYTE *)(((unsigned __int64)&this->can_sync_move >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store1(&this->can_sync_move, v18, &this->can_sync_move);
  }
  this->can_sync_move = can_sync_move;
  v21 = ((_BYTE)a2 + 105) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&a2->culling_model_always_animate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&a2->culling_model_always_animate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&a2->culling_model_always_animate, v21, v22);
  culling_model_always_animate = a2->culling_model_always_animate;
  v24 = *(_BYTE *)(((unsigned __int64)&this->culling_model_always_animate >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->culling_model_always_animate, v21, v25);
  this->culling_model_always_animate = culling_model_always_animate;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_endure >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->add_endure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->add_endure);
  }
  add_endure = a2->add_endure;
  v27 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->add_endure, v27);
  }
  this->add_endure = add_endure;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mass_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mass_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mass_ratio);
  }
  mass_ratio = a2->mass_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mass_ratio, v27);
  }
  this->mass_ratio = mass_ratio;
  std::vector<std::string>::vector(&this->reset_animator_trigger_on_enter, &a2->reset_animator_trigger_on_enter);
  std::vector<std::string>::vector(&this->reset_animator_trigger_on_exit, &a2->reset_animator_trigger_on_exit);
  std::vector<data::ConfigAnimatorBoolean>::vector(&this->set_animator_boolean, &a2->set_animator_boolean);
  p_set_animator_float = &a2->set_animator_float;
  std::vector<data::ConfigAnimatorFloat>::vector(&this->set_animator_float, &a2->set_animator_float);
  if ( *(char *)(((unsigned __int64)&a2->enable_rag_doll >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_rag_doll, p_set_animator_float, &a2->enable_rag_doll);
  enable_rag_doll = a2->enable_rag_doll;
  v31 = *(_BYTE *)(((unsigned __int64)&this->enable_rag_doll >> 3) + 0x7FFF8000);
  if ( v31 < 0 )
  {
    LOBYTE(p_set_animator_float) = v31 != 0;
    __asan_report_store1(&this->enable_rag_doll, p_set_animator_float, &this->enable_rag_doll);
  }
  this->enable_rag_doll = enable_rag_doll;
  v32 = ((_BYTE)a2 - 39) & 7;
  v33 = (*(_BYTE *)(((unsigned __int64)&a2->need_face_to_anim_param >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v32 >= *(_BYTE *)(((unsigned __int64)&a2->need_face_to_anim_param >> 3) + 0x7FFF8000));
  if ( (_BYTE)v33 )
    __asan_report_load1(&a2->need_face_to_anim_param, v32, v33);
  need_face_to_anim_param = a2->need_face_to_anim_param;
  v35 = *(_BYTE *)(((unsigned __int64)&this->need_face_to_anim_param >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v35 != 0;
  v36 = (v35 != 0) & (unsigned __int8)((((unsigned __int8)this - 39) & 7) >= v35);
  if ( (_BYTE)v36 )
    __asan_report_store1(&this->need_face_to_anim_param, v32, v36);
  this->need_face_to_anim_param = need_face_to_anim_param;
  v37 = ((_BYTE)a2 - 38) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&a2->enable_ccd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&a2->enable_ccd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&a2->enable_ccd, v37, v38);
  enable_ccd = a2->enable_ccd;
  v40 = *(_BYTE *)(((unsigned __int64)&this->enable_ccd >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this - 38) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->enable_ccd, v37, v41);
  this->enable_ccd = enable_ccd;
  v42 = ((_BYTE)a2 - 37) & 7;
  v43 = (*(_BYTE *)(((unsigned __int64)&a2->handle_animator_state_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v42 >= *(_BYTE *)(((unsigned __int64)&a2->handle_animator_state_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v43 )
    __asan_report_load1(&a2->handle_animator_state_immediately, v42, v43);
  handle_animator_state_immediately = a2->handle_animator_state_immediately;
  v45 = *(_BYTE *)(((unsigned __int64)&this->handle_animator_state_immediately >> 3) + 0x7FFF8000);
  LOBYTE(v42) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((((unsigned __int8)this - 37) & 7) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store1(&this->handle_animator_state_immediately, v42, v46);
  this->handle_animator_state_immediately = handle_animator_state_immediately;
};

// Line 255: range 00000000118E3578-00000000118E35A2
void __cdecl data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo(data::ConfigNormalStateIDInfo *const this)
{
  data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo(this);
  operator delete(this, 0xE0uLL);
};

// Line 255: range 00000000118E34D4-00000000118E3577
void __cdecl data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo(data::ConfigNormalStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  std::vector<data::ConfigAnimatorFloat>::~vector(&this->set_animator_float);
  std::vector<data::ConfigAnimatorBoolean>::~vector(&this->set_animator_boolean);
  std::vector<std::string>::~vector(&this->reset_animator_trigger_on_exit);
  std::vector<std::string>::~vector(&this->reset_animator_trigger_on_enter);
  std::unordered_map<std::string,std::vector<std::string>>::~unordered_map(&this->animator_states);
  data::ConfigBaseStateIDInfo::~ConfigBaseStateIDInfo(this);
};

// Line 260: range 000000001169147E-000000001169148E
const char *__cdecl data::ConfigNormalStateIDInfo::getTypeName(const data::ConfigNormalStateIDInfo *const this)
{
  return "ConfigNormalStateIDInfo";
};

// Line 261: range 0000000011691490-000000001169162C
int32_t __cdecl data::ConfigNormalStateIDInfo::getHashNum(const data::ConfigNormalStateIDInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNormalStateIDInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNormalStateIDInfo",
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

// Line 280: range 00000000118E3614-00000000118E3753
void __cdecl data::ConfigStateSubEquip::ConfigStateSubEquip(data::ConfigStateSubEquip *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->battou_all_sub_on_start = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->sheathe_all_sub_on_start, v2, v3);
  this->sheathe_all_sub_on_start = 0;
  v4 = ((_BYTE)this + 2) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->sheathe_all_sub_on_end, v4, v5);
  this->sheathe_all_sub_on_end = 0;
  std::vector<std::string>::vector(&this->battou_sub_on_start);
  std::vector<std::string>::vector(&this->sheathe_sub_on_start);
  std::vector<std::string>::vector(&this->sheathe_sub_on_end);
  std::vector<data::ConfigEquipReattach>::vector(&this->sub_equip_reattach);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 280: range 0000000011704C4C-0000000011704EFD
void __cdecl data::ConfigStateSubEquip::ConfigStateSubEquip(
        data::ConfigStateSubEquip *const this,
        const data::ConfigStateSubEquip *a2)
{
  bool battou_all_sub_on_start; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool sheathe_all_sub_on_start; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool sheathe_all_sub_on_end; // cl
  char v12; // dl
  __int64 v13; // rdx
  data::ConfigEquipReattachList *p_sub_equip_reattach; // rsi
  bool is_json_loaded; // cl
  char v16; // al
  const data::ConfigStateSubEquip *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  battou_all_sub_on_start = a2->battou_all_sub_on_start;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->battou_all_sub_on_start = battou_all_sub_on_start;
  v4 = ((_BYTE)v17 + 1) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v17->sheathe_all_sub_on_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v17->sheathe_all_sub_on_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v17->sheathe_all_sub_on_start, v4, v5);
  sheathe_all_sub_on_start = v17->sheathe_all_sub_on_start;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_start >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->sheathe_all_sub_on_start, v4, v8);
  this->sheathe_all_sub_on_start = sheathe_all_sub_on_start;
  v9 = ((_BYTE)v17 + 2) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v17->sheathe_all_sub_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v17->sheathe_all_sub_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v17->sheathe_all_sub_on_end, v9, v10);
  sheathe_all_sub_on_end = v17->sheathe_all_sub_on_end;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_end >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 2) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->sheathe_all_sub_on_end, v9, v13);
  this->sheathe_all_sub_on_end = sheathe_all_sub_on_end;
  std::vector<std::string>::vector(&this->battou_sub_on_start, &v17->battou_sub_on_start);
  std::vector<std::string>::vector(&this->sheathe_sub_on_start, &v17->sheathe_sub_on_start);
  std::vector<std::string>::vector(&this->sheathe_sub_on_end, &v17->sheathe_sub_on_end);
  p_sub_equip_reattach = &v17->sub_equip_reattach;
  std::vector<data::ConfigEquipReattach>::vector(&this->sub_equip_reattach, &v17->sub_equip_reattach);
  if ( *(char *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v17->is_json_loaded, p_sub_equip_reattach, &v17->is_json_loaded);
  is_json_loaded = v17->is_json_loaded;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_sub_equip_reattach) = v16 != 0;
    __asan_report_store1(&this->is_json_loaded, p_sub_equip_reattach, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 280: range 0000000011704EFE-0000000011704F4C
void __cdecl data::ConfigStateSubEquip::~ConfigStateSubEquip(data::ConfigStateSubEquip *const this)
{
  std::vector<data::ConfigEquipReattach>::~vector(&this->sub_equip_reattach);
  std::vector<std::string>::~vector(&this->sheathe_sub_on_end);
  std::vector<std::string>::~vector(&this->sheathe_sub_on_start);
  std::vector<std::string>::~vector(&this->battou_sub_on_start);
};

// Line 323: range 00000000118E3754-00000000118E3CB9
void __cdecl data::ConfigAvatarStateIDInfo::ConfigAvatarStateIDInfo(data::ConfigAvatarStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_type, v3);
  }
  this->camera_type = normalMove_0;
  data::ConfigStateCameraParam::ConfigStateCameraParam(&this->camera_param);
  std::vector<data::ConfigCanChangeAvatar>::vector(&this->can_change_avatar);
  if ( *(char *)(((unsigned __int64)&this->can_support_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_support_change, v3, &this->can_support_change);
  this->can_support_change = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_panel_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_panel_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_panel_state, v4);
  }
  this->action_panel_state = Normal_18;
  std::vector<data::ConfigEquipReattach>::vector(&this->equip_reattach);
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->jump_cancel_start, v4);
  }
  this->jump_cancel_start = 0.0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->jump_cancel_end, v5);
  }
  this->jump_cancel_end = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sprint_cancel_start, v5);
  }
  this->sprint_cancel_start = 0.0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sprint_cancel_end, v6);
  }
  this->sprint_cancel_end = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fly_cancel_start, v6);
  }
  this->fly_cancel_start = 0.0;
  v7 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fly_cancel_end, v7);
  }
  this->fly_cancel_end = -1.0;
  std::string::basic_string(&this->animator_trigger_on_landed);
  if ( *(char *)(((unsigned __int64)&this->battou_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->battou_on_start, v7, &this->battou_on_start);
  this->battou_on_start = 0;
  v8 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battou_on_start_normalized_time, v8);
  }
  this->battou_on_start_normalized_time = 0.0;
  if ( *(char *)(((unsigned __int64)&this->sheathe_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->sheathe_on_start, v8, &this->sheathe_on_start);
  this->sheathe_on_start = 0;
  v9 = ((_BYTE)this + 113) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->sheathe_on_end, v9, v10);
  this->sheathe_on_end = 0;
  v11 = ((_BYTE)this + 114) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->ignore_pre_sheath >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->ignore_pre_sheath >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->ignore_pre_sheath, v11, v12);
  this->ignore_pre_sheath = 0;
  v13 = ((_BYTE)this + 115) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->enable_combat_to_climb >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->enable_combat_to_climb >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->enable_combat_to_climb, v13, v14);
  this->enable_combat_to_climb = 0;
  v15 = ((_BYTE)this + 116) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->enable_lean_layer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->enable_lean_layer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->enable_lean_layer, v15, v16);
  this->enable_lean_layer = 0;
  v17 = ((_BYTE)this + 117) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->enable_hit_air_retreat_in_air, v17, v18);
  this->enable_hit_air_retreat_in_air = 0;
  data::ConfigStateSubEquip::ConfigStateSubEquip(&this->sub_equip_config);
};

// Line 323: range 00000000118E406E-00000000118E4BD0
void __cdecl data::ConfigAvatarStateIDInfo::ConfigAvatarStateIDInfo(
        data::ConfigAvatarStateIDInfo *const this,
        const data::ConfigAvatarStateIDInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::StateCameraType camera_type; // ecx
  char v5; // dl
  __int64 v6; // rdx
  data::ConfigCanChangeAvatarList *p_can_change_avatar; // rsi
  bool can_support_change; // cl
  char v9; // al
  __int64 v10; // rsi
  data::ActionPanelState action_panel_state; // ecx
  char v12; // dl
  float jump_cancel_start; // xmm0_4
  float jump_cancel_end; // xmm0_4
  __int64 v15; // rsi
  float sprint_cancel_start; // xmm0_4
  float sprint_cancel_end; // xmm0_4
  __int64 v18; // rsi
  float fly_cancel_start; // xmm0_4
  float fly_cancel_end; // xmm0_4
  std::string *p_animator_trigger_on_landed; // rsi
  bool battou_on_start; // cl
  char v23; // al
  float battou_on_start_normalized_time; // xmm0_4
  __int64 v25; // rsi
  bool sheathe_on_start; // cl
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool sheathe_on_end; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool ignore_pre_sheath; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool enable_combat_to_climb; // cl
  char v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  bool enable_lean_layer; // cl
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  bool enable_hit_air_retreat_in_air; // cl
  char v51; // dl
  __int64 v52; // rdx

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo(
    (data::ConfigNormalStateIDInfo *const)this,
    (const data::ConfigNormalStateIDInfo *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = (((_BYTE)a2 - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camera_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camera_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camera_type);
  }
  camera_type = a2->camera_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camera_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camera_type, v3);
  }
  this->camera_type = camera_type;
  if ( *(char *)(((unsigned __int64)&this->camera_param >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->camera_param.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 13) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->camera_param.is_json_loaded + 2) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->camera_param, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->camera_param >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->camera_param.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 13) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->camera_param.is_json_loaded + 2) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->camera_param, 20LL);
  }
  v6 = *(_QWORD *)&a2->camera_param.force_radius;
  *(_QWORD *)&this->camera_param.radius_spring_ratio = *(_QWORD *)&a2->camera_param.radius_spring_ratio;
  *(_QWORD *)&this->camera_param.force_radius = v6;
  *(_DWORD *)&this->camera_param.should_keep_force_radius = *(_DWORD *)&a2->camera_param.should_keep_force_radius;
  p_can_change_avatar = &a2->can_change_avatar;
  std::vector<data::ConfigCanChangeAvatar>::vector(&this->can_change_avatar, &a2->can_change_avatar);
  if ( *(char *)(((unsigned __int64)&a2->can_support_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_support_change, p_can_change_avatar, &a2->can_support_change);
  can_support_change = a2->can_support_change;
  v9 = *(_BYTE *)(((unsigned __int64)&this->can_support_change >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_can_change_avatar) = v9 != 0;
    __asan_report_store1(&this->can_support_change, p_can_change_avatar, &this->can_support_change);
  }
  this->can_support_change = can_support_change;
  v10 = (((_BYTE)a2 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_panel_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action_panel_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action_panel_state);
  }
  action_panel_state = a2->action_panel_state;
  v12 = *(_BYTE *)(((unsigned __int64)&this->action_panel_state >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->action_panel_state, v10);
  }
  this->action_panel_state = action_panel_state;
  std::vector<data::ConfigEquipReattach>::vector(&this->equip_reattach, &a2->equip_reattach);
  if ( *(_BYTE *)(((unsigned __int64)&a2->jump_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->jump_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->jump_cancel_start);
  }
  jump_cancel_start = a2->jump_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->jump_cancel_start, &a2->equip_reattach);
  }
  this->jump_cancel_start = jump_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->jump_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->jump_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->jump_cancel_end);
  }
  jump_cancel_end = a2->jump_cancel_end;
  v15 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->jump_cancel_end, v15);
  }
  this->jump_cancel_end = jump_cancel_end;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sprint_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sprint_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sprint_cancel_start);
  }
  sprint_cancel_start = a2->sprint_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sprint_cancel_start, v15);
  }
  this->sprint_cancel_start = sprint_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sprint_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sprint_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sprint_cancel_end);
  }
  sprint_cancel_end = a2->sprint_cancel_end;
  v18 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sprint_cancel_end, v18);
  }
  this->sprint_cancel_end = sprint_cancel_end;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fly_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fly_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fly_cancel_start);
  }
  fly_cancel_start = a2->fly_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fly_cancel_start, v18);
  }
  this->fly_cancel_start = fly_cancel_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fly_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fly_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fly_cancel_end);
  }
  fly_cancel_end = a2->fly_cancel_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fly_cancel_end, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->fly_cancel_end = fly_cancel_end;
  p_animator_trigger_on_landed = &a2->animator_trigger_on_landed;
  std::string::basic_string(&this->animator_trigger_on_landed, &a2->animator_trigger_on_landed);
  if ( *(char *)(((unsigned __int64)&a2->battou_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->battou_on_start, p_animator_trigger_on_landed, &a2->battou_on_start);
  battou_on_start = a2->battou_on_start;
  v23 = *(_BYTE *)(((unsigned __int64)&this->battou_on_start >> 3) + 0x7FFF8000);
  if ( v23 < 0 )
  {
    LOBYTE(p_animator_trigger_on_landed) = v23 != 0;
    __asan_report_store1(&this->battou_on_start, p_animator_trigger_on_landed, &this->battou_on_start);
  }
  this->battou_on_start = battou_on_start;
  if ( *(_BYTE *)(((unsigned __int64)&a2->battou_on_start_normalized_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->battou_on_start_normalized_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->battou_on_start_normalized_time);
  }
  battou_on_start_normalized_time = a2->battou_on_start_normalized_time;
  v25 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battou_on_start_normalized_time, v25);
  }
  this->battou_on_start_normalized_time = battou_on_start_normalized_time;
  if ( *(char *)(((unsigned __int64)&a2->sheathe_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->sheathe_on_start, v25, &a2->sheathe_on_start);
  sheathe_on_start = a2->sheathe_on_start;
  v27 = *(_BYTE *)(((unsigned __int64)&this->sheathe_on_start >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store1(&this->sheathe_on_start, v25, &this->sheathe_on_start);
  }
  this->sheathe_on_start = sheathe_on_start;
  v28 = ((_BYTE)a2 + 113) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->sheathe_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->sheathe_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->sheathe_on_end, v28, v29);
  sheathe_on_end = a2->sheathe_on_end;
  v31 = *(_BYTE *)(((unsigned __int64)&this->sheathe_on_end >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->sheathe_on_end, v28, v32);
  this->sheathe_on_end = sheathe_on_end;
  v33 = ((_BYTE)a2 + 114) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&a2->ignore_pre_sheath >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&a2->ignore_pre_sheath >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&a2->ignore_pre_sheath, v33, v34);
  ignore_pre_sheath = a2->ignore_pre_sheath;
  v36 = *(_BYTE *)(((unsigned __int64)&this->ignore_pre_sheath >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 114) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->ignore_pre_sheath, v33, v37);
  this->ignore_pre_sheath = ignore_pre_sheath;
  v38 = ((_BYTE)a2 + 115) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&a2->enable_combat_to_climb >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&a2->enable_combat_to_climb >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&a2->enable_combat_to_climb, v38, v39);
  enable_combat_to_climb = a2->enable_combat_to_climb;
  v41 = *(_BYTE *)(((unsigned __int64)&this->enable_combat_to_climb >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this + 115) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->enable_combat_to_climb, v38, v42);
  this->enable_combat_to_climb = enable_combat_to_climb;
  v43 = ((_BYTE)a2 + 116) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&a2->enable_lean_layer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&a2->enable_lean_layer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_load1(&a2->enable_lean_layer, v43, v44);
  enable_lean_layer = a2->enable_lean_layer;
  v46 = *(_BYTE *)(((unsigned __int64)&this->enable_lean_layer >> 3) + 0x7FFF8000);
  LOBYTE(v43) = v46 != 0;
  v47 = (v46 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v46);
  if ( (_BYTE)v47 )
    __asan_report_store1(&this->enable_lean_layer, v43, v47);
  this->enable_lean_layer = enable_lean_layer;
  v48 = ((_BYTE)a2 + 117) & 7;
  v49 = (*(_BYTE *)(((unsigned __int64)&a2->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v48 >= *(_BYTE *)(((unsigned __int64)&a2->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000));
  if ( (_BYTE)v49 )
    __asan_report_load1(&a2->enable_hit_air_retreat_in_air, v48, v49);
  enable_hit_air_retreat_in_air = a2->enable_hit_air_retreat_in_air;
  v51 = *(_BYTE *)(((unsigned __int64)&this->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v51 != 0;
  v52 = (v51 != 0) & (unsigned __int8)((((unsigned __int8)this + 117) & 7) >= v51);
  if ( (_BYTE)v52 )
    __asan_report_store1(&this->enable_hit_air_retreat_in_air, v48, v52);
  this->enable_hit_air_retreat_in_air = enable_hit_air_retreat_in_air;
  data::ConfigStateSubEquip::ConfigStateSubEquip(&this->sub_equip_config, &a2->sub_equip_config);
};

// Line 351: range 000000001190677C-0000000011906811
void __cdecl data::ConfigAvatarStateIDInfo::~ConfigAvatarStateIDInfo(data::ConfigAvatarStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  data::ConfigStateSubEquip::~ConfigStateSubEquip(&this->sub_equip_config);
  std::string::~string(&this->animator_trigger_on_landed);
  std::vector<data::ConfigEquipReattach>::~vector(&this->equip_reattach);
  std::vector<data::ConfigCanChangeAvatar>::~vector(&this->can_change_avatar);
  data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
};

// Line 351: range 0000000011906812-000000001190683C
void __cdecl data::ConfigAvatarStateIDInfo::~ConfigAvatarStateIDInfo(data::ConfigAvatarStateIDInfo *const this)
{
  data::ConfigAvatarStateIDInfo::~ConfigAvatarStateIDInfo(this);
  operator delete(this, 0x1E8uLL);
};

// Line 356: range 000000001169162E-000000001169163E
const char *__cdecl data::ConfigAvatarStateIDInfo::getTypeName(const data::ConfigAvatarStateIDInfo *const this)
{
  return "ConfigAvatarStateIDInfo";
};

// Line 357: range 0000000011691640-00000000116917DC
int32_t __cdecl data::ConfigAvatarStateIDInfo::getHashNum(const data::ConfigAvatarStateIDInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAvatarStateIDInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAvatarStateIDInfo",
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

// Line 373: range 00000000118E4EBA-00000000118E4EFB
void __cdecl data::ConfigAvatarStateIDInfoFactory::ConfigAvatarStateIDInfoFactory(
        data::ConfigAvatarStateIDInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarStateIDInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAvatarStateIDInfoFactory = v2;
};

// Line 396: range 00000000118E5364-00000000118E56AD
void __cdecl data::ConfigMonsterStateIDInfo::ConfigMonsterStateIDInfo(data::ConfigMonsterStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = ((_BYTE)this - 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable_bone_follow_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable_bone_follow_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable_bone_follow_move, v3, v4);
  this->enable_bone_follow_move = 0;
  v5 = ((_BYTE)this - 35) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_steer, v5, v6);
  this->can_steer = 0;
  v7 = ((_BYTE)this - 34) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->auto_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->auto_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->auto_steer, v7, v8);
  this->auto_steer = 0;
  v9 = ((_BYTE)this - 33) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->follow_anim_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->follow_anim_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->follow_anim_rotation, v9, v10);
  this->follow_anim_rotation = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity_adjust_scale, v9);
  }
  this->gravity_adjust_scale = 0.0;
  v11 = ((_BYTE)this - 28) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->force_set_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->force_set_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->force_set_air_move, v11, v12);
  this->force_set_air_move = 0;
  v13 = ((_BYTE)this - 27) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->remote_force_close_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->remote_force_close_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->remote_force_close_air_move, v13, v14);
  this->remote_force_close_air_move = 0;
  v15 = ((_BYTE)this - 26) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->remote_force_use_animator_vel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->remote_force_use_animator_vel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->remote_force_use_animator_vel, v15, v16);
  this->remote_force_use_animator_vel = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_move >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blend_move >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blend_move, v15);
  }
  this->blend_move = None_55;
  v17 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_smooth_speed, v17);
  }
  this->blend_smooth_speed = 7.0;
  if ( *(char *)(((unsigned __int64)&this->air_move_follow_animation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->air_move_follow_animation, v17, &this->air_move_follow_animation);
  this->air_move_follow_animation = 0;
};

// Line 396: range 00000000118E5A62-00000000118E6093
void __cdecl data::ConfigMonsterStateIDInfo::ConfigMonsterStateIDInfo(
        data::ConfigMonsterStateIDInfo *const this,
        const data::ConfigMonsterStateIDInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable_bone_follow_move; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool can_steer; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool auto_steer; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool follow_anim_rotation; // cl
  char v21; // dl
  __int64 v22; // rdx
  float gravity_adjust_scale; // xmm0_4
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool force_set_air_move; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool remote_force_close_air_move; // cl
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  bool remote_force_use_animator_vel; // cl
  char v37; // dl
  __int64 v38; // rdx
  data::BlendMoveType blend_move; // ecx
  char v40; // al
  float blend_smooth_speed; // xmm0_4
  __int64 v42; // rsi
  bool air_move_follow_animation; // cl
  char v44; // al

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo(
    (data::ConfigNormalStateIDInfo *const)this,
    (const data::ConfigNormalStateIDInfo *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = ((_BYTE)a2 - 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable_bone_follow_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable_bone_follow_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable_bone_follow_move, v3, v4);
  enable_bone_follow_move = a2->enable_bone_follow_move;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable_bone_follow_move >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable_bone_follow_move, v3, v7);
  this->enable_bone_follow_move = enable_bone_follow_move;
  v8 = ((_BYTE)a2 - 35) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->can_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->can_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->can_steer, v8, v9);
  can_steer = a2->can_steer;
  v11 = *(_BYTE *)(((unsigned __int64)&this->can_steer >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this - 35) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->can_steer, v8, v12);
  this->can_steer = can_steer;
  v13 = ((_BYTE)a2 - 34) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->auto_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->auto_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->auto_steer, v13, v14);
  auto_steer = a2->auto_steer;
  v16 = *(_BYTE *)(((unsigned __int64)&this->auto_steer >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this - 34) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->auto_steer, v13, v17);
  this->auto_steer = auto_steer;
  v18 = ((_BYTE)a2 - 33) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->follow_anim_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->follow_anim_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->follow_anim_rotation, v18, v19);
  follow_anim_rotation = a2->follow_anim_rotation;
  v21 = *(_BYTE *)(((unsigned __int64)&this->follow_anim_rotation >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 33) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->follow_anim_rotation, v18, v22);
  this->follow_anim_rotation = follow_anim_rotation;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gravity_adjust_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gravity_adjust_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gravity_adjust_scale);
  }
  gravity_adjust_scale = a2->gravity_adjust_scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity_adjust_scale, v18);
  }
  this->gravity_adjust_scale = gravity_adjust_scale;
  v24 = ((_BYTE)a2 - 28) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&a2->force_set_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&a2->force_set_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&a2->force_set_air_move, v24, v25);
  force_set_air_move = a2->force_set_air_move;
  v27 = *(_BYTE *)(((unsigned __int64)&this->force_set_air_move >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this - 28) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->force_set_air_move, v24, v28);
  this->force_set_air_move = force_set_air_move;
  v29 = ((_BYTE)a2 - 27) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&a2->remote_force_close_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&a2->remote_force_close_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&a2->remote_force_close_air_move, v29, v30);
  remote_force_close_air_move = a2->remote_force_close_air_move;
  v32 = *(_BYTE *)(((unsigned __int64)&this->remote_force_close_air_move >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this - 27) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->remote_force_close_air_move, v29, v33);
  this->remote_force_close_air_move = remote_force_close_air_move;
  v34 = ((_BYTE)a2 - 26) & 7;
  v35 = (*(_BYTE *)(((unsigned __int64)&a2->remote_force_use_animator_vel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v34 >= *(_BYTE *)(((unsigned __int64)&a2->remote_force_use_animator_vel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v35 )
    __asan_report_load1(&a2->remote_force_use_animator_vel, v34, v35);
  remote_force_use_animator_vel = a2->remote_force_use_animator_vel;
  v37 = *(_BYTE *)(((unsigned __int64)&this->remote_force_use_animator_vel >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v37 != 0;
  v38 = (v37 != 0) & (unsigned __int8)((((unsigned __int8)this - 26) & 7) >= v37);
  if ( (_BYTE)v38 )
    __asan_report_store1(&this->remote_force_use_animator_vel, v34, v38);
  this->remote_force_use_animator_vel = remote_force_use_animator_vel;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blend_move >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->blend_move >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->blend_move);
  }
  blend_move = a2->blend_move;
  v40 = *(_BYTE *)(((unsigned __int64)&this->blend_move >> 3) + 0x7FFF8000);
  if ( v40 != 0 && v40 <= 3 )
  {
    LOBYTE(v34) = v40 != 0;
    __asan_report_store4(&this->blend_move, v34);
  }
  this->blend_move = blend_move;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blend_smooth_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->blend_smooth_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->blend_smooth_speed);
  }
  blend_smooth_speed = a2->blend_smooth_speed;
  v42 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_smooth_speed, v42);
  }
  this->blend_smooth_speed = blend_smooth_speed;
  if ( *(char *)(((unsigned __int64)&a2->air_move_follow_animation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->air_move_follow_animation, v42, &a2->air_move_follow_animation);
  air_move_follow_animation = a2->air_move_follow_animation;
  v44 = *(_BYTE *)(((unsigned __int64)&this->air_move_follow_animation >> 3) + 0x7FFF8000);
  if ( v44 < 0 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store1(&this->air_move_follow_animation, v42, &this->air_move_follow_animation);
  }
  this->air_move_follow_animation = air_move_follow_animation;
};

// Line 413: range 0000000011906750-000000001190677A
void __cdecl data::ConfigMonsterStateIDInfo::~ConfigMonsterStateIDInfo(data::ConfigMonsterStateIDInfo *const this)
{
  data::ConfigMonsterStateIDInfo::~ConfigMonsterStateIDInfo(this);
  operator delete(this, 0xF8uLL);
};

// Line 413: range 0000000011906702-000000001190674F
void __cdecl data::ConfigMonsterStateIDInfo::~ConfigMonsterStateIDInfo(data::ConfigMonsterStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
};

// Line 418: range 00000000116917DE-00000000116917EE
const char *__cdecl data::ConfigMonsterStateIDInfo::getTypeName(const data::ConfigMonsterStateIDInfo *const this)
{
  return "ConfigMonsterStateIDInfo";
};

// Line 419: range 00000000116917F0-000000001169198C
int32_t __cdecl data::ConfigMonsterStateIDInfo::getHashNum(const data::ConfigMonsterStateIDInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonsterStateIDInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMonsterStateIDInfo",
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

// Line 435: range 00000000118E637C-00000000118E63BD
void __cdecl data::ConfigMonsterStateIDInfoFactory::ConfigMonsterStateIDInfoFactory(
        data::ConfigMonsterStateIDInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterStateIDInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMonsterStateIDInfoFactory = v2;
};

// Line 443: range 00000000118E66C6-00000000118E6758
void __cdecl data::ConfigNpcStateIDInfo::ConfigNpcStateIDInfo(data::ConfigNpcStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = ((_BYTE)this - 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->can_be_inter >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->can_be_inter >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->can_be_inter, v3, v4);
  this->can_be_inter = 1;
};

// Line 443: range 00000000118E6B0E-00000000118E6BF0
void __cdecl data::ConfigNpcStateIDInfo::ConfigNpcStateIDInfo(
        data::ConfigNpcStateIDInfo *const this,
        const data::ConfigNpcStateIDInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool can_be_inter; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigNormalStateIDInfo::ConfigNormalStateIDInfo(
    (data::ConfigNormalStateIDInfo *const)this,
    (const data::ConfigNormalStateIDInfo *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  v3 = ((_BYTE)a2 - 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->can_be_inter >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->can_be_inter >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->can_be_inter, v3, v4);
  can_be_inter = a2->can_be_inter;
  v6 = *(_BYTE *)(((unsigned __int64)&this->can_be_inter >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->can_be_inter, v3, v7);
  this->can_be_inter = can_be_inter;
};

// Line 450: range 0000000011906688-00000000119066D5
void __cdecl data::ConfigNpcStateIDInfo::~ConfigNpcStateIDInfo(data::ConfigNpcStateIDInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcStateIDInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateIDInfo = v2;
  data::ConfigNormalStateIDInfo::~ConfigNormalStateIDInfo((data::ConfigNormalStateIDInfo *const)this);
};

// Line 450: range 00000000119066D6-0000000011906700
void __cdecl data::ConfigNpcStateIDInfo::~ConfigNpcStateIDInfo(data::ConfigNpcStateIDInfo *const this)
{
  data::ConfigNpcStateIDInfo::~ConfigNpcStateIDInfo(this);
  operator delete(this, 0xE0uLL);
};

// Line 455: range 000000001169198E-000000001169199E
const char *__cdecl data::ConfigNpcStateIDInfo::getTypeName(const data::ConfigNpcStateIDInfo *const this)
{
  return "ConfigNpcStateIDInfo";
};

// Line 456: range 00000000116919A0-0000000011691B3C
int32_t __cdecl data::ConfigNpcStateIDInfo::getHashNum(const data::ConfigNpcStateIDInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcStateIDInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpcStateIDInfo",
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

// Line 472: range 00000000118E6EDA-00000000118E6F1B
void __cdecl data::ConfigNpcStateIDInfoFactory::ConfigNpcStateIDInfoFactory(
        data::ConfigNpcStateIDInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcStateIDInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcStateIDInfoFactory = v2;
};

// Line 487: range 00000000118E7224-00000000118E72FE
void __cdecl data::ConfigBaseStateLayer::ConfigBaseStateLayer(data::ConfigBaseStateLayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBaseStateLayer>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseStateLayer>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateLayer = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->layer_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->layer_index, v1);
  }
  this->layer_index = 0;
  std::string::basic_string(&this->layer_index_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 487: range 00000000118E778C-00000000118E7919
void __cdecl data::ConfigBaseStateLayer::ConfigBaseStateLayer(
        data::ConfigBaseStateLayer *const this,
        const data::ConfigBaseStateLayer *a2)
{
  std::enable_shared_from_this<data::ConfigBaseStateLayer> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t layer_index; // ecx
  char v5; // al
  std::string *p_layer_index_name; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseStateLayer>;
  std::enable_shared_from_this<data::ConfigBaseStateLayer>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseStateLayer>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseStateLayer = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->layer_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->layer_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->layer_index);
  }
  layer_index = a2->layer_index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->layer_index >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->layer_index, v2);
  }
  this->layer_index = layer_index;
  p_layer_index_name = &a2->layer_index_name;
  std::string::basic_string(&this->layer_index_name, &a2->layer_index_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_layer_index_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_layer_index_name) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_layer_index_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 496: range 00000000118E7C02-00000000118E7C63
void __cdecl data::ConfigBaseStateLayer::~ConfigBaseStateLayer(data::ConfigBaseStateLayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateLayer = v2;
  std::string::~string(&this->layer_index_name);
  std::enable_shared_from_this<data::ConfigBaseStateLayer>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseStateLayer>);
};

// Line 496: range 00000000118E7C64-00000000118E7C8E
void __cdecl data::ConfigBaseStateLayer::~ConfigBaseStateLayer(data::ConfigBaseStateLayer *const this)
{
  data::ConfigBaseStateLayer::~ConfigBaseStateLayer(this);
  operator delete(this, 0x48uLL);
};

// Line 501: range 0000000011691B3E-0000000011691B4E
const char *__cdecl data::ConfigBaseStateLayer::getTypeName(const data::ConfigBaseStateLayer *const this)
{
  return "ConfigBaseStateLayer";
};

// Line 502: range 0000000011691B50-0000000011691CEC
int32_t __cdecl data::ConfigBaseStateLayer::getHashNum(const data::ConfigBaseStateLayer *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseStateLayer::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseStateLayer",
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

// Line 521: range 00000000118E7DEA-00000000118E7E47
void __cdecl data::ConfigNormalStateLayer::ConfigNormalStateLayer(data::ConfigNormalStateLayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseStateLayer::ConfigBaseStateLayer(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateLayer = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::unordered_map(&this->state_ids);
};

// Line 521: range 00000000118E81FC-00000000118E8292
void __cdecl data::ConfigNormalStateLayer::ConfigNormalStateLayer(
        data::ConfigNormalStateLayer *const this,
        const data::ConfigNormalStateLayer *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseStateLayer::ConfigBaseStateLayer(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseStateLayer = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::unordered_map(
    &this->state_ids,
    &a2->state_ids);
};

// Line 528: range 000000001190665C-0000000011906686
void __cdecl data::ConfigNormalStateLayer::~ConfigNormalStateLayer(data::ConfigNormalStateLayer *const this)
{
  data::ConfigNormalStateLayer::~ConfigNormalStateLayer(this);
  operator delete(this, 0x80uLL);
};

// Line 528: range 00000000119065FE-000000001190665B
void __cdecl data::ConfigNormalStateLayer::~ConfigNormalStateLayer(data::ConfigNormalStateLayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateLayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseStateLayer = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::~unordered_map(&this->state_ids);
  data::ConfigBaseStateLayer::~ConfigBaseStateLayer(this);
};

// Line 533: range 0000000011691CEE-0000000011691CFE
const char *__cdecl data::ConfigNormalStateLayer::getTypeName(const data::ConfigNormalStateLayer *const this)
{
  return "ConfigNormalStateLayer";
};

// Line 534: range 0000000011691D00-0000000011691E9C
int32_t __cdecl data::ConfigNormalStateLayer::getHashNum(const data::ConfigNormalStateLayer *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNormalStateLayer::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNormalStateLayer",
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

// Line 550: range 00000000118E857C-00000000118E85BD
void __cdecl data::ConfigNormalStateLayerFactory::ConfigNormalStateLayerFactory(
        data::ConfigNormalStateLayerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNormalStateLayerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNormalStateLayerFactory = v2;
};
