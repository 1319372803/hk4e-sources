// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/config/config.h

// Line 21: range 000000000387EDB0-000000000387EE40
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
};

// Line 22: range 000000000387EE42-000000000387EE8F
void __cdecl Config::~Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  ConfigBase::~ConfigBase(this);
};

// Line 22: range 000000000387EE90-000000000387EEBA
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0xB0uLL);
};
