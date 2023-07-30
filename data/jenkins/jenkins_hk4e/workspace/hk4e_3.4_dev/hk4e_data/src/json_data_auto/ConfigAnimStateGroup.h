// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigAnimStateGroup.h

// Line 19: range 0000000013C0E6FC-0000000013C0E771
void __cdecl data::ConfigStateGroup::ConfigStateGroup(data::ConfigStateGroup *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->state_ids);
  std::vector<std::string>::vector(&this->animator_state_ids);
  std::vector<std::string>::vector(&this->animator_black_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 00000000141DB68A-00000000141DB793
void __cdecl data::ConfigStateGroup::ConfigStateGroup(
        data::ConfigStateGroup *const this,
        const data::ConfigStateGroup *a2)
{
  data::StringList *p_animator_black_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->state_ids, &a2->state_ids);
  std::vector<std::string>::vector(&this->animator_state_ids, &a2->animator_state_ids);
  p_animator_black_list = &a2->animator_black_list;
  std::vector<std::string>::vector(&this->animator_black_list, p_animator_black_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_animator_black_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_animator_black_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_animator_black_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000013C0E772-0000000013C0E7AC
void __cdecl data::ConfigStateGroup::~ConfigStateGroup(data::ConfigStateGroup *const this)
{
  std::vector<std::string>::~vector(&this->animator_black_list);
  std::vector<std::string>::~vector(&this->animator_state_ids);
  std::vector<std::string>::~vector(&this->state_ids);
};
