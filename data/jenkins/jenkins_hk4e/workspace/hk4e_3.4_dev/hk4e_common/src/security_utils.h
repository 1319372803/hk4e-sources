// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/security_utils.h

// Line 42: range 000000000C88B530-000000000C88B63C
void __cdecl BaseAntiCheatLogConfig::BaseAntiCheatLogConfig(BaseAntiCheatLogConfig *const this)
{
  int (**v1)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v1 = (int (**)(...))(&`vtable for'BaseAntiCheatLogConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  if ( *(char *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable);
  this->is_enable = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->log_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->log_interval);
  }
  this->log_interval = 600;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->log_limit);
  }
  this->log_limit = 100;
};

// Line 45: range 000000000C84D6DA-000000000C84D71B
void __cdecl BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(BaseAntiCheatLogConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseAntiCheatLogConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
};

// Line 45: range 000000000C84D71C-000000000C84D746
void __cdecl BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(BaseAntiCheatLogConfig *const this)
{
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 48: range 000000000C88D4FA-000000000C88D518
void __cdecl SegmentCrcModuleConfig::~SegmentCrcModuleConfig(SegmentCrcModuleConfig *const this)
{
  std::string::~string(&this->crc_module_file_str);
};

// Line 58: range 000000000CE3E884-000000000CE3E95C
void __cdecl SecurityAntiOfflineSwitchConfig::SecurityAntiOfflineSwitchConfig(
        SecurityAntiOfflineSwitchConfig *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_anti_offline_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forbid_login_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forbid_login_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forbid_login_level);
  }
  this->forbid_login_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_check_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_check_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_check_level);
  }
  this->max_check_level = 0;
  std::set<unsigned int>::set(&this->forbid_login_result_type_set);
};

// Line 73: range 000000000C87F47A-000000000C87F4A8
void __cdecl EnvironmentErrorConfig::~EnvironmentErrorConfig(EnvironmentErrorConfig *const this)
{
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex(&this->black_regex);
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex(&this->white_regex);
};

// Line 73: range 000000000C87F136-000000000C87F154
void __cdecl SecurityAntiOfflineSwitchConfig::~SecurityAntiOfflineSwitchConfig(
        SecurityAntiOfflineSwitchConfig *const this)
{
  std::set<unsigned int>::~set(&this->forbid_login_result_type_set);
};

// Line 74: range 000000000CE35B8C-000000000CE35C29
void __cdecl SegmentCrcModuleConfig::SegmentCrcModuleConfig(SegmentCrcModuleConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->crc_module_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crc_module_type);
  }
  this->crc_module_type = 0;
  std::string::basic_string(&this->crc_module_file_str);
};

// Line 74: range 000000000CE45FA6-000000000CE460C3
void __cdecl SegmentCrcModuleConfig::SegmentCrcModuleConfig(
        SegmentCrcModuleConfig *const this,
        SegmentCrcModuleConfig *a2)
{
  uint32_t crc_module_index; // ecx
  uint32_t crc_module_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  crc_module_index = a2->crc_module_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->crc_module_index = crc_module_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->crc_module_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->crc_module_type);
  }
  crc_module_type = a2->crc_module_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crc_module_type);
  }
  this->crc_module_type = crc_module_type;
  std::string::basic_string(&this->crc_module_file_str, &a2->crc_module_file_str);
};

// Line 74: range 000000000CE35D64-000000000CE35E81
void __cdecl SegmentCrcModuleConfig::SegmentCrcModuleConfig(
        SegmentCrcModuleConfig *const this,
        const SegmentCrcModuleConfig *a2)
{
  uint32_t crc_module_index; // ecx
  uint32_t crc_module_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  crc_module_index = a2->crc_module_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->crc_module_index = crc_module_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->crc_module_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->crc_module_type);
  }
  crc_module_type = a2->crc_module_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crc_module_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crc_module_type);
  }
  this->crc_module_type = crc_module_type;
  std::string::basic_string(&this->crc_module_file_str, &a2->crc_module_file_str);
};

// Line 80: range 000000000CE35B24-000000000CE35B8B
void __cdecl SegmentCrcPlatformConfig::SegmentCrcPlatformConfig(SegmentCrcPlatformConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->platform_type = 0;
  std::string::basic_string(&this->platform_dir_str);
  std::vector<SegmentCrcModuleConfig>::vector(&this->crc_module_config_vec);
};

// Line 80: range 000000000CE6FA0E-000000000CE6FAC1
void __cdecl SegmentCrcPlatformConfig::SegmentCrcPlatformConfig(
        SegmentCrcPlatformConfig *const this,
        SegmentCrcPlatformConfig *a2)
{
  uint32_t platform_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  platform_type = a2->platform_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->platform_type = platform_type;
  std::string::basic_string(&this->platform_dir_str, &a2->platform_dir_str);
  std::vector<SegmentCrcModuleConfig>::vector(&this->crc_module_config_vec, &a2->crc_module_config_vec);
};

// Line 88: range 000000000CE3E95E-000000000CE3E9FD
void __cdecl EnvironmentErrorConfig::EnvironmentErrorConfig(EnvironmentErrorConfig *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = 0;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(&this->white_regex);
  if ( *(char *)(((unsigned __int64)&this->is_check_black_regex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_black_regex);
  this->is_check_black_regex = 0;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(&this->black_regex);
};

// Line 88: range 000000000CE70F20-000000000CE7104A
void __cdecl EnvironmentErrorConfig::EnvironmentErrorConfig(
        EnvironmentErrorConfig *const this,
        const EnvironmentErrorConfig *a2)
{
  bool is_open; // cl
  bool is_check_black_regex; // cl

  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_open = a2->is_open;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = is_open;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(&this->white_regex, &a2->white_regex);
  if ( *(char *)(((unsigned __int64)&a2->is_check_black_regex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_check_black_regex);
  is_check_black_regex = a2->is_check_black_regex;
  if ( *(char *)(((unsigned __int64)&this->is_check_black_regex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_black_regex);
  this->is_check_black_regex = is_check_black_regex;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(&this->black_regex, &a2->black_regex);
};

// Line 97: range 000000000C88B124-000000000C88B150
void __cdecl SafeServerConfig::SafeServerConfig(SafeServerConfig *const this)
{
  SafeServerConfig::ConnectionStatusNotifyConfig::ConnectionStatusNotifyConfig(&this->connection_status_notify_config);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->security_platform_map);
};

// Line 97: range 000000000C84D68C-000000000C84D6B8
void __cdecl SafeServerConfig::~SafeServerConfig(SafeServerConfig *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->security_platform_map);
  SafeServerConfig::ConnectionStatusNotifyConfig::~ConnectionStatusNotifyConfig(&this->connection_status_notify_config);
};

// Line 100: range 000000000C88AE40-000000000C88AFC8
void __cdecl SafeServerConfig::ConnectionStatusNotifyConfig::ConnectionStatusNotifyConfig(
        SafeServerConfig::ConnectionStatusNotifyConfig *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_enable = 0;
  std::string::basic_string(&this->host);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->login_uri);
  std::string::basic_string(&this->logout_uri);
  std::string::basic_string(&this->heartbeat_uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  std::string::basic_string(&this->method);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout);
  }
  this->timeout = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->heartbeat_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->heartbeat_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->heartbeat_interval);
  }
  this->heartbeat_interval = 0;
  std::map<std::string,std::string>::map(&this->head_map);
};

// Line 100: range 000000000C84D5EA-000000000C84D66E
void __cdecl SafeServerConfig::ConnectionStatusNotifyConfig::~ConnectionStatusNotifyConfig(
        SafeServerConfig::ConnectionStatusNotifyConfig *const this)
{
  std::map<std::string,std::string>::~map(&this->head_map);
  std::string::~string(&this->method);
  std::string::~string(&this->heartbeat_uri);
  std::string::~string(&this->logout_uri);
  std::string::~string(&this->login_uri);
  std::string::~string(&this->port);
  std::string::~string(&this->host);
};

// Line 115: range 000000000C87F22C-000000000C87F25A
void __cdecl SegmentCrcPlatformConfig::~SegmentCrcPlatformConfig(SegmentCrcPlatformConfig *const this)
{
  std::vector<SegmentCrcModuleConfig>::~vector(&this->crc_module_config_vec);
  std::string::~string(&this->platform_dir_str);
};

// Line 120: range 000000000C88B152-000000000C88B26D
void __cdecl CheckQiandaoguaConfig::CheckQiandaoguaConfig(CheckQiandaoguaConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_enable = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_count_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_count_limit);
  }
  this->attack_count_limit = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_entry_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_entry_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_entry_limit);
  }
  this->record_entry_limit = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anticheat_log_limit);
  }
  this->anticheat_log_limit = 100;
};

// Line 129: range 000000000C88B26E-000000000C88B2EB
void __cdecl ClientTotalTickTimeConfig::ClientTotalTickTimeConfig(ClientTotalTickTimeConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->max_delay_time = 30.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anticheat_log_limit);
  }
  this->anticheat_log_limit = 100;
};

// Line 136: range 000000000C88B2EC-000000000C88B3C4
void __cdecl ClientServerGlobalValueConfig::ClientServerGlobalValueConfig(ClientServerGlobalValueConfig *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = 0;
  std::string::basic_string(&this->sgv_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_seconds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_seconds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_seconds);
  }
  this->timeout_seconds = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anticheat_log_limit);
  }
  this->anticheat_log_limit = 100;
};

// Line 136: range 000000000C84D6BA-000000000C84D6D8
void __cdecl ClientServerGlobalValueConfig::~ClientServerGlobalValueConfig(ClientServerGlobalValueConfig *const this)
{
  std::string::~string(&this->sgv_name);
};

// Line 142: range 000000000CE75DC2-000000000CE75E57
void __cdecl SecurityAntiOfflineLevelConfig::SecurityAntiOfflineLevelConfig(SecurityAntiOfflineLevelConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->down_grade_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_grade_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_grade_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_grade_num);
  }
  this->up_grade_num = 0;
};

// Line 145: range 000000000C88B3C6-000000000C88B4ED
void __cdecl StaminaCheckConfig::StaminaCheckConfig(StaminaCheckConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_enable = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_limit);
  }
  this->record_limit = -10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->low_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->low_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->low_limit);
  }
  this->low_limit = -500.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_log_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anticheat_log_limit);
  }
  this->anticheat_log_limit = 100;
};

// Line 154: range 000000000C88B63E-000000000C88B81B
void __cdecl PacketCostTimeExceedLimitConfig::PacketCostTimeExceedLimitConfig(
        PacketCostTimeExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  BaseAntiCheatLogConfig::BaseAntiCheatLogConfig(this);
  v1 = (int (**)(...))(&`vtable for'PacketCostTimeExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->check_interval_ms = 5000LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_percent >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->cost_time_percent = 50LL;
  if ( *(char *)(((unsigned __int64)&this->is_enable_kick >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_kick);
  this->is_enable_kick = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kick_time_percent >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->kick_time_percent = 80LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_kick_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_kick_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_kick_interval);
  }
  this->check_kick_interval = 60;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_kick_count);
  }
  this->trigger_kick_count = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_kick_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_kick_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_kick_interval);
  }
  this->thread_kick_interval = 60;
};

// Line 154: range 000000000C84D748-000000000C84D795
void __cdecl PacketCostTimeExceedLimitConfig::~PacketCostTimeExceedLimitConfig(
        PacketCostTimeExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PacketCostTimeExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(this);
};

// Line 154: range 000000000C84D796-000000000C84D7C0
void __cdecl PacketCostTimeExceedLimitConfig::~PacketCostTimeExceedLimitConfig(
        PacketCostTimeExceedLimitConfig *const this)
{
  PacketCostTimeExceedLimitConfig::~PacketCostTimeExceedLimitConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 167: range 000000000C88B81C-000000000C88B869
void __cdecl RecvPacketFreqExceedLimitConfig::RecvPacketFreqExceedLimitConfig(
        RecvPacketFreqExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  BaseAntiCheatLogConfig::BaseAntiCheatLogConfig(this);
  v1 = (int (**)(...))(&`vtable for'RecvPacketFreqExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
};

// Line 167: range 000000000C84D7C2-000000000C84D80F
void __cdecl RecvPacketFreqExceedLimitConfig::~RecvPacketFreqExceedLimitConfig(
        RecvPacketFreqExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RecvPacketFreqExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(this);
};

// Line 167: range 000000000C84D810-000000000C84D83A
void __cdecl RecvPacketFreqExceedLimitConfig::~RecvPacketFreqExceedLimitConfig(
        RecvPacketFreqExceedLimitConfig *const this)
{
  RecvPacketFreqExceedLimitConfig::~RecvPacketFreqExceedLimitConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 173: range 000000000C88B86A-000000000C88B8B7
void __cdecl SinglePacketFreqExceedLimitConfig::SinglePacketFreqExceedLimitConfig(
        SinglePacketFreqExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  BaseAntiCheatLogConfig::BaseAntiCheatLogConfig(this);
  v1 = (int (**)(...))(&`vtable for'SinglePacketFreqExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
};

// Line 173: range 000000000C84D83C-000000000C84D889
void __cdecl SinglePacketFreqExceedLimitConfig::~SinglePacketFreqExceedLimitConfig(
        SinglePacketFreqExceedLimitConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SinglePacketFreqExceedLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig(this);
};

// Line 173: range 000000000C84D88A-000000000C84D8B4
void __cdecl SinglePacketFreqExceedLimitConfig::~SinglePacketFreqExceedLimitConfig(
        SinglePacketFreqExceedLimitConfig *const this)
{
  SinglePacketFreqExceedLimitConfig::~SinglePacketFreqExceedLimitConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 179: range 000000000C88B8B8-000000000C88B94B
void __cdecl GadgetInteractBeyondCheckDistanceConfig::GadgetInteractBeyondCheckDistanceConfig(
        GadgetInteractBeyondCheckDistanceConfig *const this)
{
  int (**v1)(...); // rdx

  BaseAntiCheatLogConfig::BaseAntiCheatLogConfig((BaseAntiCheatLogConfig *const)this);
  v1 = (int (**)(...))(&`vtable for'GadgetInteractBeyondCheckDistanceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_record_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_record_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_record_count);
  }
  this->min_record_count = 5;
};

// Line 179: range 000000000C84D904-000000000C84D92E
void __cdecl GadgetInteractBeyondCheckDistanceConfig::~GadgetInteractBeyondCheckDistanceConfig(
        GadgetInteractBeyondCheckDistanceConfig *const this)
{
  GadgetInteractBeyondCheckDistanceConfig::~GadgetInteractBeyondCheckDistanceConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 179: range 000000000C84D8B6-000000000C84D903
void __cdecl GadgetInteractBeyondCheckDistanceConfig::~GadgetInteractBeyondCheckDistanceConfig(
        GadgetInteractBeyondCheckDistanceConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetInteractBeyondCheckDistanceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig((BaseAntiCheatLogConfig *const)this);
};

// Line 186: range 000000000C88B94C-000000000C88B9DB
void __cdecl LuaShellSecurityConfig::LuaShellSecurityConfig(LuaShellSecurityConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_check_timeout_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_shell_timeout_seconds >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lua_shell_timeout_seconds >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lua_shell_timeout_seconds);
  }
  this->lua_shell_timeout_seconds = 60;
};

// Line 193: range 000000000C88B9DC-000000000C88BA71
void __cdecl AttackDamageReportConfig::AttackDamageReportConfig(AttackDamageReportConfig *const this)
{
  int (**v1)(...); // rdx

  BaseAntiCheatLogConfig::BaseAntiCheatLogConfig((BaseAntiCheatLogConfig *const)this);
  v1 = (int (**)(...))(&`vtable for'AttackDamageReportConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_report_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_report_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_report_damage);
  }
  this->min_report_damage = 0.0;
};

// Line 193: range 000000000C84D930-000000000C84D97D
void __cdecl AttackDamageReportConfig::~AttackDamageReportConfig(AttackDamageReportConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AttackDamageReportConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DescribalBase = v1;
  BaseAntiCheatLogConfig::~BaseAntiCheatLogConfig((BaseAntiCheatLogConfig *const)this);
};

// Line 193: range 000000000C84D97E-000000000C84D9A8
void __cdecl AttackDamageReportConfig::~AttackDamageReportConfig(AttackDamageReportConfig *const this)
{
  AttackDamageReportConfig::~AttackDamageReportConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 200: range 000000000C88BA72-000000000C88C1EC
void __cdecl SecurityConfig::SecurityConfig(SecurityConfig *const this)
{
  std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::map(&this->platform_switch_map);
  std::map<unsigned int,SecurityAntiOfflineLevelConfig>::map(&this->level_config_map);
  if ( *(char *)(((unsigned __int64)&this->is_other_platform_need_check_anti_offline >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_other_platform_need_check_anti_offline);
  this->is_other_platform_need_check_anti_offline = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sec_channel_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sec_channel_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_sec_channel_open);
  }
  this->is_sec_channel_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_checksum_version_not_found_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_checksum_version_not_found_forbid_login >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_checksum_version_not_found_forbid_login);
  }
  this->is_checksum_version_not_found_forbid_login = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_client_verion_hash_fail_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_client_verion_hash_fail_forbid_login >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_check_client_verion_hash_fail_forbid_login);
  }
  this->is_check_client_verion_hash_fail_forbid_login = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_segment_crc_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_segment_crc_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_segment_crc_open);
  }
  this->is_segment_crc_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_checksum_version_not_found_segment_crc_default_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 101) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_checksum_version_not_found_segment_crc_default_open >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_checksum_version_not_found_segment_crc_default_open);
  }
  this->is_checksum_version_not_found_segment_crc_default_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_crc_max_interact_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->segment_crc_max_interact_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->segment_crc_max_interact_count);
  }
  this->segment_crc_max_interact_count = 20;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_segment_crc_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_segment_crc_config >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_segment_crc_config);
  }
  this->is_has_segment_crc_config = 0;
  std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::unordered_map(&this->segment_crc_config_map);
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::unordered_map(&this->platform_segment_crc_map);
  if ( *(char *)(((unsigned __int64)&this->is_move_speed_check_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_move_speed_check_open);
  this->is_move_speed_check_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_move_speed_check_kick_player >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_move_speed_check_kick_player);
  }
  this->is_move_speed_check_kick_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 30) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_move_speed_check_drag_player >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_move_speed_check_drag_player);
  }
  this->is_move_speed_check_drag_player = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_open >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_scene_time_move_speed_check_open);
  }
  this->is_scene_time_move_speed_check_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_kick_player >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_scene_time_move_speed_check_kick_player);
  }
  this->is_scene_time_move_speed_check_kick_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 27) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_time_move_speed_check_drag_player >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_scene_time_move_speed_check_drag_player);
  }
  this->is_scene_time_move_speed_check_drag_player = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_report_move_speed_over_limit_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_report_move_speed_over_limit_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_report_move_speed_over_limit_max_count);
  }
  this->client_report_move_speed_over_limit_max_count = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ability_config_hash_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ability_config_hash_check_open >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ability_config_hash_check_open);
  }
  this->is_ability_config_hash_check_open = 1;
  std::unordered_map<int,std::string>::unordered_map(&this->ability_config_hash_whitelist_map);
  if ( *(char *)(((unsigned __int64)&this->is_enable_client_hash_debug >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_client_hash_debug);
  this->is_enable_client_hash_debug = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unity_engine_timescale_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unity_engine_timescale_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unity_engine_timescale_limit);
  }
  this->unity_engine_timescale_limit = 2.0;
  if ( *(char *)(((unsigned __int64)&this->is_forbid_monster_disallowed_death >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_monster_disallowed_death);
  this->is_forbid_monster_disallowed_death = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_move_back_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_move_back_monster_on_forbid_death >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_move_back_monster_on_forbid_death);
  }
  this->is_move_back_monster_on_forbid_death = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_revive_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 50) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_revive_monster_on_forbid_death >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_revive_monster_on_forbid_death);
  }
  this->is_revive_monster_on_forbid_death = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_server_override_map >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_server_override_map);
  }
  this->is_use_server_override_map = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_server_dynamic_value >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_server_dynamic_value);
  }
  this->is_use_server_dynamic_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mouse_macro_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mouse_macro_check_open >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_mouse_macro_check_open);
  }
  this->is_mouse_macro_check_open = 1;
  std::map<unsigned int,EnvironmentErrorConfig>::map(&this->environment_config_map);
  SafeServerConfig::SafeServerConfig(&this->safe_server_config);
  CheckQiandaoguaConfig::CheckQiandaoguaConfig(&this->check_qiandaogua_config);
  ClientTotalTickTimeConfig::ClientTotalTickTimeConfig(&this->client_total_tick_time_config);
  ClientServerGlobalValueConfig::ClientServerGlobalValueConfig(&this->client_server_global_value_config);
  StaminaCheckConfig::StaminaCheckConfig(&this->stamina_check_config);
  PacketCostTimeExceedLimitConfig::PacketCostTimeExceedLimitConfig(&this->packet_cost_time_exceed_limit_config);
  RecvPacketFreqExceedLimitConfig::RecvPacketFreqExceedLimitConfig(&this->recv_packet_freq_exceed_limit_config);
  SinglePacketFreqExceedLimitConfig::SinglePacketFreqExceedLimitConfig(&this->single_packet_freq_exceed_limit_config);
  GadgetInteractBeyondCheckDistanceConfig::GadgetInteractBeyondCheckDistanceConfig(&this->gadget_interact_beyond_check_distance_config);
  LuaShellSecurityConfig::LuaShellSecurityConfig(&this->lua_shell_security_config);
  AttackDamageReportConfig::AttackDamageReportConfig(&this->attack_damage_report_config);
};

// Line 200: range 000000000C84D9AA-000000000C84DA98
void __cdecl SecurityConfig::~SecurityConfig(SecurityConfig *const this)
{
  AttackDamageReportConfig::~AttackDamageReportConfig(&this->attack_damage_report_config);
  GadgetInteractBeyondCheckDistanceConfig::~GadgetInteractBeyondCheckDistanceConfig(&this->gadget_interact_beyond_check_distance_config);
  SinglePacketFreqExceedLimitConfig::~SinglePacketFreqExceedLimitConfig(&this->single_packet_freq_exceed_limit_config);
  RecvPacketFreqExceedLimitConfig::~RecvPacketFreqExceedLimitConfig(&this->recv_packet_freq_exceed_limit_config);
  PacketCostTimeExceedLimitConfig::~PacketCostTimeExceedLimitConfig(&this->packet_cost_time_exceed_limit_config);
  ClientServerGlobalValueConfig::~ClientServerGlobalValueConfig(&this->client_server_global_value_config);
  SafeServerConfig::~SafeServerConfig(&this->safe_server_config);
  std::map<unsigned int,EnvironmentErrorConfig>::~map(&this->environment_config_map);
  std::unordered_map<int,std::string>::~unordered_map(&this->ability_config_hash_whitelist_map);
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::~unordered_map(&this->platform_segment_crc_map);
  std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::~unordered_map(&this->segment_crc_config_map);
  std::map<unsigned int,SecurityAntiOfflineLevelConfig>::~map(&this->level_config_map);
  std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::~map(&this->platform_switch_map);
};

// Line 231: range 000000000CE70804-000000000CE70997
void __cdecl SecurityAntiOfflineSwitchConfig::SecurityAntiOfflineSwitchConfig(
        SecurityAntiOfflineSwitchConfig *const this,
        SecurityAntiOfflineSwitchConfig *a2)
{
  bool is_anti_offline_open; // cl
  uint32_t forbid_login_level; // ecx
  uint32_t max_check_level; // ecx

  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_anti_offline_open = a2->is_anti_offline_open;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_anti_offline_open = is_anti_offline_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->forbid_login_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->forbid_login_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->forbid_login_level);
  }
  forbid_login_level = a2->forbid_login_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->forbid_login_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forbid_login_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forbid_login_level);
  }
  this->forbid_login_level = forbid_login_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_check_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_check_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_check_level);
  }
  max_check_level = a2->max_check_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_check_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_check_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_check_level);
  }
  this->max_check_level = max_check_level;
  std::set<unsigned int>::set(&this->forbid_login_result_type_set, &a2->forbid_login_result_type_set);
};

// Line 265: range 000000000C79E48E-000000000C79E523
void __cdecl AntiCheatLogRecord::AntiCheatLogRecord(AntiCheatLogRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->last_log_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->log_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->log_count);
  }
  this->log_count = 0;
};

// Line 341: range 000000000CEB57D0-000000000CEB580E
void __cdecl SegmentCRCNode::~SegmentCRCNode(SegmentCRCNode *const this)
{
  std::shared_ptr<SegmentCRCNode>::~shared_ptr(&this->right_);
  std::shared_ptr<SegmentCRCNode>::~shared_ptr(&this->left_);
  std::string::~string(&this->crc_);
};

// Line 344: range 000000000CE347D2-000000000CE348AC
void __cdecl SegmentCRCNode::SegmentCRCNode(
        SegmentCRCNode *const this,
        uint32_t offset,
        uint32_t size,
        std::string *crc)
{
  std::remove_reference<std::string&>::type *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->offset_ = offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->size_);
  }
  this->size_ = size;
  v4 = std::move<std::string &>(crc);
  std::string::basic_string(&this->crc_, v4);
  std::shared_ptr<SegmentCRCNode>::shared_ptr(&this->left_);
  std::shared_ptr<SegmentCRCNode>::shared_ptr(&this->right_);
};

// Line 347: range 000000000CE348AE-000000000CE348F0
uint32_t __cdecl SegmentCRCNode::getOffset(SegmentCRCNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->offset_;
};

// Line 348: range 000000000CE348F2-000000000CE34941
uint32_t __cdecl SegmentCRCNode::getSize(SegmentCRCNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->size_);
  }
  return this->size_;
};

// Line 349: range 000000000CE34942-000000000CE34953
const std::string *__cdecl SegmentCRCNode::getCRC[abi:cxx11](SegmentCRCNode *const this)
{
  return &this->crc_;
};

// Line 354: range 000000000CE349F8-000000000CE34A24
SegmentCRCNodePtr __cdecl SegmentCRCNode::getLeftChild(SegmentCRCNode *const this)
{
  __int64 v1; // rsi
  SegmentCRCNodePtr result; // rax

  std::shared_ptr<SegmentCRCNode>::shared_ptr(
    (std::shared_ptr<SegmentCRCNode> *const)this,
    (const std::shared_ptr<SegmentCRCNode> *)(v1 + 40));
  result._M_ptr = this;
  return result;
};

// Line 355: range 000000000CE34A26-000000000CE34A52
SegmentCRCNodePtr __cdecl SegmentCRCNode::getRightChild(SegmentCRCNode *const this)
{
  __int64 v1; // rsi
  SegmentCRCNodePtr result; // rax

  std::shared_ptr<SegmentCRCNode>::shared_ptr(
    (std::shared_ptr<SegmentCRCNode> *const)this,
    (const std::shared_ptr<SegmentCRCNode> *)(v1 + 56));
  result._M_ptr = this;
  return result;
};

// Line 377: range 000000000CEB5776-000000000CEB57A0
void __cdecl SegmentCRCTree::~SegmentCRCTree(SegmentCRCTree *const this)
{
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::~unordered_map(&this->segment_crc_map_);
  std::shared_ptr<SegmentCRCNode>::~shared_ptr(&this->root_);
};
