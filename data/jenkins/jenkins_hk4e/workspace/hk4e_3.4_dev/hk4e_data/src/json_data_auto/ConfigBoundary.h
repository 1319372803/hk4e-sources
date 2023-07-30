// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigBoundary.h

// Line 19: range 0000000013C11AC4-0000000013C11BCC
void __cdecl data::ConfigBoundary::ConfigBoundary(data::ConfigBoundary *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0;
  std::string::basic_string(&this->shape);
  data::Vector::Vector(&this->offset);
  data::Vector::Vector(&this->euler);
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v1);
  }
  this->height = 0.0;
  v2 = ((_BYTE)this + 108) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 19: range 00000000141E6194-00000000141E642C
void __cdecl data::ConfigBoundary::ConfigBoundary(data::ConfigBoundary *const this, const data::ConfigBoundary *a2)
{
  int32_t priority; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  float height; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::ConfigBoundary *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v12->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v3 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->priority, a2);
  }
  this->priority = priority;
  std::string::basic_string(&this->shape, &v12->shape);
  if ( *(_WORD *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->offset);
  v4 = *(_QWORD *)&v12->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&v12->offset.x;
  *(_QWORD *)&this->offset.z = v4;
  if ( *(_WORD *)(((unsigned __int64)&this->euler >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->euler >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->euler);
  v5 = *(_QWORD *)&v12->euler.z;
  *(_QWORD *)&this->euler.x = *(_QWORD *)&v12->euler.x;
  *(_QWORD *)&this->euler.z = v5;
  if ( *(_BYTE *)(((unsigned __int64)&v12->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->height);
  }
  height = v12->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, &v12->shape);
  }
  this->height = height;
  v7 = ((_BYTE)v12 + 108) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000013C11BCE-0000000013C11BF8
void __cdecl data::ConfigBoundary::~ConfigBoundary(data::ConfigBoundary *const this)
{
  std::string::~string(&this->shape);
  std::string::~string(this);
};
