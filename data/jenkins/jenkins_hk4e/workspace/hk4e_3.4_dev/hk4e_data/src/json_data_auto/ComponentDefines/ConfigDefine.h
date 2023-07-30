// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigDefine.h

// Line 129: range 000000000DF48AB0-000000000DF48BC1
void __cdecl data::DynamicFloat::DynamicFloat(data::DynamicFloat *const this, const data::DynamicFloat *a2)
{
  float fixed_value; // xmm0_4
  std::any *p_impl; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  fixed_value = a2->fixed_value;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->fixed_value = fixed_value;
  p_impl = &a2->impl;
  std::any::any(&this->impl, &a2->impl);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_impl, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_impl) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_impl, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 237: range 000000000E876C58-000000000E876DE6
void __cdecl data::DynamicInt::DynamicInt(data::DynamicInt *const this, data::DynamicInt *a2)
{
  bool is_dynamic; // cl
  char v3; // al
  std::string *p_dynamic_key; // rsi
  int32_t fixed_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::DynamicInt *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_dynamic = a2->is_dynamic;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_dynamic = is_dynamic;
  p_dynamic_key = &v12->dynamic_key;
  std::string::basic_string(&this->dynamic_key, &v12->dynamic_key);
  if ( *(_BYTE *)(((unsigned __int64)&v12->fixed_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->fixed_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->fixed_value);
  }
  fixed_value = v12->fixed_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_dynamic_key) = v6 != 0;
    __asan_report_store4(&this->fixed_value, p_dynamic_key);
  }
  this->fixed_value = fixed_value;
  v7 = ((_BYTE)v12 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 237: range 000000000E877972-000000000E877A9C
void __cdecl data::DynamicString::DynamicString(data::DynamicString *const this, data::DynamicString *a2)
{
  bool is_dynamic; // cl
  char v3; // al
  std::string *p_fixed_value; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::DynamicString *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_dynamic = a2->is_dynamic;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_dynamic = is_dynamic;
  std::string::basic_string(&this->dynamic_key, &v7->dynamic_key);
  p_fixed_value = &v7->fixed_value;
  std::string::basic_string(&this->fixed_value, &v7->fixed_value);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_fixed_value, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_fixed_value) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fixed_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 260: range 000000000E875FD6-000000000E8760E7
void __cdecl data::DynamicFloat::DynamicFloat(data::DynamicFloat *const this, data::DynamicFloat *a2)
{
  float fixed_value; // xmm0_4
  std::any *p_impl; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  fixed_value = a2->fixed_value;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->fixed_value = fixed_value;
  p_impl = &a2->impl;
  std::any::any(&this->impl, &a2->impl);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_impl, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_impl) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_impl, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 260: range 000000000D7414CE-000000000D7414EC
void __cdecl data::DynamicFloat::~DynamicFloat(data::DynamicFloat *const this)
{
  std::any::~any(&this->impl);
};

// Line 272: range 000000000E6C65AA-000000000E6C663E
void __cdecl data::DynamicFloat::DynamicFloat(data::DynamicFloat *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->fixed_value = 0.0;
  std::any::any(&this->impl);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 283: range 00000000110E1B54-00000000110E1BDD
void __cdecl data::FixedBool::FixedBool(data::FixedBool *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->value = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 315: range 000000000ECD726C-000000000ECD72E1
void __cdecl data::DynamicFloatVector::DynamicFloatVector(data::DynamicFloatVector *const this)
{
  __int64 v1; // rsi

  data::DynamicFloat::DynamicFloat(&this->x);
  data::DynamicFloat::DynamicFloat(&this->y);
  data::DynamicFloat::DynamicFloat(&this->z);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 315: range 000000000E7D5C00-000000000E7D5D09
void __cdecl data::DynamicFloatVector::DynamicFloatVector(
        data::DynamicFloatVector *const this,
        const data::DynamicFloatVector *a2)
{
  data::DynamicFloat *p_z; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::DynamicFloat::DynamicFloat(&this->x, &a2->x);
  data::DynamicFloat::DynamicFloat(&this->y, &a2->y);
  p_z = &a2->z;
  data::DynamicFloat::DynamicFloat(&this->z, p_z);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_z, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_z) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_z, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 315: range 000000000E7D5D0A-000000000E7D5D44
void __cdecl data::DynamicFloatVector::~DynamicFloatVector(data::DynamicFloatVector *const this)
{
  data::DynamicFloat::~DynamicFloat(&this->z);
  data::DynamicFloat::~DynamicFloat(&this->y);
  data::DynamicFloat::~DynamicFloat(&this->x);
};

// Line 340: range 000000000E77873E-000000000E7788CC
void __cdecl data::DynamicInt::DynamicInt(data::DynamicInt *const this, const data::DynamicInt *a2)
{
  bool is_dynamic; // cl
  char v3; // al
  std::string *p_dynamic_key; // rsi
  int32_t fixed_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::DynamicInt *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_dynamic = a2->is_dynamic;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_dynamic = is_dynamic;
  p_dynamic_key = &v12->dynamic_key;
  std::string::basic_string(&this->dynamic_key, &v12->dynamic_key);
  if ( *(_BYTE *)(((unsigned __int64)&v12->fixed_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->fixed_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->fixed_value);
  }
  fixed_value = v12->fixed_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_dynamic_key) = v6 != 0;
    __asan_report_store4(&this->fixed_value, p_dynamic_key);
  }
  this->fixed_value = fixed_value;
  v7 = ((_BYTE)v12 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 340: range 000000000E6CE498-000000000E6CE4B6
void __cdecl data::DynamicInt::~DynamicInt(data::DynamicInt *const this)
{
  std::string::~string(&this->dynamic_key);
};

// Line 353: range 000000000E6CE3C4-000000000E6CE496
void __cdecl data::DynamicInt::DynamicInt(data::DynamicInt *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_dynamic = 0;
  std::string::basic_string(&this->dynamic_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_value, v1);
  }
  this->fixed_value = 0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 376: range 000000000EBC983C-000000000EBC998D
void __cdecl data::DynamicString::DynamicString(data::DynamicString *const this, const data::DynamicString *a2)
{
  bool is_dynamic; // cl
  char v3; // al
  std::string *p_fixed_value; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::DynamicString *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_dynamic = a2->is_dynamic;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_dynamic = is_dynamic;
  std::string::basic_string(&this->dynamic_key, &v7->dynamic_key);
  p_fixed_value = &v7->fixed_value;
  std::string::basic_string(&this->fixed_value, &v7->fixed_value);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_fixed_value, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_fixed_value) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fixed_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 389: range 000000000E6CE4EC-000000000E6CE58B
void __cdecl data::DynamicString::DynamicString(data::DynamicString *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_dynamic = 0;
  std::string::basic_string(&this->dynamic_key);
  std::string::basic_string(&this->fixed_value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 389: range 000000000E6CE58C-000000000E6CE5BA
void __cdecl data::DynamicString::~DynamicString(data::DynamicString *const this)
{
  std::string::~string(&this->fixed_value);
  std::string::~string(&this->dynamic_key);
};

// Line 442: range 000000000DF3CFB0-000000000DF3D089
void __cdecl data::Point2D::Point2D(data::Point2D *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = 0.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 471: range 000000000D7ABA12-000000000D7ABB33
void __cdecl data::Vector::Vector(data::Vector *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = 0.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 501: range 000000000DF19E4A-000000000DF19FB3
void __cdecl data::ColorVector::ColorVector(data::ColorVector *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->r = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->g >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->g >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->g, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->g = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->b >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->b >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->b, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->b = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->a >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->a >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->a, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->a = 0.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 542: range 000000000E6C6E80-000000000E6C706D
void __cdecl data::ConfigCameraShakeExt::ConfigCameraShakeExt(data::ConfigCameraShakeExt *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->infinity = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->base_on_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->base_on_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->base_on_camera, v3, v4);
  this->base_on_camera = 0;
  v5 = ((_BYTE)this + 2) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->after_shake >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->after_shake >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->after_shake, v5, v6);
  this->after_shake = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_cycle, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->base_cycle = 0.12;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_damping, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cycle_damping = 0.12;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->range_attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->range_attenuation, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->range_attenuation = 0.5;
  v7 = ((_BYTE)this + 16) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 570: range 000000000E6C706E-000000000E6C71F9
void __cdecl data::ConfigCameraShake::ConfigCameraShake(data::ConfigCameraShake *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->shake_type = Center;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shake_range, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->shake_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shake_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->shake_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shake_distance, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->shake_distance = 20.0;
  data::Vector::Vector(&this->shake_dir);
  data::ConfigCameraShakeExt::ConfigCameraShakeExt(&this->extension);
  v1 = ((_BYTE)this + 52) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 612: range 0000000013C11C2E-0000000013C11D47
void __cdecl data::ConfigCameraMove::ConfigCameraMove(data::ConfigCameraMove *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_priority_in_stack, v1);
  }
  this->sub_priority_in_stack = 10;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->in_stack, v2);
  }
  this->in_stack = Always;
  if ( *(char *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_persistent, v2, &this->is_persistent);
  this->is_persistent = 0;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 612: range 00000000141E66EA-00000000141E68FF
void __cdecl data::ConfigCameraMove::ConfigCameraMove(
        data::ConfigCameraMove *const this,
        const data::ConfigCameraMove *a2)
{
  int32_t sub_priority_in_stack; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ESpecialCameraPushStackType in_stack; // ecx
  char v6; // dl
  bool is_persistent; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx
  const data::ConfigCameraMove *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v14->sub_priority_in_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->sub_priority_in_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_priority_in_stack);
  }
  sub_priority_in_stack = a2->sub_priority_in_stack;
  v3 = *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->sub_priority_in_stack, a2);
  }
  this->sub_priority_in_stack = sub_priority_in_stack;
  v4 = (((_BYTE)v14 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->in_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->in_stack >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->in_stack);
  }
  in_stack = v14->in_stack;
  v6 = *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
    __asan_report_store4(&this->in_stack, v4);
  this->in_stack = in_stack;
  if ( *(char *)(((unsigned __int64)&v14->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_persistent, v4, &v14->is_persistent);
  is_persistent = v14->is_persistent;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->is_persistent, v4, &this->is_persistent);
  }
  this->is_persistent = is_persistent;
  v9 = ((_BYTE)v14 + 41) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v14->is_json_loaded, v9, v10);
  is_json_loaded = v14->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 612: range 0000000013C11D48-0000000013C11D62
void __cdecl data::ConfigCameraMove::~ConfigCameraMove(data::ConfigCameraMove *const this)
{
  std::string::~string(this);
};

// Line 638: range 000000001113C90E-000000001113CA2F
void __cdecl data::ConfigCameraRadialBlur::ConfigCameraRadialBlur(data::ConfigCameraRadialBlur *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->power = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blur_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blur_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blur_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->blur_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->fade_time = 0.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 694: range 000000000DEFE0B6-000000000DEFE10B
void __cdecl data::ConfigAnimationCurve::ConfigAnimationCurve(data::ConfigAnimationCurve *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigKeyframe>::vector(&this->keyframes);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 694: range 000000000D8F5308-000000000D8F53A3
void __cdecl data::ConfigAnimationCurve::ConfigAnimationCurve(
        data::ConfigAnimationCurve *const this,
        const data::ConfigAnimationCurve *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigKeyframe>::vector(&this->keyframes, &a2->keyframes);
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

// Line 694: range 000000000E87BA18-000000000E87BAB3
void __cdecl data::ConfigAnimationCurve::ConfigAnimationCurve(
        data::ConfigAnimationCurve *const this,
        data::ConfigAnimationCurve *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigKeyframe>::vector(&this->keyframes, &a2->keyframes);
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

// Line 694: range 000000000D8F53A4-000000000D8F53BE
void __cdecl data::ConfigAnimationCurve::~ConfigAnimationCurve(data::ConfigAnimationCurve *const this)
{
  std::vector<data::ConfigKeyframe>::~vector(&this->keyframes);
};

// Line 1084: range 000000000ED41DCA-000000000ED41F33
void __cdecl data::DirectionTarDistanceScatter::DirectionTarDistanceScatter(
        data::DirectionTarDistanceScatter *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->max_distance = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_scatter_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_scatter_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_scatter_angle, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_scatter_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_rote >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->center_rote >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->center_rote, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->center_rote = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_rote >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_rote >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_rote, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->random_rote = 0.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1110: range 000000000ECD72E2-000000000ECD74FE
void __cdecl data::ConfigBornDirectionType::ConfigBornDirectionType(data::ConfigBornDirectionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::enable_shared_from_this<data::ConfigBornDirectionType>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBornDirectionType>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornDirectionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::DynamicFloatVector::DynamicFloatVector(&this->angle_offset);
  data::DynamicFloatVector::DynamicFloatVector(&this->angle_offset_correct);
  if ( *(char *)(((unsigned __int64)&this->use_correct_dir >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_correct_dir, v1, &this->use_correct_dir);
  this->use_correct_dir = 0;
  v3 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_angle_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_angle_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_angle_hor, v3);
  }
  this->random_angle_hor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_angle_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_angle_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_angle_ver, v3);
  }
  this->random_angle_ver = 0.0;
  v4 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_angle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_angle_type, v4);
  }
  this->max_angle_type = Free_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_angle, v4);
  }
  this->max_angle = 180.0;
  v5 = ((_BYTE)this - 4) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 1110: range 000000000ED40126-000000000ED40527
void __cdecl data::ConfigBornDirectionType::ConfigBornDirectionType(
        data::ConfigBornDirectionType *const this,
        const data::ConfigBornDirectionType *a2)
{
  std::enable_shared_from_this<data::ConfigBornDirectionType> *v2; // rsi
  int (**v3)(...); // rdx
  data::DynamicFloatVector *p_angle_offset_correct; // rsi
  bool use_correct_dir; // cl
  char v6; // al
  float random_angle_hor; // xmm0_4
  __int64 v8; // rsi
  float random_angle_ver; // xmm0_4
  __int64 v10; // rsi
  data::DirectionAngleType max_angle_type; // ecx
  char v12; // dl
  float max_angle; // xmm0_4
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_json_loaded; // cl
  char v17; // dl
  __int64 v18; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBornDirectionType>;
  std::enable_shared_from_this<data::ConfigBornDirectionType>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBornDirectionType>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBornDirectionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBornDirectionType = v3;
  data::DynamicFloatVector::DynamicFloatVector(&this->angle_offset, &a2->angle_offset);
  p_angle_offset_correct = &a2->angle_offset_correct;
  data::DynamicFloatVector::DynamicFloatVector(&this->angle_offset_correct, &a2->angle_offset_correct);
  if ( *(char *)(((unsigned __int64)&a2->use_correct_dir >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_correct_dir, p_angle_offset_correct, &a2->use_correct_dir);
  use_correct_dir = a2->use_correct_dir;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_correct_dir >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_angle_offset_correct) = v6 != 0;
    __asan_report_store1(&this->use_correct_dir, p_angle_offset_correct, &this->use_correct_dir);
  }
  this->use_correct_dir = use_correct_dir;
  if ( *(_BYTE *)(((unsigned __int64)&a2->random_angle_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->random_angle_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->random_angle_hor);
  }
  random_angle_hor = a2->random_angle_hor;
  v8 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_angle_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_angle_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_angle_hor, v8);
  }
  this->random_angle_hor = random_angle_hor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->random_angle_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->random_angle_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->random_angle_ver);
  }
  random_angle_ver = a2->random_angle_ver;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_angle_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_angle_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_angle_ver, v8);
  }
  this->random_angle_ver = random_angle_ver;
  v10 = (((_BYTE)a2 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_angle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_angle_type);
  }
  max_angle_type = a2->max_angle_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_angle_type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v12 )
    __asan_report_store4(&this->max_angle_type, v10);
  this->max_angle_type = max_angle_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_angle);
  }
  max_angle = a2->max_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_angle, v10);
  }
  this->max_angle = max_angle;
  v14 = ((_BYTE)a2 - 4) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->is_json_loaded, v14, v15);
  is_json_loaded = a2->is_json_loaded;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 4) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_json_loaded, v14, v18);
  this->is_json_loaded = is_json_loaded;
};

// Line 1124: range 000000000ED40882-000000000ED408AC
void __cdecl data::ConfigBornDirectionType::~ConfigBornDirectionType(data::ConfigBornDirectionType *const this)
{
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
  operator delete(this, 0x100uLL);
};

// Line 1124: range 000000000ED40810-000000000ED40881
void __cdecl data::ConfigBornDirectionType::~ConfigBornDirectionType(data::ConfigBornDirectionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornDirectionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::DynamicFloatVector::~DynamicFloatVector(&this->angle_offset_correct);
  data::DynamicFloatVector::~DynamicFloatVector(&this->angle_offset);
  std::enable_shared_from_this<data::ConfigBornDirectionType>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBornDirectionType>);
};

// Line 1129: range 000000000E699A2E-000000000E699A3E
const char *__cdecl data::ConfigBornDirectionType::getTypeName(const data::ConfigBornDirectionType *const this)
{
  return "ConfigBornDirectionType";
};

// Line 1130: range 000000000E699A40-000000000E699BDC
int32_t __cdecl data::ConfigBornDirectionType::getHashNum(const data::ConfigBornDirectionType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornDirectionType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornDirectionType",
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

// Line 1149: range 000000000ED408AE-000000000ED408FB
void __cdecl data::ConfigDirectionByDefault::ConfigDirectionByDefault(data::ConfigDirectionByDefault *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByDefault + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1149: range 000000000ED40CB0-000000000ED40D08
void __cdecl data::ConfigDirectionByDefault::ConfigDirectionByDefault(
        data::ConfigDirectionByDefault *const this,
        const data::ConfigDirectionByDefault *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByDefault + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1155: range 000000000EDABEFA-000000000EDABF24
void __cdecl data::ConfigDirectionByDefault::~ConfigDirectionByDefault(data::ConfigDirectionByDefault *const this)
{
  data::ConfigDirectionByDefault::~ConfigDirectionByDefault(this);
  operator delete(this, 0x100uLL);
};

// Line 1155: range 000000000EDABEAC-000000000EDABEF9
void __cdecl data::ConfigDirectionByDefault::~ConfigDirectionByDefault(data::ConfigDirectionByDefault *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByDefault + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1160: range 000000000E699BDE-000000000E699BEE
const char *__cdecl data::ConfigDirectionByDefault::getTypeName(const data::ConfigDirectionByDefault *const this)
{
  return "ConfigDirectionByDefault";
};

// Line 1161: range 000000000E699BF0-000000000E699D8C
int32_t __cdecl data::ConfigDirectionByDefault::getHashNum(const data::ConfigDirectionByDefault *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByDefault::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByDefault",
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

// Line 1177: range 000000000ED40FF2-000000000ED41033
void __cdecl data::ConfigDirectionByDefaultFactory::ConfigDirectionByDefaultFactory(
        data::ConfigDirectionByDefaultFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByDefaultFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByDefaultFactory = v2;
};

// Line 1185: range 000000000ED4133C-000000000ED41389
void __cdecl data::ConfigDirectionByEntity::ConfigDirectionByEntity(data::ConfigDirectionByEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1185: range 000000000ED4173E-000000000ED41796
void __cdecl data::ConfigDirectionByEntity::ConfigDirectionByEntity(
        data::ConfigDirectionByEntity *const this,
        const data::ConfigDirectionByEntity *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1191: range 000000000EDABE32-000000000EDABE7F
void __cdecl data::ConfigDirectionByEntity::~ConfigDirectionByEntity(data::ConfigDirectionByEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1191: range 000000000EDABE80-000000000EDABEAA
void __cdecl data::ConfigDirectionByEntity::~ConfigDirectionByEntity(data::ConfigDirectionByEntity *const this)
{
  data::ConfigDirectionByEntity::~ConfigDirectionByEntity(this);
  operator delete(this, 0x100uLL);
};

// Line 1196: range 000000000E699D8E-000000000E699D9E
const char *__cdecl data::ConfigDirectionByEntity::getTypeName(const data::ConfigDirectionByEntity *const this)
{
  return "ConfigDirectionByEntity";
};

// Line 1197: range 000000000E699DA0-000000000E699F3C
int32_t __cdecl data::ConfigDirectionByEntity::getHashNum(const data::ConfigDirectionByEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByEntity",
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

// Line 1213: range 000000000ED41A80-000000000ED41AC1
void __cdecl data::ConfigDirectionByEntityFactory::ConfigDirectionByEntityFactory(
        data::ConfigDirectionByEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByEntityFactory = v2;
};

// Line 1221: range 000000000ED41F34-000000000ED41FD8
void __cdecl data::ConfigDirectionByAttackTarget::ConfigDirectionByAttackTarget(
        data::ConfigDirectionByAttackTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_for_predictive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_for_predictive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_for_predictive, v1);
  }
  this->speed_for_predictive = 0.0;
  data::DirectionTarDistanceScatter::DirectionTarDistanceScatter(&this->scatter);
};

// Line 1221: range 000000000ED42396-000000000ED42582
void __cdecl data::ConfigDirectionByAttackTarget::ConfigDirectionByAttackTarget(
        data::ConfigDirectionByAttackTarget *const this,
        const data::ConfigDirectionByAttackTarget *a2)
{
  int (**v2)(...); // rdx
  float speed_for_predictive; // xmm0_4
  __int64 v4; // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->speed_for_predictive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->speed_for_predictive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->speed_for_predictive);
  }
  speed_for_predictive = a2->speed_for_predictive;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_for_predictive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_for_predictive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_for_predictive, a2);
  }
  this->speed_for_predictive = speed_for_predictive;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->scatter >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->scatter >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->scatter.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->scatter.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->scatter, 20LL);
  }
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->scatter >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->scatter >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->scatter.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->scatter.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->scatter, 20LL);
  }
  v4 = *(_QWORD *)&a2->scatter.center_rote;
  *(_QWORD *)&this->scatter.max_distance = *(_QWORD *)&a2->scatter.max_distance;
  *(_QWORD *)&this->scatter.center_rote = v4;
  *(_DWORD *)&this->scatter.is_json_loaded = *(_DWORD *)&a2->scatter.is_json_loaded;
};

// Line 1229: range 000000000EDABDB8-000000000EDABE05
void __cdecl data::ConfigDirectionByAttackTarget::~ConfigDirectionByAttackTarget(
        data::ConfigDirectionByAttackTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1229: range 000000000EDABE06-000000000EDABE30
void __cdecl data::ConfigDirectionByAttackTarget::~ConfigDirectionByAttackTarget(
        data::ConfigDirectionByAttackTarget *const this)
{
  data::ConfigDirectionByAttackTarget::~ConfigDirectionByAttackTarget(this);
  operator delete(this, 0x118uLL);
};

// Line 1234: range 000000000E699F3E-000000000E699F4E
const char *__cdecl data::ConfigDirectionByAttackTarget::getTypeName(
        const data::ConfigDirectionByAttackTarget *const this)
{
  return "ConfigDirectionByAttackTarget";
};

// Line 1235: range 000000000E699F50-000000000E69A0EC
int32_t __cdecl data::ConfigDirectionByAttackTarget::getHashNum(const data::ConfigDirectionByAttackTarget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByAttackTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByAttackTarget",
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

// Line 1251: range 000000000ED4286C-000000000ED428AD
void __cdecl data::ConfigDirectionByAttackTargetFactory::ConfigDirectionByAttackTargetFactory(
        data::ConfigDirectionByAttackTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttackTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByAttackTargetFactory = v2;
};

// Line 1259: range 000000000ED42BB6-000000000ED42C58
void __cdecl data::ConfigDirectionByAttachPoint::ConfigDirectionByAttachPoint(
        data::ConfigDirectionByAttachPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  std::string::basic_string(&this->attach_point_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attach_point_target_type, v1);
  }
  this->attach_point_target_type = Target_0;
};

// Line 1259: range 000000000ED43008-000000000ED43122
void __cdecl data::ConfigDirectionByAttachPoint::ConfigDirectionByAttachPoint(
        data::ConfigDirectionByAttachPoint *const this,
        const data::ConfigDirectionByAttachPoint *a2)
{
  int (**v2)(...); // rdx
  std::string *p_attach_point_name; // rsi
  data::AttachPointTargetType attach_point_target_type; // ecx
  char v5; // al

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  p_attach_point_name = &a2->attach_point_name;
  std::string::basic_string(&this->attach_point_name, &a2->attach_point_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->attach_point_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attach_point_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attach_point_target_type);
  }
  attach_point_target_type = a2->attach_point_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_attach_point_name) = v5 != 0;
    __asan_report_store4(&this->attach_point_target_type, p_attach_point_name);
  }
  this->attach_point_target_type = attach_point_target_type;
};

// Line 1267: range 000000000EDABD8C-000000000EDABDB6
void __cdecl data::ConfigDirectionByAttachPoint::~ConfigDirectionByAttachPoint(
        data::ConfigDirectionByAttachPoint *const this)
{
  data::ConfigDirectionByAttachPoint::~ConfigDirectionByAttachPoint(this);
  operator delete(this, 0x128uLL);
};

// Line 1267: range 000000000EDABD2C-000000000EDABD8B
void __cdecl data::ConfigDirectionByAttachPoint::~ConfigDirectionByAttachPoint(
        data::ConfigDirectionByAttachPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  std::string::~string(&this->attach_point_name);
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1272: range 000000000E69A0EE-000000000E69A0FE
const char *__cdecl data::ConfigDirectionByAttachPoint::getTypeName(
        const data::ConfigDirectionByAttachPoint *const this)
{
  return "ConfigDirectionByAttachPoint";
};

// Line 1273: range 000000000E69A100-000000000E69A29C
int32_t __cdecl data::ConfigDirectionByAttachPoint::getHashNum(const data::ConfigDirectionByAttachPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByAttachPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByAttachPoint",
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

// Line 1289: range 000000000ED4340C-000000000ED4344D
void __cdecl data::ConfigDirectionByAttachPointFactory::ConfigDirectionByAttachPointFactory(
        data::ConfigDirectionByAttachPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByAttachPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByAttachPointFactory = v2;
};

// Line 1297: range 000000000ED43756-000000000ED437A3
void __cdecl data::ConfigDirectionByBackToHitBoxCenter::ConfigDirectionByBackToHitBoxCenter(
        data::ConfigDirectionByBackToHitBoxCenter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByBackToHitBoxCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1297: range 000000000ED43B58-000000000ED43BB0
void __cdecl data::ConfigDirectionByBackToHitBoxCenter::ConfigDirectionByBackToHitBoxCenter(
        data::ConfigDirectionByBackToHitBoxCenter *const this,
        const data::ConfigDirectionByBackToHitBoxCenter *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByBackToHitBoxCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1303: range 000000000EDABCB2-000000000EDABCFF
void __cdecl data::ConfigDirectionByBackToHitBoxCenter::~ConfigDirectionByBackToHitBoxCenter(
        data::ConfigDirectionByBackToHitBoxCenter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByBackToHitBoxCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1303: range 000000000EDABD00-000000000EDABD2A
void __cdecl data::ConfigDirectionByBackToHitBoxCenter::~ConfigDirectionByBackToHitBoxCenter(
        data::ConfigDirectionByBackToHitBoxCenter *const this)
{
  data::ConfigDirectionByBackToHitBoxCenter::~ConfigDirectionByBackToHitBoxCenter(this);
  operator delete(this, 0x100uLL);
};

// Line 1308: range 000000000E69A29E-000000000E69A2AE
const char *__cdecl data::ConfigDirectionByBackToHitBoxCenter::getTypeName(
        const data::ConfigDirectionByBackToHitBoxCenter *const this)
{
  return "ConfigDirectionByBackToHitBoxCenter";
};

// Line 1309: range 000000000E69A2B0-000000000E69A44C
int32_t __cdecl data::ConfigDirectionByBackToHitBoxCenter::getHashNum(
        const data::ConfigDirectionByBackToHitBoxCenter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByBackToHitBoxCenter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByBackToHitBoxCenter",
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

// Line 1325: range 000000000ED43E9A-000000000ED43EDB
void __cdecl data::ConfigDirectionByBackToHitBoxCenterFactory::ConfigDirectionByBackToHitBoxCenterFactory(
        data::ConfigDirectionByBackToHitBoxCenterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByBackToHitBoxCenterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByBackToHitBoxCenterFactory = v2;
};

// Line 1333: range 000000000ED441E4-000000000ED44231
void __cdecl data::ConfigDirectionByLookAtEntity::ConfigDirectionByLookAtEntity(
        data::ConfigDirectionByLookAtEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1333: range 000000000ED445E6-000000000ED4463E
void __cdecl data::ConfigDirectionByLookAtEntity::ConfigDirectionByLookAtEntity(
        data::ConfigDirectionByLookAtEntity *const this,
        const data::ConfigDirectionByLookAtEntity *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1339: range 000000000EDABC38-000000000EDABC85
void __cdecl data::ConfigDirectionByLookAtEntity::~ConfigDirectionByLookAtEntity(
        data::ConfigDirectionByLookAtEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1339: range 000000000EDABC86-000000000EDABCB0
void __cdecl data::ConfigDirectionByLookAtEntity::~ConfigDirectionByLookAtEntity(
        data::ConfigDirectionByLookAtEntity *const this)
{
  data::ConfigDirectionByLookAtEntity::~ConfigDirectionByLookAtEntity(this);
  operator delete(this, 0x100uLL);
};

// Line 1344: range 000000000E69A44E-000000000E69A45E
const char *__cdecl data::ConfigDirectionByLookAtEntity::getTypeName(
        const data::ConfigDirectionByLookAtEntity *const this)
{
  return "ConfigDirectionByLookAtEntity";
};

// Line 1345: range 000000000E69A460-000000000E69A5FC
int32_t __cdecl data::ConfigDirectionByLookAtEntity::getHashNum(const data::ConfigDirectionByLookAtEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByLookAtEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByLookAtEntity",
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

// Line 1361: range 000000000ED44928-000000000ED44969
void __cdecl data::ConfigDirectionByLookAtEntityFactory::ConfigDirectionByLookAtEntityFactory(
        data::ConfigDirectionByLookAtEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByLookAtEntityFactory = v2;
};

// Line 1369: range 000000000ED44C72-000000000ED44CBF
void __cdecl data::ConfigDirectionByLookAtEntityFix::ConfigDirectionByLookAtEntityFix(
        data::ConfigDirectionByLookAtEntityFix *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntityFix + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1369: range 000000000ED45074-000000000ED450CC
void __cdecl data::ConfigDirectionByLookAtEntityFix::ConfigDirectionByLookAtEntityFix(
        data::ConfigDirectionByLookAtEntityFix *const this,
        const data::ConfigDirectionByLookAtEntityFix *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntityFix + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1375: range 000000000EDABC0C-000000000EDABC36
void __cdecl data::ConfigDirectionByLookAtEntityFix::~ConfigDirectionByLookAtEntityFix(
        data::ConfigDirectionByLookAtEntityFix *const this)
{
  data::ConfigDirectionByLookAtEntityFix::~ConfigDirectionByLookAtEntityFix(this);
  operator delete(this, 0x100uLL);
};

// Line 1375: range 000000000EDABBBE-000000000EDABC0B
void __cdecl data::ConfigDirectionByLookAtEntityFix::~ConfigDirectionByLookAtEntityFix(
        data::ConfigDirectionByLookAtEntityFix *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntityFix + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1380: range 000000000E69A5FE-000000000E69A60E
const char *__cdecl data::ConfigDirectionByLookAtEntityFix::getTypeName(
        const data::ConfigDirectionByLookAtEntityFix *const this)
{
  return "ConfigDirectionByLookAtEntityFix";
};

// Line 1381: range 000000000E69A610-000000000E69A7AC
int32_t __cdecl data::ConfigDirectionByLookAtEntityFix::getHashNum(
        const data::ConfigDirectionByLookAtEntityFix *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByLookAtEntityFix::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByLookAtEntityFix",
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

// Line 1397: range 000000000ED453B6-000000000ED453F7
void __cdecl data::ConfigDirectionByLookAtEntityFixFactory::ConfigDirectionByLookAtEntityFixFactory(
        data::ConfigDirectionByLookAtEntityFixFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByLookAtEntityFixFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByLookAtEntityFixFactory = v2;
};

// Line 1405: range 000000000ED45700-000000000ED4574D
void __cdecl data::ConfigDirectionByGroundNormal::ConfigDirectionByGroundNormal(
        data::ConfigDirectionByGroundNormal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1405: range 000000000ED45B02-000000000ED45B5A
void __cdecl data::ConfigDirectionByGroundNormal::ConfigDirectionByGroundNormal(
        data::ConfigDirectionByGroundNormal *const this,
        const data::ConfigDirectionByGroundNormal *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1411: range 000000000EDABB92-000000000EDABBBC
void __cdecl data::ConfigDirectionByGroundNormal::~ConfigDirectionByGroundNormal(
        data::ConfigDirectionByGroundNormal *const this)
{
  data::ConfigDirectionByGroundNormal::~ConfigDirectionByGroundNormal(this);
  operator delete(this, 0x100uLL);
};

// Line 1411: range 000000000EDABB44-000000000EDABB91
void __cdecl data::ConfigDirectionByGroundNormal::~ConfigDirectionByGroundNormal(
        data::ConfigDirectionByGroundNormal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1416: range 000000000E69A7AE-000000000E69A7BE
const char *__cdecl data::ConfigDirectionByGroundNormal::getTypeName(
        const data::ConfigDirectionByGroundNormal *const this)
{
  return "ConfigDirectionByGroundNormal";
};

// Line 1417: range 000000000E69A7C0-000000000E69A95C
int32_t __cdecl data::ConfigDirectionByGroundNormal::getHashNum(const data::ConfigDirectionByGroundNormal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByGroundNormal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByGroundNormal",
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

// Line 1433: range 000000000ED45E44-000000000ED45E85
void __cdecl data::ConfigDirectionByGroundNormalFactory::ConfigDirectionByGroundNormalFactory(
        data::ConfigDirectionByGroundNormalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByGroundNormalFactory = v2;
};

// Line 1441: range 000000000ED4618E-000000000ED461ED
void __cdecl data::ConfigDirectionByGlobalValue::ConfigDirectionByGlobalValue(
        data::ConfigDirectionByGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  std::string::basic_string(&this->direction_key);
};

// Line 1441: range 000000000ED465A8-000000000ED46643
void __cdecl data::ConfigDirectionByGlobalValue::ConfigDirectionByGlobalValue(
        data::ConfigDirectionByGlobalValue *const this,
        const data::ConfigDirectionByGlobalValue *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  std::string::basic_string(&this->direction_key, &a2->direction_key);
};

// Line 1448: range 000000000EDABAB8-000000000EDABB17
void __cdecl data::ConfigDirectionByGlobalValue::~ConfigDirectionByGlobalValue(
        data::ConfigDirectionByGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  std::string::~string(&this->direction_key);
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1448: range 000000000EDABB18-000000000EDABB42
void __cdecl data::ConfigDirectionByGlobalValue::~ConfigDirectionByGlobalValue(
        data::ConfigDirectionByGlobalValue *const this)
{
  data::ConfigDirectionByGlobalValue::~ConfigDirectionByGlobalValue(this);
  operator delete(this, 0x120uLL);
};

// Line 1453: range 000000000E69A95E-000000000E69A96E
const char *__cdecl data::ConfigDirectionByGlobalValue::getTypeName(
        const data::ConfigDirectionByGlobalValue *const this)
{
  return "ConfigDirectionByGlobalValue";
};

// Line 1454: range 000000000E69A970-000000000E69AB0C
int32_t __cdecl data::ConfigDirectionByGlobalValue::getHashNum(const data::ConfigDirectionByGlobalValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByGlobalValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByGlobalValue",
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

// Line 1470: range 000000000ED4692C-000000000ED4696D
void __cdecl data::ConfigDirectionByGlobalValueFactory::ConfigDirectionByGlobalValueFactory(
        data::ConfigDirectionByGlobalValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGlobalValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByGlobalValueFactory = v2;
};

// Line 1478: range 000000000ED46C76-000000000ED46CD5
void __cdecl data::ConfigDirectionByWorld::ConfigDirectionByWorld(data::ConfigDirectionByWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::Vector::Vector(&this->eular_angles);
};

// Line 1478: range 000000000ED4708A-000000000ED47156
void __cdecl data::ConfigDirectionByWorld::ConfigDirectionByWorld(
        data::ConfigDirectionByWorld *const this,
        const data::ConfigDirectionByWorld *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->eular_angles >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->eular_angles >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->eular_angles);
  v3 = *(_QWORD *)&a2->eular_angles.z;
  *(_QWORD *)&this->eular_angles.x = *(_QWORD *)&a2->eular_angles.x;
  *(_QWORD *)&this->eular_angles.z = v3;
};

// Line 1485: range 000000000EDABA8C-000000000EDABAB6
void __cdecl data::ConfigDirectionByWorld::~ConfigDirectionByWorld(data::ConfigDirectionByWorld *const this)
{
  data::ConfigDirectionByWorld::~ConfigDirectionByWorld(this);
  operator delete(this, 0x110uLL);
};

// Line 1485: range 000000000EDABA3E-000000000EDABA8B
void __cdecl data::ConfigDirectionByWorld::~ConfigDirectionByWorld(data::ConfigDirectionByWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1490: range 000000000E69AB0E-000000000E69AB1E
const char *__cdecl data::ConfigDirectionByWorld::getTypeName(const data::ConfigDirectionByWorld *const this)
{
  return "ConfigDirectionByWorld";
};

// Line 1491: range 000000000E69AB20-000000000E69ACBC
int32_t __cdecl data::ConfigDirectionByWorld::getHashNum(const data::ConfigDirectionByWorld *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByWorld::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByWorld",
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

// Line 1507: range 000000000ED47440-000000000ED47481
void __cdecl data::ConfigDirectionByWorldFactory::ConfigDirectionByWorldFactory(
        data::ConfigDirectionByWorldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByWorldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByWorldFactory = v2;
};

// Line 1515: range 000000000ED4778A-000000000ED47871
void __cdecl data::ConfigDirectionByGroundNormalRange::ConfigDirectionByGroundNormalRange(
        data::ConfigDirectionByGroundNormalRange *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormalRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range, v1);
  }
  this->range = 0;
  v3 = ((_BYTE)this + 4) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->check_offset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->check_offset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->check_offset, v3, v4);
  this->check_offset = 0;
  data::Vector::Vector(&this->offset);
};

// Line 1515: range 000000000ED47C2E-000000000ED47E03
void __cdecl data::ConfigDirectionByGroundNormalRange::ConfigDirectionByGroundNormalRange(
        data::ConfigDirectionByGroundNormalRange *const this,
        const data::ConfigDirectionByGroundNormalRange *a2)
{
  int (**v2)(...); // rdx
  uint32_t range; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool check_offset; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  const data::ConfigDirectionByGroundNormalRange *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormalRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->range);
  }
  range = a2->range;
  v4 = *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->range, a2);
  }
  this->range = range;
  v5 = ((_BYTE)v11 + 4) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v11->check_offset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v11->check_offset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v11->check_offset, v5, v6);
  check_offset = v11->check_offset;
  v8 = *(_BYTE *)(((unsigned __int64)&this->check_offset >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->check_offset, v5, v9);
  this->check_offset = check_offset;
  if ( *(_WORD *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v11->offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v11->offset);
  v10 = *(_QWORD *)&v11->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&v11->offset.x;
  *(_QWORD *)&this->offset.z = v10;
};

// Line 1524: range 000000000EDABA12-000000000EDABA3C
void __cdecl data::ConfigDirectionByGroundNormalRange::~ConfigDirectionByGroundNormalRange(
        data::ConfigDirectionByGroundNormalRange *const this)
{
  data::ConfigDirectionByGroundNormalRange::~ConfigDirectionByGroundNormalRange(this);
  operator delete(this, 0x118uLL);
};

// Line 1524: range 000000000EDAB9C4-000000000EDABA11
void __cdecl data::ConfigDirectionByGroundNormalRange::~ConfigDirectionByGroundNormalRange(
        data::ConfigDirectionByGroundNormalRange *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormalRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1529: range 000000000E69ACBE-000000000E69ACCE
const char *__cdecl data::ConfigDirectionByGroundNormalRange::getTypeName(
        const data::ConfigDirectionByGroundNormalRange *const this)
{
  return "ConfigDirectionByGroundNormalRange";
};

// Line 1530: range 000000000E69ACD0-000000000E69AE6C
int32_t __cdecl data::ConfigDirectionByGroundNormalRange::getHashNum(
        const data::ConfigDirectionByGroundNormalRange *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByGroundNormalRange::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByGroundNormalRange",
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

// Line 1546: range 000000000ED480EC-000000000ED4812D
void __cdecl data::ConfigDirectionByGroundNormalRangeFactory::ConfigDirectionByGroundNormalRangeFactory(
        data::ConfigDirectionByGroundNormalRangeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByGroundNormalRangeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByGroundNormalRangeFactory = v2;
};

// Line 1554: range 000000000ED48436-000000000ED48483
void __cdecl data::ConfigDirectionByReflection::ConfigDirectionByReflection(
        data::ConfigDirectionByReflection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByReflection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1554: range 000000000ED48838-000000000ED48890
void __cdecl data::ConfigDirectionByReflection::ConfigDirectionByReflection(
        data::ConfigDirectionByReflection *const this,
        const data::ConfigDirectionByReflection *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByReflection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
};

// Line 1560: range 000000000EDAB94A-000000000EDAB997
void __cdecl data::ConfigDirectionByReflection::~ConfigDirectionByReflection(
        data::ConfigDirectionByReflection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByReflection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1560: range 000000000EDAB998-000000000EDAB9C2
void __cdecl data::ConfigDirectionByReflection::~ConfigDirectionByReflection(
        data::ConfigDirectionByReflection *const this)
{
  data::ConfigDirectionByReflection::~ConfigDirectionByReflection(this);
  operator delete(this, 0x100uLL);
};

// Line 1565: range 000000000E69AE6E-000000000E69AE7E
const char *__cdecl data::ConfigDirectionByReflection::getTypeName(const data::ConfigDirectionByReflection *const this)
{
  return "ConfigDirectionByReflection";
};

// Line 1566: range 000000000E69AE80-000000000E69B01C
int32_t __cdecl data::ConfigDirectionByReflection::getHashNum(const data::ConfigDirectionByReflection *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByReflection::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByReflection",
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

// Line 1582: range 000000000ED48B7A-000000000ED48BBB
void __cdecl data::ConfigDirectionByReflectionFactory::ConfigDirectionByReflectionFactory(
        data::ConfigDirectionByReflectionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByReflectionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByReflectionFactory = v2;
};

// Line 1590: range 000000000ED48EC4-000000000ED48F56
void __cdecl data::ConfigDirectionByRefraction::ConfigDirectionByRefraction(
        data::ConfigDirectionByRefraction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornDirectionType::ConfigBornDirectionType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByRefraction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_angle_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_angle_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_angle_range, v1);
  }
  this->valid_angle_range = 0.0;
};

// Line 1590: range 000000000ED49306-000000000ED493E0
void __cdecl data::ConfigDirectionByRefraction::ConfigDirectionByRefraction(
        data::ConfigDirectionByRefraction *const this,
        const data::ConfigDirectionByRefraction *a2)
{
  int (**v2)(...); // rdx
  float valid_angle_range; // xmm0_4

  data::ConfigBornDirectionType::ConfigBornDirectionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByRefraction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornDirectionType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->valid_angle_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->valid_angle_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->valid_angle_range);
  }
  valid_angle_range = a2->valid_angle_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_angle_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_angle_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_angle_range, a2);
  }
  this->valid_angle_range = valid_angle_range;
};

// Line 1597: range 000000000EDAB8D0-000000000EDAB91D
void __cdecl data::ConfigDirectionByRefraction::~ConfigDirectionByRefraction(
        data::ConfigDirectionByRefraction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByRefraction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornDirectionType = v2;
  data::ConfigBornDirectionType::~ConfigBornDirectionType(this);
};

// Line 1597: range 000000000EDAB91E-000000000EDAB948
void __cdecl data::ConfigDirectionByRefraction::~ConfigDirectionByRefraction(
        data::ConfigDirectionByRefraction *const this)
{
  data::ConfigDirectionByRefraction::~ConfigDirectionByRefraction(this);
  operator delete(this, 0x108uLL);
};

// Line 1602: range 000000000E69B01E-000000000E69B02E
const char *__cdecl data::ConfigDirectionByRefraction::getTypeName(const data::ConfigDirectionByRefraction *const this)
{
  return "ConfigDirectionByRefraction";
};

// Line 1603: range 000000000E69B030-000000000E69B1CC
int32_t __cdecl data::ConfigDirectionByRefraction::getHashNum(const data::ConfigDirectionByRefraction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectionByRefraction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectionByRefraction",
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

// Line 1619: range 000000000ED496CA-000000000ED4970B
void __cdecl data::ConfigDirectionByRefractionFactory::ConfigDirectionByRefractionFactory(
        data::ConfigDirectionByRefractionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectionByRefractionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectionByRefractionFactory = v2;
};

// Line 1627: range 000000000ECD6DCA-000000000ECD6E56
void __cdecl data::BornRandom::BornRandom(data::BornRandom *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::BornRandom>::enable_shared_from_this(&this->std::enable_shared_from_this<data::BornRandom>);
  v2 = (int (**)(...))(&`vtable for'data::BornRandom + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1627: range 000000000ED49AC8-000000000ED49B9E
void __cdecl data::BornRandom::BornRandom(data::BornRandom *const this, const data::BornRandom *a2)
{
  std::enable_shared_from_this<data::BornRandom> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::BornRandom>;
  std::enable_shared_from_this<data::BornRandom>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::BornRandom>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::BornRandom + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_BornRandom = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1634: range 000000000ED49DE8-000000000ED49E39
void __cdecl data::BornRandom::~BornRandom(data::BornRandom *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BornRandom + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  std::enable_shared_from_this<data::BornRandom>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::BornRandom>);
};

// Line 1634: range 000000000ED49E3A-000000000ED49E64
void __cdecl data::BornRandom::~BornRandom(data::BornRandom *const this)
{
  data::BornRandom::~BornRandom(this);
  operator delete(this, 0x20uLL);
};

// Line 1639: range 000000000E69B1CE-000000000E69B1DE
const char *__cdecl data::BornRandom::getTypeName(const data::BornRandom *const this)
{
  return "BornRandom";
};

// Line 1640: range 000000000E69B1E0-000000000E69B37C
int32_t __cdecl data::BornRandom::getHashNum(const data::BornRandom *const this)
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
  *(_QWORD *)(v1 + 16) = data::BornRandom::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BornRandom",
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

// Line 1659: range 000000000ED49E66-000000000ED49ED3
void __cdecl data::BornRandomFromCenter::BornRandomFromCenter(data::BornRandomFromCenter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::BornRandom::BornRandom(this);
  v2 = (int (**)(...))(&`vtable for'data::BornRandomFromCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  data::DynamicFloat::DynamicFloat(&this->min_random_range);
  data::DynamicFloat::DynamicFloat(&this->max_random_range);
};

// Line 1659: range 000000000ED4A288-000000000ED4A34E
void __cdecl data::BornRandomFromCenter::BornRandomFromCenter(
        data::BornRandomFromCenter *const this,
        const data::BornRandomFromCenter *a2)
{
  int (**v2)(...); // rdx

  data::BornRandom::BornRandom(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BornRandomFromCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BornRandom = v2;
  data::DynamicFloat::DynamicFloat(&this->min_random_range, &a2->min_random_range);
  data::DynamicFloat::DynamicFloat(&this->max_random_range, &a2->max_random_range);
};

// Line 1667: range 000000000EDAB836-000000000EDAB8A3
void __cdecl data::BornRandomFromCenter::~BornRandomFromCenter(data::BornRandomFromCenter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BornRandomFromCenter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  data::DynamicFloat::~DynamicFloat(&this->max_random_range);
  data::DynamicFloat::~DynamicFloat(&this->min_random_range);
  data::BornRandom::~BornRandom(this);
};

// Line 1667: range 000000000EDAB8A4-000000000EDAB8CE
void __cdecl data::BornRandomFromCenter::~BornRandomFromCenter(data::BornRandomFromCenter *const this)
{
  data::BornRandomFromCenter::~BornRandomFromCenter(this);
  operator delete(this, 0x60uLL);
};

// Line 1672: range 000000000E69B37E-000000000E69B38E
const char *__cdecl data::BornRandomFromCenter::getTypeName(const data::BornRandomFromCenter *const this)
{
  return "BornRandomFromCenter";
};

// Line 1673: range 000000000E69B390-000000000E69B52C
int32_t __cdecl data::BornRandomFromCenter::getHashNum(const data::BornRandomFromCenter *const this)
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
  *(_QWORD *)(v1 + 16) = data::BornRandomFromCenter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BornRandomFromCenter",
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

// Line 1689: range 000000000ED4A638-000000000ED4A679
void __cdecl data::BornRandomFromCenterFactory::BornRandomFromCenterFactory(
        data::BornRandomFromCenterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BornRandomFromCenterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandomFromCenterFactory = v2;
};

// Line 1697: range 000000000ED4A982-000000000ED4A9DF
void __cdecl data::BornRandomInShape::BornRandomInShape(data::BornRandomInShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::BornRandom::BornRandom(this);
  v2 = (int (**)(...))(&`vtable for'data::BornRandomInShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  std::string::basic_string(&this->shape_name);
};

// Line 1697: range 000000000ED4ADE4-000000000ED4AE7A
void __cdecl data::BornRandomInShape::BornRandomInShape(
        data::BornRandomInShape *const this,
        const data::BornRandomInShape *a2)
{
  int (**v2)(...); // rdx

  data::BornRandom::BornRandom(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BornRandomInShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BornRandom = v2;
  std::string::basic_string(&this->shape_name, &a2->shape_name);
};

// Line 1704: range 000000000EDAB80A-000000000EDAB834
void __cdecl data::BornRandomInShape::~BornRandomInShape(data::BornRandomInShape *const this)
{
  data::BornRandomInShape::~BornRandomInShape(this);
  operator delete(this, 0x40uLL);
};

// Line 1704: range 000000000EDAB7AC-000000000EDAB809
void __cdecl data::BornRandomInShape::~BornRandomInShape(data::BornRandomInShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BornRandomInShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandom = v2;
  std::string::~string(&this->shape_name);
  data::BornRandom::~BornRandom(this);
};

// Line 1709: range 000000000E69B52E-000000000E69B53E
const char *__cdecl data::BornRandomInShape::getTypeName(const data::BornRandomInShape *const this)
{
  return "BornRandomInShape";
};

// Line 1710: range 000000000E69B540-000000000E69B6DC
int32_t __cdecl data::BornRandomInShape::getHashNum(const data::BornRandomInShape *const this)
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
  *(_QWORD *)(v1 + 16) = data::BornRandomInShape::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BornRandomInShape",
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

// Line 1726: range 000000000ED4B164-000000000ED4B1A5
void __cdecl data::BornRandomInShapeFactory::BornRandomInShapeFactory(data::BornRandomInShapeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BornRandomInShapeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BornRandomInShapeFactory = v2;
};

// Line 1734: range 000000000ECD7D56-000000000ECD8013
void __cdecl data::ConfigBornType::ConfigBornType(data::ConfigBornType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  std::enable_shared_from_this<data::ConfigBornType>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBornType>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::DynamicFloatVector::DynamicFloatVector(&this->offset);
  if ( *(_WORD *)(((unsigned __int64)&this->born_random >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::BornRandom>();
  if ( *(char *)(((unsigned __int64)&this->on_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->on_ground, v1, &this->on_ground);
  this->on_ground = 0;
  v3 = ((_BYTE)this - 111) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->on_ground_ignore_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->on_ground_ignore_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->on_ground_ignore_water, v3, v4);
  this->on_ground_ignore_water = 0;
  v5 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->on_ground_raycast_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->on_ground_raycast_up_dist >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->on_ground_raycast_up_dist, v5);
  }
  this->on_ground_raycast_up_dist = 2.0;
  if ( *(_WORD *)(((unsigned __int64)&this->direction >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBornDirectionType>();
  if ( *(char *)(((unsigned __int64)&this->along_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->along_ground, v5, &this->along_ground);
  this->along_ground = 0;
  v6 = ((_BYTE)this - 87) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->use_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->use_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_rotation, v6, v7);
  this->use_rotation = 0;
  v8 = ((_BYTE)this - 86) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v8, v9);
  this->is_json_loaded = 0;
};

// Line 1734: range 000000000ED4B606-000000000ED4BA13
void __cdecl data::ConfigBornType::ConfigBornType(data::ConfigBornType *const this, const data::ConfigBornType *a2)
{
  std::enable_shared_from_this<data::ConfigBornType> *v2; // rsi
  int (**v3)(...); // rdx
  data::BornRandomPtr *p_born_random; // rsi
  bool on_ground; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool on_ground_ignore_water; // cl
  char v10; // dl
  __int64 v11; // rdx
  float on_ground_raycast_up_dist; // xmm0_4
  data::ConfigBornDirectionTypePtr *p_direction; // rsi
  bool along_ground; // cl
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool use_rotation; // cl
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool is_json_loaded; // cl
  char v24; // dl
  __int64 v25; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBornType>;
  std::enable_shared_from_this<data::ConfigBornType>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBornType>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBornType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBornType = v3;
  data::DynamicFloatVector::DynamicFloatVector(&this->offset, &a2->offset);
  p_born_random = &a2->born_random;
  std::shared_ptr<data::BornRandom>::shared_ptr(&this->born_random, &a2->born_random);
  if ( *(char *)(((unsigned __int64)&a2->on_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->on_ground, p_born_random, &a2->on_ground);
  on_ground = a2->on_ground;
  v6 = *(_BYTE *)(((unsigned __int64)&this->on_ground >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_born_random) = v6 != 0;
    __asan_report_store1(&this->on_ground, p_born_random, &this->on_ground);
  }
  this->on_ground = on_ground;
  v7 = ((_BYTE)a2 - 111) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->on_ground_ignore_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->on_ground_ignore_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->on_ground_ignore_water, v7, v8);
  on_ground_ignore_water = a2->on_ground_ignore_water;
  v10 = *(_BYTE *)(((unsigned __int64)&this->on_ground_ignore_water >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->on_ground_ignore_water, v7, v11);
  this->on_ground_ignore_water = on_ground_ignore_water;
  if ( *(_BYTE *)(((unsigned __int64)&a2->on_ground_raycast_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->on_ground_raycast_up_dist >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->on_ground_raycast_up_dist);
  }
  on_ground_raycast_up_dist = a2->on_ground_raycast_up_dist;
  if ( *(_BYTE *)(((unsigned __int64)&this->on_ground_raycast_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->on_ground_raycast_up_dist >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->on_ground_raycast_up_dist, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->on_ground_raycast_up_dist = on_ground_raycast_up_dist;
  p_direction = &a2->direction;
  std::shared_ptr<data::ConfigBornDirectionType>::shared_ptr(&this->direction, &a2->direction);
  if ( *(char *)(((unsigned __int64)&a2->along_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->along_ground, p_direction, &a2->along_ground);
  along_ground = a2->along_ground;
  v15 = *(_BYTE *)(((unsigned __int64)&this->along_ground >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_direction) = v15 != 0;
    __asan_report_store1(&this->along_ground, p_direction, &this->along_ground);
  }
  this->along_ground = along_ground;
  v16 = ((_BYTE)a2 - 87) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&a2->use_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&a2->use_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&a2->use_rotation, v16, v17);
  use_rotation = a2->use_rotation;
  v19 = *(_BYTE *)(((unsigned __int64)&this->use_rotation >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->use_rotation, v16, v20);
  this->use_rotation = use_rotation;
  v21 = ((_BYTE)a2 - 86) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&a2->is_json_loaded, v21, v22);
  is_json_loaded = a2->is_json_loaded;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this - 86) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_json_loaded, v21, v25);
  this->is_json_loaded = is_json_loaded;
};

// Line 1749: range 000000000ED4BCFC-000000000ED4BD7F
void __cdecl data::ConfigBornType::~ConfigBornType(data::ConfigBornType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::shared_ptr<data::ConfigBornDirectionType>::~shared_ptr(&this->direction);
  std::shared_ptr<data::BornRandom>::~shared_ptr(&this->born_random);
  data::DynamicFloatVector::~DynamicFloatVector(&this->offset);
  std::enable_shared_from_this<data::ConfigBornType>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBornType>);
};

// Line 1749: range 000000000ED4BD80-000000000ED4BDAA
void __cdecl data::ConfigBornType::~ConfigBornType(data::ConfigBornType *const this)
{
  data::ConfigBornType::~ConfigBornType(this);
  operator delete(this, 0xB0uLL);
};

// Line 1754: range 000000000E69B756-000000000E69B766
const char *__cdecl data::ConfigBornType::getTypeName(const data::ConfigBornType *const this)
{
  return "ConfigBornType";
};

// Line 1755: range 000000000E69B768-000000000E69B904
int32_t __cdecl data::ConfigBornType::getHashNum(const data::ConfigBornType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornType",
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

// Line 1774: range 000000000ED4BDAC-000000000ED4BDF9
void __cdecl data::ConfigBornByTarget::ConfigBornByTarget(data::ConfigBornByTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 1774: range 000000000ED4C242-000000000ED4C29A
void __cdecl data::ConfigBornByTarget::ConfigBornByTarget(
        data::ConfigBornByTarget *const this,
        const data::ConfigBornByTarget *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 1780: range 000000000EDAB732-000000000EDAB77F
void __cdecl data::ConfigBornByTarget::~ConfigBornByTarget(data::ConfigBornByTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 1780: range 000000000EDAB780-000000000EDAB7AA
void __cdecl data::ConfigBornByTarget::~ConfigBornByTarget(data::ConfigBornByTarget *const this)
{
  data::ConfigBornByTarget::~ConfigBornByTarget(this);
  operator delete(this, 0xB0uLL);
};

// Line 1785: range 000000000E69B906-000000000E69B916
const char *__cdecl data::ConfigBornByTarget::getTypeName(const data::ConfigBornByTarget *const this)
{
  return "ConfigBornByTarget";
};

// Line 1786: range 000000000E69B918-000000000E69BAB4
int32_t __cdecl data::ConfigBornByTarget::getHashNum(const data::ConfigBornByTarget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByTarget",
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

// Line 1802: range 000000000ED4C584-000000000ED4C5C5
void __cdecl data::ConfigBornByTargetFactory::ConfigBornByTargetFactory(data::ConfigBornByTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByTargetFactory = v2;
};

// Line 1810: range 000000000ED4C8CE-000000000ED4C91B
void __cdecl data::ConfigBornBySelf::ConfigBornBySelf(data::ConfigBornBySelf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 1810: range 000000000ED4CD64-000000000ED4CDBC
void __cdecl data::ConfigBornBySelf::ConfigBornBySelf(
        data::ConfigBornBySelf *const this,
        const data::ConfigBornBySelf *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 1816: range 000000000EDAB706-000000000EDAB730
void __cdecl data::ConfigBornBySelf::~ConfigBornBySelf(data::ConfigBornBySelf *const this)
{
  data::ConfigBornBySelf::~ConfigBornBySelf(this);
  operator delete(this, 0xB0uLL);
};

// Line 1816: range 000000000EDAB6B8-000000000EDAB705
void __cdecl data::ConfigBornBySelf::~ConfigBornBySelf(data::ConfigBornBySelf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 1821: range 000000000E69BAB6-000000000E69BAC6
const char *__cdecl data::ConfigBornBySelf::getTypeName(const data::ConfigBornBySelf *const this)
{
  return "ConfigBornBySelf";
};

// Line 1822: range 000000000E69BAC8-000000000E69BC64
int32_t __cdecl data::ConfigBornBySelf::getHashNum(const data::ConfigBornBySelf *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornBySelf::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornBySelf",
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

// Line 1838: range 000000000ED4D0A6-000000000ED4D0E7
void __cdecl data::ConfigBornBySelfFactory::ConfigBornBySelfFactory(data::ConfigBornBySelfFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelfFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornBySelfFactory = v2;
};

// Line 1846: range 000000000ED4D3F0-000000000ED4D43D
void __cdecl data::ConfigBornBySelfOwner::ConfigBornBySelfOwner(data::ConfigBornBySelfOwner *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelfOwner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 1846: range 000000000ED4D886-000000000ED4D8DE
void __cdecl data::ConfigBornBySelfOwner::ConfigBornBySelfOwner(
        data::ConfigBornBySelfOwner *const this,
        const data::ConfigBornBySelfOwner *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelfOwner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 1852: range 000000000EDAB63E-000000000EDAB68B
void __cdecl data::ConfigBornBySelfOwner::~ConfigBornBySelfOwner(data::ConfigBornBySelfOwner *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelfOwner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 1852: range 000000000EDAB68C-000000000EDAB6B6
void __cdecl data::ConfigBornBySelfOwner::~ConfigBornBySelfOwner(data::ConfigBornBySelfOwner *const this)
{
  data::ConfigBornBySelfOwner::~ConfigBornBySelfOwner(this);
  operator delete(this, 0xB0uLL);
};

// Line 1857: range 000000000E69BC66-000000000E69BC76
const char *__cdecl data::ConfigBornBySelfOwner::getTypeName(const data::ConfigBornBySelfOwner *const this)
{
  return "ConfigBornBySelfOwner";
};

// Line 1858: range 000000000E69BC78-000000000E69BE14
int32_t __cdecl data::ConfigBornBySelfOwner::getHashNum(const data::ConfigBornBySelfOwner *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornBySelfOwner::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornBySelfOwner",
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

// Line 1874: range 000000000ED4DBC8-000000000ED4DC09
void __cdecl data::ConfigBornBySelfOwnerFactory::ConfigBornBySelfOwnerFactory(
        data::ConfigBornBySelfOwnerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelfOwnerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornBySelfOwnerFactory = v2;
};

// Line 1882: range 000000000ED4DF12-000000000ED4DFB4
void __cdecl data::ConfigBornByAttachPoint::ConfigBornByAttachPoint(data::ConfigBornByAttachPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::string::basic_string(&this->attach_point_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attach_point_target_type, v1);
  }
  this->attach_point_target_type = Target_0;
};

// Line 1882: range 000000000ED4E3F8-000000000ED4E512
void __cdecl data::ConfigBornByAttachPoint::ConfigBornByAttachPoint(
        data::ConfigBornByAttachPoint *const this,
        const data::ConfigBornByAttachPoint *a2)
{
  int (**v2)(...); // rdx
  std::string *p_attach_point_name; // rsi
  data::AttachPointTargetType attach_point_target_type; // ecx
  char v5; // al

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  p_attach_point_name = &a2->attach_point_name;
  std::string::basic_string(&this->attach_point_name, &a2->attach_point_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->attach_point_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attach_point_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attach_point_target_type);
  }
  attach_point_target_type = a2->attach_point_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->attach_point_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_attach_point_name) = v5 != 0;
    __asan_report_store4(&this->attach_point_target_type, p_attach_point_name);
  }
  this->attach_point_target_type = attach_point_target_type;
};

// Line 1890: range 000000000EDAB5B2-000000000EDAB611
void __cdecl data::ConfigBornByAttachPoint::~ConfigBornByAttachPoint(data::ConfigBornByAttachPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByAttachPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::string::~string(&this->attach_point_name);
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 1890: range 000000000EDAB612-000000000EDAB63C
void __cdecl data::ConfigBornByAttachPoint::~ConfigBornByAttachPoint(data::ConfigBornByAttachPoint *const this)
{
  data::ConfigBornByAttachPoint::~ConfigBornByAttachPoint(this);
  operator delete(this, 0xD8uLL);
};

// Line 1895: range 000000000E69BE16-000000000E69BE26
const char *__cdecl data::ConfigBornByAttachPoint::getTypeName(const data::ConfigBornByAttachPoint *const this)
{
  return "ConfigBornByAttachPoint";
};

// Line 1896: range 000000000E69BE28-000000000E69BFC4
int32_t __cdecl data::ConfigBornByAttachPoint::getHashNum(const data::ConfigBornByAttachPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByAttachPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByAttachPoint",
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

// Line 1912: range 000000000ED4E7FC-000000000ED4E83D
void __cdecl data::ConfigBornByAttachPointFactory::ConfigBornByAttachPointFactory(
        data::ConfigBornByAttachPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByAttachPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByAttachPointFactory = v2;
};

// Line 1920: range 000000000ED4EB46-000000000ED4ECC7
void __cdecl data::ConfigBornByStormLightning::ConfigBornByStormLightning(data::ConfigBornByStormLightning *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByStormLightning + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_height_ratio, v3);
  }
  this->hit_height_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_range, v3);
  }
  this->select_range = 100.0;
  v4 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_offset_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_offset_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_offset_len, v4);
  }
  this->max_offset_len = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lightning_hit_or_not_ratio, v4);
  }
  this->lightning_hit_or_not_ratio = 0.94999999;
};

// Line 1920: range 000000000ED4F116-000000000ED4F396
void __cdecl data::ConfigBornByStormLightning::ConfigBornByStormLightning(
        data::ConfigBornByStormLightning *const this,
        const data::ConfigBornByStormLightning *a2)
{
  int (**v2)(...); // rdx
  float hit_height_ratio; // xmm0_4
  __int64 v4; // rsi
  float select_range; // xmm0_4
  float max_offset_len; // xmm0_4
  __int64 v7; // rsi
  float lightning_hit_or_not_ratio; // xmm0_4

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByStormLightning + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hit_height_ratio);
  }
  hit_height_ratio = a2->hit_height_ratio;
  v4 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_height_ratio, v4);
  }
  this->hit_height_ratio = hit_height_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->select_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->select_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->select_range);
  }
  select_range = a2->select_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_range, v4);
  }
  this->select_range = select_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_offset_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_offset_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_offset_len);
  }
  max_offset_len = a2->max_offset_len;
  v7 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_offset_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_offset_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_offset_len, v7);
  }
  this->max_offset_len = max_offset_len;
  if ( *(_BYTE *)(((unsigned __int64)&a2->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lightning_hit_or_not_ratio);
  }
  lightning_hit_or_not_ratio = a2->lightning_hit_or_not_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lightning_hit_or_not_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lightning_hit_or_not_ratio, v7);
  }
  this->lightning_hit_or_not_ratio = lightning_hit_or_not_ratio;
};

// Line 1930: range 000000000EDAB586-000000000EDAB5B0
void __cdecl data::ConfigBornByStormLightning::~ConfigBornByStormLightning(
        data::ConfigBornByStormLightning *const this)
{
  data::ConfigBornByStormLightning::~ConfigBornByStormLightning(this);
  operator delete(this, 0xC0uLL);
};

// Line 1930: range 000000000EDAB538-000000000EDAB585
void __cdecl data::ConfigBornByStormLightning::~ConfigBornByStormLightning(
        data::ConfigBornByStormLightning *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByStormLightning + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 1935: range 000000000E69BFC6-000000000E69BFD6
const char *__cdecl data::ConfigBornByStormLightning::getTypeName(const data::ConfigBornByStormLightning *const this)
{
  return "ConfigBornByStormLightning";
};

// Line 1936: range 000000000E69BFD8-000000000E69C174
int32_t __cdecl data::ConfigBornByStormLightning::getHashNum(const data::ConfigBornByStormLightning *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByStormLightning::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByStormLightning",
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

// Line 1952: range 000000000ED4F680-000000000ED4F6C1
void __cdecl data::ConfigBornByStormLightningFactory::ConfigBornByStormLightningFactory(
        data::ConfigBornByStormLightningFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByStormLightningFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByStormLightningFactory = v2;
};

// Line 1960: range 000000000ED4F9CA-000000000ED4FA3B
void __cdecl data::ConfigBornByWorld::ConfigBornByWorld(data::ConfigBornByWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::Vector::Vector(&this->world_pos);
  data::Vector::Vector(&this->world_fwd);
};

// Line 1960: range 000000000ED4FE84-000000000ED500E8
void __cdecl data::ConfigBornByWorld::ConfigBornByWorld(
        data::ConfigBornByWorld *const this,
        const data::ConfigBornByWorld *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->world_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->world_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->world_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->world_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->world_pos, 16LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->world_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->world_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->world_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->world_pos.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->world_pos, 16LL);
  }
  v3 = *(_QWORD *)&a2->world_pos.z;
  *(_QWORD *)&this->world_pos.x = *(_QWORD *)&a2->world_pos.x;
  *(_QWORD *)&this->world_pos.z = v3;
  if ( (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->world_fwd >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->world_fwd >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->world_fwd.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->world_fwd.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->world_fwd, 16LL);
  }
  if ( (((unsigned __int8)a2 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->world_fwd >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->world_fwd >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->world_fwd.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->world_fwd.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->world_fwd, 16LL);
  }
  v4 = *(_QWORD *)&a2->world_fwd.z;
  *(_QWORD *)&this->world_fwd.x = *(_QWORD *)&a2->world_fwd.x;
  *(_QWORD *)&this->world_fwd.z = v4;
};

// Line 1968: range 000000000EDAB50C-000000000EDAB536
void __cdecl data::ConfigBornByWorld::~ConfigBornByWorld(data::ConfigBornByWorld *const this)
{
  data::ConfigBornByWorld::~ConfigBornByWorld(this);
  operator delete(this, 0xD0uLL);
};

// Line 1968: range 000000000EDAB4BE-000000000EDAB50B
void __cdecl data::ConfigBornByWorld::~ConfigBornByWorld(data::ConfigBornByWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 1973: range 000000000E69C176-000000000E69C186
const char *__cdecl data::ConfigBornByWorld::getTypeName(const data::ConfigBornByWorld *const this)
{
  return "ConfigBornByWorld";
};

// Line 1974: range 000000000E69C188-000000000E69C324
int32_t __cdecl data::ConfigBornByWorld::getHashNum(const data::ConfigBornByWorld *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByWorld::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByWorld",
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

// Line 1990: range 000000000ED503D2-000000000ED50413
void __cdecl data::ConfigBornByWorldFactory::ConfigBornByWorldFactory(data::ConfigBornByWorldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByWorldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByWorldFactory = v2;
};

// Line 1998: range 000000000ED5071C-000000000ED507CD
void __cdecl data::ConfigBornByGlobalValue::ConfigBornByGlobalValue(data::ConfigBornByGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::string::basic_string(&this->position_key);
  std::string::basic_string(&this->direction_key);
  if ( *(char *)(((unsigned __int64)&this->use_global_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_global_up, v1, &this->use_global_up);
  this->use_global_up = 0;
};

// Line 1998: range 000000000ED50C16-000000000ED50D68
void __cdecl data::ConfigBornByGlobalValue::ConfigBornByGlobalValue(
        data::ConfigBornByGlobalValue *const this,
        const data::ConfigBornByGlobalValue *a2)
{
  int (**v2)(...); // rdx
  std::string *p_direction_key; // rsi
  bool use_global_up; // cl
  char v5; // al

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  std::string::basic_string(&this->position_key, &a2->position_key);
  p_direction_key = &a2->direction_key;
  std::string::basic_string(&this->direction_key, &a2->direction_key);
  if ( *(char *)(((unsigned __int64)&a2->use_global_up >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_global_up, p_direction_key, &a2->use_global_up);
  use_global_up = a2->use_global_up;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_global_up >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_direction_key) = v5 != 0;
    __asan_report_store1(&this->use_global_up, p_direction_key, &this->use_global_up);
  }
  this->use_global_up = use_global_up;
};

// Line 2007: range 000000000EDAB492-000000000EDAB4BC
void __cdecl data::ConfigBornByGlobalValue::~ConfigBornByGlobalValue(data::ConfigBornByGlobalValue *const this)
{
  data::ConfigBornByGlobalValue::~ConfigBornByGlobalValue(this);
  operator delete(this, 0xF8uLL);
};

// Line 2007: range 000000000EDAB420-000000000EDAB491
void __cdecl data::ConfigBornByGlobalValue::~ConfigBornByGlobalValue(data::ConfigBornByGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::string::~string(&this->direction_key);
  std::string::~string(&this->position_key);
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2012: range 000000000E69C326-000000000E69C336
const char *__cdecl data::ConfigBornByGlobalValue::getTypeName(const data::ConfigBornByGlobalValue *const this)
{
  return "ConfigBornByGlobalValue";
};

// Line 2013: range 000000000E69C338-000000000E69C4D4
int32_t __cdecl data::ConfigBornByGlobalValue::getHashNum(const data::ConfigBornByGlobalValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByGlobalValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByGlobalValue",
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

// Line 2029: range 000000000ED51052-000000000ED51093
void __cdecl data::ConfigBornByGlobalValueFactory::ConfigBornByGlobalValueFactory(
        data::ConfigBornByGlobalValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByGlobalValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByGlobalValueFactory = v2;
};

// Line 2037: range 000000000ED5139C-000000000ED5142E
void __cdecl data::ConfigBornByCollisionPoint::ConfigBornByCollisionPoint(data::ConfigBornByCollisionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)this - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_sync_value, v3, v4);
  this->use_sync_value = 0;
};

// Line 2037: range 000000000ED51878-000000000ED5195A
void __cdecl data::ConfigBornByCollisionPoint::ConfigBornByCollisionPoint(
        data::ConfigBornByCollisionPoint *const this,
        const data::ConfigBornByCollisionPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_sync_value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)a2 - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_sync_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_sync_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_sync_value, v3, v4);
  use_sync_value = a2->use_sync_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 85) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_sync_value, v3, v7);
  this->use_sync_value = use_sync_value;
};

// Line 2044: range 000000000EDAB3F4-000000000EDAB41E
void __cdecl data::ConfigBornByCollisionPoint::~ConfigBornByCollisionPoint(
        data::ConfigBornByCollisionPoint *const this)
{
  data::ConfigBornByCollisionPoint::~ConfigBornByCollisionPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2044: range 000000000EDAB3A6-000000000EDAB3F3
void __cdecl data::ConfigBornByCollisionPoint::~ConfigBornByCollisionPoint(
        data::ConfigBornByCollisionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 2049: range 000000000E69C4D6-000000000E69C4E6
const char *__cdecl data::ConfigBornByCollisionPoint::getTypeName(const data::ConfigBornByCollisionPoint *const this)
{
  return "ConfigBornByCollisionPoint";
};

// Line 2050: range 000000000E69C4E8-000000000E69C684
int32_t __cdecl data::ConfigBornByCollisionPoint::getHashNum(const data::ConfigBornByCollisionPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByCollisionPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByCollisionPoint",
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

// Line 2066: range 000000000ED51C44-000000000ED51C85
void __cdecl data::ConfigBornByCollisionPointFactory::ConfigBornByCollisionPointFactory(
        data::ConfigBornByCollisionPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByCollisionPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByCollisionPointFactory = v2;
};

// Line 2074: range 000000000ED51F8E-000000000ED52020
void __cdecl data::ConfigBornByTargetCollisionPoint::ConfigBornByTargetCollisionPoint(
        data::ConfigBornByTargetCollisionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)this - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_sync_value, v3, v4);
  this->use_sync_value = 0;
};

// Line 2074: range 000000000ED5246A-000000000ED5254C
void __cdecl data::ConfigBornByTargetCollisionPoint::ConfigBornByTargetCollisionPoint(
        data::ConfigBornByTargetCollisionPoint *const this,
        const data::ConfigBornByTargetCollisionPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_sync_value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)a2 - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_sync_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_sync_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_sync_value, v3, v4);
  use_sync_value = a2->use_sync_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_sync_value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 85) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_sync_value, v3, v7);
  this->use_sync_value = use_sync_value;
};

// Line 2081: range 000000000EDAB37A-000000000EDAB3A4
void __cdecl data::ConfigBornByTargetCollisionPoint::~ConfigBornByTargetCollisionPoint(
        data::ConfigBornByTargetCollisionPoint *const this)
{
  data::ConfigBornByTargetCollisionPoint::~ConfigBornByTargetCollisionPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2081: range 000000000EDAB32C-000000000EDAB379
void __cdecl data::ConfigBornByTargetCollisionPoint::~ConfigBornByTargetCollisionPoint(
        data::ConfigBornByTargetCollisionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetCollisionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 2086: range 000000000E69C686-000000000E69C696
const char *__cdecl data::ConfigBornByTargetCollisionPoint::getTypeName(
        const data::ConfigBornByTargetCollisionPoint *const this)
{
  return "ConfigBornByTargetCollisionPoint";
};

// Line 2087: range 000000000E69C698-000000000E69C834
int32_t __cdecl data::ConfigBornByTargetCollisionPoint::getHashNum(
        const data::ConfigBornByTargetCollisionPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByTargetCollisionPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByTargetCollisionPoint",
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

// Line 2103: range 000000000ED52836-000000000ED52877
void __cdecl data::ConfigBornByTargetCollisionPointFactory::ConfigBornByTargetCollisionPointFactory(
        data::ConfigBornByTargetCollisionPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetCollisionPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByTargetCollisionPointFactory = v2;
};

// Line 2111: range 000000000ED52B80-000000000ED52BCD
void __cdecl data::ConfigBornByRushToPoint::ConfigBornByRushToPoint(data::ConfigBornByRushToPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByRushToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 2111: range 000000000ED53016-000000000ED5306E
void __cdecl data::ConfigBornByRushToPoint::ConfigBornByRushToPoint(
        data::ConfigBornByRushToPoint *const this,
        const data::ConfigBornByRushToPoint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByRushToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 2117: range 000000000EDAB300-000000000EDAB32A
void __cdecl data::ConfigBornByRushToPoint::~ConfigBornByRushToPoint(data::ConfigBornByRushToPoint *const this)
{
  data::ConfigBornByRushToPoint::~ConfigBornByRushToPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2117: range 000000000EDAB2B2-000000000EDAB2FF
void __cdecl data::ConfigBornByRushToPoint::~ConfigBornByRushToPoint(data::ConfigBornByRushToPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByRushToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2122: range 000000000E69C836-000000000E69C846
const char *__cdecl data::ConfigBornByRushToPoint::getTypeName(const data::ConfigBornByRushToPoint *const this)
{
  return "ConfigBornByRushToPoint";
};

// Line 2123: range 000000000E69C848-000000000E69C9E4
int32_t __cdecl data::ConfigBornByRushToPoint::getHashNum(const data::ConfigBornByRushToPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByRushToPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByRushToPoint",
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

// Line 2139: range 000000000ED53358-000000000ED53399
void __cdecl data::ConfigBornByRushToPointFactory::ConfigBornByRushToPointFactory(
        data::ConfigBornByRushToPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByRushToPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByRushToPointFactory = v2;
};

// Line 2147: range 000000000ED536A2-000000000ED536EF
void __cdecl data::ConfigBornByTeleportToPoint::ConfigBornByTeleportToPoint(
        data::ConfigBornByTeleportToPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTeleportToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 2147: range 000000000ED53B38-000000000ED53B90
void __cdecl data::ConfigBornByTeleportToPoint::ConfigBornByTeleportToPoint(
        data::ConfigBornByTeleportToPoint *const this,
        const data::ConfigBornByTeleportToPoint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTeleportToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 2153: range 000000000EDAB286-000000000EDAB2B0
void __cdecl data::ConfigBornByTeleportToPoint::~ConfigBornByTeleportToPoint(
        data::ConfigBornByTeleportToPoint *const this)
{
  data::ConfigBornByTeleportToPoint::~ConfigBornByTeleportToPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2153: range 000000000EDAB238-000000000EDAB285
void __cdecl data::ConfigBornByTeleportToPoint::~ConfigBornByTeleportToPoint(
        data::ConfigBornByTeleportToPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTeleportToPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2158: range 000000000E69C9E6-000000000E69C9F6
const char *__cdecl data::ConfigBornByTeleportToPoint::getTypeName(const data::ConfigBornByTeleportToPoint *const this)
{
  return "ConfigBornByTeleportToPoint";
};

// Line 2159: range 000000000E69C9F8-000000000E69CB94
int32_t __cdecl data::ConfigBornByTeleportToPoint::getHashNum(const data::ConfigBornByTeleportToPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByTeleportToPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByTeleportToPoint",
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

// Line 2175: range 000000000ED53E7A-000000000ED53EBB
void __cdecl data::ConfigBornByTeleportToPointFactory::ConfigBornByTeleportToPointFactory(
        data::ConfigBornByTeleportToPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTeleportToPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByTeleportToPointFactory = v2;
};

// Line 2183: range 000000000ED541C4-000000000ED5425E
void __cdecl data::ConfigBornByPredicatePoint::ConfigBornByPredicatePoint(data::ConfigBornByPredicatePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByPredicatePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_for_predictive >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_for_predictive >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_for_predictive, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->time_for_predictive = 0.0;
};

// Line 2183: range 000000000ED546A8-000000000ED54792
void __cdecl data::ConfigBornByPredicatePoint::ConfigBornByPredicatePoint(
        data::ConfigBornByPredicatePoint *const this,
        const data::ConfigBornByPredicatePoint *a2)
{
  int (**v2)(...); // rdx
  float time_for_predictive; // xmm0_4

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByPredicatePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_for_predictive >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time_for_predictive >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time_for_predictive);
  }
  time_for_predictive = a2->time_for_predictive;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_for_predictive >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_for_predictive >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_for_predictive, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->time_for_predictive = time_for_predictive;
};

// Line 2190: range 000000000EDAB20C-000000000EDAB236
void __cdecl data::ConfigBornByPredicatePoint::~ConfigBornByPredicatePoint(
        data::ConfigBornByPredicatePoint *const this)
{
  data::ConfigBornByPredicatePoint::~ConfigBornByPredicatePoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2190: range 000000000EDAB1BE-000000000EDAB20B
void __cdecl data::ConfigBornByPredicatePoint::~ConfigBornByPredicatePoint(
        data::ConfigBornByPredicatePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByPredicatePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 2195: range 000000000E69CB96-000000000E69CBA6
const char *__cdecl data::ConfigBornByPredicatePoint::getTypeName(const data::ConfigBornByPredicatePoint *const this)
{
  return "ConfigBornByPredicatePoint";
};

// Line 2196: range 000000000E69CBA8-000000000E69CD44
int32_t __cdecl data::ConfigBornByPredicatePoint::getHashNum(const data::ConfigBornByPredicatePoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByPredicatePoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByPredicatePoint",
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

// Line 2212: range 000000000ED54A7C-000000000ED54ABD
void __cdecl data::ConfigBornByPredicatePointFactory::ConfigBornByPredicatePointFactory(
        data::ConfigBornByPredicatePointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByPredicatePointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByPredicatePointFactory = v2;
};

// Line 2220: range 000000000ED54DC6-000000000ED54E13
void __cdecl data::ConfigBornByHitPoint::ConfigBornByHitPoint(data::ConfigBornByHitPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByHitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 2220: range 000000000ED5525C-000000000ED552B4
void __cdecl data::ConfigBornByHitPoint::ConfigBornByHitPoint(
        data::ConfigBornByHitPoint *const this,
        const data::ConfigBornByHitPoint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByHitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 2226: range 000000000EDAB144-000000000EDAB191
void __cdecl data::ConfigBornByHitPoint::~ConfigBornByHitPoint(data::ConfigBornByHitPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByHitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2226: range 000000000EDAB192-000000000EDAB1BC
void __cdecl data::ConfigBornByHitPoint::~ConfigBornByHitPoint(data::ConfigBornByHitPoint *const this)
{
  data::ConfigBornByHitPoint::~ConfigBornByHitPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2231: range 000000000E69CD46-000000000E69CD56
const char *__cdecl data::ConfigBornByHitPoint::getTypeName(const data::ConfigBornByHitPoint *const this)
{
  return "ConfigBornByHitPoint";
};

// Line 2232: range 000000000E69CD58-000000000E69CEF4
int32_t __cdecl data::ConfigBornByHitPoint::getHashNum(const data::ConfigBornByHitPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByHitPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByHitPoint",
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

// Line 2248: range 000000000ED5559E-000000000ED555DF
void __cdecl data::ConfigBornByHitPointFactory::ConfigBornByHitPointFactory(
        data::ConfigBornByHitPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByHitPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByHitPointFactory = v2;
};

// Line 2256: range 000000000ED558E8-000000000ED55935
void __cdecl data::ConfigBornByElementPos::ConfigBornByElementPos(data::ConfigBornByElementPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByElementPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 2256: range 000000000ED55D7E-000000000ED55DD6
void __cdecl data::ConfigBornByElementPos::ConfigBornByElementPos(
        data::ConfigBornByElementPos *const this,
        const data::ConfigBornByElementPos *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByElementPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 2262: range 000000000EDAB118-000000000EDAB142
void __cdecl data::ConfigBornByElementPos::~ConfigBornByElementPos(data::ConfigBornByElementPos *const this)
{
  data::ConfigBornByElementPos::~ConfigBornByElementPos(this);
  operator delete(this, 0xB0uLL);
};

// Line 2262: range 000000000EDAB0CA-000000000EDAB117
void __cdecl data::ConfigBornByElementPos::~ConfigBornByElementPos(data::ConfigBornByElementPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByElementPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2267: range 000000000E69CEF6-000000000E69CF06
const char *__cdecl data::ConfigBornByElementPos::getTypeName(const data::ConfigBornByElementPos *const this)
{
  return "ConfigBornByElementPos";
};

// Line 2268: range 000000000E69CF08-000000000E69D0A4
int32_t __cdecl data::ConfigBornByElementPos::getHashNum(const data::ConfigBornByElementPos *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByElementPos::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByElementPos",
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

// Line 2284: range 000000000ED560C0-000000000ED56101
void __cdecl data::ConfigBornByElementPosFactory::ConfigBornByElementPosFactory(
        data::ConfigBornByElementPosFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByElementPosFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByElementPosFactory = v2;
};

// Line 2292: range 000000000ED5640A-000000000ED56457
void __cdecl data::ConfigBornBySelectedPoint::ConfigBornBySelectedPoint(data::ConfigBornBySelectedPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelectedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
};

// Line 2292: range 000000000ED568A0-000000000ED568F8
void __cdecl data::ConfigBornBySelectedPoint::ConfigBornBySelectedPoint(
        data::ConfigBornBySelectedPoint *const this,
        const data::ConfigBornBySelectedPoint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelectedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
};

// Line 2298: range 000000000EDAB09E-000000000EDAB0C8
void __cdecl data::ConfigBornBySelectedPoint::~ConfigBornBySelectedPoint(data::ConfigBornBySelectedPoint *const this)
{
  data::ConfigBornBySelectedPoint::~ConfigBornBySelectedPoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 2298: range 000000000EDAB050-000000000EDAB09D
void __cdecl data::ConfigBornBySelectedPoint::~ConfigBornBySelectedPoint(data::ConfigBornBySelectedPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelectedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2303: range 000000000E69D0A6-000000000E69D0B6
const char *__cdecl data::ConfigBornBySelectedPoint::getTypeName(const data::ConfigBornBySelectedPoint *const this)
{
  return "ConfigBornBySelectedPoint";
};

// Line 2304: range 000000000E69D0B8-000000000E69D254
int32_t __cdecl data::ConfigBornBySelectedPoint::getHashNum(const data::ConfigBornBySelectedPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornBySelectedPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornBySelectedPoint",
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

// Line 2320: range 000000000ED56BE2-000000000ED56C23
void __cdecl data::ConfigBornBySelectedPointFactory::ConfigBornBySelectedPointFactory(
        data::ConfigBornBySelectedPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornBySelectedPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornBySelectedPointFactory = v2;
};

// Line 2328: range 000000000ECD78B4-000000000ECD7940
void __cdecl data::ConfigActionPointSelectType::ConfigActionPointSelectType(
        data::ConfigActionPointSelectType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigActionPointSelectType>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigActionPointSelectType>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigActionPointSelectType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2328: range 000000000ED56FE0-000000000ED570B6
void __cdecl data::ConfigActionPointSelectType::ConfigActionPointSelectType(
        data::ConfigActionPointSelectType *const this,
        const data::ConfigActionPointSelectType *a2)
{
  std::enable_shared_from_this<data::ConfigActionPointSelectType> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigActionPointSelectType>;
  std::enable_shared_from_this<data::ConfigActionPointSelectType>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigActionPointSelectType>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigActionPointSelectType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigActionPointSelectType = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2335: range 000000000ED57300-000000000ED57351
void __cdecl data::ConfigActionPointSelectType::~ConfigActionPointSelectType(
        data::ConfigActionPointSelectType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigActionPointSelectType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::enable_shared_from_this<data::ConfigActionPointSelectType>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigActionPointSelectType>);
};

// Line 2335: range 000000000ED57352-000000000ED5737C
void __cdecl data::ConfigActionPointSelectType::~ConfigActionPointSelectType(
        data::ConfigActionPointSelectType *const this)
{
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType(this);
  operator delete(this, 0x20uLL);
};

// Line 2340: range 000000000E69D256-000000000E69D266
const char *__cdecl data::ConfigActionPointSelectType::getTypeName(const data::ConfigActionPointSelectType *const this)
{
  return "ConfigActionPointSelectType";
};

// Line 2341: range 000000000E69D268-000000000E69D404
int32_t __cdecl data::ConfigActionPointSelectType::getHashNum(const data::ConfigActionPointSelectType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigActionPointSelectType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigActionPointSelectType",
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

// Line 2360: range 000000000ED5737E-000000000ED57411
void __cdecl data::SelectActionPointByID::SelectActionPointByID(data::SelectActionPointByID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_point_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->action_point_id = 0;
};

// Line 2360: range 000000000ED578A6-000000000ED57983
void __cdecl data::SelectActionPointByID::SelectActionPointByID(
        data::SelectActionPointByID *const this,
        const data::SelectActionPointByID *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t action_point_id; // ecx
  char v5; // dl

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(
    (data::ConfigActionPointSelectType *const)this,
    (const data::ConfigActionPointSelectType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action_point_id);
  }
  action_point_id = a2->action_point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action_point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->action_point_id, v3);
  }
  this->action_point_id = action_point_id;
};

// Line 2367: range 000000000EDAAFD6-000000000EDAB023
void __cdecl data::SelectActionPointByID::~SelectActionPointByID(data::SelectActionPointByID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
};

// Line 2367: range 000000000EDAB024-000000000EDAB04E
void __cdecl data::SelectActionPointByID::~SelectActionPointByID(data::SelectActionPointByID *const this)
{
  data::SelectActionPointByID::~SelectActionPointByID(this);
  operator delete(this, 0x20uLL);
};

// Line 2372: range 000000000E69D406-000000000E69D416
const char *__cdecl data::SelectActionPointByID::getTypeName(const data::SelectActionPointByID *const this)
{
  return "SelectActionPointByID";
};

// Line 2373: range 000000000E69D418-000000000E69D5B4
int32_t __cdecl data::SelectActionPointByID::getHashNum(const data::SelectActionPointByID *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointByID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointByID",
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

// Line 2389: range 000000000ED57BCC-000000000ED57C0D
void __cdecl data::SelectActionPointByIDFactory::SelectActionPointByIDFactory(
        data::SelectActionPointByIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointByIDFactory = v2;
};

// Line 2397: range 000000000ED57F16-000000000ED57FAB
void __cdecl data::SelectActionPointBySelfPos::SelectActionPointBySelfPos(data::SelectActionPointBySelfPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointBySelfPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = 0.0;
};

// Line 2397: range 000000000ED58444-000000000ED58524
void __cdecl data::SelectActionPointBySelfPos::SelectActionPointBySelfPos(
        data::SelectActionPointBySelfPos *const this,
        const data::SelectActionPointBySelfPos *a2)
{
  int (**v2)(...); // rdx
  float distance; // xmm0_4

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(
    (data::ConfigActionPointSelectType *const)this,
    (const data::ConfigActionPointSelectType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointBySelfPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = distance;
};

// Line 2404: range 000000000EDAAFAA-000000000EDAAFD4
void __cdecl data::SelectActionPointBySelfPos::~SelectActionPointBySelfPos(
        data::SelectActionPointBySelfPos *const this)
{
  data::SelectActionPointBySelfPos::~SelectActionPointBySelfPos(this);
  operator delete(this, 0x20uLL);
};

// Line 2404: range 000000000EDAAF5C-000000000EDAAFA9
void __cdecl data::SelectActionPointBySelfPos::~SelectActionPointBySelfPos(
        data::SelectActionPointBySelfPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointBySelfPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
};

// Line 2409: range 000000000E69D5B6-000000000E69D5C6
const char *__cdecl data::SelectActionPointBySelfPos::getTypeName(const data::SelectActionPointBySelfPos *const this)
{
  return "SelectActionPointBySelfPos";
};

// Line 2410: range 000000000E69D5C8-000000000E69D764
int32_t __cdecl data::SelectActionPointBySelfPos::getHashNum(const data::SelectActionPointBySelfPos *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointBySelfPos::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointBySelfPos",
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

// Line 2426: range 000000000ED5876E-000000000ED587AF
void __cdecl data::SelectActionPointBySelfPosFactory::SelectActionPointBySelfPosFactory(
        data::SelectActionPointBySelfPosFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointBySelfPosFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointBySelfPosFactory = v2;
};

// Line 2434: range 000000000ED58AB8-000000000ED58B4D
void __cdecl data::SelectActionPointByTargetPos::SelectActionPointByTargetPos(
        data::SelectActionPointByTargetPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = 0.0;
};

// Line 2434: range 000000000ED58FE6-000000000ED590C6
void __cdecl data::SelectActionPointByTargetPos::SelectActionPointByTargetPos(
        data::SelectActionPointByTargetPos *const this,
        const data::SelectActionPointByTargetPos *a2)
{
  int (**v2)(...); // rdx
  float distance; // xmm0_4

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(
    (data::ConfigActionPointSelectType *const)this,
    (const data::ConfigActionPointSelectType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = distance;
};

// Line 2441: range 000000000EDAAF30-000000000EDAAF5A
void __cdecl data::SelectActionPointByTargetPos::~SelectActionPointByTargetPos(
        data::SelectActionPointByTargetPos *const this)
{
  data::SelectActionPointByTargetPos::~SelectActionPointByTargetPos(this);
  operator delete(this, 0x20uLL);
};

// Line 2441: range 000000000EDAAEE2-000000000EDAAF2F
void __cdecl data::SelectActionPointByTargetPos::~SelectActionPointByTargetPos(
        data::SelectActionPointByTargetPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
};

// Line 2446: range 000000000E69D766-000000000E69D776
const char *__cdecl data::SelectActionPointByTargetPos::getTypeName(
        const data::SelectActionPointByTargetPos *const this)
{
  return "SelectActionPointByTargetPos";
};

// Line 2447: range 000000000E69D778-000000000E69D914
int32_t __cdecl data::SelectActionPointByTargetPos::getHashNum(const data::SelectActionPointByTargetPos *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointByTargetPos::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointByTargetPos",
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

// Line 2463: range 000000000ED59310-000000000ED59351
void __cdecl data::SelectActionPointByTargetPosFactory::SelectActionPointByTargetPosFactory(
        data::SelectActionPointByTargetPosFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetPosFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointByTargetPosFactory = v2;
};

// Line 2471: range 000000000ED5965A-000000000ED596EF
void __cdecl data::SelectActionPointByAwayFromAvatar::SelectActionPointByAwayFromAvatar(
        data::SelectActionPointByAwayFromAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAwayFromAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = 0.0;
};

// Line 2471: range 000000000ED59B88-000000000ED59C68
void __cdecl data::SelectActionPointByAwayFromAvatar::SelectActionPointByAwayFromAvatar(
        data::SelectActionPointByAwayFromAvatar *const this,
        const data::SelectActionPointByAwayFromAvatar *a2)
{
  int (**v2)(...); // rdx
  float distance; // xmm0_4

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(
    (data::ConfigActionPointSelectType *const)this,
    (const data::ConfigActionPointSelectType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAwayFromAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = distance;
};

// Line 2478: range 000000000EDAAE68-000000000EDAAEB5
void __cdecl data::SelectActionPointByAwayFromAvatar::~SelectActionPointByAwayFromAvatar(
        data::SelectActionPointByAwayFromAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAwayFromAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType((data::ConfigActionPointSelectType *const)this);
};

// Line 2478: range 000000000EDAAEB6-000000000EDAAEE0
void __cdecl data::SelectActionPointByAwayFromAvatar::~SelectActionPointByAwayFromAvatar(
        data::SelectActionPointByAwayFromAvatar *const this)
{
  data::SelectActionPointByAwayFromAvatar::~SelectActionPointByAwayFromAvatar(this);
  operator delete(this, 0x20uLL);
};

// Line 2483: range 000000000E69D916-000000000E69D926
const char *__cdecl data::SelectActionPointByAwayFromAvatar::getTypeName(
        const data::SelectActionPointByAwayFromAvatar *const this)
{
  return "SelectActionPointByAwayFromAvatar";
};

// Line 2484: range 000000000E69D928-000000000E69DAC4
int32_t __cdecl data::SelectActionPointByAwayFromAvatar::getHashNum(
        const data::SelectActionPointByAwayFromAvatar *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointByAwayFromAvatar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointByAwayFromAvatar",
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

// Line 2500: range 000000000ED59EB2-000000000ED59EF3
void __cdecl data::SelectActionPointByAwayFromAvatarFactory::SelectActionPointByAwayFromAvatarFactory(
        data::SelectActionPointByAwayFromAvatarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAwayFromAvatarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointByAwayFromAvatarFactory = v2;
};

// Line 2508: range 000000000ED5A1FC-000000000ED5A2D9
void __cdecl data::SelectActionPointByTargetOrientation::SelectActionPointByTargetOrientation(
        data::SelectActionPointByTargetOrientation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::vector(&this->action_point_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle, v1);
  }
  this->angle = 0.0;
  v3 = ((_BYTE)this + 60) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sign_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sign_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sign_type, v3, v4);
  this->sign_type = 0;
};

// Line 2508: range 000000000ED5A6DE-000000000ED5A86C
void __cdecl data::SelectActionPointByTargetOrientation::SelectActionPointByTargetOrientation(
        data::SelectActionPointByTargetOrientation *const this,
        const data::SelectActionPointByTargetOrientation *a2)
{
  int (**v2)(...); // rdx
  float angle; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool sign_type; // cl
  char v7; // dl
  __int64 v8; // rdx

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::vector(&this->action_point_ids, &a2->action_point_ids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angle);
  }
  angle = a2->angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle, &a2->action_point_ids);
  }
  this->angle = angle;
  v4 = ((_BYTE)a2 + 60) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->sign_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->sign_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->sign_type, v4, v5);
  sign_type = a2->sign_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sign_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->sign_type, v4, v8);
  this->sign_type = sign_type;
};

// Line 2517: range 000000000EDAADDE-000000000EDAAE3B
void __cdecl data::SelectActionPointByTargetOrientation::~SelectActionPointByTargetOrientation(
        data::SelectActionPointByTargetOrientation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::~vector(&this->action_point_ids);
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType(this);
};

// Line 2517: range 000000000EDAAE3C-000000000EDAAE66
void __cdecl data::SelectActionPointByTargetOrientation::~SelectActionPointByTargetOrientation(
        data::SelectActionPointByTargetOrientation *const this)
{
  data::SelectActionPointByTargetOrientation::~SelectActionPointByTargetOrientation(this);
  operator delete(this, 0x40uLL);
};

// Line 2522: range 000000000E69DAC6-000000000E69DAD6
const char *__cdecl data::SelectActionPointByTargetOrientation::getTypeName(
        const data::SelectActionPointByTargetOrientation *const this)
{
  return "SelectActionPointByTargetOrientation";
};

// Line 2523: range 000000000E69DAD8-000000000E69DC74
int32_t __cdecl data::SelectActionPointByTargetOrientation::getHashNum(
        const data::SelectActionPointByTargetOrientation *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointByTargetOrientation::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointByTargetOrientation",
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

// Line 2539: range 000000000ED5AB56-000000000ED5AB97
void __cdecl data::SelectActionPointByTargetOrientationFactory::SelectActionPointByTargetOrientationFactory(
        data::SelectActionPointByTargetOrientationFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByTargetOrientationFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointByTargetOrientationFactory = v2;
};

// Line 2547: range 000000000ED5AEA0-000000000ED5AFC0
void __cdecl data::SelectActionPointByAllAvatarsOrientation::SelectActionPointByAllAvatarsOrientation(
        data::SelectActionPointByAllAvatarsOrientation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAllAvatarsOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::vector(&this->action_point_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle, v1);
  }
  this->angle = 0.0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, v3);
  }
  this->distance = 0.0;
  if ( *(char *)(((unsigned __int64)&this->sign_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->sign_type, v3, &this->sign_type);
  this->sign_type = 0;
};

// Line 2547: range 000000000ED5B3DC-000000000ED5B5E8
void __cdecl data::SelectActionPointByAllAvatarsOrientation::SelectActionPointByAllAvatarsOrientation(
        data::SelectActionPointByAllAvatarsOrientation *const this,
        const data::SelectActionPointByAllAvatarsOrientation *a2)
{
  int (**v2)(...); // rdx
  float angle; // xmm0_4
  float distance; // xmm0_4
  __int64 v5; // rsi
  bool sign_type; // cl
  char v7; // al

  data::ConfigActionPointSelectType::ConfigActionPointSelectType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAllAvatarsOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::vector(&this->action_point_ids, &a2->action_point_ids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angle);
  }
  angle = a2->angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle, &a2->action_point_ids);
  }
  this->angle = angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, v5);
  }
  this->distance = distance;
  if ( *(char *)(((unsigned __int64)&a2->sign_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->sign_type, v5, &a2->sign_type);
  sign_type = a2->sign_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sign_type >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->sign_type, v5, &this->sign_type);
  }
  this->sign_type = sign_type;
};

// Line 2557: range 000000000EDAAD54-000000000EDAADB1
void __cdecl data::SelectActionPointByAllAvatarsOrientation::~SelectActionPointByAllAvatarsOrientation(
        data::SelectActionPointByAllAvatarsOrientation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAllAvatarsOrientation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActionPointSelectType = v2;
  std::vector<unsigned int>::~vector(&this->action_point_ids);
  data::ConfigActionPointSelectType::~ConfigActionPointSelectType(this);
};

// Line 2557: range 000000000EDAADB2-000000000EDAADDC
void __cdecl data::SelectActionPointByAllAvatarsOrientation::~SelectActionPointByAllAvatarsOrientation(
        data::SelectActionPointByAllAvatarsOrientation *const this)
{
  data::SelectActionPointByAllAvatarsOrientation::~SelectActionPointByAllAvatarsOrientation(this);
  operator delete(this, 0x48uLL);
};

// Line 2562: range 000000000E69DC76-000000000E69DC86
const char *__cdecl data::SelectActionPointByAllAvatarsOrientation::getTypeName(
        const data::SelectActionPointByAllAvatarsOrientation *const this)
{
  return "SelectActionPointByAllAvatarsOrientation";
};

// Line 2563: range 000000000E69DC88-000000000E69DE24
int32_t __cdecl data::SelectActionPointByAllAvatarsOrientation::getHashNum(
        const data::SelectActionPointByAllAvatarsOrientation *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectActionPointByAllAvatarsOrientation::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectActionPointByAllAvatarsOrientation",
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

// Line 2579: range 000000000ED5B8D2-000000000ED5B913
void __cdecl data::SelectActionPointByAllAvatarsOrientationFactory::SelectActionPointByAllAvatarsOrientationFactory(
        data::SelectActionPointByAllAvatarsOrientationFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectActionPointByAllAvatarsOrientationFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectActionPointByAllAvatarsOrientationFactory = v2;
};

// Line 2587: range 000000000ED5BC1C-000000000ED5BD11
void __cdecl data::ConfigBornByActionPoint::ConfigBornByActionPoint(data::ConfigBornByActionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByActionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_point_type, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->action_point_type = InvalidPoint;
  if ( *(_WORD *)(((unsigned __int64)&this->select_type >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigActionPointSelectType>();
};

// Line 2587: range 000000000ED5C160-000000000ED5C267
void __cdecl data::ConfigBornByActionPoint::ConfigBornByActionPoint(
        data::ConfigBornByActionPoint *const this,
        const data::ConfigBornByActionPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActionPointType action_point_type; // ecx
  char v5; // dl

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByActionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  v3 = (((_BYTE)a2 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action_point_type);
  }
  action_point_type = a2->action_point_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action_point_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->action_point_type, v3);
  }
  this->action_point_type = action_point_type;
  std::shared_ptr<data::ConfigActionPointSelectType>::shared_ptr(&this->select_type, &a2->select_type);
};

// Line 2595: range 000000000EDAACC8-000000000EDAAD27
void __cdecl data::ConfigBornByActionPoint::~ConfigBornByActionPoint(data::ConfigBornByActionPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByActionPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  std::shared_ptr<data::ConfigActionPointSelectType>::~shared_ptr(&this->select_type);
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 2595: range 000000000EDAAD28-000000000EDAAD52
void __cdecl data::ConfigBornByActionPoint::~ConfigBornByActionPoint(data::ConfigBornByActionPoint *const this)
{
  data::ConfigBornByActionPoint::~ConfigBornByActionPoint(this);
  operator delete(this, 0xC0uLL);
};

// Line 2600: range 000000000E69DE62-000000000E69DE72
const char *__cdecl data::ConfigBornByActionPoint::getTypeName(const data::ConfigBornByActionPoint *const this)
{
  return "ConfigBornByActionPoint";
};

// Line 2601: range 000000000E69DE74-000000000E69E010
int32_t __cdecl data::ConfigBornByActionPoint::getHashNum(const data::ConfigBornByActionPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByActionPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByActionPoint",
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

// Line 2617: range 000000000ED5C550-000000000ED5C591
void __cdecl data::ConfigBornByActionPointFactory::ConfigBornByActionPointFactory(
        data::ConfigBornByActionPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByActionPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByActionPointFactory = v2;
};

// Line 2625: range 000000000ED5C89A-000000000ED5C9FA
void __cdecl data::ConfigBornByTargetLinearPoint::ConfigBornByTargetLinearPoint(
        data::ConfigBornByTargetLinearPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBornType::ConfigBornType(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetLinearPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::DynamicFloat::DynamicFloat(&this->linear_offset);
  if ( *(char *)(((unsigned __int64)&this->base_on_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->base_on_target, v1, &this->base_on_target);
  this->base_on_target = 1;
  v3 = ((_BYTE)this - 47) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->linear_xz >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->linear_xz >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->linear_xz, v3, v4);
  this->linear_xz = 1;
  data::DynamicFloat::DynamicFloat(&this->linear_min, 0.0);
  data::DynamicFloat::DynamicFloat(&this->linear_max, 50.0);
};

// Line 2625: range 000000000ED5CE4C-000000000ED5D05F
void __cdecl data::ConfigBornByTargetLinearPoint::ConfigBornByTargetLinearPoint(
        data::ConfigBornByTargetLinearPoint *const this,
        const data::ConfigBornByTargetLinearPoint *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_linear_offset; // rsi
  bool base_on_target; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool linear_xz; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigBornType::ConfigBornType(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetLinearPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  p_linear_offset = &a2->linear_offset;
  data::DynamicFloat::DynamicFloat(&this->linear_offset, &a2->linear_offset);
  if ( *(char *)(((unsigned __int64)&a2->base_on_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->base_on_target, p_linear_offset, &a2->base_on_target);
  base_on_target = a2->base_on_target;
  v5 = *(_BYTE *)(((unsigned __int64)&this->base_on_target >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_linear_offset) = v5 != 0;
    __asan_report_store1(&this->base_on_target, p_linear_offset, &this->base_on_target);
  }
  this->base_on_target = base_on_target;
  v6 = ((_BYTE)a2 - 47) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->linear_xz >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->linear_xz >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->linear_xz, v6, v7);
  linear_xz = a2->linear_xz;
  v9 = *(_BYTE *)(((unsigned __int64)&this->linear_xz >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 47) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->linear_xz, v6, v10);
  this->linear_xz = linear_xz;
  data::DynamicFloat::DynamicFloat(&this->linear_min, &a2->linear_min);
  data::DynamicFloat::DynamicFloat(&this->linear_max, &a2->linear_max);
};

// Line 2636: range 000000000EDAAC18-000000000EDAAC9B
void __cdecl data::ConfigBornByTargetLinearPoint::~ConfigBornByTargetLinearPoint(
        data::ConfigBornByTargetLinearPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetLinearPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::DynamicFloat::~DynamicFloat(&this->linear_max);
  data::DynamicFloat::~DynamicFloat(&this->linear_min);
  data::DynamicFloat::~DynamicFloat(&this->linear_offset);
  data::ConfigBornType::~ConfigBornType(this);
};

// Line 2636: range 000000000EDAAC9C-000000000EDAACC6
void __cdecl data::ConfigBornByTargetLinearPoint::~ConfigBornByTargetLinearPoint(
        data::ConfigBornByTargetLinearPoint *const this)
{
  data::ConfigBornByTargetLinearPoint::~ConfigBornByTargetLinearPoint(this);
  operator delete(this, 0x118uLL);
};

// Line 2641: range 000000000E69E012-000000000E69E022
const char *__cdecl data::ConfigBornByTargetLinearPoint::getTypeName(
        const data::ConfigBornByTargetLinearPoint *const this)
{
  return "ConfigBornByTargetLinearPoint";
};

// Line 2642: range 000000000E69E024-000000000E69E1C0
int32_t __cdecl data::ConfigBornByTargetLinearPoint::getHashNum(const data::ConfigBornByTargetLinearPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByTargetLinearPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByTargetLinearPoint",
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

// Line 2658: range 000000000ED5D348-000000000ED5D389
void __cdecl data::ConfigBornByTargetLinearPointFactory::ConfigBornByTargetLinearPointFactory(
        data::ConfigBornByTargetLinearPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByTargetLinearPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByTargetLinearPointFactory = v2;
};

// Line 2666: range 000000000ED5D692-000000000ED5D724
void __cdecl data::ConfigBornByFollowEffectOverPos::ConfigBornByFollowEffectOverPos(
        data::ConfigBornByFollowEffectOverPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByFollowEffectOverPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)this - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->by_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->by_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->by_owner, v3, v4);
  this->by_owner = 0;
};

// Line 2666: range 000000000ED5DB6E-000000000ED5DC50
void __cdecl data::ConfigBornByFollowEffectOverPos::ConfigBornByFollowEffectOverPos(
        data::ConfigBornByFollowEffectOverPos *const this,
        const data::ConfigBornByFollowEffectOverPos *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool by_owner; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBornType::ConfigBornType((data::ConfigBornType *const)this, (const data::ConfigBornType *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByFollowEffectOverPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBornType = v2;
  v3 = ((_BYTE)a2 - 85) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->by_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->by_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->by_owner, v3, v4);
  by_owner = a2->by_owner;
  v6 = *(_BYTE *)(((unsigned __int64)&this->by_owner >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 85) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->by_owner, v3, v7);
  this->by_owner = by_owner;
};

// Line 2673: range 000000000EDAAB9E-000000000EDAABEB
void __cdecl data::ConfigBornByFollowEffectOverPos::~ConfigBornByFollowEffectOverPos(
        data::ConfigBornByFollowEffectOverPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByFollowEffectOverPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornType = v2;
  data::ConfigBornType::~ConfigBornType((data::ConfigBornType *const)this);
};

// Line 2673: range 000000000EDAABEC-000000000EDAAC16
void __cdecl data::ConfigBornByFollowEffectOverPos::~ConfigBornByFollowEffectOverPos(
        data::ConfigBornByFollowEffectOverPos *const this)
{
  data::ConfigBornByFollowEffectOverPos::~ConfigBornByFollowEffectOverPos(this);
  operator delete(this, 0xB0uLL);
};

// Line 2678: range 000000000E69E1C2-000000000E69E1D2
const char *__cdecl data::ConfigBornByFollowEffectOverPos::getTypeName(
        const data::ConfigBornByFollowEffectOverPos *const this)
{
  return "ConfigBornByFollowEffectOverPos";
};

// Line 2679: range 000000000E69E1D4-000000000E69E370
int32_t __cdecl data::ConfigBornByFollowEffectOverPos::getHashNum(
        const data::ConfigBornByFollowEffectOverPos *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBornByFollowEffectOverPos::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBornByFollowEffectOverPos",
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

// Line 2695: range 000000000ED5DF3A-000000000ED5DF7B
void __cdecl data::ConfigBornByFollowEffectOverPosFactory::ConfigBornByFollowEffectOverPosFactory(
        data::ConfigBornByFollowEffectOverPosFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBornByFollowEffectOverPosFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBornByFollowEffectOverPosFactory = v2;
};

// Line 2703: range 000000001110D51E-000000001110D6CF
void __cdecl data::ConfigStateCameraParam::ConfigStateCameraParam(data::ConfigStateCameraParam *const this)
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
  this->radius_spring_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_elev_with_height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_elev_with_height_ratio >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_elev_with_height_ratio, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->combat_elev_with_height_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_radius, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->force_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_radius_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_radius_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_radius_duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->force_radius_duration = 0.5;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->should_keep_force_radius >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->should_keep_force_radius >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->should_keep_force_radius, v1, v2);
  this->should_keep_force_radius = 0;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2730: range 000000000DF0ACC2-000000000DF0AD97
void __cdecl data::ConfigFrameTransition::ConfigFrameTransition(data::ConfigFrameTransition *const this)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->duration = 1.0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2985: range 0000000011A5A8E4-0000000011A5A9BE
void __cdecl data::ConfigRaycast::ConfigRaycast(data::ConfigRaycast *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->raycast_length = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->raycast_type, v2);
  }
  this->raycast_type = DownToGroundOnlyInAir;
  std::string::basic_string(&this->start_point);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2985: range 0000000011CE5970-0000000011CE5B06
void __cdecl data::ConfigRaycast::ConfigRaycast(data::ConfigRaycast *const this, const data::ConfigRaycast *a2)
{
  float raycast_length; // xmm0_4
  __int64 v3; // rsi
  data::RaycastType raycast_type; // ecx
  char v5; // dl
  std::string *p_start_point; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  raycast_length = a2->raycast_length;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->raycast_length = raycast_length;
  v3 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->raycast_type);
  }
  raycast_type = a2->raycast_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->raycast_type, v3);
  }
  this->raycast_type = raycast_type;
  p_start_point = &a2->start_point;
  std::string::basic_string(&this->start_point, &a2->start_point);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_start_point, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_start_point) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_start_point, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2985: range 0000000011B3EACE-0000000011B3EC64
void __cdecl data::ConfigRaycast::ConfigRaycast(data::ConfigRaycast *const this, data::ConfigRaycast *a2)
{
  float raycast_length; // xmm0_4
  __int64 v3; // rsi
  data::RaycastType raycast_type; // ecx
  char v5; // dl
  std::string *p_start_point; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  raycast_length = a2->raycast_length;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->raycast_length = raycast_length;
  v3 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->raycast_type);
  }
  raycast_type = a2->raycast_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->raycast_type, v3);
  }
  this->raycast_type = raycast_type;
  p_start_point = &a2->start_point;
  std::string::basic_string(&this->start_point, &a2->start_point);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_start_point, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_start_point) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_start_point, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2985: range 0000000011A5A9C0-0000000011A5A9DE
void __cdecl data::ConfigRaycast::~ConfigRaycast(data::ConfigRaycast *const this)
{
  std::string::~string(&this->start_point);
};
