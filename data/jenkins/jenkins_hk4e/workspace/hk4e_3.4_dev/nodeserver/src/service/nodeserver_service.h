// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/nodeserver_service.h

// Line 32: range 0000000003953930-0000000003953A1B
void __cdecl GameVersionInfo::GameVersionInfo(GameVersionInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->server_version = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_version, v2);
  }
  this->client_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_silence_version, v2);
  }
  this->client_silence_version = 0;
  std::map<unsigned int,unsigned int>::map(&this->res_version_map);
  std::map<unsigned int,unsigned int>::map(&this->next_res_version_map);
};

// Line 32: range 0000000003954D6C-0000000003954F40
void __cdecl GameVersionInfo::GameVersionInfo(GameVersionInfo *const this, const GameVersionInfo *a2)
{
  uint32_t server_version; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t client_version; // ecx
  char v6; // dl
  uint32_t client_silence_version; // ecx
  char v8; // al
  const GameVersionInfo *v9; // [rsp+0h] [rbp-20h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  server_version = a2->server_version;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->server_version = server_version;
  v4 = (((_BYTE)v9 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->client_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->client_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->client_version);
  }
  client_version = v9->client_version;
  v6 = *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->client_version, v4);
  }
  this->client_version = client_version;
  if ( *(_BYTE *)(((unsigned __int64)&v9->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->client_silence_version);
  }
  client_silence_version = v9->client_silence_version;
  v8 = *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->client_silence_version, v4);
  }
  this->client_silence_version = client_silence_version;
  std::map<unsigned int,unsigned int>::map(&this->res_version_map, &v9->res_version_map);
  std::map<unsigned int,unsigned int>::map(&this->next_res_version_map, &v9->next_res_version_map);
};

// Line 32: range 00000000039254E6-0000000003925514
void __cdecl GameVersionInfo::~GameVersionInfo(GameVersionInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->next_res_version_map);
  std::map<unsigned int,unsigned int>::~map(&this->res_version_map);
};

// Line 41: range 0000000003953E10-0000000003953E2A
void __cdecl GameCrcVersionInfo::GameCrcVersionInfo(GameCrcVersionInfo *const this)
{
  std::map<unsigned int,std::unordered_set<std::string>>::map(&this->platform_client_version_map);
};

// Line 41: range 0000000003925594-00000000039255AE
void __cdecl GameCrcVersionInfo::~GameCrcVersionInfo(GameCrcVersionInfo *const this)
{
  std::map<unsigned int,std::unordered_set<std::string>>::~map(&this->platform_client_version_map);
};

// Line 51: range 000000000389C6C2-000000000389C8DB
void __cdecl NodeserverService::NodeserverService(NodeserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServiceBase::ServiceBase(this);
  v2 = (int (**)(...))(&`vtable for'NodeserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  PlayerMgr::PlayerMgr(&this->player_mgr);
  HomeMgr::HomeMgr(&this->home_mgr);
  MatchLoadMgr::MatchLoadMgr(&this->match_load_mgr);
  std::mutex::mutex(&this->game_version_map_mutex);
  std::map<unsigned int,GameVersionInfo>::map(&this->game_version_map);
  std::mutex::mutex(&this->game_crc_version_map_mutex);
  std::map<unsigned int,GameCrcVersionInfo>::map(&this->game_crc_version_map);
  boost::shared_mutex::shared_mutex(&this->gm_uid_mutex_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gm_uid_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->player_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_broadcast_multiserver_service_time_, v1);
  }
  this->next_broadcast_multiserver_service_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_update_player_mgr_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_update_player_mgr_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_update_player_mgr_, (((_BYTE)this - 100) & 7u) + 3);
  }
  this->next_update_player_mgr_ = 0;
};

// Line 52: range 000000000389C8DC-000000000389C9B9
void __cdecl NodeserverService::~NodeserverService(NodeserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NodeserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->player_uid_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gm_uid_map_);
  boost::shared_mutex::~shared_mutex(&this->gm_uid_mutex_);
  std::map<unsigned int,GameCrcVersionInfo>::~map(&this->game_crc_version_map);
  std::map<unsigned int,GameVersionInfo>::~map(&this->game_version_map);
  MatchLoadMgr::~MatchLoadMgr(&this->match_load_mgr);
  HomeMgr::~HomeMgr(&this->home_mgr);
  PlayerMgr::~PlayerMgr(&this->player_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 52: range 000000000389C9BA-000000000389C9E4
void __cdecl NodeserverService::~NodeserverService(NodeserverService *const this)
{
  NodeserverService::~NodeserverService(this);
  operator delete(this, 0xB39A0uLL);
};

// Line 65: range 000000000389C9E6-000000000389C9F4
uint32_t __cdecl NodeserverService::getServiceType(NodeserverService *const this)
{
  return 4;
};
