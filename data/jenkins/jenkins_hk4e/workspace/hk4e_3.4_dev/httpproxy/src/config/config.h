// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/config/config.h

// Line 20: range 000000000C8402C4-000000000C84036A
void __cdecl Config::Config(Config *const this)
{
  int (**v1)(...); // rdx

  ConfigBase::ConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  std::map<std::string,Config::Address>::map(&this->muipserver_address_map);
  DbConfigMgr::DbConfigMgr(&this->db_config_mgr);
};

// Line 20: range 000000000C7FC1AA-000000000C7FC21B
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  DbConfigMgr::~DbConfigMgr(&this->db_config_mgr);
  std::map<std::string,Config::Address>::~map(&this->muipserver_address_map);
  ConfigBase::~ConfigBase(this);
};

// Line 20: range 000000000C7FC21C-000000000C7FC246
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0xC40uLL);
};

// Line 23: range 000000000C7045DE-000000000C704635
void __cdecl Config::Address::Address(Config::Address *const this)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->port);
  }
  this->port = 0;
};

// Line 23: range 000000000C787A78-000000000C787B14
void __cdecl Config::Address::Address(Config::Address *const this, const Config::Address *a2)
{
  uint16_t port; // cx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->port);
  }
  port = a2->port;
  if ( *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->port);
  }
  this->port = port;
};

// Line 23: range 000000000C704636-000000000C704650
void __cdecl Config::Address::~Address(Config::Address *const this)
{
  std::string::~string(this);
};
