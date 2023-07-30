// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/config/config.h

// Line 20: range 000000000CE246E6-000000000CE248E1
void __cdecl Config::Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rcx
  char v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx

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
  std::string::basic_string(&this->recharge_pub_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sdk_env, v1);
  }
  this->sdk_env = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v4 != 0;
  v5 = ((_BYTE)this - 44) & 7;
  v6 = (v4 != 0) & (unsigned __int8)((char)v5 >= v4);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_audit, v5, v6, v3);
  this->is_audit = 0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v7 != 0;
  v8 = ((_BYTE)this - 43) & 7;
  v9 = (v7 != 0) & (unsigned __int8)((char)v8 >= v7);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_internal_server, v8, v9, v3);
  this->is_internal_server = 0;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v10 != 0;
  v11 = ((_BYTE)this - 42) & 7;
  v12 = (v10 != 0) & (unsigned __int8)((char)v11 >= v10);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_sandbox_recharge, v11, v12, v3);
  this->is_sandbox_recharge = 0;
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
};

// Line 20: range 000000000CD6F672-000000000CD6F6E3
void __cdecl Config::~Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
  std::string::~string(&this->recharge_pub_key);
  ConfigBase::~ConfigBase(this);
};

// Line 20: range 000000000CD6F6E4-000000000CD6F70E
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x18790uLL);
};

// Line 32: range 000000000CACA4FE-000000000CACA550
bool __cdecl Config::isSandBoxRecharge(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_sandbox_recharge);
  }
  return this->is_sandbox_recharge;
};

// Line 33: range 000000000CACA552-000000000CACA5A4
bool __cdecl Config::isInternalServer(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 43) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_internal_server);
  }
  return this->is_internal_server;
};
