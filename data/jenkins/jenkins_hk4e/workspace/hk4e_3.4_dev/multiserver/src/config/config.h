// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/config/config.h

// Line 21: range 000000000DE6CCD4-000000000DE6D33A
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
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config_);
  common::tools::WordFilter::WordFilter(&this->word_filter);
  std::map<unsigned int,ItemOutputLimitConfig>::map(&this->item_output_limit_map);
  FeatureSwitchMgr::FeatureSwitchMgr(&this->feature_switch_mgr);
  if ( *(char *)(((unsigned __int64)&this->is_custom_dungeon_verify_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_custom_dungeon_verify_enable);
  this->is_custom_dungeon_verify_enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_custom_dungeon_verify_ssl);
  }
  this->is_custom_dungeon_verify_ssl = 0;
  std::string::basic_string(&this->custom_dungeon_verify_host);
  std::string::basic_string(&this->custom_dungeon_verify_port);
  std::string::basic_string(&this->custom_dungeon_verify_uri);
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_verify_timeout);
  }
  this->custom_dungeon_verify_timeout = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_cache_max_size);
  }
  this->custom_dungeon_cache_max_size = 500;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_cache_timeout);
  }
  this->custom_dungeon_cache_timeout = 3600;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_recommend_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_recommend_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_recommend_timeout);
  }
  this->custom_dungeon_recommend_timeout = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_search_cache_timeout);
  }
  this->custom_dungeon_search_cache_timeout = 120;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_search_cache_max_size);
  }
  this->custom_dungeon_search_cache_max_size = 500;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_old_recommend_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_old_recommend_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_dungeon_old_recommend_num);
  }
  this->custom_dungeon_old_recommend_num = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_new_recommend_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_new_recommend_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_dungeon_new_recommend_num);
  }
  this->custom_dungeon_new_recommend_num = 13;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_blueprint_detail_cache_max_size);
  }
  this->home_blueprint_detail_cache_max_size = 500;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_blueprint_detail_cache_timeout);
  }
  this->home_blueprint_detail_cache_timeout = 3600;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_message_max_size);
  }
  this->mail_message_max_size = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_batch_mail_count);
  }
  this->max_batch_mail_count = 40;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_gcg_game_num_per_thread);
  }
  this->max_gcg_game_num_per_thread = 1000;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_no_recv_expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_game_no_recv_expire_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gcg_game_no_recv_expire_time);
  }
  this->gcg_game_no_recv_expire_time = 1800;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_retain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_game_retain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_game_retain_time);
  }
  this->gcg_game_retain_time = 20;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gcg_game_create_timeout);
  }
  this->gcg_game_create_timeout = 10;
  if ( *(char *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_client_data_version_not_latest_ban_gcg);
  this->is_client_data_version_not_latest_ban_gcg = 0;
};

// Line 21: range 000000000E0BEF40-000000000E0BF00B
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigBase = v1;
  std::string::~string(&this->custom_dungeon_verify_uri);
  std::string::~string(&this->custom_dungeon_verify_port);
  std::string::~string(&this->custom_dungeon_verify_host);
  FeatureSwitchMgr::~FeatureSwitchMgr(&this->feature_switch_mgr);
  std::map<unsigned int,ItemOutputLimitConfig>::~map(&this->item_output_limit_map);
  common::tools::WordFilter::~WordFilter(&this->word_filter);
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config_);
  ConfigBase::~ConfigBase(this);
};

// Line 21: range 000000000E0BF00C-000000000E0BF036
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x189E8uLL);
};
