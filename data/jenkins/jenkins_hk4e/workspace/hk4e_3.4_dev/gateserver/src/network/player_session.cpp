// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/player_session.cpp

// Line 85: range 000000000C752256-000000000C75286F
__int64 __fastcall PlayerSession::onConnect(PlayerSession *const this, uint32_t data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // eax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t TimeOutMs; // eax
  uint64_t NowMs; // rax
  uint32_t Now; // edi
  __int64 result; // rax
  unsigned int remote_port; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int SessionId; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 data:84";
  *(_QWORD *)(v2 + 16) = PlayerSession::onConnect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = data;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 == 987654321 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session.cpp",
      "onConnect",
      92);
    v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v25,
            (const char (*)[46])"[LOGIN] player connect from unity editor, ip:");
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&val, this);
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])", port:");
    remote_port = common::minet::KcpSession::get_remote_port(this);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &remote_port);
    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", session_id:");
    SessionId = common::minet::KcpSession::getSessionId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &SessionId);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_editor_);
    }
    this->is_editor_ = 1;
  }
  else
  {
    if ( v5 == 1234567890 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/player_session.cpp",
        "onConnect",
        89);
      v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v25,
             (const char (*)[46])"[LOGIN] player connect from mobile phone, ip:");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "onConnect",
        96);
      v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v25,
              (const char (*)[30])"[LOGIN] invalid connect data:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
      v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])", ip:");
    }
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])", port:");
    remote_port = common::minet::KcpSession::get_remote_port(this);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &remote_port);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", session_id:");
    SessionId = common::minet::KcpSession::getSessionId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &SessionId);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  if ( *(_DWORD *)(v2 + 32) == 987654321 )
  {
    TimeOutMs = common::minet::KcpSession::getTimeOutMs(this);
    common::minet::KcpSession::setTimeOutMs(this, 100 * TimeOutMs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_recv_count_);
  }
  this->packet_recv_count_ = 0;
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
    NowMs = __asan_report_store8();
  this->packet_recv_last_check_time_ms_ = NowMs;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) )
  {
    Now = (_DWORD)this + 260;
    __asan_report_store4(&this->connect_time_);
  }
  this->connect_time_ = Now;
  result = 0LL;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 115: range 000000000C752870-000000000C752F0F
int32_t __cdecl PlayerSession::onDisconnect(PlayerSession *const this, uint32_t data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::minet::PacketPtr v6; // rdi
  int v7; // edi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-16Ch] BYREF
  time_t now; // [rsp+18h] [rbp-168h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-160h] BYREF
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-130h] BYREF
  char v37[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 17 time_interval:137 64 4 14 cur_rtt_ms:138 80 4 12 pkt_loss:139 96 4 16 rx_bandwidth:140"
                        " 112 4 16 tx_bandwidth:141 128 16 14 packet_ptr:124 160 24 10 notify:122";
  *(_QWORD *)(v2 + 16) = PlayerSession::onDisconnect;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( this->uid_ )
  {
    proto::PlayerDisconnectNotify::PlayerDisconnectNotify((proto::PlayerDisconnectNotify *const)(v2 + 160));
    proto::PlayerDisconnectNotify::set_data((proto::PlayerDisconnectNotify *const)(v2 + 160), data);
    common::minet::PacketUtils::createPacket<proto::PlayerDisconnectNotify>((const proto::PlayerDisconnectNotify *)(v2 + 128));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "onDisconnect",
        127);
      common::milog::MiLogStream::operator()(&v36, "create packet failed");
      common::milog::MiLogStream::~MiLogStream(&v36);
      v5 = -1;
    }
    else
    {
      PlayerSession::initPacketHead(this, (const common::minet::PacketPtr *)(v2 + 128));
      v6._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 128);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
      v6._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      ServiceBox::forcePushPacketToService(v6);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      now = time(0LL);
      v7 = now;
      if ( *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) )
      {
        v7 = (_DWORD)this + 260;
        __asan_report_load4(&this->connect_time_);
      }
      *(_DWORD *)(v2 + 48) = v7 - this->connect_time_;
      *(_DWORD *)(v2 + 64) = common::minet::KcpSession::getRtt(this);
      *(_DWORD *)(v2 + 80) = common::minet::KcpSession::getPktLoss(this);
      *(_DWORD *)(v2 + 96) = common::minet::KcpSession::getRxBandwidth(this);
      *(_DWORD *)(v2 + 112) = common::minet::KcpSession::getTxBandwidth(this);
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/network/player_session.cpp",
        "onDisconnect",
        142);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v35,
             (const char (*)[32])"[LOGIN] player disconnect, uid:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])", connect time:");
      if ( *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->connect_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->connect_time_);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v36, this->connect_time_);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v36);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])"[");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])"s]");
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", is editor:");
      if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_editor_);
      }
      v16 = common::milog::MiLogStream::operator<<(v15, this->is_editor_);
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])", reason:");
      v18 = proto::ENetReason_Name[abi:cxx11]((proto::ENetReason)data);
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", cur_rtt:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])"ms, pkt_loss:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 80));
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])", rx_bandwidth:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 96));
      v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])", tx_bandwidth: ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v26,
              (const unsigned int *)(v2 + 112));
      v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])", session_id:");
      val = common::minet::KcpSession::getSessionId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      std::string::~string(&v36);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v5 = 0;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    proto::PlayerDisconnectNotify::~PlayerDisconnectNotify((proto::PlayerDisconnectNotify *const)(v2 + 160));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 152: range 000000000C752F10-000000000C756864
int32_t __cdecl PlayerSession::onRecv(PlayerSession *const this, char *data, uint32_t len)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t uid; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const std::string *v21; // r14
  common::milog::MiLogStream *v22; // rax
  std::string *v23; // rax
  std::__detail::_Node_iterator<std::pair<short unsigned int const,unsigned int>,false,false>::reference v24; // rax
  std::pair<unsigned int const,short unsigned int> *v25; // rdx
  const unsigned __int16 *v26; // r8
  std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::reference v27; // rax
  std::pair<unsigned int const,short unsigned int> *v28; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t Now; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::reference v34; // rax
  std::pair<unsigned int const,short unsigned int> *v35; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  const std::string *v37; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  GateserverService *v43; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::reference v44; // rax
  std::pair<unsigned int const,short unsigned int> *v45; // rdx
  const std::string *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::string *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // r14d
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // r14
  common::minet::Packet *v54; // rax
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  google::protobuf::uint32 v61; // eax
  std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  google::protobuf::uint32 v63; // eax
  common::milog::MiLogStream *v64; // r14
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  unsigned __int64 v71; // rax
  __int64 (__fastcall *v72)(PlayerSession *const, unsigned __int64); // r14
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // r14
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  GateserverService *v78; // rcx
  common::milog::MiLogStream *v79; // r14
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r14
  int v85; // r15d
  char v86; // r15
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  uint32_t v88; // edx
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rax
  const std::string *v90; // rax
  char v91; // r15
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  const std::string *v94; // rax
  GateserverService *v95; // rcx
  common::milog::MiLogStream *v96; // r14
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // r14
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r14
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v106; // rax
  const std::string *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r14
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // r14
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // r15
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // r15
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v118; // rax
  const std::string *v119; // rax
  common::milog::MiLogStream *v120; // rax
  GateserverService *v121; // rcx
  common::milog::MiLogStream *v122; // r15
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  const char *v127; // r14
  uint32_t v128; // r15d
  const std::string *v129; // rax
  const char *v130; // rax
  common::minet::Packet *v131; // r15
  uint32_t Rtt; // eax
  int v133; // r15d
  std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v134; // rcx
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rcx
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // r15
  std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v140; // rax
  int v141; // r15d
  common::minet::PacketPtr v142; // rdi
  int v143; // r15d
  common::minet::PacketPtr v144; // rdi
  common::minet::Packet *v145; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v146; // rax
  bool isTamperClientMsg; // r14
  common::minet::Packet *v148; // rax
  uint64_t NowMs; // r14
  unsigned __int64 v150; // rax
  common::minet::PacketPtr v151; // rdi
  int32_t result; // eax
  google::protobuf::uint32 v153; // [rsp+8h] [rbp-4E8h]
  bool v154; // [rsp+8h] [rbp-4E8h]
  unsigned int v157; // [rsp+24h] [rbp-4CCh] BYREF
  proto::ENetReason v158; // [rsp+28h] [rbp-4C8h] BYREF
  unsigned int SessionId; // [rsp+2Ch] [rbp-4C4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-4C0h] BYREF
  uint32_t proto_count; // [rsp+34h] [rbp-4BCh]
  uint32_t i; // [rsp+38h] [rbp-4B8h]
  uint32_t now_ms; // [rsp+3Ch] [rbp-4B4h]
  uint32_t idx; // [rsp+40h] [rbp-4B0h]
  uint32_t len_0; // [rsp+44h] [rbp-4ACh]
  std::unordered_map<short unsigned int,unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-4A8h] BYREF
  std::unordered_map<short unsigned int,unsigned int>::iterator __for_end; // [rsp+50h] [rbp-4A0h] BYREF
  std::unordered_map<short unsigned int,unsigned int> *__for_range; // [rsp+58h] [rbp-498h]
  std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *__for_range_0; // [rsp+60h] [rbp-490h]
  std::tuple_element<0,std::pair<unsigned int const,short unsigned int> >::type *count_0; // [rsp+68h] [rbp-488h]
  std::tuple_element<1,std::pair<unsigned int const,short unsigned int> >::type *cmd_id_0; // [rsp+70h] [rbp-480h]
  proto::PacketCountInfo *count_info; // [rsp+78h] [rbp-478h]
  const RecvPacketFreqExceedLimitConfig *anti_cheat_log_config; // [rsp+80h] [rbp-470h]
  std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *__for_range_1; // [rsp+88h] [rbp-468h]
  std::tuple_element<0,std::pair<unsigned int const,short unsigned int> >::type *count_1; // [rsp+90h] [rbp-460h]
  std::tuple_element<1,std::pair<unsigned int const,short unsigned int> >::type *cmd_id_1; // [rsp+98h] [rbp-458h]
  proto_log::PacketCountInfoLog *proto_log_packet; // [rsp+A0h] [rbp-450h]
  std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *__for_range_2; // [rsp+A8h] [rbp-448h]
  std::tuple_element<0,std::pair<unsigned int const,short unsigned int> >::type *count_2; // [rsp+B0h] [rbp-440h]
  std::tuple_element<1,std::pair<unsigned int const,short unsigned int> >::type *cmd_id_2; // [rsp+B8h] [rbp-438h]
  std::tuple_element<0,std::pair<short unsigned int const,unsigned int> >::type *cmd_id; // [rsp+C0h] [rbp-430h]
  std::tuple_element<1,std::pair<short unsigned int const,unsigned int> >::type *count; // [rsp+C8h] [rbp-428h]
  char *data_0; // [rsp+D0h] [rbp-420h]
  std::pair<unsigned int const,short unsigned int> __in; // [rsp+D8h] [rbp-418h] BYREF
  std::string __rhs; // [rsp+E0h] [rbp-410h] BYREF
  std::string __lhs; // [rsp+100h] [rbp-3F0h] BYREF
  std::string v187; // [rsp+120h] [rbp-3D0h] BYREF
  std::string v188; // [rsp+140h] [rbp-3B0h] BYREF
  std::string v189; // [rsp+160h] [rbp-390h] BYREF
  std::string v190; // [rsp+180h] [rbp-370h] BYREF
  std::string v191; // [rsp+1A0h] [rbp-350h] BYREF
  common::milog::MiLogStream v192; // [rsp+1C0h] [rbp-330h] BYREF
  char v193[784]; // [rsp+1E0h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v193;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 2 10 cmd_id:165 64 4 16 packet_count:184 80 4 20 time_interval_ms:185 96 16 14 packet_ptr:"
                        "154 128 16 16 ping_req_ptr:303 160 16 24 tothemoon_packet_ptr:443 192 16 17 token_req_ptr:344 22"
                        "4 24 10 notify:442 288 32 14 server_log:245 352 32 14 server_log:170 416 32 7 rsp:310 480 40 10 "
                        "notify:243 560 48 17 count_cmd_map:189 640 56 17 exceed_notify:194";
  *(_QWORD *)(v4 + 16) = PlayerSession::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234688015;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959360;
  v6[536862737] = 62194;
  v6[536862739] = -218959118;
  v6[536862741] = -218103808;
  v6[536862742] = -202116109;
  PlayerSession::encryptPacketData(this, data, len);
  common::minet::PacketUtils::createPacket(v4 + 96, data, len);
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session.cpp",
      "onRecv",
      157);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v192,
           (const char (*)[40])"PacketUtils::createPacket failed, uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->uid_);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" session_id:");
    val = common::minet::KcpSession::getSessionId(this);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" ,key len: ");
    __in = (std::pair<unsigned int const,short unsigned int>)std::string::size(&this->secret_key_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)&__in);
    common::milog::MiLogStream::~MiLogStream(&v192);
    v3 = 0;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( !this->uid_ )
    goto LABEL_14;
  v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  if ( !common::minet::Packet::getUserId(v12) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  uid = this->uid_;
  v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  if ( uid != common::minet::Packet::getUserId(v14) )
    v15 = 1;
  else
LABEL_14:
    v15 = 0;
  if ( v15 )
  {
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "onRecv",
      162);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v192, (const char (*)[6])"uid: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->uid_);
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" packet uid: ");
    v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    val = common::minet::Packet::getUserId(v19);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    common::milog::MiLogStream::~MiLogStream(&v192);
    v3 = 0;
    goto LABEL_179;
  }
  v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  *(_WORD *)(v4 + 48) = common::minet::Packet::getCmdId(v20);
  if ( PlayerSession::checkRecvPacketSizeLimit(this, len) )
  {
    std::to_string((std::string *)&v192, len);
    v21 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v4 + 48));
    common::tools::TimeUtils::getNowStr[abi:cxx11](&v188);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    std::to_string(&__rhs, this->uid_);
    std::operator+<char>(&__lhs, "Packet is too large! uid:", &__rhs);
    std::operator+<char>(&v187, &__lhs, ", Time:");
    std::operator+<char>(&v189, &v187, &v188);
    std::operator+<char>(&v190, &v189, ", cmd:");
    std::operator+<char>((std::string *)(v4 + 416), &v190, v21);
    std::operator+<char>(&v191, (std::string *)(v4 + 416), ", size:");
    std::operator+<char>((std::string *)(v4 + 352), &v191, (std::string *)&v192);
    std::string::~string(&v191);
    std::string::~string((void *)(v4 + 416));
    std::string::~string(&v190);
    std::string::~string(&v189);
    std::string::~string(&v187);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    std::string::~string(&v188);
    std::string::~string(&v192);
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/player_session.cpp",
      "onRecv",
      171);
    v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v192, (const char (*)[15])"[PACKET_ERROR]");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v4 + 352));
    common::milog::MiLogStream::~MiLogStream(&v192);
    proto::ServerLogNotify::ServerLogNotify((proto::ServerLogNotify *const)(v4 + 480));
    proto::ServerLogNotify::set_log_level((proto::ServerLogNotify *const)(v4 + 480), LOG_LEVEL_ERROR_0);
    v23 = std::move<std::string &>((std::string *)(v4 + 352));
    proto::ServerLogNotify::set_server_log((proto::ServerLogNotify *const)(v4 + 480), v23);
    std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192), 0LL);
    common::minet::KcpSession::sendProto<proto::ServerLogNotify>(
      this,
      (proto::ServerLogNotify *)(v4 + 480),
      (common::minet::PacketPtr *)(v4 + 192));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
    v3 = -1;
    proto::ServerLogNotify::~ServerLogNotify((proto::ServerLogNotify *const)(v4 + 480));
    std::string::~string((void *)(v4 + 352));
    goto LABEL_179;
  }
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  if ( PlayerSession::checkRecvPacketFreqLimit(this, *(_WORD *)(v4 + 48), (uint32_t *)(v4 + 64), (uint32_t *)(v4 + 80)) )
  {
    std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::multimap((std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560));
    __for_range = &this->packet_count_map_;
    __for_begin._M_cur = std::unordered_map<unsigned short,unsigned int>::begin(&this->packet_count_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned short,unsigned int>::end(&this->packet_count_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned short const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v24 = std::__detail::_Node_iterator<std::pair<unsigned short const,unsigned int>,false,false>::operator*(&__for_begin);
      v25 = (std::pair<unsigned int const,short unsigned int> *)v24;
      if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v24, 8LL);
      }
      __in = *v25;
      cmd_id = std::get<0ul,unsigned short const,unsigned int>((std::pair<short unsigned int const,unsigned int> *)&__in);
      count = std::get<1ul,unsigned short const,unsigned int>((std::pair<short unsigned int const,unsigned int> *)&__in);
      std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::emplace<unsigned int &,unsigned short const&>(
        (std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560),
        count,
        cmd_id,
        count,
        v26);
      std::__detail::_Node_iterator<std::pair<unsigned short const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    proto::PacketFreqencyExceedNotify::PacketFreqencyExceedNotify((proto::PacketFreqencyExceedNotify *const)(v4 + 640));
    proto::PacketFreqencyExceedNotify::set_packet_count(
      (proto::PacketFreqencyExceedNotify *const)(v4 + 640),
      *(_DWORD *)(v4 + 64));
    proto::PacketFreqencyExceedNotify::set_interval(
      (proto::PacketFreqencyExceedNotify *const)(v4 + 640),
      *(_DWORD *)(v4 + 80));
    proto_count = 0;
    __for_range_0 = (std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *)(v4 + 560);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::begin((std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560))._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
      v28 = v27;
      if ( ((unsigned __int8)v27 & 7) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v27 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v27, 8LL);
      }
      __in = *v28;
      count_0 = std::get<0ul,unsigned int const,unsigned short>(&__in);
      cmd_id_0 = std::get<1ul,unsigned int const,unsigned short>(&__in);
      count_info = proto::PacketFreqencyExceedNotify::add_packet_count_list((proto::PacketFreqencyExceedNotify *const)(v4 + 640));
      if ( *(_BYTE *)(((unsigned __int64)cmd_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cmd_id_0 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(cmd_id_0);
      }
      proto::PacketCountInfo::set_cmd_id(count_info, *cmd_id_0);
      if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count_0);
      }
      proto::PacketCountInfo::set_count(count_info, *count_0);
      if ( ++proto_count > 4 )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
    }
    ServiceBox::findService<GateserverService>();
    GateserverService::getConfig((GateserverService *const)(v4 + 128));
    v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    anti_cheat_log_config = &v29->security_config.recv_packet_freq_exceed_limit_config;
    if ( *(char *)(((unsigned __int64)&v29->security_config.recv_packet_freq_exceed_limit_config.is_enable >> 3)
                 + 0x7FFF8000) < 0 )
      __asan_report_load1(&v29->security_config.recv_packet_freq_exceed_limit_config.is_enable);
    if ( anti_cheat_log_config->is_enable )
    {
      Now = common::tools::TimeUtils::getNow();
      if ( SecurityUtils::checkAndUpdateAntiCheatLogCountRecord(
             anti_cheat_log_config,
             Now,
             &this->recv_packet_freq_exceed_limit_anti_cheat_log_record_) )
      {
        common::tools::perf::make_shared<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit>();
        v32 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_count(v32, *(_DWORD *)(v4 + 64));
        v33 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_time_interval_ms(v33, *(_DWORD *)(v4 + 80));
        __for_range_1 = (std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *)(v4 + 560);
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::begin((std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560))._M_node;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::end(__for_range_1)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_end) )
        {
          v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
          v35 = v34;
          if ( ((unsigned __int8)v34 & 7) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v34->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v34 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v34->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v34, 8LL);
          }
          __in = *v35;
          count_1 = std::get<0ul,unsigned int const,unsigned short>(&__in);
          cmd_id_1 = std::get<1ul,unsigned int const,unsigned short>(&__in);
          v36 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          proto_log_packet = proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::add_packet_list(v36);
          if ( *(_BYTE *)(((unsigned __int64)cmd_id_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)cmd_id_1 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(cmd_id_1);
          }
          proto_log::PacketCountInfoLog::set_cmd_id(proto_log_packet, *cmd_id_1);
          if ( *(_BYTE *)(((unsigned __int64)cmd_id_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)cmd_id_1 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(cmd_id_1);
          }
          v37 = ProtoUtils::getCmdName[abi:cxx11](*cmd_id_1);
          proto_log::PacketCountInfoLog::set_cmd_name(proto_log_packet, v37);
          if ( *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)count_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(count_1);
          }
          proto_log::PacketCountInfoLog::set_cmd_count(proto_log_packet, *count_1);
          v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          if ( proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_list_size(v38) > 4 )
            break;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
        }
        v39 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v40->packet_recv_max_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v40 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->packet_recv_max_count >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v40->packet_recv_max_count);
        }
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_recv_max_count(v39, v40->packet_recv_max_count);
        v41 = std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v42->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v42->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v42->packet_recv_check_interval_ms);
        }
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_recv_check_interval_ms(
          v41,
          v42->packet_recv_check_interval_ms);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v4 + 192),
          (const std::shared_ptr<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit> *)(v4 + 160));
        PlayerSession::printAntiCheatLog(this, 0x23u, (MessagePtr *)(v4 + 192));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 192));
        std::shared_ptr<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyRecvPacketFreqExceedLimit> *const)(v4 + 160));
      }
    }
    *(_DWORD *)(v4 + 160) = 0;
    *(_DWORD *)(v4 + 164) = 0;
    *(_DWORD *)(v4 + 168) = 0;
    *(_DWORD *)(v4 + 172) = 0;
    *(_DWORD *)(v4 + 160) = 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gameserver_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->gameserver_id_);
    }
    *(_DWORD *)(v4 + 164) = this->gameserver_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    *(_DWORD *)(v4 + 168) = this->uid_;
    *(_DWORD *)(v4 + 172) = common::minet::KcpSession::getSessionId(this);
    v43 = ServiceBox::findService<GateserverService>();
    ServiceBase::sendProto<proto::PacketFreqencyExceedNotify>(
      v43,
      (proto::PacketFreqencyExceedNotify *)(v4 + 640),
      (const ProtoParam *)(v4 + 160));
    std::unordered_map<unsigned short,unsigned int>::clear(&this->packet_count_map_);
    proto::ServerLogNotify::ServerLogNotify((proto::ServerLogNotify *const)(v4 + 480));
    proto::ServerLogNotify::set_log_level((proto::ServerLogNotify *const)(v4 + 480), LOG_LEVEL_ERROR_0);
    common::tools::TimeUtils::getNowStr[abi:cxx11]((std::string *)&v192);
    std::to_string(&v190, *(_DWORD *)(v4 + 80));
    std::to_string(&v187, *(_DWORD *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    std::to_string((std::string *)(v4 + 352), this->uid_);
    std::operator+<char>(&__rhs, "Packet recv frequency exceeds max! uid:", (std::string *)(v4 + 352));
    std::operator+<char>(&__lhs, &__rhs, ", Packet Count:");
    std::operator+<char>(&v188, &__lhs, &v187);
    std::operator+<char>(&v189, &v188, " in ");
    std::operator+<char>((std::string *)(v4 + 416), &v189, &v190);
    std::operator+<char>(&v191, (std::string *)(v4 + 416), "ms, Time:");
    std::operator+<char>((std::string *)(v4 + 288), &v191, (std::string *)&v192);
    std::string::~string(&v191);
    std::string::~string((void *)(v4 + 416));
    std::string::~string(&v189);
    std::string::~string(&v188);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    std::string::~string((void *)(v4 + 352));
    std::string::~string(&v187);
    std::string::~string(&v190);
    std::string::~string(&v192);
    proto_count = 0;
    __for_range_2 = (std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *)(v4 + 560);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::begin((std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560))._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<short unsigned int const,unsigned int>,false>::__node_type *)std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> >::_Self *)&__for_end) )
    {
      v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
      v45 = v44;
      if ( ((unsigned __int8)v44 & 7) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v44->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v44 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v44->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v44, 8LL);
      }
      __in = *v45;
      count_2 = std::get<0ul,unsigned int const,unsigned short>(&__in);
      cmd_id_2 = std::get<1ul,unsigned int const,unsigned short>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)count_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count_2);
      }
      std::to_string(&v191, *count_2);
      if ( *(_BYTE *)(((unsigned __int64)cmd_id_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cmd_id_2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id_2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(cmd_id_2);
      }
      v46 = ProtoUtils::getCmdName[abi:cxx11](*cmd_id_2);
      std::operator+<char>(&v190, ", ", v46);
      std::operator+<char>((std::string *)(v4 + 416), &v190, ":");
      std::operator+<char>((std::string *)&v192, (std::string *)(v4 + 416), &v191);
      std::string::operator+=(v4 + 288, &v192);
      std::string::~string(&v192);
      std::string::~string((void *)(v4 + 416));
      std::string::~string(&v190);
      std::string::~string(&v191);
      if ( ++proto_count > 9 )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,short unsigned int> > *const)&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/player_session.cpp",
      "onRecv",
      256);
    v47 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v192, (const char (*)[15])"[PACKET_ERROR]");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, (const std::string *)(v4 + 288));
    common::milog::MiLogStream::~MiLogStream(&v192);
    v48 = std::move<std::string &>((std::string *)(v4 + 288));
    proto::ServerLogNotify::set_server_log((proto::ServerLogNotify *const)(v4 + 480), v48);
    std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192), 0LL);
    common::minet::KcpSession::sendProto<proto::ServerLogNotify>(
      this,
      (proto::ServerLogNotify *)(v4 + 480),
      (common::minet::PacketPtr *)(v4 + 192));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
    std::string::~string((void *)(v4 + 288));
    proto::ServerLogNotify::~ServerLogNotify((proto::ServerLogNotify *const)(v4 + 480));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
    proto::PacketFreqencyExceedNotify::~PacketFreqencyExceedNotify((proto::PacketFreqencyExceedNotify *const)(v4 + 640));
    std::multimap<unsigned int,unsigned short,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short>>>::~multimap((std::multimap<unsigned int,short unsigned int,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,short unsigned int> > > *const)(v4 + 560));
  }
  if ( PlayerSession::checkSinglePacketFreqLimit(this, *(_WORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/network/player_session.cpp",
      "onRecv",
      270);
    v49 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v192,
            (const char (*)[23])"[PACKET_FREQ] cmd_id: ");
    v50 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v49,
            (const unsigned __int16 *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v50, (const char (*)[13])" exceed freq");
    common::milog::MiLogStream::~MiLogStream(&v192);
    v3 = -1;
    goto LABEL_179;
  }
  if ( *(_WORD *)(v4 + 48) == 88 )
  {
    for ( i = 1; i <= 0xA; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_record_packet_arr_idx_);
      }
      idx = this->last_record_packet_arr_idx_ - i + 10;
      std::string::basic_string(v4 + 416, &this->last_record_packet_str_arr_[idx % 0xA]);
      if ( (unsigned __int8)std::string::empty(v4 + 416) )
      {
        v51 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v191,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "onRecv",
          287);
        v52 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)&v191,
                (const char (*)[45])"[LastPacketPrintNotify] last before encrypt:");
        common::tools::StringUtils::base64Encode((std::string *)&v192, (const std::string *)(v4 + 416));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, (const std::string *)&v192);
        std::string::~string(&v192);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
        data_0 = (char *)std::string::c_str(v4 + 416);
        len_0 = std::string::length(v4 + 416);
        PlayerSession::encryptPacketData(this, data_0, len_0);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v191,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "onRecv",
          291);
        v53 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)&v191,
                (const char (*)[44])"[LastPacketPrintNotify] last after encrypt:");
        common::tools::StringUtils::base64Encode((std::string *)&v192, (const std::string *)(v4 + 416));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, (const std::string *)&v192);
        std::string::~string(&v192);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
        v51 = 1;
      }
      std::string::~string((void *)(v4 + 416));
      if ( v51 != 1 )
        break;
    }
    v3 = 0;
    goto LABEL_179;
  }
  PlayerSession::initPacketHead(this, (const common::minet::PacketPtr *)(v4 + 96));
  v54 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  common::minet::Packet::setEnetIsReliable(v54, 1u);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( !this->uid_ )
    goto LABEL_97;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_login_);
  }
  if ( !this->is_finish_login_ )
  {
LABEL_97:
    if ( *(_WORD *)(v4 + 48) == 7 )
    {
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      common::minet::Packet::getProto<proto::PingReq>((common::minet::Packet *const)(v4 + 128));
      if ( std::operator==<proto::PingReq>((const std::shared_ptr<proto::PingReq> *)(v4 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v191,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "onRecv",
          306);
        v55 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&v191,
                (const char (*)[37])"getProto PingReq failed, session_id=");
        SessionId = common::minet::KcpSession::getSessionId(this);
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &SessionId);
        v57 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v56, (const char (*)[5])" ip:");
        common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v192, this);
        v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, (const std::string *)&v192);
        v59 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v58, (const char (*)[8])", port:");
        val = common::minet::KcpSession::get_remote_port(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &val);
        std::string::~string(&v192);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
        v3 = -1;
      }
      else
      {
        proto::PingRsp::PingRsp((proto::PingRsp *const)(v4 + 416));
        v60 = std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v61 = proto::PingReq::seq(v60);
        proto::PingRsp::set_seq((proto::PingRsp *const)(v4 + 416), v61);
        v62 = std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v63 = proto::PingReq::client_time(v62);
        proto::PingRsp::set_client_time((proto::PingRsp *const)(v4 + 416), v63);
        common::minet::PacketUtils::createPacket<proto::PingRsp>((const proto::PingRsp *)(v4 + 160));
        if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v192,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "onRecv",
            316);
          common::milog::MiLogStream::operator()(&v192, "create packet failed");
          common::milog::MiLogStream::~MiLogStream(&v192);
          v3 = -1;
        }
        else
        {
          PlayerSession::initPacketHead(this, (const common::minet::PacketPtr *)(v4 + 160));
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v191,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/network/player_session.cpp",
            "onRecv",
            321);
          v64 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)&v191,
                  (const char (*)[43])"recv ping before login finish, session_id=");
          SessionId = common::minet::KcpSession::getSessionId(this);
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &SessionId);
          v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v65, (const char (*)[6])" uid:");
          v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &this->uid_);
          v68 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v67, (const char (*)[5])" ip:");
          common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v192, this);
          v69 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, (const std::string *)&v192);
          v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])", port:");
          val = common::minet::KcpSession::get_remote_port(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &val);
          std::string::~string(&v192);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v71 = (unsigned __int64)(this->_vptr_KcpSession + 5);
          if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_KcpSession + 5);
          v72 = *(__int64 (__fastcall **)(PlayerSession *const, unsigned __int64))v71;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)(v4 + 192),
            (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
          v3 = v72(this, v4 + 192);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
        proto::PingRsp::~PingRsp((proto::PingRsp *const)(v4 + 416));
      }
      std::shared_ptr<proto::PingReq>::~shared_ptr((std::shared_ptr<proto::PingReq> *const)(v4 + 128));
      goto LABEL_179;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( this->uid_ )
    goto LABEL_130;
  if ( *(_WORD *)(v4 + 48) != 172 )
  {
    if ( *(_WORD *)(v4 + 48) != 290 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v191,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/player_session.cpp",
        "onRecv",
        335);
      v73 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)&v191,
              (const char (*)[22])"refuse packet cmd_id=");
      v74 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
              v73,
              (const unsigned __int16 *)(v4 + 48));
      v75 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v74,
              (const char (*)[20])" because uid=0, ip:");
      common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v192, this);
      v76 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, (const std::string *)&v192);
      v77 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])", port:");
      val = common::minet::KcpSession::get_remote_port(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &val);
      std::string::~string(&v192);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
    }
    v78 = ServiceBox::findService<GateserverService>();
    GateserverService::disconnect(v78, this, 8u);
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session.cpp",
      "onRecv",
      339);
    v79 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v192,
            (const char (*)[31])"[LOGIN] disconnect session_id:");
    SessionId = common::minet::KcpSession::getSessionId(this);
    v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &SessionId);
    v81 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v80, (const char (*)[10])", reason:");
    val = 8;
    v82 = common::milog::MiLogStream::operator<<<proto::ENetReason,(proto::ENetReason*)0>(
            v81,
            (const proto::ENetReason *)&val);
    v83 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v82, (const char (*)[7])", cmd:");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v83, (const unsigned __int16 *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v192);
    v3 = 0;
    goto LABEL_179;
  }
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  common::minet::Packet::getProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v4 + 192));
  if ( std::operator==<proto::GetPlayerTokenReq>((const std::shared_ptr<proto::GetPlayerTokenReq> *)(v4 + 192), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v192,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "onRecv",
      347);
    v84 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v192,
            (const char (*)[44])"getProto GetPlayerToken failed, session_id:");
    val = common::minet::KcpSession::getSessionId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &val);
    common::milog::MiLogStream::~MiLogStream(&v192);
    v3 = -1;
    v85 = 0;
    goto LABEL_129;
  }
  PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v192, this);
  v86 = std::string::empty(&v192);
  std::string::~string(&v192);
  if ( v86 )
  {
    v87 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    v88 = proto::GetPlayerTokenReq::account_type(v87);
    PlayerSession::setAccountType(this, v88);
    v89 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    v90 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](v89);
    std::string::basic_string(&v192, v90);
    PlayerSession::setAccountUid(this, (std::string *)&v192);
    std::string::~string(&v192);
  }
  else
  {
    v91 = 0;
    v92 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    v153 = proto::GetPlayerTokenReq::account_type(v92);
    v154 = 1;
    if ( v153 == PlayerSession::getAccountType(this) )
    {
      PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v192, this);
      v91 = 1;
      v93 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      v94 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](v93);
      if ( !std::operator!=<char>(v94, (const std::string *)&v192) )
        v154 = 0;
    }
    if ( v91 )
      std::string::~string(&v192);
    if ( v154 )
    {
      v95 = ServiceBox::findService<GateserverService>();
      GateserverService::disconnect(v95, this, 8u);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v191,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/player_session.cpp",
        "onRecv",
        363);
      v96 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)&v191,
              (const char (*)[31])"[LOGIN] disconnect session_id:");
      v157 = common::minet::KcpSession::getSessionId(this);
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &v157);
      v98 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v97, (const char (*)[10])", reason:");
      v158 = ENET_LOGIN_UNFINISHED;
      v99 = common::milog::MiLogStream::operator<<<proto::ENetReason,(proto::ENetReason*)0>(v98, &v158);
      v100 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v99, (const char (*)[7])", cmd:");
      v101 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
               v100,
               (const unsigned __int16 *)(v4 + 48));
      v102 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v101,
               (const char (*)[19])" req account_type:");
      v103 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      SessionId = proto::GetPlayerTokenReq::account_type(v103);
      v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v102, &SessionId);
      v105 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v104,
               (const char (*)[18])" req account_uid:");
      v106 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      v107 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](v106);
      v108 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, v107);
      v109 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               v108,
               (const char (*)[23])" session account_type:");
      val = PlayerSession::getAccountType(this);
      v110 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, &val);
      v111 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               v110,
               (const char (*)[22])" session account_uid:");
      PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v192, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v111, (const std::string *)&v192);
      std::string::~string(&v192);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
      v3 = 0;
      v85 = 0;
      goto LABEL_129;
    }
  }
  common::milog::MiLogStream::create(
    &v192,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/network/player_session.cpp",
    "onRecv",
    369);
  v112 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v192,
           (const char (*)[28])"[LOGIN] PlayerGetToken uid=");
  v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v112, &this->uid_);
  v114 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v113, (const char (*)[15])" account_type:");
  v115 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
  val = proto::GetPlayerTokenReq::account_type(v115);
  v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, &val);
  v117 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v116, (const char (*)[14])" account_uid:");
  v118 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
  v119 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](v118);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v117, v119);
  common::milog::MiLogStream::~MiLogStream(&v192);
  v85 = 1;
LABEL_129:
  std::shared_ptr<proto::GetPlayerTokenReq>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenReq> *const)(v4 + 192));
  if ( v85 != 1 )
    goto LABEL_179;
LABEL_130:
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( this->uid_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_finish_login_);
    }
    if ( !this->is_finish_login_ && *(_WORD *)(v4 + 48) != 112 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 3) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_recv_login_);
      }
      if ( !this->is_recv_login_ )
      {
        common::milog::MiLogStream::create(
          &v192,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "onRecv",
          379);
        v120 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 &v192,
                 (const char (*)[29])"need LoginReq first cmd_id: ");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v120,
          (const unsigned __int16 *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v192);
        v121 = ServiceBox::findService<GateserverService>();
        GateserverService::disconnect(v121, this, 8u);
        common::milog::MiLogStream::create(
          &v192,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "onRecv",
          383);
        v122 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                 &v192,
                 (const char (*)[31])"[LOGIN] disconnect session_id:");
        SessionId = common::minet::KcpSession::getSessionId(this);
        v123 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v122, &SessionId);
        v124 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v123, (const char (*)[10])", reason:");
        val = 8;
        v125 = common::milog::MiLogStream::operator<<<proto::ENetReason,(proto::ENetReason*)0>(
                 v124,
                 (const proto::ENetReason *)&val);
        v126 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v125, (const char (*)[7])", cmd:");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v126,
          (const unsigned __int16 *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v192);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  if ( this->uid_ && *(_WORD *)(v4 + 48) == 112 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 3) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv_login_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_recv_login_);
    }
    this->is_recv_login_ = 1;
  }
  if ( !ProtoUtils::isAllowClientSend(*(unsigned __int16 *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v191,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session.cpp",
      "onRecv",
      398);
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v192, this);
    v127 = (const char *)std::string::c_str(&v192);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    v128 = this->uid_;
    v129 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v4 + 48));
    v130 = (const char *)std::string::c_str(v129);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v191,
      "refuse packet %u:%s from uid=%u ip=%s, because client can not send it",
      *(unsigned __int16 *)(v4 + 48),
      v130,
      v128,
      v127);
    std::string::~string(&v192);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v191);
    v3 = 0;
  }
  else
  {
    if ( *(_WORD *)(v4 + 48) == 7 || *(_WORD *)(v4 + 48) == 235 )
    {
      v131 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      Rtt = common::minet::KcpSession::getRtt(this);
      common::minet::Packet::setExt(v131, 1u, Rtt);
    }
    if ( *(_WORD *)(v4 + 48) != 2307 )
      goto LABEL_184;
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    common::minet::Packet::getProto<proto::PathfindingEnterSceneReq>((common::minet::Packet *const)(v4 + 192));
    if ( std::operator==<proto::PathfindingEnterSceneReq>(
           (const std::shared_ptr<proto::PathfindingEnterSceneReq> *)(v4 + 192),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v192,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "onRecv",
        415);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v192,
        (const char (*)[41])"getProto PathfindingEnterSceneReq failed");
      common::milog::MiLogStream::~MiLogStream(&v192);
      v3 = -1;
      v133 = 0;
    }
    else
    {
      v134 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_editor_);
      }
      proto::PathfindingEnterSceneReq::set_is_editor(v134, this->is_editor_);
      common::milog::MiLogStream::create(
        &v192,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/player_session.cpp",
        "onRecv",
        419);
      v135 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v192,
               (const char (*)[30])"PathfindingEnterSceneReq uid=");
      v136 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v135, &this->uid_);
      v137 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v136, (const char (*)[12])" is_editor=");
      if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_editor_);
      }
      v138 = common::milog::MiLogStream::operator<<(v137, this->is_editor_);
      v139 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v138, (const char (*)[10])" version=");
      v140 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      val = proto::PathfindingEnterSceneReq::version(v140);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v139, &val);
      common::milog::MiLogStream::~MiLogStream(&v192);
      v133 = 1;
    }
    std::shared_ptr<proto::PathfindingEnterSceneReq>::~shared_ptr((std::shared_ptr<proto::PathfindingEnterSceneReq> *const)(v4 + 192));
    if ( v133 == 1 )
    {
LABEL_184:
      if ( *(_WORD *)(v4 + 48) != 7 )
        goto LABEL_185;
      proto::PathfindingPingNotify::PathfindingPingNotify((proto::PathfindingPingNotify *const)(v4 + 224));
      common::minet::PacketUtils::createPacket<proto::PathfindingPingNotify>((const proto::PathfindingPingNotify *)(v4 + 160));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v192,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "onRecv",
          429);
        common::milog::MiLogStream::operator()(&v192, "create packet failed");
        common::milog::MiLogStream::~MiLogStream(&v192);
        v3 = -1;
        v141 = 0;
      }
      else
      {
        PlayerSession::initPacketHead(this, (const common::minet::PacketPtr *)(v4 + 160));
        v142._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 160);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v4 + 192),
          (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
        v142._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 192);
        ServiceBox::pushPacketToService(v142);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
        v141 = 1;
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
      proto::PathfindingPingNotify::~PathfindingPingNotify((proto::PathfindingPingNotify *const)(v4 + 224));
      if ( v141 == 1 )
      {
LABEL_185:
        if ( *(_WORD *)(v4 + 48) != 7 )
          goto LABEL_174;
        proto::ToTheMoonPingNotify::ToTheMoonPingNotify((proto::ToTheMoonPingNotify *const)(v4 + 224));
        common::minet::PacketUtils::createPacket<proto::ToTheMoonPingNotify>((const proto::ToTheMoonPingNotify *)(v4 + 160));
        if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v192,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "onRecv",
            446);
          common::milog::MiLogStream::operator()(&v192, "create packet failed");
          common::milog::MiLogStream::~MiLogStream(&v192);
          v3 = -1;
          v143 = 0;
        }
        else
        {
          PlayerSession::initPacketHead(this, (const common::minet::PacketPtr *)(v4 + 160));
          v144._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 160);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)(v4 + 192),
            (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
          v144._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 192);
          ServiceBox::pushPacketToService(v144);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
          v143 = 1;
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
        proto::ToTheMoonPingNotify::~ToTheMoonPingNotify((proto::ToTheMoonPingNotify *const)(v4 + 224));
        if ( v143 == 1 )
        {
LABEL_174:
          now_ms = common::tools::TimeUtils::getNowMs();
          v145 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          common::minet::Packet::setExt(v145, 0x2711u, now_ms);
          ServiceBox::findService<GateserverService>();
          GateserverService::getConfig((GateserverService *const)(v4 + 192));
          v146 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          isTamperClientMsg = Config::isTamperClientMsg(v146);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
          if ( isTamperClientMsg )
          {
            v148 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            common::minet::Packet::tamperMessage(v148);
          }
          NowMs = common::tools::TimeUtils::getNowMs();
          v150 = (unsigned __int64)std::unordered_map<unsigned short,unsigned long>::operator[](
                                     &this->cmd_last_recv_time_map_,
                                     (const std::unordered_map<short unsigned int,long unsigned int>::key_type *)(v4 + 48));
          if ( *(_BYTE *)((v150 >> 3) + 0x7FFF8000) )
            v150 = __asan_report_store8();
          *(_QWORD *)v150 = NowMs;
          v151._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 96);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)(v4 + 192),
            (const std::shared_ptr<common::minet::Packet> *)(v4 + 96));
          v151._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 192);
          ServiceBox::pushPacketToService(v151);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 192));
          v3 = 0;
        }
      }
    }
  }
LABEL_179:
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 96));
  result = v3;
  if ( v193 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 480: range 000000000C756866-000000000C756C62
int32_t __cdecl PlayerSession::sendPacket(PlayerSession *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::minet::Packet *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::minet::Packet *v11; // rax
  int32_t result; // eax
  uint16_t cmd_id; // [rsp+1Eh] [rbp-C2h]
  uint32_t uid; // [rsp+20h] [rbp-C0h]
  uint32_t len; // [rsp+24h] [rbp-BCh]
  char *data; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 12 data_str:483";
  *(_QWORD *)(v2 + 16) = PlayerSession::sendPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v5);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::clearHeadForClient(v6);
  std::string::basic_string(v2 + 32);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::serializeToString(v7, (std::string *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "sendPacket",
      486);
    common::milog::MiLogStream::operator()(&v17, "serializeToString fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    data = (char *)std::string::c_str(v2 + 32);
    len = std::string::length(v2 + 32);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    cmd_id = common::minet::Packet::getCmdId(v9);
    if ( cmd_id == 2398 && (unsigned __int64)std::string::size(v2 + 32) <= 0x3F )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_record_packet_arr_idx_);
      }
      std::string::operator=(&this->last_record_packet_str_arr_[this->last_record_packet_arr_idx_ % 0xA], v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_record_packet_arr_idx_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_record_packet_arr_idx_);
      }
      this->last_record_packet_arr_idx_ = (this->last_record_packet_arr_idx_ + 1) % 0xA;
    }
    if ( cmd_id == 198 )
      PlayerSession::encryptFirstPacketData(this, data, len);
    else
      PlayerSession::encryptPacketData(this, data, len);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setUserId(v11, uid);
    v8 = common::minet::KcpSession::send(this, data, len);
  }
  std::string::~string((void *)(v2 + 32));
  result = v8;
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 532: range 000000000C756C64-000000000C756E5A
void __cdecl PlayerSession::initPacketHead(PlayerSession *const this, const common::minet::PacketPtr *packet_ptr)
{
  common::minet::Packet *v2; // rcx
  common::minet::Packet *v3; // rbx
  uint32_t SessionId; // eax
  common::minet::Packet *v5; // rbx
  uint32_t remote_ip; // eax
  common::minet::Packet *v7; // rbx
  GateserverApp *v8; // rax
  uint32_t AppId; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::minet::Packet *v13; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::minet::Packet *v17; // rax
  common::minet::Packet *v18; // rbx
  uint32_t GameserverId; // eax

  if ( !std::operator==<common::minet::Packet>(0LL, packet_ptr) )
  {
    v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_);
    }
    common::minet::Packet::setUserId(v2, this->uid_);
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    SessionId = common::minet::KcpSession::getSessionId(this);
    common::minet::Packet::setUserSessionId(v3, SessionId);
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    remote_ip = common::minet::KcpSession::get_remote_ip(this);
    common::minet::Packet::setUserIp(v5, remote_ip);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    v8 = Singleton<GateserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v8);
    common::minet::Packet::setSource(v7, 2u, AppId);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    if ( common::minet::Packet::getCmdId(v10) > 0x8FCu
      && (v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr),
          common::minet::Packet::getCmdId(v11) <= 0x960u) )
    {
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      common::minet::Packet::setTarget(v13, 0xEu, 0);
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      if ( common::minet::Packet::getCmdId(v14) > 0x17D4u
        && (v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr),
            common::minet::Packet::getCmdId(v15) <= 0x1838u) )
      {
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
        common::minet::Packet::setTarget(v17, 0x13u, 0);
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
        GameserverId = PlayerSession::getGameserverId(this);
        common::minet::Packet::setTarget(v18, 3u, GameserverId);
      }
    }
  }
};

// Line 559: range 000000000C756E5C-000000000C756FA1
int32_t __cdecl PlayerSession::getCachedLoginReq(PlayerSession *const this, proto::PlayerLoginReq *req)
{
  common::minet::Packet *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(&this->login_packet_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "getCachedLoginReq",
      562);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v4,
      (const char (*)[30])" login_packet_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->login_packet_ptr_);
    if ( common::minet::Packet::getProto<proto::PlayerLoginReq>(v3, req) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "getCachedLoginReq",
        568);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v4, (const char (*)[16])"getProto failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 577: range 000000000C756FA2-000000000C75770B
__int64 __fastcall PlayerSession::checkRecvPacketFreqLimit(
        PlayerSession *const this,
        uint16_t cmd_id,
        uint32_t *packet_count,
        uint32_t *time_interval_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // al
  unsigned int v10; // r14d
  std::unordered_map<short unsigned int,unsigned int>::mapped_type *v11; // rax
  uint64_t packet_recv_last_check_time_ms; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // ecx
  uint32_t v15; // ecx
  uint32_t packet_recv_count; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  uint32_t packet_recv_max_count; // ecx
  uint32_t v19; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 result; // rax
  unsigned int packet_count_max; // [rsp+24h] [rbp-BCh]
  uint64_t now_ms; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 2 10 cmd_id:576 64 16 14 config_ptr:578";
  *(_QWORD *)(v4 + 16) = PlayerSession::checkRecvPacketFreqLimit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234688015;
  v6[536862722] = -202178560;
  *(_WORD *)(v4 + 48) = cmd_id;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v7->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->packet_recv_check_interval_ms);
  }
  if ( !v7->packet_recv_check_interval_ms )
    goto LABEL_10;
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v8->packet_recv_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->packet_recv_max_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->packet_recv_max_count);
  }
  if ( v8->packet_recv_max_count )
    v9 = 0;
  else
LABEL_10:
    v9 = 1;
  if ( v9 )
  {
    v10 = 0;
    goto LABEL_49;
  }
  now_ms = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->packet_recv_count_);
  }
  ++this->packet_recv_count_;
  v11 = std::unordered_map<unsigned short,unsigned int>::operator[](
          &this->packet_count_map_,
          (const std::unordered_map<short unsigned int,unsigned int>::key_type *)(v4 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  ++*v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->packet_recv_last_check_time_ms_);
  if ( this->packet_recv_last_check_time_ms_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->packet_recv_last_check_time_ms_);
    packet_recv_last_check_time_ms = this->packet_recv_last_check_time_ms_;
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v13->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v13->packet_recv_check_interval_ms);
    }
    if ( now_ms > packet_recv_last_check_time_ms + v13->packet_recv_check_interval_ms )
    {
      v14 = now_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->packet_recv_last_check_time_ms_);
      v15 = v14 - this->packet_recv_last_check_time_ms_;
      if ( *(_BYTE *)(((unsigned __int64)time_interval_ms >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)time_interval_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_interval_ms >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(time_interval_ms);
      }
      *time_interval_ms = v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->packet_recv_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->packet_recv_count_);
      }
      packet_recv_count = this->packet_recv_count_;
      if ( *(_BYTE *)(((unsigned __int64)packet_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)packet_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)packet_count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_store4(packet_count);
      }
      *packet_count = packet_recv_count;
      this->packet_recv_count_ = 0;
      v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v17->packet_recv_max_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v17 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->packet_recv_max_count >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&v17->packet_recv_max_count);
      }
      packet_recv_max_count = v17->packet_recv_max_count;
      if ( *(_BYTE *)(((unsigned __int64)time_interval_ms >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)time_interval_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_interval_ms >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(time_interval_ms);
      }
      v19 = *time_interval_ms * packet_recv_max_count;
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v20->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v20->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v20->packet_recv_check_interval_ms);
      }
      packet_count_max = v19 / v20->packet_recv_check_interval_ms;
      if ( *(_BYTE *)(((unsigned __int64)packet_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)packet_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)packet_count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(packet_count);
      }
      if ( packet_count_max < *packet_count )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "checkRecvPacketFreqLimit",
          601);
        v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v33,
                (const char (*)[30])"packet recv count exceed max:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, packet_count);
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v22,
                (const char (*)[17])", time_interval:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, time_interval_ms);
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])"ms, uid:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->uid_);
        v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v26,
                (const char (*)[17])", account_token:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &this->account_token_);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v10 = -1;
        goto LABEL_49;
      }
      std::unordered_map<unsigned short,unsigned int>::clear(&this->packet_count_map_);
      if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_last_check_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->packet_recv_last_check_time_ms_ = now_ms;
    }
  }
  else
  {
    this->packet_recv_last_check_time_ms_ = now_ms;
  }
  v10 = 0;
LABEL_49:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  result = v10;
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 613: range 000000000C75770C-000000000C7578A1
int32_t __cdecl PlayerSession::checkRecvPacketSizeLimit(PlayerSession *const this, uint32_t len)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char v7; // al
  int32_t v8; // r14d
  int32_t result; // eax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:614";
  *(_QWORD *)(v2 + 16) = PlayerSession::checkRecvPacketSizeLimit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->packet_recv_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->packet_recv_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->packet_recv_max_size);
  }
  if ( !v5->packet_recv_max_size )
    goto LABEL_10;
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v6->packet_recv_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->packet_recv_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v6->packet_recv_max_size);
  }
  if ( len > v6->packet_recv_max_size )
    v7 = 0;
  else
LABEL_10:
    v7 = 1;
  if ( v7 )
    v8 = 0;
  else
    v8 = -1;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = v8;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 623: range 000000000C7578A2-000000000C758553
__int64 __fastcall PlayerSession::checkSinglePacketFreqLimit(PlayerSession *const this, uint16_t cmd_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int v6; // r14d
  const std::string *v7; // rax
  data::DbCmdFrequencyConfigMgr *p_cmd_frequency_cofig_mgr; // r14
  std::tuple_element<1,std::pair<long unsigned int,unsigned int> >::type *v9; // rax
  std::tuple_element<0,std::pair<long unsigned int,unsigned int> >::type v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // al
  int v14; // ecx
  double v15; // xmm0_8
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Now; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  const std::string *v28; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  GateserverService *v34; // rax
  __int64 result; // rax
  float discard_packet_freq_limit; // [rsp+Ch] [rbp-194h]
  float v37; // [rsp+10h] [rbp-190h]
  unsigned int val; // [rsp+28h] [rbp-178h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-174h]
  const data::CmdFrequencyConfig *cmd_frequency_config_ptr; // [rsp+30h] [rbp-170h]
  std::pair<long unsigned int,unsigned int> *__in; // [rsp+38h] [rbp-168h]
  std::tuple_element<0,std::pair<long unsigned int,unsigned int> >::type *record_packet_last_check_time; // [rsp+40h] [rbp-160h]
  std::tuple_element<1,std::pair<long unsigned int,unsigned int> >::type *record_packet_count; // [rsp+48h] [rbp-158h]
  uint64_t now_ms; // [rsp+50h] [rbp-150h]
  const SinglePacketFreqExceedLimitConfig *anti_cheat_log_config; // [rsp+58h] [rbp-148h]
  std::shared_ptr<google::protobuf::Message> p_log_body_ptr; // [rsp+60h] [rbp-140h] BYREF
  std::string p_cmd_str; // [rsp+70h] [rbp-130h] BYREF
  char v48[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 2 10 cmd_id:622 64 4 20 time_interval_ms:652 80 4 20 cur_packet_count:653 96 16 14 config_p"
                        "tr:624 128 16 16 log_body_ptr:668 160 32 11 cmd_str:629";
  *(_QWORD *)(v2 + 16) = PlayerSession::checkSinglePacketFreqLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  *(_WORD *)(v2 + 48) = cmd_id;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v5->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->packet_recv_check_interval_ms);
  }
  if ( v5->packet_recv_check_interval_ms )
  {
    v7 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v2 + 48));
    std::string::basic_string(v2 + 160, v7);
    p_cmd_frequency_cofig_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->db_config_mgr.db_local_config_mgr.cmd_frequency_cofig_mgr;
    std::string::basic_string(&p_cmd_str, v2 + 160);
    cmd_frequency_config_ptr = data::DbCmdFrequencyConfigMgr::findCmdFrequencyConfig(
                                 p_cmd_frequency_cofig_mgr,
                                 &p_cmd_str);
    std::string::~string(&p_cmd_str);
    if ( cmd_frequency_config_ptr )
    {
      __in = std::unordered_map<unsigned short,std::pair<unsigned long,unsigned int>>::operator[](
               &this->packet_last_check_freq_time_map_,
               (const std::unordered_map<short unsigned int,std::pair<long unsigned int,unsigned int>>::key_type *)(v2 + 48));
      record_packet_last_check_time = std::get<0ul,unsigned long,unsigned int>(__in);
      v9 = std::get<1ul,unsigned long,unsigned int>(__in);
      record_packet_count = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      ++*record_packet_count;
      now_ms = common::tools::TimeUtils::getNowMs();
      if ( *(_BYTE *)(((unsigned __int64)record_packet_last_check_time >> 3) + 0x7FFF8000) )
        __asan_report_load8(record_packet_last_check_time);
      if ( *record_packet_last_check_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)record_packet_last_check_time >> 3) + 0x7FFF8000) )
          __asan_report_load8(record_packet_last_check_time);
        v10 = *record_packet_last_check_time;
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v11->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v11->packet_recv_check_interval_ms);
        }
        if ( now_ms >= v10 + v11->packet_recv_check_interval_ms )
        {
          v14 = now_ms;
          if ( *(_BYTE *)(((unsigned __int64)record_packet_last_check_time >> 3) + 0x7FFF8000) )
            __asan_report_load8(record_packet_last_check_time);
          *(_DWORD *)(v2 + 64) = v14 - *record_packet_last_check_time;
          if ( *(_BYTE *)(((unsigned __int64)record_packet_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)record_packet_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record_packet_count >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(record_packet_count);
          }
          *(_DWORD *)(v2 + 80) = *record_packet_count;
          *record_packet_last_check_time = 0LL;
          *record_packet_count = 0;
          *(float *)&v15 = (float)*(int *)(v2 + 80);
          if ( *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->frequency_limit >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
          {
            v15 = __asan_report_load4(&cmd_frequency_config_ptr->frequency_limit);
          }
          if ( (float)(0.001 * (float)(cmd_frequency_config_ptr->frequency_limit * (float)*(int *)(v2 + 64))) < *(float *)&v15 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_cmd_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/network/player_session.cpp",
              "checkSinglePacketFreqLimit",
              661);
            v16 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    (common::milog::MiLogStream *const)&p_cmd_str,
                    (const char (*)[53])"[PACKET_FREQ] cmd exceeds config frequency, cmd_id: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                    v16,
                    (const unsigned __int16 *)(v2 + 48));
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v17,
                    (const char (*)[16])" packet_count: ");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 80));
            v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v19,
                    (const char (*)[19])" time_interval_ms:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 64));
            v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v21,
                    (const char (*)[21])" config_freq_limit: ");
            common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &cmd_frequency_config_ptr->frequency_limit);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_cmd_str);
            v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            anti_cheat_log_config = &v23->security_config.single_packet_freq_exceed_limit_config;
            if ( *(char *)(((unsigned __int64)&v23->security_config.single_packet_freq_exceed_limit_config.is_enable >> 3)
                         + 0x7FFF8000) < 0 )
              __asan_report_load1(&v23->security_config.single_packet_freq_exceed_limit_config.is_enable);
            if ( anti_cheat_log_config->is_enable )
            {
              Now = common::tools::TimeUtils::getNow();
              if ( SecurityUtils::checkAndUpdateAntiCheatLogCountRecord(
                     anti_cheat_log_config,
                     Now,
                     &this->single_packet_freq_exceed_limit_anti_cheat_log_record_) )
              {
                common::tools::perf::make_shared<proto_log::AntiCheatBodySinglePacketFreqExceedLimit>();
                v26 = std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_cmd_id(v26, *(unsigned __int16 *)(v2 + 48));
                v27 = std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                v28 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v2 + 48));
                proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_cmd_name(v27, v28);
                v29 = std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_packet_count(v29, *(_DWORD *)(v2 + 80));
                v30 = std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_time_interval_ms(v30, *(_DWORD *)(v2 + 64));
                v31 = std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->frequency_limit >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&cmd_frequency_config_ptr->frequency_limit);
                }
                proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_config_freq_limit(
                  v31,
                  cmd_frequency_config_ptr->frequency_limit);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodySinglePacketFreqExceedLimit,void>(
                  &p_log_body_ptr,
                  (const std::shared_ptr<proto_log::AntiCheatBodySinglePacketFreqExceedLimit> *)(v2 + 128));
                PlayerSession::printAntiCheatLog(this, 0x24u, &p_log_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_body_ptr);
                std::shared_ptr<proto_log::AntiCheatBodySinglePacketFreqExceedLimit>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodySinglePacketFreqExceedLimit> *const)(v2 + 128));
              }
            }
            ret = 0;
            if ( *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)cmd_frequency_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->discard_packet_freq_limit >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&cmd_frequency_config_ptr->discard_packet_freq_limit);
            }
            if ( cmd_frequency_config_ptr->discard_packet_freq_limit != 0.0
              && (float)*(int *)(v2 + 80) > (float)(0.001
                                                  * (float)(cmd_frequency_config_ptr->discard_packet_freq_limit
                                                          * (float)*(int *)(v2 + 64))) )
            {
              ret = -1;
            }
            if ( *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&cmd_frequency_config_ptr->disconnect_freq_limit);
            }
            if ( cmd_frequency_config_ptr->disconnect_freq_limit != 0.0
              && (float)*(int *)(v2 + 80) > (float)(0.001
                                                  * (float)(cmd_frequency_config_ptr->disconnect_freq_limit
                                                          * (float)*(int *)(v2 + 64))) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_cmd_str,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/network/player_session.cpp",
                "checkSinglePacketFreqLimit",
                685);
              v32 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      (common::milog::MiLogStream *const)&p_cmd_str,
                      (const char (*)[37])"[PACKET_FREQ] disconnect session_id:");
              val = common::minet::KcpSession::getSessionId(this);
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v33,
                (const char (*)[35])", reason:ENET_PACKET_FREQ_TOO_HIGH");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_cmd_str);
              v34 = ServiceBox::findService<GateserverService>();
              GateserverService::disconnect(v34, this, 9u);
            }
            v6 = ret;
          }
          else
          {
            v6 = 0;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cmd_frequency_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cmd_frequency_config_ptr->discard_packet_freq_limit >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&cmd_frequency_config_ptr->discard_packet_freq_limit);
          }
          if ( cmd_frequency_config_ptr->discard_packet_freq_limit == 0.0 )
            goto LABEL_30;
          if ( *(_BYTE *)(((unsigned __int64)record_packet_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)record_packet_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record_packet_count >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(record_packet_count);
          }
          v37 = (float)(int)*record_packet_count;
          discard_packet_freq_limit = cmd_frequency_config_ptr->discard_packet_freq_limit;
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v12->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v12->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v12->packet_recv_check_interval_ms);
          }
          if ( v37 <= (float)(0.001 * (float)(discard_packet_freq_limit * (float)(int)v12->packet_recv_check_interval_ms)) )
LABEL_30:
            v13 = 0;
          else
            v13 = 1;
          if ( v13 )
            v6 = -1;
          else
            v6 = 0;
        }
      }
      else
      {
        *record_packet_last_check_time = now_ms;
        v6 = 0;
      }
    }
    else
    {
      v6 = 0;
    }
    std::string::~string((void *)(v2 + 160));
  }
  else
  {
    v6 = 0;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  result = v6;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 692: range 000000000C758554-000000000C7586A1
void __cdecl PlayerSession::encryptPacketData(PlayerSession *const this, char *data, uint32_t len)
{
  unsigned __int64 v3; // rax
  char *v4; // rdx
  char v5; // di
  unsigned __int64 v6; // rcx
  char v7; // si
  unsigned __int64 v8; // rcx
  char v9; // di
  uint32_t i; // [rsp+28h] [rbp-8h]
  uint32_t key_len; // [rsp+2Ch] [rbp-4h]

  key_len = std::string::size(&this->secret_key_);
  if ( key_len )
  {
    for ( i = 0; i != len; ++i )
    {
      v3 = std::string::operator[](&this->secret_key_, i % key_len);
      v4 = (char *)v3;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)(v3 & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v3);
      v5 = *v4;
      v6 = (unsigned __int64)&data[i];
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      {
        v5 = i + (_BYTE)data;
        __asan_report_load1(&data[i]);
      }
      v7 = *(_BYTE *)v6;
      v8 = (unsigned __int64)&data[i];
      v9 = v7 ^ v5;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v9 = i + (_BYTE)data;
        __asan_report_store1(&data[i]);
      }
      *(_BYTE *)v8 = v9;
    }
  }
  else
  {
    PlayerSession::encryptFirstPacketData(this, data, len);
  }
};

// Line 710: range 000000000C7586A2-000000000C7589ED
void __cdecl PlayerSession::encryptFirstPacketData(PlayerSession *const this, char *data, uint32_t len)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // rdx
  char v9; // di
  unsigned __int64 v10; // rcx
  char v11; // si
  unsigned __int64 v12; // rcx
  char v13; // di
  uint32_t i; // [rsp+28h] [rbp-98h]
  uint32_t key_len; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 config_ptr:712";
  *(_QWORD *)(v3 + 16) = PlayerSession::encryptFirstPacketData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v3 + 32));
  if ( !(_BYTE)`guard variable for'PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key
    && __cxa_guard_acquire(&`guard variable for'PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key) )
  {
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Config::getServerSecretKey[abi:cxx11](
      &PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key,
      v6);
    __cxa_guard_release(&`guard variable for'PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      &PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key,
      &_dso_handle);
  }
  key_len = std::string::size(&PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key);
  if ( key_len )
  {
    for ( i = 0; i != len; ++i )
    {
      v7 = std::string::operator[](
             &PlayerSession::encryptFirstPacketData(char *,unsigned int)::first_packet_secret_key,
             i % key_len);
      v8 = (char *)v7;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v7);
      v9 = *v8;
      v10 = (unsigned __int64)&data[i];
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        v9 = i + (_BYTE)data;
        __asan_report_load1(&data[i]);
      }
      v11 = *(_BYTE *)v10;
      v12 = (unsigned __int64)&data[i];
      v13 = v11 ^ v9;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        v13 = i + (_BYTE)data;
        __asan_report_store1(&data[i]);
      }
      *(_BYTE *)v12 = v13;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "encryptFirstPacketData",
      717);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v18,
      (const char (*)[32])"first_packet_secret_key len = 0");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 732: range 000000000C7589EE-000000000C7595D2
void __cdecl PlayerSession::genAntiOfflineCmdBufferOnGetTokenRsp(
        PlayerSession *const this,
        proto::GetPlayerTokenRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin> *v14; // rax
  const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin> *v15; // rax
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_pointer v16; // rax
  const unsigned int *v17; // rax
  _DWORD *v18; // rdx
  data::DbAntiOfflineWhitelistConfigMgr *p_anti_offline_whitelis_config_mgr; // rcx
  bool isUidInWhitelist; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> >::_Self __y; // [rsp+18h] [rbp-278h] BYREF
  const SecurityConfig *security_config; // [rsp+20h] [rbp-270h]
  const SecurityAntiOfflineSwitchConfig *platform_config; // [rsp+28h] [rbp-268h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-260h] BYREF
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator b; // [rsp+40h] [rbp-250h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-230h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-210h] BYREF
  char v34[496]; // [rsp+A0h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 25 reduced_platform_type:747 48 4 18 security_level:779 64 4 10 result:796 80 4 7 ret:797"
                        " 96 8 24 platform_config_iter:758 128 24 8 iter:780 192 32 14 cmd_buffer:794 256 32 14 check_inf"
                        "o:795 320 96 18 extra_bin_data:771";
  *(_QWORD *)(v2 + 16) = PlayerSession::genAntiOfflineCmdBufferOnGetTokenRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -202116109;
  if ( !proto::GetPlayerTokenRsp::retcode(rsp_0) )
  {
    if ( (unsigned __int8)std::string::empty(&this->anti_offline_cmd_buffer_) != 1 )
    {
      proto::GetPlayerTokenRsp::set_security_cmd_buffer(rsp_0, &this->anti_offline_cmd_buffer_);
    }
    else
    {
      ServiceBox::findService<GateserverService>();
      GateserverService::getConfig((GateserverService *const)&v30);
      security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->security_config;
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->platform_type_);
      }
      *(_DWORD *)(v2 + 32) = SecurityUtils::reducePlatformType(this->platform_type_);
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,SecurityAntiOfflineSwitchConfig> const,unsigned int>(
             &security_config->platform_switch_map,
             &this->platform_type_) )
      {
        goto LABEL_14;
      }
      if ( *(char *)(((unsigned __int64)&security_config->is_other_platform_need_check_anti_offline >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&security_config->is_other_platform_need_check_anti_offline);
      if ( !security_config->is_other_platform_need_check_anti_offline )
        v5 = 1;
      else
LABEL_14:
        v5 = 0;
      if ( v5 )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "genAntiOfflineCmdBufferOnGetTokenRsp",
          753);
        v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v33,
               (const char (*)[24])"allow unknown platform:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->platform_type_);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" to login, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid_);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        *(std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::find(
                                                                                                 &security_config->platform_switch_map,
                                                                                                 (const std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::key_type *)(v2 + 32));
        __y._M_node = std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::end(&security_config->platform_switch_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> >::_Self *)(v2 + 96),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "genAntiOfflineCmdBufferOnGetTokenRsp",
            761);
          v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                 &v33,
                 (const char (*)[57])"platform switch config not found, reduced_platform_type:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 32));
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->uid_);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          platform_config = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> > *const)(v2 + 96))->second;
          if ( *(char *)(((unsigned __int64)platform_config >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(platform_config);
          if ( platform_config->is_anti_offline_open )
          {
            proto::PlayerExtraBinData::PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 320));
            v12 = proto::GetPlayerTokenRsp::extra_bin_data[abi:cxx11](rsp_0);
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 320, v12) != 1 )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/network/player_session.cpp",
                "genAntiOfflineCmdBufferOnGetTokenRsp",
                774);
              v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v32,
                      (const char (*)[32])"parse extra_bin_data fail, rsp:");
              google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v33, rsp_0);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v33);
              std::string::~string(&v33);
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
            else
            {
              *(_DWORD *)(v2 + 48) = 0;
              v14 = proto::PlayerExtraBinData::anti_offline_data_map((const proto::PlayerExtraBinData *const)(v2 + 320));
              *(_DWORD *)(v2 + 80) = 1;
              google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::find(
                (google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator *)(v2 + 128),
                v14,
                (const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::key_type *)(v2 + 80));
              v15 = proto::PlayerExtraBinData::anti_offline_data_map((const proto::PlayerExtraBinData *const)(v2 + 320));
              google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::end(&b, v15);
              if ( google::protobuf::operator!=(
                     (const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator *)(v2 + 128),
                     &b) )
              {
                v16 = google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator *const)(v2 + 128));
                *(_DWORD *)(v2 + 48) = proto::SecurityAntiOfflineDataBin::security_level(&v16->second);
              }
              v17 = std::min<unsigned int>((const unsigned int *)(v2 + 48), &platform_config->max_check_level);
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              *(_DWORD *)(v2 + 48) = *v18;
              ServiceBox::findService<GateserverService>();
              GateserverService::getConfig((GateserverService *const)&v30);
              p_anti_offline_whitelis_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->db_config_mgr.db_local_config_mgr.anti_offline_whitelis_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->uid_);
              }
              isUidInWhitelist = data::DbAntiOfflineWhitelistConfigMgr::isUidInWhitelist(
                                   p_anti_offline_whitelis_config_mgr,
                                   this->uid_);
              std::shared_ptr<Config>::~shared_ptr(&v30);
              if ( isUidInWhitelist )
                *(_DWORD *)(v2 + 48) = 0;
              std::string::basic_string(v2 + 192);
              std::string::basic_string(v2 + 256);
              *(_DWORD *)(v2 + 64) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->platform_type_);
              }
              *(_DWORD *)(v2 + 80) = SecurityUtils::genAntiOfflineCheckInfoOnLogin(
                                       *(_DWORD *)(v2 + 48),
                                       this->platform_type_,
                                       (std::string *)(v2 + 192),
                                       (std::string *)(v2 + 256),
                                       (int32_t *)(v2 + 64));
              if ( *(_DWORD *)(v2 + 80) )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/network/player_session.cpp",
                  "genAntiOfflineCmdBufferOnGetTokenRsp",
                  800);
                v21 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        &v32,
                        (const char (*)[42])"genAntiOfflineCheckInfoOnLogin fail, ret:");
                v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v2 + 80));
                v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" rsp:");
                google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v33, rsp_0);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v33);
                std::string::~string(&v33);
                common::milog::MiLogStream::~MiLogStream(&v32);
              }
              else if ( *(_DWORD *)(v2 + 64) )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/network/player_session.cpp",
                  "genAntiOfflineCmdBufferOnGetTokenRsp",
                  807);
                v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v32,
                        (const char (*)[45])"genAntiOfflineCheckInfoOnLogin fail, result:");
                v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v2 + 64));
                v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" rsp:");
                google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v33, rsp_0);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)&v33);
                std::string::~string(&v33);
                common::milog::MiLogStream::~MiLogStream(&v32);
              }
              else
              {
                proto::PlayerExtraBinData::Swap(&this->extra_bin_data_, (proto::PlayerExtraBinData *)(v2 + 320));
                std::string::swap(&this->anti_offline_cmd_buffer_, v2 + 192);
                std::string::swap(&this->anti_offline_check_info_, v2 + 256);
                proto::GetPlayerTokenRsp::set_security_cmd_buffer(rsp_0, &this->anti_offline_cmd_buffer_);
                google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v33, rsp_0);
                std::string::operator=(&this->get_player_token_rsp_str_, &v33);
                std::string::~string(&v33);
              }
              std::string::~string((void *)(v2 + 256));
              std::string::~string((void *)(v2 + 192));
            }
            proto::PlayerExtraBinData::~PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 320));
          }
        }
      }
    }
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 821: range 000000000C7595D4-000000000C75A877
int32_t __cdecl PlayerSession::verifyAntiOfflineReplyOnLoginReq(PlayerSession *const this, proto::PlayerLoginReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  data::DbAntiOfflineWhitelistConfigMgr *p_anti_offline_whitelis_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  const std::string *v12; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  time_t v14; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  google::protobuf::uint32 v21; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  const std::string *v23; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  google::protobuf::uint32 v25; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  const std::string *v27; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  const std::string *v29; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  const std::string *v31; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  const std::string *v33; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  bool is_editor; // al
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  google::protobuf::uint32 v37; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  const std::string *v39; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // r14
  const std::string *v41; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  bool is_guest; // al
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  google::protobuf::uint32 v45; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r14
  const std::string *v47; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::string *v50; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // r14
  const std::string *v53; // rax
  StatLogUtils::MessagePtr v54; // rdx
  StatLogUtils::MessagePtr v55; // rdi
  std::string *v56; // r8
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  __int64 v60; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  bool isAntiOfflineKickClosed; // r14
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  uint32_t v70; // ecx
  char v71; // al
  common::milog::MiLogStream *v72; // r14
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  std::string *v77; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // r14
  uint32_t v79; // r8d
  int32_t result; // eax
  bool is_forbid_login; // [rsp+19h] [rbp-1F7h]
  bool is_in_whitelist; // [rsp+1Ah] [rbp-1F6h]
  bool is_succ; // [rsp+1Bh] [rbp-1F5h]
  std::map<unsigned int,SecurityAntiOfflineLevelConfig>::key_type __x; // [rsp+1Ch] [rbp-1F4h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> >::_Self __y; // [rsp+20h] [rbp-1F0h] BYREF
  const SecurityConfig *security_config; // [rsp+28h] [rbp-1E8h]
  const SecurityAntiOfflineSwitchConfig *platform_config; // [rsp+30h] [rbp-1E0h]
  const SecurityAntiOfflineLevelConfig *level_config; // [rsp+38h] [rbp-1D8h]
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin> *proto_anti_offline_data_map; // [rsp+40h] [rbp-1D0h]
  proto::SecurityAntiOfflineDataBin *data_bin; // [rsp+48h] [rbp-1C8h]
  std::shared_ptr<google::protobuf::Message> head_ptr; // [rsp+50h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v94; // [rsp+60h] [rbp-1B0h] BYREF
  char v95[400]; // [rsp+80h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 25 reduced_platform_type:842 48 4 15 result_type:872 64 8 24 platform_config_iter:845 96 "
                        "8 15 config_iter:854 128 16 16 log_head_ptr:868 160 16 16 log_body_ptr:869 192 16 14 packet_ptr:"
                        "937 224 32 11 log_str:899 288 32 25 save_extra_bin_notify:934";
  *(_QWORD *)(v2 + 16) = PlayerSession::verifyAntiOfflineReplyOnLoginReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  v5 = proto::PlayerLoginReq::extra_bin_data[abi:cxx11](req);
  if ( (unsigned __int8)std::string::empty(v5) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "verifyAntiOfflineReplyOnLoginReq",
      824);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[28])"extra_bin_data is not empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    proto::PlayerLoginReq::clear_extra_bin_data(req);
  }
  if ( (unsigned __int8)std::string::empty(&this->anti_offline_check_info_) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_login_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_finish_login_);
    }
    if ( this->is_finish_login_ )
    {
      v6 = 0;
    }
    else
    {
      ServiceBox::findService<GateserverService>();
      GateserverService::getConfig((GateserverService *const)&head_ptr);
      security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&head_ptr)->security_config;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&head_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->platform_type_);
      }
      *(_DWORD *)(v2 + 32) = SecurityUtils::reducePlatformType(this->platform_type_);
      *(std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::find(
                                                                                               &security_config->platform_switch_map,
                                                                                               (const std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::key_type *)(v2 + 32));
      __y._M_node = std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::end(&security_config->platform_switch_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> >::_Self *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "verifyAntiOfflineReplyOnLoginReq",
          848);
        v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[57])"platform switch config not found, reduced_platform_type:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->uid_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        v6 = 0;
      }
      else
      {
        platform_config = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> > *const)(v2 + 64))->second;
        __x = 1;
        *(std::map<unsigned int,SecurityAntiOfflineLevelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,SecurityAntiOfflineLevelConfig>::find(
                                                                                                &security_config->level_config_map,
                                                                                                &__x);
        __y._M_node = std::map<unsigned int,SecurityAntiOfflineLevelConfig>::end(&security_config->level_config_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineLevelConfig> >::_Self *)(v2 + 96),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineLevelConfig> >::_Self *)&__y) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "verifyAntiOfflineReplyOnLoginReq",
            857);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[56])"config not found for SECURITY_CHECK_LOGIN, not to check");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          v6 = 0;
        }
        else
        {
          level_config = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineLevelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SecurityAntiOfflineLevelConfig> > *const)(v2 + 96))->second;
          ServiceBox::findService<GateserverService>();
          GateserverService::getConfig((GateserverService *const)&head_ptr);
          p_anti_offline_whitelis_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&head_ptr)->db_config_mgr.db_local_config_mgr.anti_offline_whitelis_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->uid_);
          }
          is_in_whitelist = data::DbAntiOfflineWhitelistConfigMgr::isUidInWhitelist(
                              p_anti_offline_whitelis_config_mgr,
                              this->uid_);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&head_ptr);
          proto_anti_offline_data_map = proto::PlayerExtraBinData::mutable_anti_offline_data_map(&this->extra_bin_data_);
          __x = 1;
          data_bin = google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::operator[](
                       proto_anti_offline_data_map,
                       &__x);
          proto::SecurityAntiOfflineDataBin::set_security_check_type(data_bin, 1u);
          common::tools::perf::make_shared<proto_log::AntiCheatLogHead>();
          common::tools::perf::make_shared<proto_log::AntiCheatBodyAntiOfflineResult>();
          *(_DWORD *)(v2 + 48) = 0;
          v11 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v12 = proto::PlayerLoginReq::security_cmd_reply[abi:cxx11](req);
          is_succ = SecurityUtils::verifyAndRecordAntiOfflineCheckInfo(
                      &this->anti_offline_check_info_,
                      v12,
                      level_config,
                      data_bin,
                      v11,
                      (uint32_t *)(v2 + 48));
          v13 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v14 = time(0LL);
          common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 288), v14);
          proto_log::AntiCheatLogHead::set_time(v13, (std::string *)(v2 + 288));
          std::string::~string((void *)(v2 + 288));
          v15 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::AntiCheatLogHead::set_action_id(v15, 6u);
          v16 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          ServiceBox::findService<GateserverService>();
          GateserverService::getConfig((GateserverService *const)&head_ptr);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&head_ptr);
          proto_log::AntiCheatLogHead::set_region_name(v16, &v17->region_name);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&head_ptr);
          v18 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::AntiCheatLogHead::set_game_version(v18, "0.4.0");
          v19 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->uid_);
          }
          proto_log::AntiCheatLogHead::set_uid(v19, this->uid_);
          v20 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v21 = proto::PlayerLoginReq::account_type(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_account_type(v20, v21);
          v22 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v23 = proto::PlayerLoginReq::account_uid[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_account_uid(v22, v23);
          v24 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v25 = proto::PlayerLoginReq::platform_type(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_platform_type(v24, v25);
          v26 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v27 = proto::PlayerLoginReq::client_version[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_client_version(v26, v27);
          v28 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v29 = proto::PlayerLoginReq::system_version[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_system_version(v28, v29);
          v30 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v31 = proto::PlayerLoginReq::device_name[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_device_name(v30, v31);
          v32 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v33 = proto::PlayerLoginReq::device_uuid[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_device_uuid(v32, v33);
          v34 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          is_editor = proto::PlayerLoginReq::is_editor(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_is_editor(v34, is_editor);
          v36 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v37 = proto::PlayerLoginReq::language_type(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_language_type(v36, v37);
          v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v39 = proto::PlayerLoginReq::platform[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_platform(v38, v39);
          v40 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v41 = proto::PlayerLoginReq::device_info[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_device_info(v40, v41);
          v42 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          is_guest = proto::PlayerLoginReq::is_guest(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_is_guest(v42, is_guest);
          v44 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v45 = proto::PlayerLoginReq::cloud_client_ip(req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_cloud_client_ip(v44, v45);
          v46 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v47 = proto::PlayerLoginReq::online_id[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_online_id(v46, v47);
          v48 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 288), req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_player_login_req_str(v48, (std::string *)(v2 + 288));
          std::string::~string((void *)(v2 + 288));
          v49 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v50 = proto_log::AntiCheatBodyAntiOfflineResult::mutable_get_player_token_rsp_str[abi:cxx11](v49);
          std::string::swap(v50, &this->get_player_token_rsp_str_);
          v51 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::AntiCheatBodyAntiOfflineResult::set_is_in_whitelist(v51, is_in_whitelist);
          v52 = std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAntiOfflineResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v53 = proto::PlayerLoginReq::psn_id[abi:cxx11](req);
          proto_log::AntiCheatBodyAntiOfflineResult::set_psn_id(v52, v53);
          std::string::basic_string(v2 + 224);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyAntiOfflineResult,void>(
            &head_ptr,
            (const std::shared_ptr<proto_log::AntiCheatBodyAntiOfflineResult> *)(v2 + 160));
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatLogHead,void>(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 192),
            (const std::shared_ptr<proto_log::AntiCheatLogHead> *)(v2 + 128));
          v54._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 224);
          v54._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&head_ptr;
          v55._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&head_ptr;
          v55._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 192);
          LOBYTE(v52) = (unsigned int)StatLogUtils::parseToString(v55, v54, v56) != 0;
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 192));
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&head_ptr);
          if ( (_BYTE)v52 )
          {
            common::milog::MiLogStream::create(
              &v94,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/player_session.cpp",
              "verifyAntiOfflineReplyOnLoginReq",
              902);
            v57 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v94,
                    (const char (*)[25])"parseToString fail, req:");
            google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 288), req);
            v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v57,
                    (const std::string *)(v2 + 288));
            v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v58, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &this->uid_);
            std::string::~string((void *)(v2 + 288));
            common::milog::MiLogStream::~MiLogStream(&v94);
          }
          v60 = std::string::c_str(v2 + 224);
          common::milog::MiLog::writeLog(&common::milog::MiLogDefault::default_log_obj_, 0x15u, off_1A0E2D80, v60);
          if ( is_succ || is_in_whitelist )
          {
            v6 = 0;
          }
          else
          {
            ServiceBox::findService<GateserverService>();
            GateserverService::getConfig((GateserverService *const)&head_ptr);
            v61 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&head_ptr);
            isAntiOfflineKickClosed = FeatureSwitchMgr::isAntiOfflineKickClosed(&v61->feature_switch_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&head_ptr);
            if ( isAntiOfflineKickClosed )
            {
              v6 = 0;
            }
            else
            {
              is_forbid_login = 0;
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     &platform_config->forbid_login_result_type_set,
                     (const unsigned int *)(v2 + 48)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 288),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/network/player_session.cpp",
                  "verifyAntiOfflineReplyOnLoginReq",
                  922);
                v63 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        (common::milog::MiLogStream *const)(v2 + 288),
                        (const char (*)[44])"forbid login by result_type, platform_type:");
                v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v63,
                        (const unsigned int *)(v2 + 32));
                v65 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v64,
                        (const char (*)[14])" result_type:");
                v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v65,
                        (const unsigned int *)(v2 + 48));
                v67 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        v66,
                        (const char (*)[22])" forbid_result_types:");
                v68 = common::milog::MiLogStream::operator<<<unsigned int>(
                        v67,
                        &platform_config->forbid_login_result_type_set);
                v69 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v68, (const char (*)[6])" uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &this->uid_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
                is_forbid_login = 1;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&platform_config->forbid_login_level >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)platform_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&platform_config->forbid_login_level >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&platform_config->forbid_login_level);
                }
                if ( !platform_config->forbid_login_level )
                  goto LABEL_38;
                v70 = proto::SecurityAntiOfflineDataBin::security_level(data_bin);
                if ( *(_BYTE *)(((unsigned __int64)&platform_config->forbid_login_level >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)platform_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&platform_config->forbid_login_level >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&platform_config->forbid_login_level);
                }
                if ( v70 >= platform_config->forbid_login_level )
                  v71 = 1;
                else
LABEL_38:
                  v71 = 0;
                if ( v71 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 288),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/network/player_session.cpp",
                    "verifyAntiOfflineReplyOnLoginReq",
                    927);
                  v72 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          (common::milog::MiLogStream *const)(v2 + 288),
                          (const char (*)[48])"forbid login by security_level, security_level:");
                  __x = proto::SecurityAntiOfflineDataBin::security_level(data_bin);
                  v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &__x);
                  v74 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v73,
                          (const char (*)[21])" forbid_login_level:");
                  v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v74,
                          &platform_config->forbid_login_level);
                  v76 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v75, (const char (*)[6])" uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, &this->uid_);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
                  is_forbid_login = 1;
                }
              }
              if ( is_forbid_login )
              {
                proto::SavePlayerExtraBinDataNotify::SavePlayerExtraBinDataNotify((proto::SavePlayerExtraBinDataNotify *const)(v2 + 288));
                if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->uid_);
                }
                proto::SavePlayerExtraBinDataNotify::set_uid(
                  (proto::SavePlayerExtraBinDataNotify *const)(v2 + 288),
                  this->uid_);
                v77 = proto::SavePlayerExtraBinDataNotify::mutable_player_extra_bin_data[abi:cxx11]((proto::SavePlayerExtraBinDataNotify *const)(v2 + 288));
                google::protobuf::MessageLite::SerializeToString(&this->extra_bin_data_, v77);
                common::minet::PacketUtils::createPacket<proto::SavePlayerExtraBinDataNotify>((const proto::SavePlayerExtraBinDataNotify *)(v2 + 192));
                if ( std::operator!=<common::minet::Packet>(
                       0LL,
                       (const std::shared_ptr<common::minet::Packet> *)(v2 + 192)) )
                {
                  v78 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
                  std::shared_ptr<common::minet::Packet>::shared_ptr(
                    (std::shared_ptr<common::minet::Packet> *const)&head_ptr,
                    (const std::shared_ptr<common::minet::Packet> *)(v2 + 192));
                  NetworkMgrBase::sendPacketToTargetService(
                    v78,
                    (common::minet::PacketPtr)__PAIR128__(5LL, &head_ptr),
                    0,
                    v79);
                  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&head_ptr);
                }
                PlayerSession::printForbidLoginAntiCheatLog(this, 2u);
                v6 = -1;
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 192));
                proto::SavePlayerExtraBinDataNotify::~SavePlayerExtraBinDataNotify((proto::SavePlayerExtraBinDataNotify *const)(v2 + 288));
              }
              else
              {
                v6 = 0;
              }
            }
          }
          std::string::~string((void *)(v2 + 224));
          std::shared_ptr<proto_log::AntiCheatBodyAntiOfflineResult>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyAntiOfflineResult> *const)(v2 + 160));
          std::shared_ptr<proto_log::AntiCheatLogHead>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatLogHead> *const)(v2 + 128));
        }
      }
    }
  }
  result = v6;
  if ( v95 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 951: range 000000000C75A878-000000000C75A9C1
void __cdecl PlayerSession::printForbidLoginAntiCheatLog(PlayerSession *const this, uint32_t forbid_login_reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto_log::AntiCheatBodyForbidLogin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::shared_ptr<google::protobuf::Message> p_log_body_ptr; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 log_body_ptr:952";
  *(_QWORD *)(v2 + 16) = PlayerSession::printForbidLoginAntiCheatLog;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::AntiCheatBodyForbidLogin>();
  v5 = std::__shared_ptr_access<proto_log::AntiCheatBodyForbidLogin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyForbidLogin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::AntiCheatBodyForbidLogin::set_reason(v5, forbid_login_reason);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyForbidLogin,void>(
    &p_log_body_ptr,
    (const std::shared_ptr<proto_log::AntiCheatBodyForbidLogin> *)(v2 + 32));
  PlayerSession::printAntiCheatLog(this, 0x2Au, &p_log_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_body_ptr);
  std::shared_ptr<proto_log::AntiCheatBodyForbidLogin>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyForbidLogin> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 958: range 000000000C75A9C2-000000000C75AF17
int32_t __cdecl PlayerSession::verifyClientVersionHash(
        PlayerSession *const this,
        const std::string *client_version,
        const std::string *client_verison_hash)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  size_t v11; // r14
  const char *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int32_t result; // eax
  int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-110h] BYREF
  char v29[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 9 timer:962 64 32 13 check_str:968 128 32 14 check_hash:969";
  *(_QWORD *)(v3 + 16) = PlayerSession::verifyClientVersionHash;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 32));
  if ( (unsigned __int8)std::string::empty(client_version) || (unsigned __int8)std::string::empty(client_verison_hash) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "verifyClientVersionHash",
      965);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v28,
           (const char (*)[36])"client_param error, client_version:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, client_version);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v8,
           (const char (*)[22])" client_verison_hash:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, client_verison_hash);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v10 = -1;
  }
  else
  {
    std::operator+<char>((std::string *)&v28, client_version, &this->client_version_random_key_);
    std::operator+<char>((std::string *)(v3 + 64), (std::string *)&v28, "mhy2020");
    std::string::~string(&v28);
    std::string::basic_string(v3 + 128);
    v11 = std::string::size(v3 + 64);
    v12 = (const char *)std::string::data(v3 + 64);
    common::tools::StringUtils::sha1((std::string *)(v3 + 128), v12, v11);
    common::tools::StringUtils::base64Encode((std::string *)&v28, (const std::string *)(v3 + 128));
    std::string::operator=(v3 + 128, &v28);
    std::string::~string(&v28);
    if ( std::operator==<char>((const std::string *)(v3 + 128), client_verison_hash) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/player_session.cpp",
        "verifyClientVersionHash",
        974);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v28,
              (const char (*)[22])"hash succ, check_str:");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" local_hash:");
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v3 + 128));
      v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" remote_hash:");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, client_verison_hash);
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" timecost:");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 32));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v10 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "verifyClientVersionHash",
        980);
      v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v28,
              (const char (*)[26])"hash not same, check_str:");
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" local_hash:");
      v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v3 + 128));
      v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" remote_hash:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, client_verison_hash);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v10 = -1;
    }
    std::string::~string((void *)(v3 + 128));
    std::string::~string((void *)(v3 + 64));
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 32));
  result = v10;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 989: range 000000000C75AF18-000000000C75B4C9
void __cdecl PlayerSession::printAntiCheatLog(
        const PlayerSession *const this,
        uint32_t action_id,
        MessagePtr *p_log_body_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  time_t v7; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  StatLogUtils::MessagePtr v13; // rdx
  StatLogUtils::MessagePtr v14; // rdi
  std::string *v15; // r8
  bool v16; // r14
  std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 v24; // rax
  std::shared_ptr<google::protobuf::Message> head_ptr; // [rsp+20h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> body_ptr; // [rsp+30h] [rbp-160h] BYREF
  std::string value; // [rsp+40h] [rbp-150h] BYREF
  char v30[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 16 log_head_ptr:990 64 32 11 log_str:996 128 32 16 log_head_str:999 192 32 17 log_body_str:1000";
  *(_QWORD *)(v3 + 16) = PlayerSession::printAntiCheatLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  common::tools::perf::make_shared<proto_log::AntiCheatLogHead>();
  v6 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v7 = time(0LL);
  common::tools::TimeUtils::getStrByTime[abi:cxx11](&value, v7);
  proto_log::AntiCheatLogHead::set_time(v6, &value);
  std::string::~string(&value);
  v8 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::AntiCheatLogHead::set_action_id(v8, action_id);
  v9 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)&body_ptr);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&body_ptr);
  proto_log::AntiCheatLogHead::set_region_name(v9, &v10->region_name);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&body_ptr);
  v11 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::AntiCheatLogHead::set_game_version(v11, "0.4.0");
  v12 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  proto_log::AntiCheatLogHead::set_uid(v12, this->uid_);
  std::string::basic_string(v3 + 64);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&body_ptr, p_log_body_ptr);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatLogHead,void>(
    &head_ptr,
    (const std::shared_ptr<proto_log::AntiCheatLogHead> *)(v3 + 32));
  v13._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 64);
  v13._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&body_ptr;
  v14._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&body_ptr;
  v14._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&head_ptr;
  v16 = (unsigned int)StatLogUtils::parseToString(v14, v13, v15) != 0;
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&head_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&body_ptr);
  if ( v16 )
  {
    v17 = std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v3 + 128), v17);
    std::string::basic_string(v3 + 192);
    if ( std::operator!=<google::protobuf::Message>(0LL, p_log_body_ptr) )
    {
      v18 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_log_body_ptr);
      google::protobuf::Message::ShortDebugString[abi:cxx11](&value, v18);
      std::string::operator=(v3 + 192, &value);
      std::string::~string(&value);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&value,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/player_session.cpp",
      "printAntiCheatLog",
      1005);
    v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)&value,
            (const char (*)[30])"parseToString fail, log_head:");
    v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)(v3 + 128));
    v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" log_body:");
    v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v3 + 192));
    v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->uid_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
    std::string::~string((void *)(v3 + 192));
    std::string::~string((void *)(v3 + 128));
  }
  else
  {
    v24 = std::string::c_str(v3 + 64);
    common::milog::MiLog::writeLog(&common::milog::MiLogDefault::default_log_obj_, 0x15u, off_1A0E2D80, v24);
  }
  std::string::~string((void *)(v3 + 64));
  std::shared_ptr<proto_log::AntiCheatLogHead>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatLogHead> *const)(v3 + 32));
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1012: range 000000000C75B4CA-000000000C75B98D
int32_t __cdecl PlayerSession::setRetrySdkVerify(PlayerSession *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-B0h] BYREF
  uint32_t now; // [rsp+14h] [rbp-ACh]
  const proto::GetPlayerTokenReq *req; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 req_ptr:1019";
  *(_QWORD *)(v2 + 16) = PlayerSession::setRetrySdkVerify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/player_session.cpp",
      "setRetrySdkVerify",
      1015);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v19, (const char (*)[22])"packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GetPlayerTokenReq const>(
           (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session.cpp",
        "setRetrySdkVerify",
        1019);
      common::milog::MiLogStream::operator()(&v19, "get GetPlayerTokenReq failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( std::operator!=<common::minet::Packet>(&this->sdk_verify_retry_packet_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/player_session.cpp",
          "setRetrySdkVerify",
          1024);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v19,
          (const char (*)[44])"sdk_verify_retry_packet_ptr_ is not nullptr");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = -1;
      }
      else
      {
        now = common::tools::TimeUtils::getNow();
        ServiceBox::findService<GateserverService>();
        GateserverService::getConfig((GateserverService *const)&v18);
        v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
        if ( *(_BYTE *)(((unsigned __int64)&v6->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->retry_sdk_verify_config.retry_sdk_verify_second);
        }
        v7 = v6->retry_sdk_verify_config.retry_sdk_verify_second + now;
        if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_store4(&this->sdk_verify_retry_time_);
        }
        this->sdk_verify_retry_time_ = v7;
        std::shared_ptr<Config>::~shared_ptr(&v18);
        std::shared_ptr<common::minet::Packet>::operator=(&this->sdk_verify_retry_packet_ptr_, p_packet_ptr);
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "setRetrySdkVerify",
          1034);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v19,
               (const char (*)[47])"[SDK] register retry sdk verify. account_type=");
        val = proto::GetPlayerTokenReq::account_type(req);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", account_uid=");
        v11 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", timeout=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->sdk_verify_retry_time_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = 0;
      }
    }
    std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v2 + 32));
  }
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1039: range 000000000C75C4D0-000000000C75CBF1
int32_t __cdecl PlayerSession::checkThenRetrySdkVerify(PlayerSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // eax
  uint32_t v12; // eax
  uint32_t v13; // eax
  AccountSdkMgr *p_account_sdk_mgr; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-194h] BYREF
  uint32_t session_id; // [rsp+20h] [rbp-190h]
  int ret; // [rsp+24h] [rbp-18Ch]
  const proto::GetPlayerTokenReq *req; // [rsp+28h] [rbp-188h]
  std::shared_ptr<common::minet::Packet> __r; // [rsp+30h] [rbp-180h] BYREF
  PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> p___f; // [rsp+40h] [rbp-170h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-150h] BYREF
  char v29[304]; // [rsp+80h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 8 now:1045 64 16 15 packet_ptr:1050 96 16 12 req_ptr:1052 128 24 13 callback:1068 192 32 "
                        "14 client_ip:1057";
  *(_QWORD *)(v1 + 16) = PlayerSession::checkThenRetrySdkVerify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  if ( std::operator==<common::minet::Packet>(&this->sdk_verify_retry_packet_ptr_, 0LL) )
  {
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sdk_verify_retry_time_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->sdk_verify_retry_time_);
    }
    if ( this->sdk_verify_retry_time_ <= *(_DWORD *)(v1 + 48) )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)(v1 + 64),
        &this->sdk_verify_retry_packet_ptr_);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&__r, 0LL);
      std::shared_ptr<common::minet::Packet>::operator=(&this->sdk_verify_retry_packet_ptr_, &__r);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&__r);
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v1 + 96));
      if ( std::operator==<proto::GetPlayerTokenReq const>(
             (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v1 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/player_session.cpp",
          "checkThenRetrySdkVerify",
          1052);
        common::milog::MiLogStream::operator()(&v28, "get GetPlayerTokenReq failed");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v4 = -1;
      }
      else
      {
        req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "checkThenRetrySdkVerify",
          1054);
        v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v28,
               (const char (*)[38])"[SDK] retry sdk verify. account_type=");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->account_type_);
        v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])", account_uid=");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->account_uid_);
        v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", now=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
        common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)(v1 + 192), this);
        v10 = proto::GetPlayerTokenReq::platform_type(req);
        if ( TxtConfigMgr::isCloudPlatform(v10) && proto::GetPlayerTokenReq::cloud_client_ip(req) )
        {
          v12 = proto::GetPlayerTokenReq::cloud_client_ip(req);
          v13 = htonl(v12);
          common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&v28, v13);
          std::string::operator=(v1 + 192, &v28);
          std::string::~string(&v28);
        }
        session_id = common::minet::KcpSession::getSessionId(this);
        *(_DWORD *)(v1 + 128) = session_id;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v1 + 136),
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        p_account_sdk_mgr = &ServiceBox::findService<GateserverService>()->account_sdk_mgr;
        PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::SdkRspParam(
          &p___f,
          (const PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *)(v1 + 128));
        std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::function<PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1},void,void>(
          (std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *const)&v28,
          &p___f);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &__r,
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        ret = AccountSdkMgr::asyncCheckSdkAccount(
                p_account_sdk_mgr,
                &__r,
                (const std::string *)(v1 + 192),
                (std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *)&v28);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&__r);
        std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::~function((std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *const)&v28);
        PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::~SdkRspParam(&p___f);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "checkThenRetrySdkVerify",
            1134);
          v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v28,
                  (const char (*)[49])"[SDK] asyncCheckSdkAccount failed. account_type=");
          val = proto::GetPlayerTokenReq::account_type(req);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v16,
                  (const char (*)[15])", account_uid=");
          v18 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
          v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", client_ip=");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v1 + 192));
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        v4 = 0;
        PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::~SdkRspParam((PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const)(v1 + 128));
        std::string::~string((void *)(v1 + 192));
      }
      std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v1 + 96));
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
    }
    else
    {
      v4 = 0;
    }
  }
  result = v4;
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1068: range 000000000C75B98E-000000000C75C414
int32_t __cdecl PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::operator()(
        const PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const __closure,
        SdkRetcode retcode,
        const AccountSdkMgr::SdkRspParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  char v10; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AccountType; // r15d
  const std::string *v13; // r15
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r15
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  const std::string *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  const std::string *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const std::string *v44; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rdx
  bool *p_is_kickout_when_retry_fail; // rax
  bool is_kickout_when_retry_fail; // r14
  GateserverService *v48; // r14
  PlayerSession *v49; // rax
  common::milog::MiLogStream *v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  const std::string *v53; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  unsigned int v57; // [rsp+30h] [rbp-F0h] BYREF
  unsigned int v58; // [rsp+34h] [rbp-ECh] BYREF
  const proto::GetPlayerTokenReq *req; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v60; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v61; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v62; // [rsp+70h] [rbp-B0h] BYREF
  char v63[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 req_ptr:1070 64 16 16 session_ptr:1073";
  *(_QWORD *)(v3 + 16) = PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v3 + 32));
  if ( std::operator==<proto::GetPlayerTokenReq const>(
         (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session.cpp",
      "operator()",
      1070);
    common::milog::MiLogStream::operator()(&v62, "get GetPlayerTokenReq failed");
    common::milog::MiLogStream::~MiLogStream(&v62);
    v6 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = (unsigned int)ServiceBox::findService<GateserverService>();
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(__closure);
    }
    GateserverService::findPlayerSession((GateserverService *const)(v3 + 64), v7);
    if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/player_session.cpp",
        "operator()",
        1078);
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v62,
             (const char (*)[20])"findPlayerSession: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__closure->__session_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v62);
      v6 = -1;
    }
    else
    {
      v10 = 0;
      v11 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      AccountType = PlayerSession::getAccountType(v11);
      v15 = 1;
      if ( AccountType == proto::GetPlayerTokenReq::account_type(req) )
      {
        v13 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v14 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v62, v14);
        v10 = 1;
        if ( !std::operator!=<char>((const std::string *)&v62, v13) )
          v15 = 0;
      }
      if ( v10 )
        std::string::~string(&v62);
      if ( v15 )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/player_session.cpp",
          "operator()",
          1085);
        v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v61,
                (const char (*)[25])"[SDK] account not match:");
        v17 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::KcpSession::getSessionId(v17);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])" req account_type:");
        v57 = proto::GetPlayerTokenReq::account_type(req);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v57);
        v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v20,
                (const char (*)[18])" req account_uid:");
        v22 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
        v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v23,
                (const char (*)[23])" session account_type:");
        v25 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v58 = PlayerSession::getAccountType(v25);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v58);
        v27 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v26,
                (const char (*)[22])" session account_uid:");
        v28 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v62, v28);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&v62);
        std::string::~string(&v62);
        common::milog::MiLogStream::~MiLogStream(&v61);
        v6 = -1;
      }
      else if ( retcode )
      {
        if ( retcode == ERROR )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/player_session.cpp",
            "operator()",
            1101);
          v33 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v62,
                  (const char (*)[44])"[SDK] async sdk verify error. account_type=");
          v58 = proto::GetPlayerTokenReq::account_type(req);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v58);
          v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v34,
                  (const char (*)[14])" account_uid=");
          v36 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, v36);
          common::milog::MiLogStream::~MiLogStream(&v62);
          v6 = -1;
        }
        else if ( retcode == FAIL )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/player_session.cpp",
            "operator()",
            1108);
          v37 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v62,
                  (const char (*)[43])"[SDK] async sdk verify FAIL. account_type=");
          v58 = proto::GetPlayerTokenReq::account_type(req);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &v58);
          v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v38,
                  (const char (*)[14])" account_uid=");
          v40 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, v40);
          common::milog::MiLogStream::~MiLogStream(&v62);
          if ( *(char *)(((unsigned __int64)&param->is_sdk_return >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&param->is_sdk_return);
          if ( param->is_sdk_return )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/player_session.cpp",
              "operator()",
              1113);
            v41 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v62,
                    (const char (*)[61])"[SDK] sdk verify FAIL, and account is invalid. account_type=");
            v58 = proto::GetPlayerTokenReq::account_type(req);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &v58);
            v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v42,
                    (const char (*)[14])" account_uid=");
            v44 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, v44);
            common::milog::MiLogStream::~MiLogStream(&v62);
            ServiceBox::findService<GateserverService>();
            GateserverService::getConfig((GateserverService *const)&v60);
            v45 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60);
            p_is_kickout_when_retry_fail = &v45->retry_sdk_verify_config.is_kickout_when_retry_fail;
            if ( *(_BYTE *)(((unsigned __int64)p_is_kickout_when_retry_fail >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_kickout_when_retry_fail & 7) >= *(_BYTE *)(((unsigned __int64)p_is_kickout_when_retry_fail >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_kickout_when_retry_fail);
            }
            is_kickout_when_retry_fail = v45->retry_sdk_verify_config.is_kickout_when_retry_fail;
            std::shared_ptr<Config>::~shared_ptr(&v60);
            if ( is_kickout_when_retry_fail )
            {
              v48 = ServiceBox::findService<GateserverService>();
              v49 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              GateserverService::disconnect(v48, v49, 0x11u);
              common::milog::MiLogStream::create(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/network/player_session.cpp",
                "operator()",
                1121);
              v50 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v62,
                      (const char (*)[55])"[SDK] sdk verify FAIL, kick out session. account_type=");
              v58 = proto::GetPlayerTokenReq::account_type(req);
              v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &v58);
              v52 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v51,
                      (const char (*)[14])" account_uid=");
              v53 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, v53);
              common::milog::MiLogStream::~MiLogStream(&v62);
            }
          }
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/player_session.cpp",
          "operator()",
          1094);
        v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v62,
                (const char (*)[43])"[SDK] async sdk verify succ. account_type=");
        v58 = proto::GetPlayerTokenReq::account_type(req);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &v58);
        v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v30, (const char (*)[14])" account_uid=");
        v32 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, v32);
        common::milog::MiLogStream::~MiLogStream(&v62);
        v6 = 0;
      }
    }
    std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v3 + 64));
  }
  std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v3 + 32));
  result = v6;
  if ( v63 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1068: range 000000000C77352C-000000000C7735C4
void __cdecl PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::SdkRspParam(
        PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this,
        PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *a2)
{
  uint32_t session_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  session_id = a2->__session_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->__session_id = session_id;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
};

// Line 1068: range 000000000C75C436-000000000C75C4CE
void __cdecl PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::SdkRspParam(
        PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this,
        const PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *a2)
{
  uint32_t session_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  session_id = a2->__session_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->__session_id = session_id;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
};

// Line 1068: range 000000000C75C416-000000000C75C434
void __cdecl PlayerSession::checkThenRetrySdkVerify(void)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#1}::~SdkRspParam(
        PlayerSession::checkThenRetrySdkVerify::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this)
{
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 1141: range 000000000C75CBF2-000000000C75CC1E
void __cdecl PlayerSession::setSecretKey(PlayerSession *const this, std::string *p_secret_key)
{
  std::string::operator=(&this->secret_key_, p_secret_key);
};
