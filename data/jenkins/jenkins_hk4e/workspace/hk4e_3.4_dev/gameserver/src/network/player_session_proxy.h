// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/player_session_proxy.h

// Line 26: range 00000000178CBFA6-00000000178CC03C
void __cdecl PlayerSessionProxy::~PlayerSessionProxy(PlayerSessionProxy *const this)
{
  std::map<unsigned int,proto::BlockInfo>::~map(&this->block_info_map_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::string::~string(&this->flag_str_);
  std::string::~string(&this->client_ip_str_);
  proto::PlayerLoginReq::~PlayerLoginReq(&this->login_req_);
  proto::PacketHead::~PacketHead(&this->login_packet_head_);
  std::enable_shared_from_this<PlayerSessionProxy>::~enable_shared_from_this(this);
};

// Line 32: range 0000000017632476-00000000176326FE
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSessionProxy::PlayerSessionProxy(PlayerSessionProxy *const this, uint32_t uid)
{
  unsigned __int64 v2; // rdx
  uint32_t v3; // ecx

  std::enable_shared_from_this<PlayerSessionProxy>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = uid;
  proto::PacketHead::PacketHead(&this->login_packet_head_);
  proto::PlayerLoginReq::PlayerLoginReq(&this->login_req_);
  v2 = ZTWN11ThreadLocal17work_thread_indexE(&this->login_req_, *(_QWORD *)&uid);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  v3 = *(_DWORD *)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_index_);
  }
  this->thread_index_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_login_rand_);
  this->cur_login_rand_ = 0LL;
  std::string::basic_string(&this->client_ip_str_);
  std::string::basic_string(&this->flag_str_);
  if ( *(char *)(((unsigned __int64)&this->is_connected_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_connected_);
  this->is_connected_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->login_time_);
  this->login_time_ = 0LL;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_info_notify_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->block_info_notify_login_rand_);
  this->block_info_notify_login_rand_ = 0LL;
  std::map<unsigned int,proto::BlockInfo>::map(&this->block_info_map_);
};

// Line 47: range 000000001605026E-00000000160502BF
PlayerPtr __cdecl PlayerSessionProxy::getPlayer(PlayerSessionProxy *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 50: range 00000000160502C0-0000000016050307
uint32_t __cdecl PlayerSessionProxy::getUid(const PlayerSessionProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->uid_;
};

// Line 52: range 0000000016050308-00000000160504AD
uint32_t __cdecl PlayerSessionProxy::getGateserverId(const PlayerSessionProxy *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,unsigned int>::const_pointer v4; // rdx
  uint32_t result; // eax
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+14h] [rbp-ACh] BYREF
  const google::protobuf::Map<unsigned int,unsigned int> *app_id_map; // [rsp+18h] [rbp-A8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator b; // [rsp+20h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 7 iter:55";
  *(_QWORD *)(v1 + 16) = PlayerSessionProxy::getGateserverId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  app_id_map = proto::PacketHead::service_app_id_map(&this->login_packet_head_);
  key = 2;
  google::protobuf::Map<unsigned int,unsigned int>::find(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v1 + 32),
    app_id_map,
    &key);
  google::protobuf::Map<unsigned int,unsigned int>::end(&b, app_id_map);
  if ( google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v1 + 32),
         &b) )
  {
    v4 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator->((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v4->second;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 63: range 00000000160504CC-00000000160504DF
const std::string *__cdecl PlayerSessionProxy::getClientIpStr[abi:cxx11](const PlayerSessionProxy *const this)
{
  return &this->client_ip_str_;
};

// Line 63: range 00000000160504AE-00000000160504CB
uint32_t __cdecl PlayerSessionProxy::getGateserverSessionId(const PlayerSessionProxy *const this)
{
  return proto::PacketHead::user_session_id(&this->login_packet_head_);
};

// Line 65: range 0000000017632700-000000001763271D
uint32_t __cdecl PlayerSessionProxy::getClientIp(const PlayerSessionProxy *const this)
{
  return proto::PacketHead::user_ip(&this->login_packet_head_);
};

// Line 66: range 00000000160504E0-00000000160504FF
uint32_t __cdecl PlayerSessionProxy::getCloudClientIp(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::cloud_client_ip(&this->login_req_);
};

// Line 70: range 0000000016050500-0000000016050511
const proto::PacketHead *__cdecl PlayerSessionProxy::getLoginPacketHead(const PlayerSessionProxy *const this)
{
  return &this->login_packet_head_;
};

// Line 73: range 0000000016050512-0000000016050525
const proto::PlayerLoginReq *__cdecl PlayerSessionProxy::getLoginReq(const PlayerSessionProxy *const this)
{
  return &this->login_req_;
};

// Line 73: range 0000000016050526-0000000016050545
uint64_t __cdecl PlayerSessionProxy::getLastLoginRand(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::login_rand(&this->login_req_);
};

// Line 74: range 000000001763271E-0000000017632749
void __cdecl PlayerSessionProxy::setLoginReq(PlayerSessionProxy *const this, const proto::PlayerLoginReq *req)
{
  proto::PlayerLoginReq::operator=(&this->login_req_, req);
};

// Line 80: range 0000000016050546-0000000016050585
uint64_t __cdecl PlayerSessionProxy::getCurLoginRand(const PlayerSessionProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->cur_login_rand_;
};

// Line 80: range 0000000016050586-00000000160505CD
void __cdecl PlayerSessionProxy::setCurLoginRand(PlayerSessionProxy *const this, uint64_t login_rand)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_login_rand_);
  this->cur_login_rand_ = login_rand;
};

// Line 88: range 00000000160505E2-000000001605062F
bool __cdecl PlayerSessionProxy::isConnected(const PlayerSessionProxy *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_connected_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_connected_);
  return this->is_connected_;
};

// Line 88: range 00000000160505CE-00000000160505E1
const std::string *__cdecl PlayerSessionProxy::getFlagStr[abi:cxx11](const PlayerSessionProxy *const this)
{
  return &this->flag_str_;
};

// Line 91: range 0000000016050630-000000001605064F
uint32_t __cdecl PlayerSessionProxy::getPlatformType(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::platform_type(&this->login_req_);
};

// Line 101: range 000000001720E1C8-000000001720E1E7
uint32_t __cdecl PlayerSessionProxy::getChannelId(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::channel_id(&this->login_req_);
};

// Line 102: range 000000001720E1E8-000000001720E207
uint32_t __cdecl PlayerSessionProxy::getSubChannelId(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::sub_channel_id(&this->login_req_);
};

// Line 103: range 000000001720E208-000000001720E227
const std::string *__cdecl PlayerSessionProxy::getAccountToken[abi:cxx11](const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::token[abi:cxx11](&this->login_req_);
};

// Line 104: range 000000001720E228-000000001720E247
uint32_t __cdecl PlayerSessionProxy::getAccountType(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::account_type(&this->login_req_);
};

// Line 105: range 000000001720E248-000000001720E281
std::string *__cdecl PlayerSessionProxy::getAccountUid[abi:cxx11](
        std::string *retstr,
        const PlayerSessionProxy *const this)
{
  const std::string *v2; // rdx

  v2 = proto::PlayerLoginReq::account_uid[abi:cxx11](&this->login_req_);
  std::string::basic_string(retstr, v2);
  return retstr;
};

// Line 106: range 000000001720E282-000000001720E2A1
uint32_t __cdecl PlayerSessionProxy::getGmUid(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::gm_uid(&this->login_req_);
};

// Line 107: range 000000001720E2A2-000000001720E2C1
uint32_t __cdecl PlayerSessionProxy::getTag(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::tag(&this->login_req_);
};

// Line 110: range 000000001720E2C2-000000001720E2E1
bool __cdecl PlayerSessionProxy::isGuest(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::is_guest(&this->login_req_);
};

// Line 112: range 0000000016050650-000000001605066F
uint32_t __cdecl PlayerSessionProxy::getClientToken(const PlayerSessionProxy *const this)
{
  return proto::PlayerLoginReq::client_token(&this->login_req_);
};

// Line 114: range 0000000016050670-00000000160506BC
uint32_t __cdecl PlayerSessionProxy::getThreadIndex(PlayerSessionProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->thread_index_;
};

// Line 118: range 00000000160506BE-00000000160506D1
const std::map<unsigned int,proto::BlockInfo> *__cdecl PlayerSessionProxy::getBlockInfoMap(
        const PlayerSessionProxy *const this)
{
  return &this->block_info_map_;
};

// Line 119: range 00000000160506D2-0000000016050711
uint64_t __cdecl PlayerSessionProxy::getBlockInfoLoginRand(const PlayerSessionProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_info_notify_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->block_info_notify_login_rand_;
};

// Line 142: range 000000001723EC46-000000001723EF22
int32_t __cdecl PlayerSessionProxy::sendProto<proto::DisconnectClientNotify>(
        PlayerSessionProxy *const this,
        const proto::DisconnectClientNotify *proto,
        const jaegertracing::SpanContext *sc_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  TracingMgr *v7; // rcx
  common::minet::Packet *v8; // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 packet_ptr:144 64 32 16 span_ctx_str:152";
  *(_QWORD *)(v3 + 16) = PlayerSessionProxy::sendProto<proto::DisconnectClientNotify>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  common::minet::PacketUtils::createPacket<proto::DisconnectClientNotify>((const proto::DisconnectClientNotify *)(v3 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session_proxy.h",
      "sendProto",
      147);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v12, (const char (*)[21])"create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    if ( sc_ptr )
    {
      std::string::basic_string(v3 + 64);
      v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
      TracingMgr::inject(v7, sc_ptr, (std::string *)(v3 + 64));
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::string::basic_string(&v12, v3 + 64);
      common::minet::Packet::setSpanContextStr(v8, (std::string *)&v12);
      std::string::~string(&v12);
      std::string::~string((void *)(v3 + 64));
    }
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v6 = PlayerSessionProxy::sendPacket(this, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001606AC80-000000001606AF5C
int32_t __cdecl PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>(
        PlayerSessionProxy *const this,
        const proto::PlayerLoginRsp *proto,
        const jaegertracing::SpanContext *sc_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  TracingMgr *v7; // rcx
  common::minet::Packet *v8; // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 packet_ptr:144 64 32 16 span_ctx_str:152";
  *(_QWORD *)(v3 + 16) = PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>((const proto::PlayerLoginRsp *)(v3 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session_proxy.h",
      "sendProto",
      147);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v12, (const char (*)[21])"create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    if ( sc_ptr )
    {
      std::string::basic_string(v3 + 64);
      v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
      TracingMgr::inject(v7, sc_ptr, (std::string *)(v3 + 64));
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::string::basic_string(&v12, v3 + 64);
      common::minet::Packet::setSpanContextStr(v8, (std::string *)&v12);
      std::string::~string(&v12);
      std::string::~string((void *)(v3 + 64));
    }
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v6 = PlayerSessionProxy::sendPacket(this, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
