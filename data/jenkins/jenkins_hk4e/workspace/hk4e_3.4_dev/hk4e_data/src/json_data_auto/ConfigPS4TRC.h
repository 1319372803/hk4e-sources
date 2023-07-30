// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigPS4TRC.h

// Line 18: range 0000000012171BA6-0000000012171C3E
void __cdecl data::ConfigContentRestriction::ConfigContentRestriction(data::ConfigContentRestriction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->age, v1);
  }
  this->age = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 18: range 000000001236A312-000000001236A42C
void __cdecl data::ConfigContentRestriction::ConfigContentRestriction(
        data::ConfigContentRestriction *const this,
        data::ConfigContentRestriction *a2)
{
  int32_t age; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigContentRestriction *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->age >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->age >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->age);
  }
  age = a2->age;
  v3 = *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->age, a2);
  }
  this->age = age;
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

// Line 18: range 0000000012171C40-0000000012171C5A
void __cdecl data::ConfigContentRestriction::~ConfigContentRestriction(data::ConfigContentRestriction *const this)
{
  std::string::~string(this);
};
