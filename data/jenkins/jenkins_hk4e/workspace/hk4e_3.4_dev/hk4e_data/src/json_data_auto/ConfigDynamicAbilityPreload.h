// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigDynamicAbilityPreload.h

// Line 19: range 0000000013C1BD14-0000000013C1BD99
void __cdecl data::ConfigDynamicAbilityPreload::ConfigDynamicAbilityPreload(
        data::ConfigDynamicAbilityPreload *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->preload_effect);
  std::vector<std::string>::vector(&this->preload_gadget);
  std::vector<std::string>::vector(&this->preload_camera);
  std::vector<std::string>::vector(&this->preload_skill_icon);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 00000000141F5828-00000000141F5961
void __cdecl data::ConfigDynamicAbilityPreload::ConfigDynamicAbilityPreload(
        data::ConfigDynamicAbilityPreload *const this,
        const data::ConfigDynamicAbilityPreload *a2)
{
  data::StringArray *p_preload_skill_icon; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->preload_effect, &a2->preload_effect);
  std::vector<std::string>::vector(&this->preload_gadget, &a2->preload_gadget);
  std::vector<std::string>::vector(&this->preload_camera, &a2->preload_camera);
  p_preload_skill_icon = &a2->preload_skill_icon;
  std::vector<std::string>::vector(&this->preload_skill_icon, p_preload_skill_icon);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_preload_skill_icon, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_preload_skill_icon) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_preload_skill_icon, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000013C1BD9A-0000000013C1BDE4
void __cdecl data::ConfigDynamicAbilityPreload::~ConfigDynamicAbilityPreload(
        data::ConfigDynamicAbilityPreload *const this)
{
  std::vector<std::string>::~vector(&this->preload_skill_icon);
  std::vector<std::string>::~vector(&this->preload_camera);
  std::vector<std::string>::~vector(&this->preload_gadget);
  std::vector<std::string>::~vector(&this->preload_effect);
};
