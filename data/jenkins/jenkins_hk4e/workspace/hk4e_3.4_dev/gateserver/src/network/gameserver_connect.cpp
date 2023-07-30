// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/gameserver_connect.cpp

// Line 27: range 000000000C74CD10-000000000C74D2BD
int32_t __cdecl GameserverConnect::onRecv(
        GameserverConnect *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint16_t CmdId; // ax
  common::minet::Packet *v12; // rax
  common::minet::Packet *v13; // rax
  common::minet::Packet *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint16_t v20; // ax
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::minet::PacketPtr v35; // rdi
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Ah] [rbp-136h] BYREF
  unsigned int UserId; // [rsp+2Ch] [rbp-134h] BYREF
  uint32_t cmd_id; // [rsp+30h] [rbp-130h]
  uint32_t now_ts_ms; // [rsp+34h] [rbp-12Ch]
  const std::string *cmd_name; // [rsp+38h] [rbp-128h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v44; // [rsp+50h] [rbp-110h] BYREF
  char v45[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 gate_recv_ms:44 64 8 15 game_recv_ms:46 96 8 15 game_send_ms:47 128 8 9 now_ms:48 160 "
                        "16 13 packet_ptr:28";
  *(_QWORD *)(v4 + 16) = GameserverConnect::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202178560;
  common::minet::PacketUtils::createPacket(v4 + 160, data, len);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gameserver_connect.cpp",
      "onRecv",
      31);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v44, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    cmd_id = common::minet::Packet::getCmdId(v8);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( common::minet::Packet::getExt(v9, 0x2711u) )
    {
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      CmdId = common::minet::Packet::getCmdId(v10);
      cmd_name = ProtoUtils::getCmdName[abi:cxx11](CmdId);
      if ( common::tools::StringUtils::isEndsWith(cmd_name, str) )
      {
        now_ts_ms = common::tools::TimeUtils::getNowMs();
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        *(_DWORD *)(v4 + 48) = common::minet::Packet::getExt(v12, 0x2711u);
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        *(_QWORD *)(v4 + 64) = common::minet::Packet::getExt(v13, 0x2712u)
                             - (unsigned __int64)*(unsigned int *)(v4 + 48);
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        *(_QWORD *)(v4 + 96) = common::minet::Packet::getExt(v14, 0x2713u)
                             - (unsigned __int64)*(unsigned int *)(v4 + 48);
        *(_QWORD *)(v4 + 128) = now_ts_ms - *(_DWORD *)(v4 + 48);
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/gameserver_connect.cpp",
          "onRecv",
          49);
        v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v44,
                (const char (*)[27])"[PACKET TIMESTAMP] cmd_id:");
        v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        val = common::minet::Packet::getCmdId(v16);
        v17 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v15, &val);
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", cmd_name:");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v20 = common::minet::Packet::getCmdId(v19);
        v21 = ProtoUtils::getCmdName[abi:cxx11](v20);
        v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v21);
        v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
        v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        UserId = common::minet::Packet::getUserId(v24);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &UserId);
        v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v25,
                (const char (*)[17])", timestamp(ms):");
        v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])"0(");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v4 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v28, (const char (*)[3])")-");
        v30 = common::milog::MiLogStream::operator<<<long,(long *)0>(v29, (const __int64 *)(v4 + 64));
        v31 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v30, (const char (*)[2])"-");
        v32 = common::milog::MiLogStream::operator<<<long,(long *)0>(v31, (const __int64 *)(v4 + 96));
        v33 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v32, (const char (*)[2])"-");
        v34 = common::milog::MiLogStream::operator<<<long,(long *)0>(v33, (const __int64 *)(v4 + 128));
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          v34,
          (const char (*)[50])" gate(recv) - game(recv) - game(send) - now(gate)");
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
    }
    if ( cmd_id && cmd_id != 72 )
    {
      v35._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 160);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
      v35._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
      ServiceBox::pushPacketToService(v35);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v7 = 0;
    }
    else
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
      v7 = GameserverConnect::onGameserverKeepAlive(this, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
  result = v7;
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 72: range 000000000C74D2BE-000000000C74D3FA
int32_t __cdecl GameserverConnect::onConnect(GameserverConnect *const this, boost::asio::yield_context *p_yield)
{
  bool v2; // bl
  GameserverMgr *p_gameserver_mgr; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-60h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v6; // [rsp+30h] [rbp-40h] BYREF

  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v6,
    p_yield);
  v2 = (unsigned int)common::minet::AClientConnect::onConnect(this, &v6) != 0;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v6);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/gameserver_connect.cpp",
      "onConnect",
      75);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v5,
      (const char (*)[31])"AClientConnect onConnect fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    p_gameserver_mgr = &ServiceBox::findService<GateserverService>()->gameserver_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_app_id_);
    }
    GameserverMgr::addGameserver(p_gameserver_mgr, this->target_app_id_);
    return 0;
  }
};

// Line 84: range 000000000C74D3FC-000000000C74D538
int32_t __cdecl GameserverConnect::onDisconnect(GameserverConnect *const this, boost::asio::yield_context *p_yield)
{
  bool v2; // bl
  GameserverMgr *p_gameserver_mgr; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-60h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v6; // [rsp+30h] [rbp-40h] BYREF

  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v6,
    p_yield);
  v2 = (unsigned int)common::minet::AClientConnect::onDisconnect(this) != 0;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v6);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/gameserver_connect.cpp",
      "onDisconnect",
      87);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v5,
      (const char (*)[31])"AClientConnect onConnect fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    p_gameserver_mgr = &ServiceBox::findService<GateserverService>()->gameserver_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_app_id_);
    }
    GameserverMgr::delGameserver(p_gameserver_mgr, this->target_app_id_);
    return 0;
  }
};

// Line 95: range 000000000C74D53A-000000000C74D7A2
int32_t __cdecl GameserverConnect::onKeepAlive(GameserverConnect *const this, boost::asio::yield_context *p_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // r14
  GateserverApp *v7; // rax
  uint32_t AppId; // eax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(GameserverConnect *const, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:96";
  *(_QWORD *)(v2 + 16) = GameserverConnect::onKeepAlive;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gameserver_connect.cpp",
      "onKeepAlive",
      99);
    common::milog::MiLogStream::operator()(&v13, "createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Singleton<GateserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v7);
    common::minet::Packet::setSenderAppId(v6, AppId);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned __int64)(this->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_AClientConnect + 12);
    v10 = *(void (__fastcall **)(GameserverConnect *const, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v10(this, &v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
    v5 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v14 == (char *)v2 )
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

// Line 109: range 000000000C74D7A4-000000000C74D82E
int32_t __cdecl GameserverConnect::onGameserverKeepAlive(
        GameserverConnect *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  GameserverMgr *p_gameserver_mgr; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t SenderLoad; // ecx

  p_gameserver_mgr = &ServiceBox::findService<GateserverService>()->gameserver_mgr;
  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  SenderLoad = common::minet::Packet::getSenderLoad(v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_app_id_);
  }
  GameserverMgr::syncGameserverLoad(p_gameserver_mgr, this->target_app_id_, SenderLoad);
  return 0;
};
