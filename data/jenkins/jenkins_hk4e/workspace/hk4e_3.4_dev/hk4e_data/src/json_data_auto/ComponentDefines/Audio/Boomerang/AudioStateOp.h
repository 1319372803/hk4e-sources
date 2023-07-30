// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/AudioStateOp.h

// Line 20: range 000000001213657C-00000000121365E1
void __cdecl data::AudioStateOp::AudioStateOp(data::AudioStateOp *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->group);
  data::ConfigWwiseString::ConfigWwiseString(&this->value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000122ECF02-00000000122ECFB8
void __cdecl data::AudioStateOp::AudioStateOp(data::AudioStateOp *const this, data::AudioStateOp *a2)
{
  data::ConfigWwiseString *p_value; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->group, &a2->group);
  p_value = &a2->value;
  data::ConfigWwiseString::ConfigWwiseString(&this->value, p_value);
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

// Line 20: range 00000000121365E2-000000001213660C
void __cdecl data::AudioStateOp::~AudioStateOp(data::AudioStateOp *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->group);
};
