// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/player_session_proxy.cpp

// Line 19: range 00000000175A8468-00000000175A85A0
std::string *__cdecl PlayerSessionProxy::getFlagStr[abi:cxx11](
        std::string *retstr,
        uint32_t gate_ip,
        uint32_t gate_session)
{
  std::string __lhs; // [rsp+10h] [rbp-70h] BYREF
  std::string v5; // [rsp+30h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-30h] BYREF

  std::to_string(&__rhs, gate_session);
  common::tools::NetUtils::inetNtoa[abi:cxx11](&__lhs, gate_ip);
  std::operator+<char>(&v5, &__lhs, ":");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v5, &__rhs);
  std::string::~string(&v5);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 24: range 00000000175A85A2-00000000175A86C0
void __cdecl PlayerSessionProxy::onTimer(PlayerSessionProxy *const this, uint64_t now_ms)
{
  bool v2; // bl
  GameserverService *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  std::shared_ptr<Player> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  PlayerSessionProxy::getPlayer((PlayerSessionProxy *const)&__a);
  v2 = std::operator==<Player>(&__a, 0LL);
  std::shared_ptr<Player>::~shared_ptr(&__a);
  if ( v2 )
  {
    v3 = ServiceBox::findService<GameserverService>();
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    GameserverService::removePlayerSession(v3, this->uid_);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session_proxy.cpp",
      "onTimer",
      28);
    v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v6,
           (const char (*)[47])"PlayerSession is timeout,auto remove self,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->uid_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 33: range 00000000175A8808-00000000175A8DBC
void __cdecl PlayerSessionProxy::onConnect(PlayerSessionProxy *const this)
{
  std::weak_ptr<PlayerSessionProxy> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r14d
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r13
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD); // r14
  __int64 uid; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool v11; // r13
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::weak_ptr<PlayerSessionProxy> v19; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<PlayerSessionProxy> v20; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerSessionProxy> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerSessionProxy> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 session_wtr:36";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerSessionProxy::onConnect;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    std::enable_shared_from_this<PlayerSessionProxy>::shared_from_this(&v20);
    std::weak_ptr<PlayerSessionProxy>::weak_ptr<PlayerSessionProxy,void>(
      v1 + 2,
      (const std::shared_ptr<PlayerSessionProxy> *)&v20);
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&v20);
    std::weak_ptr<PlayerSessionProxy>::weak_ptr(&v19, v1 + 2);
    common::tools::perf::make_shared<UnixTimer,PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}>(
      (PlayerSessionProxy::onConnect::<lambda(uint64_t)> *)&v20,
      (PlayerSessionProxy::onConnect::<lambda(uint64_t)> *)&v19);
    std::shared_ptr<UnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<UnixTimer> *)&v20);
    std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v20);
    PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::~onConnect((PlayerSessionProxy::onConnect::<lambda(uint64_t)> *const)&v19);
    if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/player_session_proxy.cpp",
        "onConnect",
        48);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v21,
        (const char (*)[29])"make_shared UnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v4 = 0;
    }
    else
    {
      v4 = 1;
    }
    std::weak_ptr<PlayerSessionProxy>::~weak_ptr(v1 + 2);
    if ( v4 != 1 )
      goto LABEL_24;
  }
  else
  {
    v5 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v5);
  }
  v6 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(v6->_vptr_MiTimer + 2);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD))v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = this->uid_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  if ( *(_BYTE *)(((unsigned __int64)&v10->session_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->session_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v11 = v8(v6, v10->session_timeout, 0LL, "./src/network/player_session_proxy.cpp", "onConnect", 57LL, uid, 0LL) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session_proxy.cpp",
      "onConnect",
      59);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v21,
      (const char (*)[38])"PlayerSessionProxy timer start failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_connected_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_connected_);
    this->is_connected_ = 1;
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/player_session_proxy.cpp",
      "onConnect",
      64);
    v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v21,
            (const char (*)[33])"[LOGIN][SESSION] onConnect uid: ");
    val = PlayerSessionProxy::getUid(this);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" gatesession: ");
    v15 = PlayerSessionProxy::getFlagStr[abi:cxx11](this);
    v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" thread index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->thread_index_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
LABEL_24:
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 37: range 000000001760C5E2-000000001760C607
void __cdecl PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::onConnect(
        PlayerSessionProxy::onConnect::<lambda(uint64_t)> *const this,
        PlayerSessionProxy::onConnect::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<PlayerSessionProxy>::weak_ptr(&this->__session_wtr, &a2->__session_wtr);
};

// Line 37: range 000000001760DD3C-000000001760DD61
void __cdecl PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::onConnect(
        PlayerSessionProxy::onConnect::<lambda(uint64_t)> *const this,
        const PlayerSessionProxy::onConnect::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<PlayerSessionProxy>::weak_ptr(&this->__session_wtr, &a2->__session_wtr);
};

// Line 37: range 00000000175A86C2-00000000175A87EA
void __cdecl PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::operator()(
        const PlayerSessionProxy::onConnect::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerSessionProxy *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 session_ptr:39";
  *(_QWORD *)(v2 + 16) = PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerSessionProxy>::lock((const std::weak_ptr<PlayerSessionProxy> *const)(v2 + 32));
  if ( std::operator!=<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerSessionProxy::onTimer(v5, now_ms);
  }
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 37: range 00000000175A87EC-00000000175A8806
void __cdecl PlayerSessionProxy::onConnect(void)::{lambda(unsigned long)#1}::~onConnect(
        PlayerSessionProxy::onConnect::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<PlayerSessionProxy>::~weak_ptr(&this->__session_wtr);
};

// Line 69: range 00000000175A8DBE-00000000175A8E1A
void __cdecl PlayerSessionProxy::setPlayer(PlayerSessionProxy *const this, PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax

  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
  if ( std::__shared_ptr<UnixTimer,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->timer_ptr_) )
  {
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v2);
  }
};

// Line 78: range 00000000175A8E1C-00000000175A8FF1
void __cdecl PlayerSessionProxy::onDisconnect(PlayerSessionProxy *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  const std::string *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_connected_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_connected_);
  this->is_connected_ = 0;
  proto::PacketHead::Clear(&this->login_packet_head_);
  std::string::operator=(&this->client_ip_str_, byte_260C1F00);
  std::string::operator=(&this->flag_str_, byte_260C1F00);
  proto::PlayerLoginReq::Clear(&this->login_req_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_login_rand_);
  this->cur_login_rand_ = 0LL;
  PlayerSessionProxy::clearBlockInfoMap(this);
  std::__weak_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&this->player_wtr_);
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/network/player_session_proxy.cpp",
    "onDisconnect",
    87);
  v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v8,
         (const char (*)[36])"[LOGIN][SESSION] onDisconnect uid: ");
  val = PlayerSessionProxy::getUid(this);
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v2, (const char (*)[15])" gatesession: ");
  v4 = PlayerSessionProxy::getFlagStr[abi:cxx11](this);
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, v4);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" thread index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->thread_index_);
  common::milog::MiLogStream::~MiLogStream(&v8);
};

// Line 92: range 00000000175A8FF2-00000000175A90EF
int32_t __cdecl PlayerSessionProxy::sendPacket(PlayerSessionProxy *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  common::minet::Packet *v3; // rbx
  uint32_t Uid; // eax
  common::minet::Packet *v5; // rbx
  uint32_t GateserverSessionId; // eax
  NetworkMgrBase *v7; // rbx
  uint32_t GateserverId; // r12d
  uint32_t v9; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
    return -1;
  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  Uid = PlayerSessionProxy::getUid(this);
  common::minet::Packet::setUserId(v3, Uid);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  GateserverSessionId = PlayerSessionProxy::getGateserverSessionId(this);
  common::minet::Packet::setUserSessionId(v5, GateserverSessionId);
  v7 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
  GateserverId = PlayerSessionProxy::getGateserverId(this);
  std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
  v2 = NetworkMgrBase::sendPacketToTargetService(
         v7,
         (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
         GateserverId,
         v9);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  return v2;
};

// Line 104: range 00000000175A90F0-00000000175A91B3
void __cdecl PlayerSessionProxy::setLoginPacketHead(PlayerSessionProxy *const this, const proto::PacketHead *head)
{
  uint32_t ClientIp; // eax
  uint32_t v3; // ebx
  uint32_t GateserverId; // eax
  std::string v5; // [rsp+10h] [rbp-30h] BYREF

  proto::PacketHead::operator=(&this->login_packet_head_, head);
  ClientIp = PlayerSessionProxy::getClientIp(this);
  common::tools::NetUtils::inetNtoa[abi:cxx11](&v5, ClientIp);
  std::string::operator=(&this->client_ip_str_, &v5);
  std::string::~string(&v5);
  v3 = proto::PacketHead::user_session_id(head);
  GateserverId = PlayerSessionProxy::getGateserverId(this);
  PlayerSessionProxy::getFlagStr[abi:cxx11](&v5, GateserverId, v3);
  std::string::operator=(&this->flag_str_, &v5);
  std::string::~string(&v5);
};

// Line 119: range 00000000175A91B4-00000000175A9329
uint64_t __cdecl doGenLoginRand()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  GameserverApp *v3; // rax
  uint32_t v4; // ecx
  __int16 v5; // cx
  int Now; // ecx
  uint64_t result; // rax
  LoginRandData *data; // [rsp+8h] [rbp-68h]
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v0 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 8 14 login_rand:123";
  *(_QWORD *)(v0 + 16) = doGenLoginRand;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  std::__atomic_base<unsigned int>::operator++(&doGenLoginRand(void)::seq);
  *(_QWORD *)(v0 + 32) = 0LL;
  data = (LoginRandData *)(v0 + 32);
  v3 = Singleton<GameserverApp>::instance();
  v4 = AppBase::getAppId((AppBase *const)v3) >> 16;
  if ( *(_BYTE *)(((v0 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v0 + 32);
  *(_WORD *)data = v4;
  v5 = std::__atomic_base<unsigned int>::operator unsigned int(&doGenLoginRand(void)::seq);
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    __asan_report_store8(data);
  *(_WORD *)(v0 + 34) = v5;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    __asan_report_store8(data);
  *(_DWORD *)(v0 + 36) = Now;
  result = *(_QWORD *)(v0 + 32);
  if ( v9 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 137: range 00000000175A932A-00000000175A9516
int32_t __cdecl PlayerSessionProxy::genNewLoginRand(PlayerSessionProxy *const this)
{
  __int64 v1; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const std::string *v10; // rax
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 CurLoginRand; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  v1 = doGenLoginRand();
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_rand_ >> 3) + 0x7FFF8000) )
    v1 = __asan_report_store8(&this->cur_login_rand_);
  this->cur_login_rand_ = v1;
  if ( this->cur_login_rand_ )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/network/player_session_proxy.cpp",
      "genNewLoginRand",
      146);
    v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v14, (const char (*)[14])"[LOGIN] uid: ");
    val = PlayerSessionProxy::getUid(this);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])" gate login_rand: ");
    v12 = proto::PlayerLoginReq::login_rand(&this->login_req_);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &v12);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" cur_login_rand: ");
    CurLoginRand = PlayerSessionProxy::getCurLoginRand(this);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &CurLoginRand);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" gatesession: ");
    v10 = PlayerSessionProxy::getFlagStr[abi:cxx11](this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/player_session_proxy.cpp",
      "genNewLoginRand",
      142);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v14, (const char (*)[24])"doGenLoginRand return 0");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 152: range 00000000175A9518-00000000175A958B
std::unique_ptr<jaegertracing::SpanContext> __cdecl PlayerSessionProxy::getSpanContext(PlayerSessionProxy *const this)
{
  __int64 v1; // rsi
  TracingMgr *v2; // rbx
  const std::string *v3; // rcx

  v2 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v3 = proto::PacketHead::span_context_str[abi:cxx11]((const proto::PacketHead *const)(v1 + 24));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  TracingMgr::extract(v2, v3);
  return (std::unique_ptr<jaegertracing::SpanContext>)this;
};

// Line 157: range 00000000175A958C-00000000175A9678
void __cdecl PlayerSessionProxy::setBlockInfoMap(
        PlayerSessionProxy *const this,
        const proto::PlayerLoginBlockInfoNotify *notify)
{
  uint64_t v2; // rax
  proto::BlockInfo *v3; // rax
  const google::protobuf::Map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+10h] [rbp-50h]
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_reference p_block_id; // [rsp+18h] [rbp-48h]
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_end; // [rsp+40h] [rbp-20h] BYREF

  v2 = proto::PlayerLoginBlockInfoNotify::login_rand(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_info_notify_login_rand_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8(&this->block_info_notify_login_rand_);
  this->block_info_notify_login_rand_ = v2;
  __for_range = proto::PlayerLoginBlockInfoNotify::block_info_map(notify);
  google::protobuf::Map<unsigned int,proto::BlockInfo>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::BlockInfo>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_block_id = google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator*(&__for_begin);
    v3 = std::map<unsigned int,proto::BlockInfo>::operator[](&this->block_info_map_, &p_block_id->first);
    proto::BlockInfo::CopyFrom(v3, &p_block_id->second);
    google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator++(&__for_begin);
  }
};

// Line 166: range 00000000175A967A-00000000175A96D0
void __cdecl PlayerSessionProxy::clearBlockInfoMap(PlayerSessionProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_info_notify_login_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->block_info_notify_login_rand_);
  this->block_info_notify_login_rand_ = 0LL;
  std::map<unsigned int,proto::BlockInfo>::clear(&this->block_info_map_);
};
