// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRocketJump.h

// Line 50: range 000000001217B142-000000001217B1A7
void __cdecl data::ConfigRocketJump::ConfigRocketJump(data::ConfigRocketJump *const this)
{
  __int64 v1; // rsi

  std::vector<data::RocketJumpMoveSpeedRatioParam>::vector(&this->param_list);
  std::vector<std::string>::vector(&this->animator_state_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 50: range 000000001265422E-0000000012654307
void __cdecl data::ConfigRocketJump::ConfigRocketJump(
        data::ConfigRocketJump *const this,
        const data::ConfigRocketJump *a2)
{
  data::StringArray *p_animator_state_ids; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::RocketJumpMoveSpeedRatioParam>::vector(&this->param_list, &a2->param_list);
  p_animator_state_ids = &a2->animator_state_ids;
  std::vector<std::string>::vector(&this->animator_state_ids, p_animator_state_ids);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_animator_state_ids, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_animator_state_ids) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_animator_state_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 000000001217B1A8-000000001217B1D2
void __cdecl data::ConfigRocketJump::~ConfigRocketJump(data::ConfigRocketJump *const this)
{
  std::vector<std::string>::~vector(&this->animator_state_ids);
  std::vector<data::RocketJumpMoveSpeedRatioParam>::~vector(&this->param_list);
};
