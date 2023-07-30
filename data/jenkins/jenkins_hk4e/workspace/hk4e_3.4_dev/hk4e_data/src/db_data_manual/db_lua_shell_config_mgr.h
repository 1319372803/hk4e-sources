// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_lua_shell_config_mgr.h

// Line 34: range 000000000CE04AA2-000000000CE04B41
std::size_t __cdecl std::hash<LuaShellIndex>::operator()(
        const std::hash<LuaShellIndex> *const this,
        const LuaShellIndex *k)
{
  unsigned __int64 v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  v2 = (unsigned __int64)k->use_type << 32;
  if ( *(_BYTE *)(((unsigned __int64)&k->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)k + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&k->channel);
  }
  return v2 + k->channel;
};

// Line 43: range 000000000CE44A50-000000000CE44BB3
void __cdecl data::LuaShellConfig::LuaShellConfig(data::LuaShellConfig *const this)
{
  std::string::basic_string(&this->lua_shell);
  std::unordered_set<unsigned int>::unordered_set(&this->uid_set);
  std::unordered_set<unsigned int>::unordered_set(&this->platform_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_type);
  }
  this->use_type = 0;
  if ( *(char *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_client_report);
  this->is_check_client_report = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_kick);
  }
  this->is_kick = 0;
  std::string::basic_string(&this->check_json_key_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel);
  }
  this->channel = 0;
};

// Line 43: range 000000000D3BD8DE-000000000D3BDDC2
void __cdecl data::LuaShellConfig::LuaShellConfig(data::LuaShellConfig *const this, const data::LuaShellConfig *a2)
{
  uint32_t id; // ecx
  uint32_t percent; // ecx
  uint32_t created_at; // ecx
  uint32_t protocol_type; // ecx
  uint32_t use_type; // ecx
  bool is_check_client_report; // cl
  bool is_kick; // cl
  uint32_t channel; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->lua_shell, &a2->lua_shell);
  std::unordered_set<unsigned int>::unordered_set(&this->uid_set, &a2->uid_set);
  std::unordered_set<unsigned int>::unordered_set(&this->platform_type_set, &a2->platform_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->percent);
  }
  this->percent = percent;
  if ( *(_BYTE *)(((unsigned __int64)&a2->created_at >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->created_at >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->created_at);
  }
  created_at = a2->created_at;
  if ( *(_BYTE *)(((unsigned __int64)&this->created_at >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->created_at >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->created_at);
  }
  this->created_at = created_at;
  if ( *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protocol_type);
  }
  protocol_type = a2->protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protocol_type);
  }
  this->protocol_type = protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->use_type);
  }
  use_type = a2->use_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_type);
  }
  this->use_type = use_type;
  if ( *(char *)(((unsigned __int64)&a2->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_check_client_report);
  is_check_client_report = a2->is_check_client_report;
  if ( *(char *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_client_report);
  this->is_check_client_report = is_check_client_report;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_kick);
  }
  is_kick = a2->is_kick;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_kick);
  }
  this->is_kick = is_kick;
  std::string::basic_string(&this->check_json_key_str, &a2->check_json_key_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel);
  }
  channel = a2->channel;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel);
  }
  this->channel = channel;
};

// Line 43: range 000000000CE44BB4-000000000CE44C04
void __cdecl data::LuaShellConfig::~LuaShellConfig(data::LuaShellConfig *const this)
{
  std::string::~string(&this->check_json_key_str);
  std::unordered_set<unsigned int>::~unordered_set(&this->platform_type_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->uid_set);
  std::string::~string(&this->lua_shell);
};
