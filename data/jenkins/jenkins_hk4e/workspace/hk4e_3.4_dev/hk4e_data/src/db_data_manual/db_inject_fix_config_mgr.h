// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_inject_fix_config_mgr.h

// Line 25: range 000000000D403A82-000000000D403AC0
void __cdecl data::InjectFixConfig::InjectFixConfig(data::InjectFixConfig *const this)
{
  std::string::basic_string(&this->inject_fix);
  std::unordered_set<unsigned int>::unordered_set(&this->uid_set);
  std::unordered_set<unsigned int>::unordered_set(&this->platform_type_set);
};

// Line 25: range 000000000D2C8CF4-000000000D2C8D32
void __cdecl data::InjectFixConfig::~InjectFixConfig(data::InjectFixConfig *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->platform_type_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->uid_set);
  std::string::~string(&this->inject_fix);
};
