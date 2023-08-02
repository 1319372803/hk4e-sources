// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/config/config.h

// Line 20: range 000000000D093AC8-000000000D093C3C
void __cdecl Config::Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ConfigBase::ConfigBase(this);
  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xml_config_version, v1);
  }
  this->xml_config_version = 0;
  std::string::basic_string(&this->api_sign_key);
  if ( *(char *)(((unsigned __int64)&this->is_enable_transpond >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_transpond);
  this->is_enable_transpond = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transpond_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transpond_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->transpond_timeout, (((_BYTE)this - 44) & 7u) + 3);
  }
  this->transpond_timeout = 0;
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
};

// Line 20: range 000000000CFCFDDE-000000000CFCFE4F
void __cdecl Config::~Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
  std::string::~string(&this->api_sign_key);
  ConfigBase::~ConfigBase(this);
};

// Line 20: range 000000000CFCFE50-000000000CFCFE7A
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x18790uLL);
};
