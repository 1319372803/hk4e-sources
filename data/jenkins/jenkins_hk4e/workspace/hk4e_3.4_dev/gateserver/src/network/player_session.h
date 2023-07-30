// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/player_session.h

// Line 34: range 000000000C84C54C-000000000C84C6FC
void __cdecl PlayerSession::~PlayerSession(PlayerSession *const this)
{
  int (**v1)(...); // rdx
  PlayerSession *i; // rbx

  v1 = (int (**)(...))(&`vtable for'PlayerSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpSession = v1;
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->sdk_verify_retry_packet_ptr_);
  if ( this != (PlayerSession *const)-936LL )
  {
    for ( i = (PlayerSession *)&this->last_record_packet_arr_idx_;
          i != (PlayerSession *)this->last_record_packet_str_arr_;
          std::string::~string(i) )
    {
      i = (PlayerSession *)((char *)i - 32);
    }
  }
  std::string::~string(&this->birthday_);
  std::string::~string(&this->psn_id_);
  std::string::~string(&this->country_code_);
  std::string::~string(&this->get_player_token_rsp_str_);
  proto::PlayerExtraBinData::~PlayerExtraBinData(&this->extra_bin_data_);
  std::string::~string(&this->anti_offline_check_info_);
  std::string::~string(&this->anti_offline_cmd_buffer_);
  std::unordered_map<unsigned short,unsigned long>::~unordered_map(&this->cmd_last_recv_time_map_);
  std::string::~string(&this->client_version_random_key_);
  std::string::~string(&this->secret_key_);
  std::unordered_map<unsigned short,std::pair<unsigned long,unsigned int>>::~unordered_map(&this->packet_last_check_freq_time_map_);
  std::unordered_map<unsigned short,unsigned int>::~unordered_map(&this->packet_count_map_);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->login_packet_ptr_);
  std::string::~string(&this->account_uid_);
  std::string::~string(&this->account_token_);
  common::minet::KcpSession::~KcpSession(this);
};

// Line 34: range 000000000C84C6FE-000000000C84C728
void __cdecl PlayerSession::~PlayerSession(PlayerSession *const this)
{
  PlayerSession::~PlayerSession(this);
  operator delete(this, 0x510uLL);
};

// Line 44: range 000000000C79E524-000000000C79ED7A
void __cdecl PlayerSession::PlayerSession(
        PlayerSession *const this,
        const common::minet::KcpConnMgrBaseWtr *kcp_conn_mgr_wtr,
        uint32_t session_id,
        uint32_t token)
{
  int (**v4)(...); // rdx
  __int64 v5; // rbx
  std::string *last_record_packet_str_arr; // r12

  common::minet::KcpSession::KcpSession(this, kcp_conn_mgr_wtr, session_id, token);
  v4 = (int (**)(...))(&`vtable for'PlayerSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpSession = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish_login_);
  }
  this->is_finish_login_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 3) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_recv_login_);
  }
  this->is_recv_login_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gameserver_id_);
  }
  this->gameserver_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->connect_time_);
  }
  this->connect_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag_);
  }
  this->tag_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reg_platform_);
  }
  this->reg_platform_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_token_req_time_);
  }
  this->last_token_req_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_login_req_time_);
  }
  this->last_login_req_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->packet_recv_last_check_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_recv_count_);
  }
  this->packet_recv_count_ = 0;
  std::string::basic_string(&this->account_token_);
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type_);
  }
  this->account_type_ = 0;
  std::string::basic_string(&this->account_uid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type_);
  }
  this->platform_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_editor_);
  }
  this->is_editor_ = 0;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->login_packet_ptr_);
  std::unordered_map<unsigned short,unsigned int>::unordered_map(&this->packet_count_map_);
  std::unordered_map<unsigned short,std::pair<unsigned long,unsigned int>>::unordered_map(&this->packet_last_check_freq_time_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_rtt_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_rtt_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_rtt_time_);
  }
  this->last_check_rtt_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gm_uid_);
  }
  this->gm_uid_ = 0;
  std::string::basic_string(&this->secret_key_);
  std::string::basic_string(&this->client_version_random_key_);
  std::unordered_map<unsigned short,unsigned long>::unordered_map(&this->cmd_last_recv_time_map_);
  std::string::basic_string(&this->anti_offline_cmd_buffer_);
  std::string::basic_string(&this->anti_offline_check_info_);
  proto::PlayerExtraBinData::PlayerExtraBinData(&this->extra_bin_data_);
  std::string::basic_string(&this->get_player_token_rsp_str_);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id_);
  }
  this->channel_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_channel_id_);
  }
  this->sub_channel_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest_);
  this->is_guest_ = 0;
  std::string::basic_string(&this->country_code_);
  std::string::basic_string(&this->psn_id_);
  std::string::basic_string(&this->birthday_);
  v5 = 9LL;
  last_record_packet_str_arr = this->last_record_packet_str_arr_;
  while ( v5 >= 0 )
  {
    std::string::basic_string(last_record_packet_str_arr++);
    --v5;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_record_packet_arr_idx_);
  }
  this->last_record_packet_arr_idx_ = 0;
  AntiCheatLogRecord::AntiCheatLogRecord(&this->recv_packet_freq_exceed_limit_anti_cheat_log_record_);
  AntiCheatLogRecord::AntiCheatLogRecord(&this->single_packet_freq_exceed_limit_anti_cheat_log_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sdk_verify_retry_time_);
  }
  this->sdk_verify_retry_time_ = 0;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->sdk_verify_retry_packet_ptr_, 0LL);
};

// Line 81: range 000000000C79ED7C-000000000C79ED8F
const std::string *__cdecl PlayerSession::getAccountToken[abi:cxx11](const PlayerSession *const this)
{
  return &this->account_token_;
};

// Line 82: range 000000000C79ED90-000000000C79EDBB
void __cdecl PlayerSession::setAccountToken(PlayerSession *const this, const std::string *token)
{
  std::string::operator=(&this->account_token_, token);
};

// Line 84: range 000000000C79EDBC-000000000C79EE08
uint32_t __cdecl PlayerSession::getAccountType(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->account_type_);
  }
  return this->account_type_;
};

// Line 85: range 000000000C79EE0A-000000000C79EE5C
void __cdecl PlayerSession::setAccountType(PlayerSession *const this, uint32_t account_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type_);
  }
  this->account_type_ = account_type;
};

// Line 87: range 000000000C79EE5E-000000000C79EE8D
std::string *__cdecl PlayerSession::getAccountUid[abi:cxx11](std::string *retstr, const PlayerSession *const this)
{
  std::string::basic_string(retstr, &this->account_uid_);
  return retstr;
};

// Line 88: range 000000000C79EE8E-000000000C79EEB9
void __cdecl PlayerSession::setAccountUid(PlayerSession *const this, std::string *p_account_uid)
{
  std::string::operator=(&this->account_uid_, p_account_uid);
};

// Line 90: range 000000000C79EEBA-000000000C79EF06
uint32_t __cdecl PlayerSession::getPlatformType(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->platform_type_);
  }
  return this->platform_type_;
};

// Line 91: range 000000000C79EF08-000000000C79EF5A
void __cdecl PlayerSession::setPlatformType(PlayerSession *const this, uint32_t platform_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type_);
  }
  this->platform_type_ = platform_type;
};

// Line 92: range 000000000C79EF5C-000000000C79EF6F
const std::string *__cdecl PlayerSession::getPsnId[abi:cxx11](const PlayerSession *const this)
{
  return &this->psn_id_;
};

// Line 93: range 000000000C79EF70-000000000C79EF9B
void __cdecl PlayerSession::setPsnId(PlayerSession *const this, const std::string *psn_id)
{
  std::string::operator=(&this->psn_id_, psn_id);
};

// Line 95: range 000000000C79EF9C-000000000C79EFCB
std::string *__cdecl PlayerSession::getCountryCode[abi:cxx11](std::string *retstr, const PlayerSession *const this)
{
  std::string::basic_string(retstr, &this->country_code_);
  return retstr;
};

// Line 96: range 000000000C79EFCC-000000000C79EFF7
void __cdecl PlayerSession::setCountryCode(PlayerSession *const this, const std::string *country_code)
{
  std::string::operator=(&this->country_code_, country_code);
};

// Line 98: range 000000000C79EFF8-000000000C79F04A
bool __cdecl PlayerSession::isEditor(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_editor_);
  }
  return this->is_editor_;
};

// Line 100: range 000000000C79F0F8-000000000C79F123
void __cdecl PlayerSession::cacheLoginReq(PlayerSession *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::shared_ptr<common::minet::Packet>::operator=(&this->login_packet_ptr_, p_packet_ptr);
};

// Line 111: range 000000000C79F124-000000000C79F170
uint32_t __cdecl PlayerSession::getLastTokenReqTime(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_token_req_time_);
  }
  return this->last_token_req_time_;
};

// Line 112: range 000000000C79F172-000000000C79F1C4
void __cdecl PlayerSession::setLastTokenReqTime(PlayerSession *const this, uint32_t time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_token_req_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_token_req_time_);
  }
  this->last_token_req_time_ = time;
};

// Line 114: range 000000000C79F1C6-000000000C79F21A
uint32_t __cdecl PlayerSession::getLastLoginReqTime(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_login_req_time_);
  }
  return this->last_login_req_time_;
};

// Line 115: range 000000000C79F21C-000000000C79F276
void __cdecl PlayerSession::setLastLoginReqTime(PlayerSession *const this, uint32_t time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_req_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_login_req_time_);
  }
  this->last_login_req_time_ = time;
};

// Line 117: range 000000000C79F278-000000000C79F2CC
uint32_t __cdecl PlayerSession::getGmUid(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gm_uid_);
  }
  return this->gm_uid_;
};

// Line 118: range 000000000C79F2CE-000000000C79F328
void __cdecl PlayerSession::setGmUid(PlayerSession *const this, uint32_t gm_uid)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gm_uid_);
  }
  this->gm_uid_ = gm_uid;
};

// Line 127: range 000000000C79F32A-000000000C79F355
void __cdecl PlayerSession::setClientVersionRandomKey(
        PlayerSession *const this,
        std::string *client_version_random_key)
{
  std::string::operator=(&this->client_version_random_key_, client_version_random_key);
};

// Line 138: range 000000000C79F356-000000000C79F369
const proto::PlayerExtraBinData *__cdecl PlayerSession::getPlayerExtraBinData(const PlayerSession *const this)
{
  return &this->extra_bin_data_;
};

// Line 140: range 000000000C79F36A-000000000C79F3BC
void __cdecl PlayerSession::setChannelId(PlayerSession *const this, uint32_t channel_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id_);
  }
  this->channel_id_ = channel_id;
};

// Line 141: range 000000000C79F3BE-000000000C79F40A
uint32_t __cdecl PlayerSession::getChannelId(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->channel_id_);
  }
  return this->channel_id_;
};

// Line 143: range 000000000C79F40C-000000000C79F466
void __cdecl PlayerSession::setSubChannelId(PlayerSession *const this, uint32_t sub_channel_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_channel_id_);
  }
  this->sub_channel_id_ = sub_channel_id;
};

// Line 144: range 000000000C79F468-000000000C79F4BC
uint32_t __cdecl PlayerSession::getSubChannelId(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_channel_id_);
  }
  return this->sub_channel_id_;
};

// Line 146: range 000000000C79F4BE-000000000C79F513
void __cdecl PlayerSession::setGuest(PlayerSession *const this, bool is_guest)
{
  if ( *(char *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest_);
  this->is_guest_ = is_guest;
};

// Line 147: range 000000000C79F514-000000000C79F561
bool __cdecl PlayerSession::isGuest(const PlayerSession *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_guest_);
  return this->is_guest_;
};

// Line 149: range 000000000C79F562-000000000C79F575
const std::string *__cdecl PlayerSession::getBirthday[abi:cxx11](const PlayerSession *const this)
{
  return &this->birthday_;
};

// Line 150: range 000000000C79F576-000000000C79F5A1
void __cdecl PlayerSession::setBirthday(PlayerSession *const this, const std::string *birthday)
{
  std::string::operator=(&this->birthday_, birthday);
};

// Line 162: range 000000000C79F5A2-000000000C79F5EE
uint32_t __cdecl PlayerSession::getUid(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 162: range 000000000C79F5F0-000000000C79F643
void __cdecl PlayerSession::setUid(PlayerSession *const this, uint32_t uid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = uid__out;
};

// Line 163: range 000000000C79F644-000000000C79F696
bool __cdecl PlayerSession::getIsFinishLogin(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_login_);
  }
  return this->is_finish_login_;
};

// Line 163: range 000000000C79F698-000000000C79F6F3
void __cdecl PlayerSession::setIsFinishLogin(PlayerSession *const this, bool is_finish_login__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish_login_);
  }
  this->is_finish_login_ = is_finish_login__out;
};

// Line 165: range 000000000C79F6F4-000000000C79F740
uint32_t __cdecl PlayerSession::getGameserverId(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gameserver_id_);
  }
  return this->gameserver_id_;
};

// Line 165: range 000000000C79F742-000000000C79F795
void __cdecl PlayerSession::setGameserverId(PlayerSession *const this, uint32_t gameserver_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gameserver_id_);
  }
  this->gameserver_id_ = gameserver_id__out;
};

// Line 167: range 000000000C79F796-000000000C79F7E2
uint32_t __cdecl PlayerSession::getTag(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tag_);
  }
  return this->tag_;
};

// Line 167: range 000000000C79F7E4-000000000C79F837
void __cdecl PlayerSession::setTag(PlayerSession *const this, uint32_t tag__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag_);
  }
  this->tag_ = tag__out;
};

// Line 168: range 000000000C79F838-000000000C79F88C
uint32_t __cdecl PlayerSession::getRegPlatform(const PlayerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reg_platform_);
  }
  return this->reg_platform_;
};

// Line 168: range 000000000C79F88E-000000000C79F8E9
void __cdecl PlayerSession::setRegPlatform(PlayerSession *const this, uint32_t reg_platform__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reg_platform_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reg_platform_);
  }
  this->reg_platform_ = reg_platform__out;
};
