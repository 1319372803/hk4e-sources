// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_mgr.h

// Line 24: range 000000001761B88E-000000001761B8B8
void __cdecl SavePlayerQueue::~SavePlayerQueue(SavePlayerQueue *const this)
{
  std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::~unordered_map(&this->save_info_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->need_save_player_set_);
};

// Line 29: range 00000000179FB6A4-00000000179FB73D
void __cdecl SavePlayerQueue::SaveInfo::SaveInfo(
        SavePlayerQueue::SaveInfo *const this,
        uint32_t uid,
        uint32_t save_timeout)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v3);
  this->uid = uid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->save_timeout, (((_BYTE)this + 4) & 7u) + 3, v4);
  this->save_timeout = save_timeout;
};

// Line 31: range 00000000179FB73E-00000000179FB7D9
bool __cdecl SavePlayerQueue::SaveInfo::operator<(
        const SavePlayerQueue::SaveInfo *const this,
        const SavePlayerQueue::SaveInfo *other)
{
  uint32_t save_timeout; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->save_timeout);
  }
  save_timeout = this->save_timeout;
  if ( *(_BYTE *)(((unsigned __int64)&other->save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->save_timeout);
  }
  return save_timeout > other->save_timeout;
};

// Line 39: range 000000001761B494-000000001761B531
void __cdecl SavePlayerQueue::SavePlayerQueue(SavePlayerQueue *const this, PlayerMgr *player_mgr)
{
  uint32_t *p_last_send_proto_time; // rdx

  std::unordered_set<unsigned int>::unordered_set(&this->need_save_player_set_);
  std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::unordered_map(&this->save_info_map_);
  p_last_send_proto_time = &this->last_send_proto_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_send_proto_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_send_proto_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_proto_time_, player_mgr, p_last_send_proto_time);
  }
  this->last_send_proto_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_mgr_, player_mgr);
  this->player_mgr_ = player_mgr;
};

// Line 51: range 0000000017B68BB8-0000000017B68BDD
void __cdecl DestoryPlayerContext::DestoryPlayerContext(DestoryPlayerContext *const this, DestoryPlayerContext *a2)
{
  std::shared_ptr<Player>::shared_ptr(&this->player_ptr, &a2->player_ptr);
};

// Line 51: range 0000000017A08C34-0000000017A08C4E
void __cdecl DestoryPlayerContext::~DestoryPlayerContext(DestoryPlayerContext *const this)
{
  std::shared_ptr<Player>::~shared_ptr(&this->player_ptr);
};

// Line 56: range 0000000017B68542-0000000017B6888C
void __cdecl PlayerSaveWaitData::PlayerSaveWaitData(PlayerSaveWaitData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  int __x; // [rsp+18h] [rbp-8h] BYREF
  int __y; // [rsp+1Ch] [rbp-4h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->uid = 0;
  __x = 0;
  __y = 0;
  std::pair<unsigned int,unsigned int>::pair<int,int,true>(&this->gate_session, &__x, &__y);
  proto::PlayerData::PlayerData(&this->bin_data);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&this->head_ptr);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&this->head_ext_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_uid, &__x, &this->transfer_target_uid);
  }
  this->transfer_target_uid = 0;
  v2 = (((_BYTE)this - 108) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->transfer_target_home_owner_uid, v2, v3);
  this->transfer_target_home_owner_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_home_gameserver_id, v2, &this->transfer_target_home_gameserver_id);
  }
  this->transfer_target_home_gameserver_id = 0;
  v4 = (((_BYTE)this - 100) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->data_version, v4, v5);
  this->data_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_time, v4, &this->last_save_time);
  }
  this->last_save_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rand >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->login_rand, v4);
  this->login_rand = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_save_count, v4, &this->try_save_count);
  }
  this->try_save_count = 0;
  v6 = ((_BYTE)this - 76) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_player_data_dirty, v6, v7);
  this->is_player_data_dirty = 1;
  std::map<unsigned int,proto::BlockInfo>::map(&this->block_info_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_bin_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_bin_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_bin_size, v6, &this->player_bin_size);
  }
  this->player_bin_size = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_stat_id >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->save_stat_id, v6);
  this->save_stat_id = 0LL;
};

// Line 56: range 0000000017BB30A4-0000000017BB30F4
void __cdecl PlayerSaveWaitData::~PlayerSaveWaitData(PlayerSaveWaitData *const this)
{
  std::map<unsigned int,proto::BlockInfo>::~map(&this->block_info_map);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->head_ext_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->head_ptr);
  proto::PlayerData::~PlayerData(&this->bin_data);
};

// Line 85: range 00000000176AE2AE-00000000176AE378
void __cdecl PlayerMgr::~PlayerMgr(PlayerMgr *const this)
{
  std::set<unsigned int>::~set(&this->feature_switch_ban_card_set_);
  std::set<unsigned int>::~set(&this->feature_switch_signature_audit_param_set_);
  std::set<unsigned int>::~set(&this->feature_switch_nickname_audit_param_set_);
  std::set<unsigned int>::~set(&this->feature_switch_all_closed_item_set_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->lua_state_memory_report_ptr_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->safe_server_heartbeat_timer_ptr_);
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::~map(&this->version_online_uid_map_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->daily_refresh_timer_ptr_);
  SavePlayerQueue::~SavePlayerQueue(&this->save_player_queue_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::~unordered_map(&this->save_wait_player_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::~unordered_map(&this->online_player_map_);
};

// Line 90: range 000000001761B92A-000000001761BABF
void __cdecl PlayerMgr::PlayerMgr(PlayerMgr *const this)
{
  __int64 v1; // rsi
  uint32_t *p_last_check_save_wait_time; // rdx

  std::unordered_map<unsigned int,std::shared_ptr<Player>>::unordered_map(&this->online_player_map_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::unordered_map(&this->save_wait_player_map_);
  p_last_check_save_wait_time = &this->last_check_save_wait_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_check_save_wait_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_check_save_wait_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_save_wait_time_, v1, p_last_check_save_wait_time);
  }
  this->last_check_save_wait_time_ = 0;
  SavePlayerQueue::SavePlayerQueue(&this->save_player_queue_, this);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->daily_refresh_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_day_, this, &this->last_refresh_day_);
  }
  this->last_refresh_day_ = 0;
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::map(&this->version_online_uid_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->safe_server_heartbeat_timer_ptr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->lua_state_memory_report_ptr_);
  std::set<unsigned int>::set(&this->feature_switch_all_closed_item_set_);
  std::set<unsigned int>::set(&this->feature_switch_nickname_audit_param_set_);
  std::set<unsigned int>::set(&this->feature_switch_signature_audit_param_set_);
  std::set<unsigned int>::set(&this->feature_switch_ban_card_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_kick_player_time_by_packet_cost_time_,
      this,
      &this->last_kick_player_time_by_packet_cost_time_);
  }
  this->last_kick_player_time_by_packet_cost_time_ = 0;
};
