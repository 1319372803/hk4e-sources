// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player.h

// Line 113: range 0000000017A01CA4-0000000017A01D05
void __cdecl ClientDeviceInfo::ClientDeviceInfo(ClientDeviceInfo *const this)
{
  proto::PacketHead::PacketHead(&this->login_packet_head_);
  proto::PlayerLoginReq::PlayerLoginReq(&this->session_login_req);
  std::string::basic_string(&this->client_ip_str);
};

// Line 113: range 0000000017A01D06-0000000017A01D44
void __cdecl ClientDeviceInfo::~ClientDeviceInfo(ClientDeviceInfo *const this)
{
  std::string::~string(&this->client_ip_str);
  proto::PlayerLoginReq::~PlayerLoginReq(&this->session_login_req);
  proto::PacketHead::~PacketHead(&this->login_packet_head_);
};

// Line 122: range 000000001745DE66-000000001745DF31
void __cdecl PlayerSaveInfoContext::PlayerSaveInfoContext(PlayerSaveInfoContext *const this)
{
  int __x; // [rsp+18h] [rbp-18h] BYREF
  int __y[5]; // [rsp+1Ch] [rbp-14h] BYREF

  proto::SavePlayerDataReq::SavePlayerDataReq(&this->save_req);
  proto::PlayerDataBin::PlayerDataBin(&this->data_bin);
  proto::PlayerExtraBinData::PlayerExtraBinData(&this->extra_bin);
  proto::PlayerBeforeLoginBinData::PlayerBeforeLoginBinData(&this->before_login_bin);
  __x = 0;
  __y[0] = 0;
  std::pair<unsigned int,unsigned int>::pair<int,int,true>(&this->last_gate_session, &__x, __y);
};

// Line 122: range 000000001750CC20-000000001750CC6E
void __cdecl PlayerSaveInfoContext::~PlayerSaveInfoContext(PlayerSaveInfoContext *const this)
{
  proto::PlayerBeforeLoginBinData::~PlayerBeforeLoginBinData(&this->before_login_bin);
  proto::PlayerExtraBinData::~PlayerExtraBinData(&this->extra_bin);
  proto::PlayerDataBin::~PlayerDataBin(&this->data_bin);
  proto::SavePlayerDataReq::~SavePlayerDataReq(&this->save_req);
};

// Line 129: range 000000001720C24C-000000001720C2A6
void __cdecl Player::setLastInjectFixSendId(Player *const this, uint32_t id)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_inject_fix_send_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_inject_fix_send_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_inject_fix_send_id_, (((_BYTE)this + 108) & 7u) + 3, v2);
  this->last_inject_fix_send_id_ = id;
};

// Line 137: range 0000000017475BF6-0000000017475CD2
void __cdecl ContentAuditData::ContentAuditData(ContentAuditData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_submit_time; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  p_submit_time = &this->submit_time;
  if ( *(_BYTE *)(((unsigned __int64)p_submit_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_submit_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->submit_time, v1, p_submit_time);
  }
  this->submit_time = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->submit_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->submit_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->submit_count, v3, v4);
  this->submit_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audit_state, v3, &this->audit_state);
  }
  this->audit_state = 0;
};

// Line 137: range 00000000170939AA-00000000170939C4
void __cdecl ContentAuditData::~ContentAuditData(ContentAuditData *const this)
{
  std::string::~string(this);
};

// Line 150: range 0000000017BB3124-0000000017BB32E8
void __cdecl Player::~Player(Player *const this)
{
  std::map<unsigned int,std::function<void ()(void)>>::~map(&this->version_to_modify_data_func_map_);
  std::shared_ptr<common::tools::RateLimiter>::~shared_ptr(&this->server_error_notify_rate_limiter_ptr_);
  BlockDataMgr::~BlockDataMgr(&this->block_data_mgr_);
  std::shared_ptr<PlayerCoroExec>::~shared_ptr(&this->coro_exec_ptr_);
  std::set<unsigned int>::~set(&this->process_forward_client_set_);
  std::vector<std::shared_ptr<PlayerHandlerBase>>::~vector(&this->player_handler_vec_);
  std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::~unordered_map(&this->process_bytes_func_map_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::~map(&this->process_packet_func_map_);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&this->unix_timer_mgr_ptr_);
  std::shared_ptr<PlayerTimerMgr>::~shared_ptr(&this->player_timer_mgr_ptr_);
  UnixTimer::~UnixTimer(&this->s_timer_);
  SecurityChannel::~SecurityChannel(&this->security_channel_);
  std::unordered_map<LuaShellIndex,std::tuple<unsigned int,std::string,UnixTimer>>::~unordered_map(&this->awaiting_lua_shell_timer_map_);
  std::unordered_map<LuaShellIndex,unsigned int>::~unordered_map(&this->last_lua_shell_send_id_map_);
  std::string::~string(&this->security_channel_str_);
  ClientDeviceInfo::~ClientDeviceInfo(&this->client_device_info_);
  std::string::~string(&this->birthday_);
  std::string::~string(&this->country_code_);
  std::string::~string(&this->psn_id_);
  std::string::~string(&this->online_id_);
  std::string::~string(&this->account_uid_);
  std::string::~string(&this->account_token_);
  std::weak_ptr<PlayerSessionProxy>::~weak_ptr(&this->session_wtr_);
  EcsBase<Player,PlayerCompBase,71u>::~EcsBase(&this->EcsBase<Player,PlayerCompBase,71>);
  std::enable_shared_from_this<Player>::~enable_shared_from_this(this);
};

// Line 181: range 0000000017A02350-0000000017A03889
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::Player(Player *const this, uint32_t uid)
{
  uint32_t *p_uid; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  Player **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  uint64_t NowMs; // rbx
  uint64_t v48; // rcx
  std::allocator<char> __a; // [rsp+1Bh] [rbp-75h] BYREF
  int __x; // [rsp+1Ch] [rbp-74h] BYREF
  int __y; // [rsp+20h] [rbp-70h] BYREF
  uint32_t now; // [rsp+24h] [rbp-6Ch]
  Player *v53; // [rsp+28h] [rbp-68h] BYREF
  void (*__f[2])(Player *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (Player::*)(long unsigned int),Player*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  std::enable_shared_from_this<Player>::enable_shared_from_this(this);
  EcsBase<Player,PlayerCompBase,71u>::EcsBase(&this->EcsBase<Player,PlayerCompBase,71>);
  p_uid = &this->uid_;
  if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_, *(_QWORD *)&uid, p_uid);
  }
  this->uid_ = uid;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->time_offset_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_offset_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->time_offset_, v3, v4);
  this->time_offset_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_version_, v3, &this->data_version_);
  }
  this->data_version_ = 0;
  std::weak_ptr<PlayerSessionProxy>::weak_ptr(&this->session_wtr_);
  std::string::basic_string(&this->account_token_);
  __x = 0;
  __y = 0;
  std::pair<unsigned int,unsigned int>::pair<int,int,true>(&this->last_gate_session_, &__x, &__y);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id_, &__x, &this->channel_id_);
  }
  this->channel_id_ = 0;
  v5 = (((_BYTE)this - 116) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->sub_channel_id_, v5, v6);
  this->sub_channel_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type_, v5, &this->account_type_);
  }
  this->account_type_ = 0;
  std::string::basic_string(&this->account_uid_);
  if ( *(char *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest_, v5, &this->is_guest_);
  this->is_guest_ = 0;
  v7 = (((_BYTE)this - 68) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->platform_type_, v7, v8);
  this->platform_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_uid_, v7, &this->gm_uid_);
  }
  this->gm_uid_ = 0;
  v9 = (((_BYTE)this - 60) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->tag_, v9, v10);
  this->tag_ = 0;
  std::string::basic_string(&this->online_id_);
  std::string::basic_string(&this->psn_id_);
  std::string::basic_string(&this->country_code_);
  std::string::basic_string(&this->birthday_);
  ClientDeviceInfo::ClientDeviceInfo(&this->client_device_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rtt_, v9, &this->rtt_);
  }
  this->rtt_ = -1;
  v11 = ((_BYTE)this - 124) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_need_save_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_need_save_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_need_save_, v11, v12);
  this->is_need_save_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_player_bin_size_, v11, &this->last_save_player_bin_size_);
  }
  this->last_save_player_bin_size_ = 0;
  v13 = (((_BYTE)this - 116) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->last_save_block_bin_size_, v13, v14);
  this->last_save_block_bin_size_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_quit_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quit_mp_, v13, &this->is_quit_mp_);
  this->is_quit_mp_ = 0;
  v15 = ((_BYTE)this - 111) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_valid_for_authority, v15, v16);
  this->is_valid_for_authority = 1;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->security_channel_str_, byte_261E1600, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(char *)(((unsigned __int64)&this->is_in_crc_suspicous_list_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_crc_suspicous_list_, byte_261E1600, &this->is_in_crc_suspicous_list_);
  this->is_in_crc_suspicous_list_ = 0;
  v17 = (((_BYTE)this - 68) & 7u) + 3;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->reg_platform_, v17, v18);
  this->reg_platform_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_simulation_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_simulation_, v17, &this->is_in_simulation_);
  this->is_in_simulation_ = 0;
  v19 = (((_BYTE)this - 60) & 7u) + 3;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->login_state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->login_state_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->login_state_, v19, v20);
  this->login_state_ = UnLogin;
  if ( *(char *)(((unsigned __int64)&this->is_relogin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_relogin_, v19, &this->is_relogin_);
  this->is_relogin_ = 0;
  v21 = (((_BYTE)this - 52) & 7u) + 3;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->last_pos_log_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_pos_log_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->last_pos_log_time_, v21, v22);
  this->last_pos_log_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disconnect_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disconnect_time_, v21, &this->disconnect_time_);
  }
  this->disconnect_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->login_rand_, v21);
  this->login_rand_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_ping_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_ping_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_ping_time_, v21, &this->last_recv_ping_time_);
  }
  this->last_recv_ping_time_ = 0;
  v23 = (((_BYTE)this - 28) & 7u) + 3;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->last_from_bin_time_, v23, v24);
  this->last_from_bin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_online_notify_time_, v23, &this->last_send_online_notify_time_);
  }
  this->last_send_online_notify_time_ = 0;
  v25 = (((_BYTE)this - 20) & 7u) + 3;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->last_daily_task_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_daily_task_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->last_daily_task_time_, v25, v26);
  this->last_daily_task_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unexpected_pos_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_unexpected_pos_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_unexpected_pos_time_, v25, &this->last_unexpected_pos_time_);
  }
  this->last_unexpected_pos_time_ = 0;
  v27 = (((_BYTE)this - 12) & 7u) + 3;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->last_lua_shell_check_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_lua_shell_check_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store4(&this->last_lua_shell_check_time_, v27, v28);
  this->last_lua_shell_check_time_ = 0;
  std::unordered_map<LuaShellIndex,unsigned int>::unordered_map(&this->last_lua_shell_send_id_map_);
  std::unordered_map<LuaShellIndex,std::tuple<unsigned int,std::string,UnixTimer>>::unordered_map(&this->awaiting_lua_shell_timer_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_inject_fix_check_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_inject_fix_check_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_inject_fix_check_time_, v27, &this->last_inject_fix_check_time_);
  }
  this->last_inject_fix_check_time_ = 0;
  v29 = (((_BYTE)this + 108) & 7u) + 3;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->last_inject_fix_send_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_inject_fix_send_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store4(&this->last_inject_fix_send_id_, v29, v30);
  this->last_inject_fix_send_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_blossom_check_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_blossom_check_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_blossom_check_time_, v29, &this->last_blossom_check_time_);
  }
  this->last_blossom_check_time_ = 0;
  v31 = (((_BYTE)this + 116) & 7u) + 3;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->client_token_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_token_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store4(&this->client_token_, v31, v32);
  this->client_token_ = 0;
  SecurityChannel::SecurityChannel(&this->security_channel_);
  if ( *(_BYTE *)(((unsigned __int64)&this->segment_crc_interact_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->segment_crc_interact_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->segment_crc_interact_count_, v31, &this->segment_crc_interact_count_);
  }
  this->segment_crc_interact_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ping_sent_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_ping_sent_ms_, v31);
  this->last_ping_sent_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_unity_engine_time_, v31, &this->last_unity_engine_time_);
  }
  this->last_unity_engine_time_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_packet_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_check_packet_cost_time_ms_, v31);
  this->last_check_packet_cost_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->accumulate_packet_cost_time_us_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->accumulate_packet_cost_time_us_, v31);
  this->accumulate_packet_cost_time_us_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_kick_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_trigger_kick_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_trigger_kick_time_, v31, &this->last_trigger_kick_time_);
  }
  this->last_trigger_kick_time_ = 0;
  v33 = (((_BYTE)this - 84) & 7u) + 3;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_store4(&this->trigger_kick_count_, v33, v34);
  this->trigger_kick_count_ = 0;
  AntiCheatLogRecord::AntiCheatLogRecord(&this->packet_cost_time_anticheat_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_daily_task_unreg_group_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_daily_task_unreg_group_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_check_daily_task_unreg_group_time_,
      v33,
      &this->last_check_daily_task_unreg_group_time_);
  }
  this->last_check_daily_task_unreg_group_time_ = 0;
  v37 = (((_BYTE)this - 68) & 7u) + 3;
  v38 = (*(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_store4(&this->last_check_force_silent_reload_group_time_, v37, v38);
  this->last_check_force_silent_reload_group_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_uid_, v37, &this->transfer_target_uid_);
  }
  this->transfer_target_uid_ = 0;
  v39 = (((_BYTE)this - 60) & 7u) + 3;
  v40 = (*(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_store4(&this->transfer_target_home_owner_uid_, v39, v40);
  this->transfer_target_home_owner_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_home_gameserver_id_, v39, &this->transfer_target_home_gameserver_id_);
  }
  this->transfer_target_home_gameserver_id_ = 0;
  v53 = this;
  __f[0] = (void (*)(Player *, unsigned __int64))Player::onTimer;
  __f[1] = 0LL;
  std::bind<void (Player::*)(unsigned long),Player*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v53,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v35,
    v36);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (Player::*)(unsigned long) ()(Player*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  UnixTimer::UnixTimer(&this->s_timer_, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_succ_data_version, &p_callback, &this->last_succ_data_version);
  }
  this->last_succ_data_version = 0;
  v41 = ((_BYTE)this + 28) & 7;
  v42 = (*(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v41 >= *(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->is_data_res_version_changed, v41, v42);
  this->is_data_res_version_changed = 0;
  v43 = ((_BYTE)this + 29) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->is_json_data_proficient, v43, v44);
  this->is_json_data_proficient = 0;
  std::shared_ptr<PlayerTimerMgr>::shared_ptr(&this->player_timer_mgr_ptr_);
  std::shared_ptr<UnixTimerMgr>::shared_ptr(&this->unix_timer_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_save_time_ms_, v43);
  this->last_save_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_daily_refresh_time, v43, &this->last_daily_refresh_time);
  }
  this->last_daily_refresh_time = 0;
  v45 = ((_BYTE)this + 76) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&this->is_interrupt_next_transfer_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_next_transfer_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_store1(&this->is_interrupt_next_transfer_, v45, v46);
  this->is_interrupt_next_transfer_ = 0;
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::map(&this->process_packet_func_map_);
  std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::unordered_map(&this->process_bytes_func_map_);
  std::vector<std::shared_ptr<PlayerHandlerBase>>::vector(&this->player_handler_vec_);
  std::set<unsigned int>::set(&this->process_forward_client_set_);
  std::shared_ptr<PlayerCoroExec>::shared_ptr(&this->coro_exec_ptr_);
  if ( *(char *)(((unsigned __int64)&this->is_coro_stopping_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_coro_stopping_, v45, &this->is_coro_stopping_);
  this->is_coro_stopping_ = 0;
  BlockDataMgr::BlockDataMgr(&this->block_data_mgr_, this);
  std::shared_ptr<common::tools::RateLimiter>::shared_ptr(&this->server_error_notify_rate_limiter_ptr_);
  std::map<unsigned int,std::function<void ()(void)>>::map(&this->version_to_modify_data_func_map_);
  now = common::tools::TimeUtils::getNow();
  NowMs = common::tools::TimeUtils::getNowMs();
  v48 = NowMs + common::tools::RandomUtils::rand<unsigned long>(0LL, 0x1D4C0uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_save_time_ms_, 120000LL);
  this->last_save_time_ms_ = v48;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_online_notify_time_, 120000LL, &this->last_send_online_notify_time_);
  }
  this->last_send_online_notify_time_ = now;
};

// Line 324: range 0000000015A198CE-0000000015A19920
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setTransferTargetUid(Player *const this, uint32_t target_uid)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_uid_, *(_QWORD *)&target_uid, &this->transfer_target_uid_);
  }
  this->transfer_target_uid_ = target_uid;
};

// Line 327: range 000000001604EA5E-000000001604EAAA
uint32_t __cdecl Player::getTransferTargetUid(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->transfer_target_uid_);
  }
  return this->transfer_target_uid_;
};

// Line 330: range 0000000017D67638-0000000017D676D8
void __cdecl Player::setTransferTargetHome(Player *const this, uint32_t target_uid, uint32_t target_gameserver_id)
{
  __int64 v3; // rsi
  __int64 v4; // rdx

  v3 = (((_BYTE)this - 60) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->transfer_target_home_owner_uid_, v3, v4);
  this->transfer_target_home_owner_uid_ = target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_target_home_gameserver_id_, v3, &this->transfer_target_home_gameserver_id_);
  }
  this->transfer_target_home_gameserver_id_ = target_gameserver_id;
};

// Line 337: range 0000000015D308F2-0000000015D30946
uint32_t __cdecl Player::getTransferTargetHomeOwnerUid(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_owner_uid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->transfer_target_home_owner_uid_);
  }
  return this->transfer_target_home_owner_uid_;
};

// Line 338: range 0000000017A0388A-0000000017A038D6
uint32_t __cdecl Player::getTransferTargetHomeGameServerId(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_target_home_gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->transfer_target_home_gameserver_id_);
  }
  return this->transfer_target_home_gameserver_id_;
};

// Line 346: range 00000000155B6690-00000000155B66BF
PlayerTimerMgrPtr __cdecl Player::getPlayerTimerMgr(Player *const this)
{
  const std::shared_ptr<PlayerTimerMgr> *v1; // rsi
  PlayerTimerMgrPtr result; // rax

  std::shared_ptr<PlayerTimerMgr>::shared_ptr((std::shared_ptr<PlayerTimerMgr> *const)this, v1 + 82);
  result._M_ptr = (std::__shared_ptr<PlayerTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 348: range 00000000155B6764-00000000155B6793
UnixTimerMgrPtr __cdecl Player::getUnixTimerMgr(Player *const this)
{
  const std::shared_ptr<UnixTimerMgr> *v1; // rsi
  UnixTimerMgrPtr result; // rax

  std::shared_ptr<UnixTimerMgr>::shared_ptr((std::shared_ptr<UnixTimerMgr> *const)this, v1 + 83);
  result._M_ptr = (std::__shared_ptr<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 441: range 00000000131D2D9A-00000000131D2DEE
uint32_t __cdecl Player::getPlatformType(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->platform_type_);
  }
  return this->platform_type_;
};

// Line 441: range 00000000131D2D52-00000000131D2D99
uint32_t __cdecl Player::getUid(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 443: range 0000000015189D2C-0000000015189D78
uint32_t __cdecl Player::getChannelId(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->channel_id_);
  }
  return this->channel_id_;
};

// Line 444: range 0000000015189D7A-0000000015189DCE
uint32_t __cdecl Player::getSubChannelId(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_channel_id_);
  }
  return this->sub_channel_id_;
};

// Line 445: range 000000001720C054-000000001720C0A0
uint32_t __cdecl Player::getAccountType(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->account_type_);
  }
  return this->account_type_;
};

// Line 446: range 000000001720C0B6-000000001720C103
bool __cdecl Player::isGuest(const Player *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_guest_);
  return this->is_guest_;
};

// Line 446: range 000000001720C0A2-000000001720C0B5
const std::string *__cdecl Player::getAccountUid[abi:cxx11](const Player *const this)
{
  return &this->account_uid_;
};

// Line 448: range 000000001604EAAC-000000001604EB06
bool __cdecl Player::isSubAccount(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tag_);
  }
  return this->tag_ == 3;
};

// Line 477: range 000000001604EB44-000000001604EB92
PlayerSessionProxyPtr __cdecl Player::getSession(const Player *const this)
{
  PlayerSessionProxyPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<PlayerSessionProxy>::lock((const std::weak_ptr<PlayerSessionProxy> *const)this);
  result._M_ptr = (std::__shared_ptr<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 482: range 0000000013841C40-0000000013841C8D
bool __cdecl Player::isRelogin(const Player *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_relogin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_relogin_);
  return this->is_relogin_;
};

// Line 483: range 000000001604EB94-000000001604EBE8
uint32_t __cdecl Player::getClientToken(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->client_token_);
  }
  return this->client_token_;
};

// Line 486: range 0000000013EB94BC-0000000013EB94CF
const proto::PlayerLoginReq *__cdecl Player::getSessionLoginReq(const Player *const this)
{
  return &this->client_device_info_.session_login_req;
};

// Line 487: range 000000001720C104-000000001720C117
const proto::PacketHead *__cdecl Player::getLoginPakcetHead(const Player *const this)
{
  return &this->client_device_info_.login_packet_head_;
};

// Line 515: range 000000001720C118-000000001720C16B
void __cdecl Player::updateLastPingTime(Player *const this)
{
  __int64 Now; // rsi
  uint32_t *p_last_recv_ping_time; // rdx

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  p_last_recv_ping_time = &this->last_recv_ping_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_recv_ping_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_recv_ping_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_ping_time_, Now, p_last_recv_ping_time);
  }
  this->last_recv_ping_time_ = Now;
};

// Line 519: range 0000000017D676DA-0000000017D67750
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<PlayerHandlerBase> __cdecl Player::getPlayerHandlerPtr(Player *const this, uint32_t index)
{
  uint32_t v2; // edx
  const std::shared_ptr<PlayerHandlerBase> *v3; // rdx
  std::shared_ptr<PlayerHandlerBase> result; // rax
  uint32_t indexa; // [rsp+Ch] [rbp-24h]

  indexa = v2;
  if ( v2 >= std::vector<std::shared_ptr<PlayerHandlerBase>>::size((const std::vector<std::shared_ptr<PlayerHandlerBase>> *const)(*(_QWORD *)&index + 1464LL)) )
  {
    std::shared_ptr<PlayerHandlerBase>::shared_ptr((std::shared_ptr<PlayerHandlerBase> *const)this, 0LL);
  }
  else
  {
    v3 = std::vector<std::shared_ptr<PlayerHandlerBase>>::operator[](
           (std::vector<std::shared_ptr<PlayerHandlerBase>> *const)(*(_QWORD *)&index + 1464LL),
           indexa);
    std::shared_ptr<PlayerHandlerBase>::shared_ptr((std::shared_ptr<PlayerHandlerBase> *const)this, v3);
  }
  result._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 523: range 000000001762F6A4-000000001762F6D3
PlayerCoroExecPtr __cdecl Player::getCoroExecPtr(Player *const this)
{
  const std::shared_ptr<PlayerCoroExec> *v1; // rsi
  PlayerCoroExecPtr result; // rax

  std::shared_ptr<PlayerCoroExec>::shared_ptr((std::shared_ptr<PlayerCoroExec> *const)this, v1 + 96);
  result._M_ptr = (std::__shared_ptr<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 568: range 000000001604EBEA-000000001604EC31
void __cdecl Player::setLoginRand(Player *const this, uint64_t login_rand)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->login_rand_, login_rand);
  this->login_rand_ = login_rand;
};

// Line 569: range 000000001604EC32-000000001604EC71
uint64_t __cdecl Player::getLoginRand(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->login_rand_;
};

// Line 569: range 000000001604EC72-000000001604EC9D
void __cdecl Player::setCountryCode(Player *const this, const std::string *country_code)
{
  std::string::operator=(&this->country_code_, country_code);
};

// Line 577: range 0000000017A038D8-0000000017A0391F
uint32_t __cdecl Player::getDataVersion(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->data_version_);
  }
  return this->data_version_;
};

// Line 582: range 000000001604EC9E-000000001604ECB1
const std::string *__cdecl Player::getCountryCode[abi:cxx11](const Player *const this)
{
  return &this->country_code_;
};

// Line 586: range 0000000017A03920-0000000017A0395D
std::pair<unsigned int,unsigned int> __cdecl Player::getLastGateSession(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gate_session_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->last_gate_session_;
};

// Line 588: range 0000000013EB94D0-0000000013EB94E3
BlockDataMgr *__cdecl Player::getBlockDataMgr(Player *const this)
{
  return &this->block_data_mgr_;
};

// Line 588: range 0000000013EB94E4-0000000013EB9536
bool __cdecl Player::getIsJsonDataProficient(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_json_data_proficient);
  }
  return this->is_json_data_proficient;
};

// Line 601: range 0000000017A0395E-0000000017A039B5
uint32_t __cdecl Player::getLastSaveTime(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->last_save_time_ms_ / 0x3E8;
};

// Line 603: range 000000001604ECB2-000000001604ECDD
void __cdecl Player::setBirthday(Player *const this, const std::string *birthday)
{
  std::string::operator=(&this->birthday_, birthday);
};

// Line 604: range 000000001604ECDE-000000001604ED0D
std::string *__cdecl Player::getBirthday[abi:cxx11](std::string *retstr, const Player *const this)
{
  std::string::basic_string(retstr, &this->birthday_);
  return retstr;
};

// Line 604: range 000000001604ED0E-000000001604ED3D
std::string *__cdecl Player::getSecurityChannelStr[abi:cxx11](std::string *retstr, const Player *const this)
{
  std::string::basic_string(retstr, &this->security_channel_str_);
  return retstr;
};

// Line 614: range 0000000017D67752-0000000017D67771
void __cdecl Player::clearLastSentLuaShellByGm(Player *const this)
{
  std::unordered_map<LuaShellIndex,unsigned int>::clear(&this->last_lua_shell_send_id_map_);
};

// Line 654: range 00000000131D2DF0-00000000131D2E99
bool __cdecl Player::isEpic(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->channel_id_);
  }
  if ( this->channel_id_ != 1 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_channel_id_);
  }
  return this->sub_channel_id_ == 3;
};

// Line 721: range 00000000149EC678-00000000149EC6C4
uint32_t __cdecl Player::getRtt(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rtt_);
  }
  return this->rtt_;
};

// Line 721: range 0000000015A19922-0000000015A19975
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setRtt(Player *const this, uint32_t rtt__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rtt_, *(_QWORD *)&rtt__out, &this->rtt_);
  }
  this->rtt_ = rtt__out;
};

// Line 724: range 0000000017A039B6-0000000017A03A02
uint32_t __cdecl Player::getLastSavePlayerBinSize(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_player_bin_size_);
  }
  return this->last_save_player_bin_size_;
};

// Line 724: range 000000001720C2A8-000000001720C2FB
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setLastSavePlayerBinSize(Player *const this, uint32_t last_save_player_bin_size__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_player_bin_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_save_player_bin_size_,
      *(_QWORD *)&last_save_player_bin_size__out,
      &this->last_save_player_bin_size_);
  }
  this->last_save_player_bin_size_ = last_save_player_bin_size__out;
};

// Line 725: range 000000001720C2FC-000000001720C350
uint32_t __cdecl Player::getLastSaveBlockBinSize(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_save_block_bin_size_);
  }
  return this->last_save_block_bin_size_;
};

// Line 725: range 0000000017A03A04-0000000017A03A5F
void __cdecl Player::setLastSaveBlockBinSize(Player *const this, uint32_t last_save_block_bin_size__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_save_block_bin_size_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_save_block_bin_size_, (((_BYTE)this - 116) & 7u) + 3, v2);
  this->last_save_block_bin_size_ = last_save_block_bin_size__out;
};

// Line 727: range 000000001720C352-000000001720C39F
bool __cdecl Player::getIsQuitMp(const Player *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_quit_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_quit_mp_);
  return this->is_quit_mp_;
};

// Line 727: range 00000000131D2E9A-00000000131D2EF0
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setIsQuitMp(Player *const this, bool is_quit_mp__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_quit_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quit_mp_, is_quit_mp__out, &this->is_quit_mp_);
  this->is_quit_mp_ = is_quit_mp__out;
};

// Line 728: range 0000000015A199D2-0000000015A19A1F
bool __cdecl Player::getIsInSimulation(const Player *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_simulation_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_simulation_);
  return this->is_in_simulation_;
};

// Line 728: range 0000000014F74B52-0000000014F74BA4
bool __cdecl Player::getIsValidForAuthority(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_valid_for_authority);
  }
  return this->is_valid_for_authority;
};

// Line 728: range 0000000015A19976-0000000015A199D1
void __cdecl Player::setIsValidForAuthority(Player *const this, bool is_valid_for_authority_out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 111) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_valid_for_authority >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_valid_for_authority, v2, v3);
  this->is_valid_for_authority = is_valid_for_authority_out;
};

// Line 730: range 000000001720C3A0-000000001720C3ED
bool __cdecl Player::getIsInCrcSuspicousList(const Player *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_crc_suspicous_list_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_crc_suspicous_list_);
  return this->is_in_crc_suspicous_list_;
};

// Line 731: range 0000000017D67772-0000000017D677C6
uint32_t __cdecl Player::getRegPlatform(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reg_platform_);
  }
  return this->reg_platform_;
};

// Line 734: range 0000000017D677C8-0000000017D6781E
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setIsInSimulation(Player *const this, bool is_in_simulation__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_simulation_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_simulation_, is_in_simulation__out, &this->is_in_simulation_);
  this->is_in_simulation_ = is_in_simulation__out;
};

// Line 742: range 0000000015A19A20-0000000015A19A6C
uint32_t __cdecl Player::getLastRecvPingTime(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_ping_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_ping_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_recv_ping_time_);
  }
  return this->last_recv_ping_time_;
};

// Line 782: range 000000001604ED3E-000000001604ED8A
uint32_t __cdecl Player::getLastSuccDataVersion(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_succ_data_version);
  }
  return this->last_succ_data_version;
};

// Line 782: range 000000001604ED8C-000000001604EDDF
// local variable allocation has failed, the output may be wrong!
void __cdecl Player::setLastSuccDataVersion(Player *const this, uint32_t last_succ_data_version_out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_succ_data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_succ_data_version,
      *(_QWORD *)&last_succ_data_version_out,
      &this->last_succ_data_version);
  }
  this->last_succ_data_version = last_succ_data_version_out;
};

// Line 784: range 000000001720C3EE-000000001720C440
bool __cdecl Player::getIsDataResVersionChanged(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_data_res_version_changed);
  }
  return this->is_data_res_version_changed;
};

// Line 784: range 0000000015A19A6E-0000000015A19AC9
void __cdecl Player::setIsDataResVersionChanged(Player *const this, bool is_data_res_version_changed_out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 28) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_data_res_version_changed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_data_res_version_changed, v2, v3);
  this->is_data_res_version_changed = is_data_res_version_changed_out;
};

// Line 785: range 000000001720C442-000000001720C49D
void __cdecl Player::setIsJsonDataProficient(Player *const this, bool is_json_data_proficient_out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 29) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_data_proficient >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_data_proficient, v2, v3);
  this->is_json_data_proficient = is_json_data_proficient_out;
};

// Line 792: range 0000000017D67820-0000000017D6787B
void __cdecl Player::setIsInterruptNextTransfer(Player *const this, bool is_interrupt_next_transfer__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 76) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_interrupt_next_transfer_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_next_transfer_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_interrupt_next_transfer_, v2, v3);
  this->is_interrupt_next_transfer_ = is_interrupt_next_transfer__out;
};

// Line 845: range 0000000017232E24-00000000172331DB
int32_t __cdecl Player::addPlayerHandler<AbilityHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<AbilityHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<AbilityHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<AbilityHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<AbilityHandler,void>(v1 + 2, &__r);
  std::shared_ptr<AbilityHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017238D04-00000000172390BB
int32_t __cdecl Player::addPlayerHandler<AchievementHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<AchievementHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<AchievementHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<AchievementHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<AchievementHandler,void>(v1 + 2, &__r);
  std::shared_ptr<AchievementHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017236D64-000000001723711B
int32_t __cdecl Player::addPlayerHandler<ActivityHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ActivityHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ActivityHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ActivityHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ActivityHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ActivityHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723263C-00000000172329F3
int32_t __cdecl Player::addPlayerHandler<AvatarHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<AvatarHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<AvatarHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<AvatarHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<AvatarHandler,void>(v1 + 2, &__r);
  std::shared_ptr<AvatarHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017238128-00000000172384DF
int32_t __cdecl Player::addPlayerHandler<BattlePassHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<BattlePassHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<BattlePassHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<BattlePassHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<BattlePassHandler,void>(v1 + 2, &__r);
  std::shared_ptr<BattlePassHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017237D34-00000000172380EB
int32_t __cdecl Player::addPlayerHandler<BlossomHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<BlossomHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<BlossomHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<BlossomHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<BlossomHandler,void>(v1 + 2, &__r);
  std::shared_ptr<BlossomHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017238910-0000000017238CC7
int32_t __cdecl Player::addPlayerHandler<CodexHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<CodexHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<CodexHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<CodexHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<CodexHandler,void>(v1 + 2, &__r);
  std::shared_ptr<CodexHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017239CD4-000000001723A08B
int32_t __cdecl Player::addPlayerHandler<CoopHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<CoopHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<CoopHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<CoopHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<CoopHandler,void>(v1 + 2, &__r);
  std::shared_ptr<CoopHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723CC44-000000001723CFFB
int32_t __cdecl Player::addPlayerHandler<CustomDungeonHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<CustomDungeonHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<CustomDungeonHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<CustomDungeonHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<CustomDungeonHandler,void>(v1 + 2, &__r);
  std::shared_ptr<CustomDungeonHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723BC74-000000001723C02B
int32_t __cdecl Player::addPlayerHandler<DraftHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<DraftHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<DraftHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<DraftHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<DraftHandler,void>(v1 + 2, &__r);
  std::shared_ptr<DraftHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017233218-00000000172335CF
int32_t __cdecl Player::addPlayerHandler<DungeonHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<DungeonHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<DungeonHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<DungeonHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<DungeonHandler,void>(v1 + 2, &__r);
  std::shared_ptr<DungeonHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723360C-00000000172339C3
int32_t __cdecl Player::addPlayerHandler<FightHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<FightHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<FightHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<FightHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<FightHandler,void>(v1 + 2, &__r);
  std::shared_ptr<FightHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723C850-000000001723CC07
int32_t __cdecl Player::addPlayerHandler<FishingHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<FishingHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<FishingHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<FishingHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<FishingHandler,void>(v1 + 2, &__r);
  std::shared_ptr<FishingHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017236188-000000001723653F
int32_t __cdecl Player::addPlayerHandler<GachaHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<GachaHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<GachaHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GachaHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<GachaHandler,void>(v1 + 2, &__r);
  std::shared_ptr<GachaHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017233A00-0000000017233DB7
int32_t __cdecl Player::addPlayerHandler<GadgetHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<GadgetHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<GadgetHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GadgetHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<GadgetHandler,void>(v1 + 2, &__r);
  std::shared_ptr<GadgetHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172390F8-00000000172394AF
int32_t __cdecl Player::addPlayerHandler<HuntingHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<HuntingHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<HuntingHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<HuntingHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<HuntingHandler,void>(v1 + 2, &__r);
  std::shared_ptr<HuntingHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017236970-0000000017236D27
int32_t __cdecl Player::addPlayerHandler<InvestigationHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<InvestigationHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<InvestigationHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<InvestigationHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<InvestigationHandler,void>(v1 + 2, &__r);
  std::shared_ptr<InvestigationHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017233DF4-00000000172341AB
int32_t __cdecl Player::addPlayerHandler<ItemHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ItemHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ItemHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ItemHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ItemHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ItemHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172341E8-000000001723459F
int32_t __cdecl Player::addPlayerHandler<MailHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<MailHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<MailHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<MailHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<MailHandler,void>(v1 + 2, &__r);
  std::shared_ptr<MailHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723851C-00000000172388D3
int32_t __cdecl Player::addPlayerHandler<MatchHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<MatchHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<MatchHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<MatchHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<MatchHandler,void>(v1 + 2, &__r);
  std::shared_ptr<MatchHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723B098-000000001723B44F
int32_t __cdecl Player::addPlayerHandler<MechanicusHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<MechanicusHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<MechanicusHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<MechanicusHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<MechanicusHandler,void>(v1 + 2, &__r);
  std::shared_ptr<MechanicusHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723B880-000000001723BC37
int32_t __cdecl Player::addPlayerHandler<MiracleRingHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<MiracleRingHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<MiracleRingHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<MiracleRingHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<MiracleRingHandler,void>(v1 + 2, &__r);
  std::shared_ptr<MiracleRingHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723657C-0000000017236933
int32_t __cdecl Player::addPlayerHandler<MpHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<MpHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<MpHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<MpHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<MpHandler,void>(v1 + 2, &__r);
  std::shared_ptr<MpHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017232A30-0000000017232DE7
int32_t __cdecl Player::addPlayerHandler<NpcHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<NpcHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<NpcHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<NpcHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<NpcHandler,void>(v1 + 2, &__r);
  std::shared_ptr<NpcHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723A4BC-000000001723A873
int32_t __cdecl Player::addPlayerHandler<OfferingHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<OfferingHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<OfferingHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<OfferingHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<OfferingHandler,void>(v1 + 2, &__r);
  std::shared_ptr<OfferingHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723B48C-000000001723B843
int32_t __cdecl Player::addPlayerHandler<OpActivityHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<OpActivityHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<OpActivityHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<OpActivityHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<OpActivityHandler,void>(v1 + 2, &__r);
  std::shared_ptr<OpActivityHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723D42C-000000001723D7E3
int32_t __cdecl Player::addPlayerHandler<PlayerGCGHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<PlayerGCGHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<PlayerGCGHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PlayerGCGHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<PlayerGCGHandler,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerGCGHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017235D94-000000001723614B
int32_t __cdecl Player::addPlayerHandler<PlayerHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<PlayerHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<PlayerHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PlayerHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<PlayerHandler,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723C45C-000000001723C813
int32_t __cdecl Player::addPlayerHandler<PlayerHomeHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<PlayerHomeHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<PlayerHomeHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PlayerHomeHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<PlayerHomeHandler,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerHomeHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172359A0-0000000017235D57
int32_t __cdecl Player::addPlayerHandler<PlayerMiscHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<PlayerMiscHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<PlayerMiscHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PlayerMiscHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<PlayerMiscHandler,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerMiscHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172345DC-0000000017234993
int32_t __cdecl Player::addPlayerHandler<PropertyHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<PropertyHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<PropertyHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PropertyHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<PropertyHandler,void>(v1 + 2, &__r);
  std::shared_ptr<PropertyHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172349D0-0000000017234D87
int32_t __cdecl Player::addPlayerHandler<QuestHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<QuestHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<QuestHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<QuestHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<QuestHandler,void>(v1 + 2, &__r);
  std::shared_ptr<QuestHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017237940-0000000017237CF7
int32_t __cdecl Player::addPlayerHandler<RechargeHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<RechargeHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<RechargeHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<RechargeHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<RechargeHandler,void>(v1 + 2, &__r);
  std::shared_ptr<RechargeHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723C068-000000001723C41F
int32_t __cdecl Player::addPlayerHandler<RegionSearchHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<RegionSearchHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<RegionSearchHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<RegionSearchHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<RegionSearchHandler,void>(v1 + 2, &__r);
  std::shared_ptr<RegionSearchHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172394EC-00000000172398A3
int32_t __cdecl Player::addPlayerHandler<ReputationHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ReputationHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ReputationHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ReputationHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ReputationHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ReputationHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723A8B0-000000001723AC67
int32_t __cdecl Player::addPlayerHandler<ReunionHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ReunionHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ReunionHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ReunionHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ReunionHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ReunionHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723ACA4-000000001723B05B
int32_t __cdecl Player::addPlayerHandler<RoutineHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<RoutineHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<RoutineHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<RoutineHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<RoutineHandler,void>(v1 + 2, &__r);
  std::shared_ptr<RoutineHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172355AC-0000000017235963
int32_t __cdecl Player::addPlayerHandler<SceneHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<SceneHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<SceneHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<SceneHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<SceneHandler,void>(v1 + 2, &__r);
  std::shared_ptr<SceneHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723A0C8-000000001723A47F
int32_t __cdecl Player::addPlayerHandler<ScenePlayHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ScenePlayHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ScenePlayHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ScenePlayHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ScenePlayHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ScenePlayHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017234DC4-000000001723517B
int32_t __cdecl Player::addPlayerHandler<ShopHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ShopHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<ShopHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ShopHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<ShopHandler,void>(v1 + 2, &__r);
  std::shared_ptr<ShopHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172351B8-000000001723556F
int32_t __cdecl Player::addPlayerHandler<SkillHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<SkillHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<SkillHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<SkillHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<SkillHandler,void>(v1 + 2, &__r);
  std::shared_ptr<SkillHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 0000000017237158-000000001723750F
int32_t __cdecl Player::addPlayerHandler<SocialHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<SocialHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<SocialHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<SocialHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<SocialHandler,void>(v1 + 2, &__r);
  std::shared_ptr<SocialHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723754C-0000000017237903
int32_t __cdecl Player::addPlayerHandler<TowerHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<TowerHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<TowerHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<TowerHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<TowerHandler,void>(v1 + 2, &__r);
  std::shared_ptr<TowerHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000001723D038-000000001723D3EF
int32_t __cdecl Player::addPlayerHandler<UgcHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<UgcHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<UgcHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<UgcHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<UgcHandler,void>(v1 + 2, &__r);
  std::shared_ptr<UgcHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 00000000172398E0-0000000017239C97
int32_t __cdecl Player::addPlayerHandler<WidgetHandler>(Player *const this)
{
  std::shared_ptr<PlayerHandlerBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::shared_ptr<WidgetHandler> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<PlayerHandlerBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<PlayerHandlerBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 player_handler_ptr:851";
  v1[1]._M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Player::addPlayerHandler<WidgetHandler>;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<WidgetHandler,Player &>((Player *)&__r, this);
  std::shared_ptr<PlayerHandlerBase>::shared_ptr<WidgetHandler,void>(v1 + 2, &__r);
  std::shared_ptr<WidgetHandler>::~shared_ptr(&__r);
  if ( std::operator==<PlayerHandlerBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player.h",
      "addPlayerHandler",
      854);
    common::milog::MiLogStream::operator()(&v11, off_260528A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(v5->_vptr_PlayerHandlerBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PacketFuncMap *))v6)(
           v5,
           &this->process_packet_func_map_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player.h",
        "addPlayerHandler",
        860);
      common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(v7->_vptr_PlayerHandlerBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, BytesFuncMap *))v8)(
             v7,
             &this->process_bytes_func_map_) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player.h",
          "addPlayerHandler",
          866);
        common::milog::MiLogStream::operator()(&v11, "addPacketFuncToMap failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v4 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<PlayerHandlerBase>>::push_back(&this->player_handler_vec_, v1 + 2);
        v4 = 0;
      }
    }
  }
  std::shared_ptr<PlayerHandlerBase>::~shared_ptr(v1 + 2);
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<PlayerHandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 110726: range 00000000143FEF74-00000000143FEFCE
bool __cdecl Player::isLogin(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->login_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->login_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->login_state_);
  }
  return this->login_state_ == Login;
};
