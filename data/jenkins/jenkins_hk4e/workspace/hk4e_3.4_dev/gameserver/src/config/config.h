// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/config/config.h

// Line 24: range 00000000176368A8-00000000176369A1
void __cdecl OutputControlMonitorConfig::OutputControlMonitorConfig(OutputControlMonitorConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(_BYTE *)(((unsigned __int64)&this->method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->method);
  }
  this->method = HTTP_POST;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = HTTP_VER_1_1;
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
};

// Line 24: range 00000000158FFC9A-00000000158FFCD4
void __cdecl OutputControlMonitorConfig::~OutputControlMonitorConfig(OutputControlMonitorConfig *const this)
{
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 35: range 00000000176380A2-0000000017638157
void __cdecl TrackingIOConfig::TrackingIOConfig(TrackingIOConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_enable);
  }
  this->is_enable = 1;
};

// Line 35: range 00000000159001F6-0000000015900230
void __cdecl TrackingIOConfig::~TrackingIOConfig(TrackingIOConfig *const this)
{
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 45: range 0000000017638158-000000001763820D
void __cdecl AdjustTrackingConfig::AdjustTrackingConfig(AdjustTrackingConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_enable);
  }
  this->is_enable = 1;
};

// Line 45: range 0000000015900232-000000001590026C
void __cdecl AdjustTrackingConfig::~AdjustTrackingConfig(AdjustTrackingConfig *const this)
{
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 61: range 0000000017638262-000000001763833F
void __cdecl NicknameSignAuditConfig::NicknameSignAuditConfig(NicknameSignAuditConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timeout);
  }
  this->timeout = 5;
  std::string::basic_string(&this->language);
  std::string::basic_string(&this->queue_key);
};

// Line 61: range 00000000159002A6-0000000015900302
void __cdecl NicknameSignAuditConfig::~NicknameSignAuditConfig(NicknameSignAuditConfig *const this)
{
  std::string::~string(&this->queue_key);
  std::string::~string(&this->language);
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 73: range 0000000017638340-000000001763842F
void __cdecl AvatarRenameAuditConfig::AvatarRenameAuditConfig(AvatarRenameAuditConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timeout);
  }
  this->timeout = 5;
  std::string::basic_string(&this->language);
  std::string::basic_string(&this->quest_queue_key);
  std::string::basic_string(&this->item_queue_key);
};

// Line 73: range 0000000015900304-0000000015900372
void __cdecl AvatarRenameAuditConfig::~AvatarRenameAuditConfig(AvatarRenameAuditConfig *const this)
{
  std::string::~string(&this->item_queue_key);
  std::string::~string(&this->quest_queue_key);
  std::string::~string(&this->language);
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 86: range 0000000017638430-00000000176384EB
void __cdecl QueryIpRegionConfig::QueryIpRegionConfig(QueryIpRegionConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timeout);
  }
  this->timeout = 1;
};

// Line 86: range 0000000015900374-00000000159003AE
void __cdecl QueryIpRegionConfig::~QueryIpRegionConfig(QueryIpRegionConfig *const this)
{
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 95: range 00000000176A29B0-00000000176A48E6
void __cdecl Config::Config(Config *const this)
{
  int (**v1)(...); // rdx

  ConfigBase::ConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xml_config_version);
  }
  this->xml_config_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_audit);
  }
  this->is_audit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_internal_server);
  }
  this->is_internal_server = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ps4_recharge_card);
  }
  this->is_ps4_recharge_card = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->warn_online_player);
  }
  this->warn_online_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_online_player);
  }
  this->max_online_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->warn_online_player_per_thread);
  }
  this->warn_online_player_per_thread = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_online_player_per_thread);
  }
  this->max_online_player_per_thread = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->session_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->session_timeout);
  }
  this->session_timeout = 120;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_wait_reconnect);
  }
  this->time_wait_reconnect = 60;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_save_time_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_save_time_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_save_time_interval);
  }
  this->max_save_time_interval = 120;
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timer_save_time_interval);
  }
  this->timer_save_time_interval = 60;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_max_save_time_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_max_save_time_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_max_save_time_interval);
  }
  this->home_max_save_time_interval = 420;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_timer_save_time_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_timer_save_time_interval);
  }
  this->home_timer_save_time_interval = 300;
  if ( *(_BYTE *)(((unsigned __int64)&this->allow_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->allow_send_save_proto_cost_time_ms >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->allow_send_save_proto_cost_time_ms);
  }
  this->allow_send_save_proto_cost_time_ms = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hard_limit_send_save_proto_cost_time_ms);
  }
  this->hard_limit_send_save_proto_cost_time_ms = 500;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_save_check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_save_check_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->normal_save_check_interval);
  }
  this->normal_save_check_interval = 20;
  if ( *(_BYTE *)(((unsigned __int64)&this->shutdown_save_check_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shutdown_save_check_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shutdown_save_check_interval);
  }
  this->shutdown_save_check_interval = 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_after_send_proto >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_save_timeout_after_send_proto);
  }
  this->player_save_timeout_after_send_proto = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_save_timeout_max_cooldown_expo);
  }
  this->player_save_timeout_max_cooldown_expo = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_after_send_proto >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_save_timeout_after_send_proto);
  }
  this->home_save_timeout_after_send_proto = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_save_timeout_max_cooldown_expo);
  }
  this->home_save_timeout_max_cooldown_expo = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_no_player_destroy_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_no_player_destroy_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_no_player_destroy_time);
  }
  this->home_no_player_destroy_time = 600;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->warn_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->warn_bin_len);
  }
  this->warn_bin_len = 150000;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_bin_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_bin_len);
  }
  this->max_bin_len = 180000;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_block_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->warn_block_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->warn_block_bin_len);
  }
  this->warn_block_bin_len = 250000;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_block_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_block_bin_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_block_bin_len);
  }
  this->max_block_bin_len = 320000;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_sum_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->warn_sum_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->warn_sum_bin_len);
  }
  this->warn_sum_bin_len = 400000;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_sum_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_sum_bin_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_sum_bin_len);
  }
  this->max_sum_bin_len = 4800000;
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_home_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->warn_home_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->warn_home_bin_len);
  }
  this->warn_home_bin_len = 150000;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_home_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_home_bin_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_home_bin_len);
  }
  this->max_home_bin_len = 180000;
  if ( *(char *)(((unsigned __int64)&this->is_player_save_when_gacha >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_player_save_when_gacha);
  this->is_player_save_when_gacha = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_player_save_when_recharge);
  }
  this->is_player_save_when_recharge = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 34) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_save);
  }
  this->is_async_save = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gacha_player_save_check_item_type);
  }
  this->is_gacha_player_save_check_item_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open_compress >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open_compress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open_compress);
  }
  this->is_open_compress = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_compress_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_compress_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_compress_size);
  }
  this->min_compress_size = 1024;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ability_use_hash);
  }
  this->is_ability_use_hash = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gm_talk_open);
  }
  this->is_gm_talk_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 46) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_check_unexpected_pos);
  }
  this->is_check_unexpected_pos = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coroutine_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coroutine_timeout);
  }
  this->coroutine_timeout = 10000;
  if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->coroutine_disabled);
  }
  this->coroutine_disabled = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_simulation_open);
  }
  this->is_simulation_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 54) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_print_entity_debug_log);
  }
  this->is_print_entity_debug_log = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ip_port_log_report);
  }
  this->is_ip_port_log_report = 0;
  OutputControlMonitorConfig::OutputControlMonitorConfig(&this->output_control_monitor_config);
  if ( *(char *)(((unsigned __int64)&this->is_output_limit_can_alarm >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_output_limit_can_alarm);
  this->is_output_limit_can_alarm = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_output_control_can_alarm);
  }
  this->is_output_control_can_alarm = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 86) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_enable_extra_white_list);
  }
  this->is_enable_extra_white_list = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_delete_in_sight_when_appear);
  }
  this->is_delete_in_sight_when_appear = 1;
  std::map<unsigned int,ItemOutputLimitConfig>::map(&this->item_output_limit_map);
  SecurityConfig::SecurityConfig(&this->security_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_memory_report_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_memory_report_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lua_memory_report_interval);
  }
  this->lua_memory_report_interval = 0;
  common::tools::WordFilter::WordFilter(&this->word_filter);
  if ( *(char *)(((unsigned __int64)&this->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_word_filter_use_remote);
  this->is_word_filter_use_remote = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->remote_word_filter_is_ssl);
  }
  this->remote_word_filter_is_ssl = 0;
  std::string::basic_string(&this->remote_word_filter_host);
  std::string::basic_string(&this->remote_word_filter_port);
  std::string::basic_string(&this->remote_word_filter_uri);
  if ( *(char *)(((unsigned __int64)&this->push_tags_is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->push_tags_is_ssl);
  this->push_tags_is_ssl = 0;
  std::string::basic_string(&this->push_tags_host);
  std::string::basic_string(&this->push_tags_port);
  std::string::basic_string(&this->push_tags_uri);
  std::string::basic_string(&this->push_tags_app_secret);
  TrackingIOConfig::TrackingIOConfig(&this->tracking_io_config);
  AdjustTrackingConfig::AdjustTrackingConfig(&this->adjust_tracking_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_data_upload_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brief_data_upload_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->brief_data_upload_interval);
  }
  this->brief_data_upload_interval = 180;
  if ( *(_BYTE *)(((unsigned __int64)&this->rate_limit_login >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rate_limit_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rate_limit_login);
  }
  this->rate_limit_login = 100;
  if ( *(char *)(((unsigned __int64)&this->is_cal_login_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cal_login_load);
  this->is_cal_login_load = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->thread_num);
  }
  this->thread_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->app_id);
  }
  this->app_id = 0;
  FeatureSwitchMgr::FeatureSwitchMgr(&this->feature_switch_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->warn_scene_entity_limit_num);
  }
  this->warn_scene_entity_limit_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->error_scene_entity_limit_num);
  }
  this->error_scene_entity_limit_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->modifier_id_error_num);
  }
  this->modifier_id_error_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anti_cheat_max_damage_percentage);
  }
  this->anti_cheat_max_damage_percentage = 100.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anti_cheat_max_damage_percentage_ratio);
  }
  this->anti_cheat_max_damage_percentage_ratio = 100.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anti_cheat_max_damage_extra);
  }
  this->anti_cheat_max_damage_extra = 100000.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anti_cheat_max_damage);
  }
  this->anti_cheat_max_damage = 10000000.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_anti_cheat_damage_check_open);
  }
  this->is_anti_cheat_damage_check_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_group_unload_time_us);
  }
  this->max_group_unload_time_us = 1000;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_find_unregister_group);
  }
  this->is_forbid_find_unregister_group = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unload_invalid_groups_interval);
  }
  this->unload_invalid_groups_interval = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_threshold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_threshold >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unload_invalid_groups_threshold);
  }
  this->unload_invalid_groups_threshold = 250;
  if ( *(char *)(((unsigned __int64)&this->is_delete_reload_pos_when_disconnect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete_reload_pos_when_disconnect);
  this->is_delete_reload_pos_when_disconnect = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_home_group_load_forbid_async_load);
  }
  this->is_home_group_load_forbid_async_load = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_mutual_replace_check);
  }
  this->is_ignore_mutual_replace_check = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_special_region_trigger_group_load);
  }
  this->is_forbid_special_region_trigger_group_load = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_special_vision_type_control_group_load);
  }
  this->is_forbid_special_vision_type_control_group_load = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_group_bin_lazy_parse);
  }
  this->is_group_bin_lazy_parse = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_old_flow_group_refresh);
  }
  this->is_use_old_flow_group_refresh = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_mp >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_data_version_not_latest_ban_mp);
  }
  this->is_client_data_version_not_latest_ban_mp = 0;
  if ( *(char *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_client_data_version_not_latest_ban_gcg);
  this->is_client_data_version_not_latest_ban_gcg = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_find_entity_same_scene_with_dead);
  }
  this->is_find_entity_same_scene_with_dead = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_entity_id_circle_kick_out);
  }
  this->is_entity_id_circle_kick_out = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_anticheat_report_open);
  }
  this->is_client_anticheat_report_open = 0;
  std::set<unsigned int>::set(&this->packet_log_black_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_max_freq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_packet_max_freq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->union_packet_max_freq);
  }
  this->union_packet_max_freq = 8000;
  if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_max_freq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_max_freq >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->union_notify_max_freq);
  }
  this->union_notify_max_freq = 200;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_notify_max_freq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_notify_max_freq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_notify_max_freq);
  }
  this->combat_notify_max_freq = 1500;
  if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_kick_cheat_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_packet_kick_cheat_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->union_packet_kick_cheat_count);
  }
  this->union_packet_kick_cheat_count = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_cache_timeout);
  }
  this->custom_dungeon_cache_timeout = 60;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_enable_custom_dungeon_layout_check);
  }
  this->is_enable_custom_dungeon_layout_check = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_min_enter_interval);
  }
  this->custom_dungeon_min_enter_interval = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_recommend_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_recommend_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_min_recommend_interval);
  }
  this->custom_dungeon_min_recommend_interval = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_min_social_interval);
  }
  this->custom_dungeon_min_social_interval = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_store_cache_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_store_cache_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_store_cache_timeout);
  }
  this->custom_dungeon_store_cache_timeout = 60;
  if ( *(char *)(((unsigned __int64)&this->home_verify_is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->home_verify_is_enable_);
  this->home_verify_is_enable_ = 0;
  std::string::basic_string(&this->home_verify_host_);
  std::string::basic_string(&this->home_verify_port_);
  std::string::basic_string(&this->home_verify_uri_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_verify_timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_verify_timeout_);
  }
  this->home_verify_timeout_ = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->home_verify_is_ssl_);
  }
  this->home_verify_is_ssl_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->home_verify_is_detail_log_);
  }
  this->home_verify_is_detail_log_ = 0;
  std::string::basic_string(&this->home_verify_token_);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_error_notify_rate_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_error_notify_rate_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_error_notify_rate_limit);
  }
  this->server_error_notify_rate_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_abyss_kill_limbo_monster);
  }
  this->is_abyss_kill_limbo_monster = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 69) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_enable_setting_new_language);
  }
  this->is_enable_setting_new_language = 1;
  std::set<unsigned int>::set(&this->new_language_type_set);
  NicknameSignAuditConfig::NicknameSignAuditConfig(&this->nickname_sign_audit_config_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_timer_interval_rand_time);
  }
  this->activity_timer_interval_rand_time = 30;
  AvatarRenameAuditConfig::AvatarRenameAuditConfig(&this->avatar_rename_audit_config_);
  QueryIpRegionConfig::QueryIpRegionConfig(&this->query_ip_region_config_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_game_create_timeout);
  }
  this->gcg_game_create_timeout = 10;
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
};

// Line 95: range 00000000159003B0-00000000159005AD
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigBase = v1;
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
  QueryIpRegionConfig::~QueryIpRegionConfig(&this->query_ip_region_config_);
  AvatarRenameAuditConfig::~AvatarRenameAuditConfig(&this->avatar_rename_audit_config_);
  NicknameSignAuditConfig::~NicknameSignAuditConfig(&this->nickname_sign_audit_config_);
  std::set<unsigned int>::~set(&this->new_language_type_set);
  std::string::~string(&this->home_verify_token_);
  std::string::~string(&this->home_verify_uri_);
  std::string::~string(&this->home_verify_port_);
  std::string::~string(&this->home_verify_host_);
  std::set<unsigned int>::~set(&this->packet_log_black_set);
  FeatureSwitchMgr::~FeatureSwitchMgr(&this->feature_switch_mgr);
  AdjustTrackingConfig::~AdjustTrackingConfig(&this->adjust_tracking_config);
  TrackingIOConfig::~TrackingIOConfig(&this->tracking_io_config);
  std::string::~string(&this->push_tags_app_secret);
  std::string::~string(&this->push_tags_uri);
  std::string::~string(&this->push_tags_port);
  std::string::~string(&this->push_tags_host);
  std::string::~string(&this->remote_word_filter_uri);
  std::string::~string(&this->remote_word_filter_port);
  std::string::~string(&this->remote_word_filter_host);
  common::tools::WordFilter::~WordFilter(&this->word_filter);
  SecurityConfig::~SecurityConfig(&this->security_config);
  std::map<unsigned int,ItemOutputLimitConfig>::~map(&this->item_output_limit_map);
  OutputControlMonitorConfig::~OutputControlMonitorConfig(&this->output_control_monitor_config);
  ConfigBase::~ConfigBase(this);
};

// Line 95: range 00000000159005AE-00000000159005D8
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x19318uLL);
};

// Line 115: range 0000000013EB786E-0000000013EB78C0
bool __cdecl Config::isAudit(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_audit);
  }
  return this->is_audit;
};

// Line 118: range 00000000131C0418-00000000131C046A
bool __cdecl Config::isInternalServer(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_internal_server);
  }
  return this->is_internal_server;
};

// Line 121: range 0000000017209092-00000000172090DE
uint32_t __cdecl Config::getRegionId(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->region_id);
  }
  return this->region_id;
};
