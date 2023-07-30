// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioGadget.h

// Line 20: range 000000001213ACBE-000000001213ADDE
void __cdecl data::DistanceTask::DistanceTask(data::DistanceTask *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->distance_rtpc_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_config_id, v1);
  }
  this->gadget_config_id = 0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v2);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_value, v2);
  }
  this->default_value = 0.0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001260C5BE-000000001260C7D8
void __cdecl data::DistanceTask::DistanceTask(data::DistanceTask *const this, const data::DistanceTask *a2)
{
  uint32_t gadget_config_id; // ecx
  char v3; // al
  float radius; // xmm0_4
  __int64 v5; // rsi
  float default_value; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::DistanceTask *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  data::ConfigWwiseString::ConfigWwiseString(&this->distance_rtpc_key, &a2->distance_rtpc_key);
  if ( *(_BYTE *)(((unsigned __int64)&v12->gadget_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->gadget_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_config_id);
  }
  gadget_config_id = a2->gadget_config_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->gadget_config_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->gadget_config_id, a2);
  }
  this->gadget_config_id = gadget_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v12->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->radius);
  }
  radius = v12->radius;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v5);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&v12->default_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->default_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->default_value);
  }
  default_value = v12->default_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_value, v5);
  }
  this->default_value = default_value;
  v7 = ((_BYTE)v12 + 52) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001213ADE0-000000001213ADFA
void __cdecl data::DistanceTask::~DistanceTask(data::DistanceTask *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->distance_rtpc_key);
};
