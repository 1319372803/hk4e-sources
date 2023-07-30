// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/gateserver_mgr.h

// Line 18: range 000000000C63D99A-000000000C63DA75
void __cdecl GateserverMgrConfig::GateserverMgrConfig(GateserverMgrConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->threshold_load_0 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->threshold_load_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->threshold_load_1, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->threshold_load_1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_add_load, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->choose_add_load = 0;
};

// Line 26: range 000000000C63F95C-000000000C63FB3F
GateserverInfo *__cdecl GateserverInfo::operator=(GateserverInfo *const this, const GateserverInfo *a2)
{
  uint32_t app_id; // ecx
  char v3; // al
  __int64 listen_port; // rcx
  char v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  _BOOL8 use_domain_name; // rcx
  char v9; // dl
  __int64 v10; // rdx
  const GateserverInfo *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  app_id = a2->app_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->app_id = app_id;
  std::string::operator=(&this->name, &v12->name);
  std::string::operator=(&this->inner_ip, &v12->inner_ip);
  std::string::operator=(&this->outer_ip, &v12->outer_ip);
  if ( *(_BYTE *)(((unsigned __int64)&v12->listen_port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->listen_port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&v12->listen_port);
  }
  listen_port = v12->listen_port;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->listen_port);
  }
  this->listen_port = listen_port;
  v5 = *(_BYTE *)(((unsigned __int64)&v12->use_domain_name >> 3) + 0x7FFF8000);
  LOBYTE(listen_port) = v5 != 0;
  v6 = ((_BYTE)v12 + 106) & 7;
  v7 = (v5 != 0) & (unsigned __int8)((char)v6 >= v5);
  if ( (_BYTE)v7 )
    __asan_report_load1(&v12->use_domain_name, v6, v7, listen_port);
  use_domain_name = v12->use_domain_name;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_domain_name >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 106) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->use_domain_name, v6, v10, use_domain_name);
  this->use_domain_name = use_domain_name;
  std::string::operator=(&this->domain_name, &v12->domain_name);
  return this;
};

// Line 26: range 000000000C63F806-000000000C63F90A
void __cdecl GateserverInfo::GateserverInfo(GateserverInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->app_id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->inner_ip);
  std::string::basic_string(&this->outer_ip);
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->listen_port);
  }
  this->listen_port = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->use_domain_name >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v3 != 0;
  v4 = ((_BYTE)this + 106) & 7;
  v5 = (v3 != 0) & (unsigned __int8)((char)v4 >= v3);
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_domain_name, v4, v5, v2);
  this->use_domain_name = 0;
  std::string::basic_string(&this->domain_name);
};

// Line 26: range 000000000C63FB40-000000000C63FD71
void __cdecl GateserverInfo::GateserverInfo(GateserverInfo *const this, const GateserverInfo *a2)
{
  uint32_t app_id; // ecx
  char v3; // al
  __int64 listen_port; // rcx
  char v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  _BOOL8 use_domain_name; // rcx
  char v9; // dl
  __int64 v10; // rdx
  const GateserverInfo *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  app_id = a2->app_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->app_id = app_id;
  std::string::basic_string(&this->name, &v11->name);
  std::string::basic_string(&this->inner_ip, &v11->inner_ip);
  std::string::basic_string(&this->outer_ip, &v11->outer_ip);
  if ( *(_BYTE *)(((unsigned __int64)&v11->listen_port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->listen_port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&v11->listen_port);
  }
  listen_port = v11->listen_port;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->listen_port);
  }
  this->listen_port = listen_port;
  v5 = *(_BYTE *)(((unsigned __int64)&v11->use_domain_name >> 3) + 0x7FFF8000);
  LOBYTE(listen_port) = v5 != 0;
  v6 = ((_BYTE)v11 + 106) & 7;
  v7 = (v5 != 0) & (unsigned __int8)((char)v6 >= v5);
  if ( (_BYTE)v7 )
    __asan_report_load1(&v11->use_domain_name, v6, v7, listen_port);
  use_domain_name = v11->use_domain_name;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_domain_name >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 106) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->use_domain_name, v6, v10, use_domain_name);
  this->use_domain_name = use_domain_name;
  std::string::basic_string(&this->domain_name, &v11->domain_name);
};

// Line 26: range 000000000C63F90C-000000000C63F95A
void __cdecl GateserverInfo::~GateserverInfo(GateserverInfo *const this)
{
  std::string::~string(&this->domain_name);
  std::string::~string(&this->outer_ip);
  std::string::~string(&this->inner_ip);
  std::string::~string(&this->name);
};

// Line 40: range 000000000C63F210-000000000C63F24A
void __cdecl GateserverMgr::GateserverMgr(GateserverMgr *const this)
{
  std::mutex::mutex(&this->mu_);
  std::map<unsigned int,GateserverInfo>::map(&this->gateserver_map_);
  ServerLBMgr::ServerLBMgr(&this->lb_mgr_);
};

// Line 40: range 000000000C63F24C-000000000C63F27A
void __cdecl GateserverMgr::~GateserverMgr(GateserverMgr *const this)
{
  ServerLBMgr::~ServerLBMgr(&this->lb_mgr_);
  std::map<unsigned int,GateserverInfo>::~map(&this->gateserver_map_);
};
