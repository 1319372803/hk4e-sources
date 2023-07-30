// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/config/config.h

// Line 18: range 00000000008AC856-00000000008AC8E9
void __cdecl Config::Config(Config *const this)
{
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
  std::string::basic_string(&this->first_packet_secret_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->key_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->key_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->key_id);
  }
  this->key_id = 1;
  std::string::basic_string(&this->server_public_key);
  std::string::basic_string(&this->client_private_key);
};

// Line 18: range 00000000009A9784-00000000009A97D4
void __cdecl Config::~Config(Config *const this)
{
  std::string::~string(&this->client_private_key);
  std::string::~string(&this->server_public_key);
  std::string::~string(&this->first_packet_secret_key);
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
};
