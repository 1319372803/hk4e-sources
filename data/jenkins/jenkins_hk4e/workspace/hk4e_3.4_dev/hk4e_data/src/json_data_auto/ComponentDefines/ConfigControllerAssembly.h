// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigControllerAssembly.h

// Line 18: range 000000000ED97766-000000000ED977EE
void __cdecl data::ConfigAvatarControllerAssemblySkillSubs::ConfigAvatarControllerAssemblySkillSubs(
        data::ConfigAvatarControllerAssemblySkillSubs *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->skill02__subs);
  std::string::basic_string(&this->skill03__subs);
  std::string::basic_string(&this->skill04__subs);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 000000000E82EC26-000000000E82ED65
void __cdecl data::ConfigAvatarControllerAssemblySkillSubs::ConfigAvatarControllerAssemblySkillSubs(
        data::ConfigAvatarControllerAssemblySkillSubs *const this,
        const data::ConfigAvatarControllerAssemblySkillSubs *a2)
{
  std::string *p_skill04__subs; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->skill02__subs, &a2->skill02__subs);
  std::string::basic_string(&this->skill03__subs, &a2->skill03__subs);
  p_skill04__subs = &a2->skill04__subs;
  std::string::basic_string(&this->skill04__subs, p_skill04__subs);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_skill04__subs, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_skill04__subs) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_skill04__subs, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 18: range 000000000E82ED66-000000000E82EDB0
void __cdecl data::ConfigAvatarControllerAssemblySkillSubs::~ConfigAvatarControllerAssemblySkillSubs(
        data::ConfigAvatarControllerAssemblySkillSubs *const this)
{
  std::string::~string(&this->skill04__subs);
  std::string::~string(&this->skill03__subs);
  std::string::~string(&this->skill02__subs);
  std::string::~string(this);
};

// Line 44: range 000000000ED977F0-000000000ED9787A
void __cdecl data::ConfigAvatarControllerAssembly::ConfigAvatarControllerAssembly(
        data::ConfigAvatarControllerAssembly *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->normal_move_subs);
  std::string::basic_string(&this->weapon_move_subs);
  data::ConfigAvatarControllerAssemblySkillSubs::ConfigAvatarControllerAssemblySkillSubs(&this->skill_subs);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 44: range 000000000E82EDB2-000000000E82EEF5
void __cdecl data::ConfigAvatarControllerAssembly::ConfigAvatarControllerAssembly(
        data::ConfigAvatarControllerAssembly *const this,
        const data::ConfigAvatarControllerAssembly *a2)
{
  data::ConfigAvatarControllerAssemblySkillSubs *p_skill_subs; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->normal_move_subs, &a2->normal_move_subs);
  std::string::basic_string(&this->weapon_move_subs, &a2->weapon_move_subs);
  p_skill_subs = &a2->skill_subs;
  data::ConfigAvatarControllerAssemblySkillSubs::ConfigAvatarControllerAssemblySkillSubs(
    &this->skill_subs,
    p_skill_subs);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_skill_subs, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_skill_subs) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_skill_subs, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 44: range 000000000E82EEF6-000000000E82EF40
void __cdecl data::ConfigAvatarControllerAssembly::~ConfigAvatarControllerAssembly(
        data::ConfigAvatarControllerAssembly *const this)
{
  data::ConfigAvatarControllerAssemblySkillSubs::~ConfigAvatarControllerAssemblySkillSubs(&this->skill_subs);
  std::string::~string(&this->weapon_move_subs);
  std::string::~string(&this->normal_move_subs);
  std::string::~string(this);
};
