// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigKeyboardLayout.h

// Line 59: range 0000000012144768-00000000121447BD
void __cdecl data::ConfigKeyboardLayoutItem::ConfigKeyboardLayoutItem(data::ConfigKeyboardLayoutItem *const this)
{
  __int64 v1; // rsi

  std::unordered_map<data::ConfigKeyCode,std::string>::unordered_map(&this->key_code_friendly_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 59: range 00000000126146B8-0000000012614753
void __cdecl data::ConfigKeyboardLayoutItem::ConfigKeyboardLayoutItem(
        data::ConfigKeyboardLayoutItem *const this,
        const data::ConfigKeyboardLayoutItem *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::unordered_map<data::ConfigKeyCode,std::string>::unordered_map(
    &this->key_code_friendly_name,
    &a2->key_code_friendly_name);
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

// Line 59: range 00000000121447BE-00000000121447D8
void __cdecl data::ConfigKeyboardLayoutItem::~ConfigKeyboardLayoutItem(data::ConfigKeyboardLayoutItem *const this)
{
  std::unordered_map<data::ConfigKeyCode,std::string>::~unordered_map(&this->key_code_friendly_name);
};
