// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/lua_config_mgr.h

// Line 22: range 000000000F9BEB28-000000000F9BEB97
void __cdecl PatternGroupScriptConfig::PatternGroupScriptConfig(PatternGroupScriptConfig *const this)
{
  __int64 v1; // rsi

  GroupScriptConfig::GroupScriptConfig(&this->group_config);
  GroupInfoScriptConfig::GroupInfoScriptConfig(&this->group_info_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pattern_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pattern_id, v1);
  }
  this->pattern_id = 0;
};

// Line 22: range 000000000F972854-000000000F972880
void __cdecl PatternGroupScriptConfig::~PatternGroupScriptConfig(PatternGroupScriptConfig *const this)
{
  GroupInfoScriptConfig::~GroupInfoScriptConfig(&this->group_info_config);
  GroupScriptConfig::~GroupScriptConfig(&this->group_config);
};

// Line 34: range 000000000F790344-000000000F79035E
void __cdecl LuaStaticCheckParam::~LuaStaticCheckParam(LuaStaticCheckParam *const this)
{
  std::shared_ptr<LuaScript>::~shared_ptr(&this->lua_script_ptr);
};

// Line 153: range 000000000F7768FA-000000000F77690D
const std::set<std::string> *__cdecl LuaConfigMgr::getLogicStateSGVNameSet[abi:cxx11](LuaConfigMgr *const this)
{
  return &this->logic_state_sgv_name_set_;
};
