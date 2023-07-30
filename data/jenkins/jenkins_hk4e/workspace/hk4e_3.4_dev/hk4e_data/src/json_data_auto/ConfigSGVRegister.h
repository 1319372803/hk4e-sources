// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigSGVRegister.h

// Line 19: range 000000000F789078-000000000F789092
void __cdecl data::ConfigSGVRegister::~ConfigSGVRegister(data::ConfigSGVRegister *const this)
{
  std::vector<std::string>::~vector(&this->sgv_list);
};

// Line 129: range 000000000F789022-000000000F789077
void __cdecl data::ConfigSGVRegister::ConfigSGVRegister(data::ConfigSGVRegister *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->sgv_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};
