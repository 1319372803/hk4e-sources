// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigPreload.h

// Line 41: range 0000000012175640-0000000012175714
void __cdecl data::ConfigPreload::ConfigPreload(data::ConfigPreload *const this)
{
  __int64 v1; // rsi

  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->effects);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->abilities);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->gadgets);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->cameras);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->anim_event_patterns);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->skill_icons);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->misc_obj_paths);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->weathers);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 41: range 000000001264C49E-000000001264C6C5
void __cdecl data::ConfigPreload::ConfigPreload(data::ConfigPreload *const this, const data::ConfigPreload *a2)
{
  data::ConfigPreloadPaths *p_weathers; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->effects, &a2->effects);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->abilities, &a2->abilities);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->gadgets, &a2->gadgets);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->cameras, &a2->cameras);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(
    &this->anim_event_patterns,
    &a2->anim_event_patterns);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(
    &this->skill_icons,
    &a2->skill_icons);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(
    &this->misc_obj_paths,
    &a2->misc_obj_paths);
  p_weathers = &a2->weathers;
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::unordered_map(&this->weathers, p_weathers);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_weathers, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_weathers) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_weathers, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 41: range 0000000012175716-00000000121757AA
void __cdecl data::ConfigPreload::~ConfigPreload(data::ConfigPreload *const this)
{
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->weathers);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->misc_obj_paths);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->skill_icons);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->anim_event_patterns);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->cameras);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->gadgets);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->abilities);
  std::unordered_map<data::ConfigPreloadType,std::vector<std::string>>::~unordered_map(&this->effects);
};
