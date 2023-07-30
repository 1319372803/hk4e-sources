// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/config/config.h

// Line 25: range 000000000C63E32C-000000000C63E4FA
void __cdecl Config::Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx

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
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->data_version, v3);
  }
  this->data_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->res_version, v3);
  }
  this->res_version = 0;
  ClientVersionConfig::ClientVersionConfig(&this->version_config);
  GateserverMgrConfig::GateserverMgrConfig(&this->gateserver_mgr_config);
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v4 != 0;
  v6 = ((_BYTE)this + 124) & 7;
  v7 = (v4 != 0) & (unsigned __int8)((char)v6 >= v4);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_forbid_first_dispatch, v6, v7, v5);
  this->is_forbid_first_dispatch = 0;
  DbDeployConfigMgr::DbDeployConfigMgr(&this->db_deploy_config_mgr);
  data::DbStopServerLoginWhiteIpConfigMgr::DbStopServerLoginWhiteIpConfigMgr(&this->stop_server_login_white_ip_config_mgr);
};

// Line 26: range 000000000C63E4FC-000000000C63E57F
void __cdecl Config::~Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  data::DbStopServerLoginWhiteIpConfigMgr::~DbStopServerLoginWhiteIpConfigMgr(&this->stop_server_login_white_ip_config_mgr);
  DbDeployConfigMgr::~DbDeployConfigMgr(&this->db_deploy_config_mgr);
  ClientVersionConfig::~ClientVersionConfig(&this->version_config);
  ConfigBase::~ConfigBase(this);
};

// Line 26: range 000000000C63E580-000000000C63E5AA
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x538uLL);
};
