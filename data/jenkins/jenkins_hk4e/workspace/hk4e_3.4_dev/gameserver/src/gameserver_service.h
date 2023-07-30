// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gameserver_service.h

// Line 45: range 00000000176AE6FC-00000000176AE91E
void __cdecl GameThreadLocal::GameThreadLocal(GameThreadLocal *const this)
{
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr);
  PlayerMgr::PlayerMgr(&this->player_mgr);
  DungeonMgr::DungeonMgr(&this->dungeon_mgr);
  HomeMgr::HomeMgr(&this->home_mgr);
  ClientVersionConfig::ClientVersionConfig(&this->last_version_config);
  std::map<unsigned int,std::set<std::string>>::map(&this->last_crc_version_map);
  GlobalActivityMgr::GlobalActivityMgr(&this->global_activity_mgr);
  PlayerSendPacketController::PlayerSendPacketController(&this->player_send_packet_controller);
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->silent_unload_group_num);
  }
  this->silent_unload_group_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->silent_unload_group_time);
  this->silent_unload_group_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->silent_reload_group_num);
  }
  this->silent_reload_group_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->silent_reload_group_time);
  this->silent_reload_group_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_silent_update_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_silent_update_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_silent_update_group_num);
  }
  this->force_silent_update_group_num = 0;
};

// Line 45: range 000000001780F5B8-000000001780F99C
void __cdecl GameThreadLocal::GameThreadLocal(GameThreadLocal *const this, GameThreadLocal *a2)
{
  uint32_t silent_unload_group_num; // ecx
  uint64_t silent_unload_group_time; // rdx
  uint32_t silent_reload_group_num; // ecx
  uint64_t silent_reload_group_time; // rdx
  uint32_t force_silent_update_group_num; // ecx

  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr, &a2->timer_mgr_ptr);
  PlayerMgr::PlayerMgr(&this->player_mgr, &a2->player_mgr);
  DungeonMgr::DungeonMgr(&this->dungeon_mgr, &a2->dungeon_mgr);
  HomeMgr::HomeMgr(&this->home_mgr, &a2->home_mgr);
  ClientVersionConfig::ClientVersionConfig(&this->last_version_config, &a2->last_version_config);
  std::map<unsigned int,std::set<std::string>>::map(&this->last_crc_version_map, &a2->last_crc_version_map);
  GlobalActivityMgr::GlobalActivityMgr(&this->global_activity_mgr, &a2->global_activity_mgr);
  PlayerSendPacketController::PlayerSendPacketController(
    &this->player_send_packet_controller,
    &a2->player_send_packet_controller);
  if ( *(_BYTE *)(((unsigned __int64)&a2->silent_unload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->silent_unload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  silent_unload_group_num = a2->silent_unload_group_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->silent_unload_group_num);
  }
  this->silent_unload_group_num = silent_unload_group_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->silent_unload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  silent_unload_group_time = a2->silent_unload_group_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_unload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->silent_unload_group_time);
  this->silent_unload_group_time = silent_unload_group_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->silent_reload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->silent_reload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  silent_reload_group_num = a2->silent_reload_group_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->silent_reload_group_num);
  }
  this->silent_reload_group_num = silent_reload_group_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->silent_reload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  silent_reload_group_time = a2->silent_reload_group_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->silent_reload_group_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->silent_reload_group_time);
  this->silent_reload_group_time = silent_reload_group_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->force_silent_update_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->force_silent_update_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  force_silent_update_group_num = a2->force_silent_update_group_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_silent_update_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_silent_update_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_silent_update_group_num);
  }
  this->force_silent_update_group_num = force_silent_update_group_num;
};

// Line 45: range 00000000176AE920-00000000176AE9B6
void __cdecl GameThreadLocal::~GameThreadLocal(GameThreadLocal *const this)
{
  PlayerSendPacketController::~PlayerSendPacketController(&this->player_send_packet_controller);
  GlobalActivityMgr::~GlobalActivityMgr(&this->global_activity_mgr);
  std::map<unsigned int,std::set<std::string>>::~map(&this->last_crc_version_map);
  ClientVersionConfig::~ClientVersionConfig(&this->last_version_config);
  HomeMgr::~HomeMgr(&this->home_mgr);
  DungeonMgr::~DungeonMgr(&this->dungeon_mgr);
  PlayerMgr::~PlayerMgr(&this->player_mgr);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&this->timer_mgr_ptr);
};

// Line 76: range 0000000017839AAA-0000000017839B3F
void __cdecl TransferPlayer::TransferPlayer(TransferPlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_start_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_start_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->transfer_start_time);
  }
  this->transfer_start_time = 0;
};

// Line 99: range 000000001762B4A0-000000001762B4AE
uint32_t __cdecl GameserverService::getServiceType(GameserverService *const this)
{
  return 3;
};

// Line 140: range 000000001762B4B0-000000001762B4C8
bool __cdecl GameserverService::isNeedPrintCmdLog(
        GameserverService *const this,
        uint32_t cmd_id,
        bool is_default_process)
{
  return !is_default_process;
};

// Line 220: range 000000001762B4CA-000000001762B59B
void __fastcall GameserverService::addMultiserverServiceType(GameserverService *const this, uint32_t service_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 service_type:220";
  *(_QWORD *)(v2 + 16) = GameserverService::addMultiserverServiceType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = service_type;
  std::set<unsigned int>::insert(
    &this->multiserver_service_type_set_,
    (const std::set<unsigned int>::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
