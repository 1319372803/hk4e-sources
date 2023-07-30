// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigAnimator.h

// Line 35: range 0000000013C0EEEA-0000000013C0EF3F
void __cdecl data::ConfigAnimGroup::ConfigAnimGroup(data::ConfigAnimGroup *const this)
{
  __int64 v1; // rsi

  std::unordered_map<std::string,unsigned long>::unordered_map(&this->dynamic_anime_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 35: range 00000000141DBB58-00000000141DBBF3
void __cdecl data::ConfigAnimGroup::ConfigAnimGroup(data::ConfigAnimGroup *const this, const data::ConfigAnimGroup *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::unordered_map<std::string,unsigned long>::unordered_map(&this->dynamic_anime_map, &a2->dynamic_anime_map);
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

// Line 35: range 0000000013C0EF40-0000000013C0EF5A
void __cdecl data::ConfigAnimGroup::~ConfigAnimGroup(data::ConfigAnimGroup *const this)
{
  std::unordered_map<std::string,unsigned long>::~unordered_map(&this->dynamic_anime_map);
};
