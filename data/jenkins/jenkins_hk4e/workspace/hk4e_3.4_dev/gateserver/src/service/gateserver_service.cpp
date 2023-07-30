// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/gateserver_service.cpp

// Line 24: range 000000000C760E7C-000000000C761528
int32_t __cdecl GateserverService::init(GateserverService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  AccountSdkMgr *p_account_sdk_mgr; // rdi
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+13h] [rbp-DDh] BYREF
  uint32_t thread_num; // [rsp+14h] [rbp-DCh]
  uint32_t async_http_thread; // [rsp+18h] [rbp-D8h]
  uint32_t async_http_capacity; // [rsp+1Ch] [rbp-D4h]
  std::string path; // [rsp+20h] [rbp-D0h] BYREF
  std::string v14; // [rsp+40h] [rbp-B0h] BYREF
  std::string child_name; // [rsp+60h] [rbp-90h] BYREF
  char v16[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ns_pt:26";
  *(_QWORD *)(v2 + 16) = GateserverService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Gateserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.thread_num", &__a);
  thread_num = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v2 + 32), &path, 1u);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( thread_num == 1 )
  {
    if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/gateserver_service.cpp",
        "init",
        38);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[23])"ServiceBase init fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v14, "<xmlattr>.async_http_thread", &__a);
      async_http_thread = common::tools::PTree::get<unsigned int>(
                            (const common::tools::PTree *const)(v2 + 32),
                            &v14,
                            1u);
      std::string::~string(&v14);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.async_http_capacity", &__a);
      async_http_capacity = common::tools::PTree::get<unsigned int>(
                              (const common::tools::PTree *const)(v2 + 32),
                              &child_name,
                              0);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
      if ( async_http_thread && async_http_capacity )
      {
        p_account_sdk_mgr = &this->account_sdk_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_account_sdk_mgr = (AccountSdkMgr *)&this->thread_num_;
          __asan_report_load4(&this->thread_num_);
        }
        if ( AccountSdkMgr::init(p_account_sdk_mgr, async_http_thread, async_http_capacity, this->thread_num_) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/gateserver_service.cpp",
            "init",
            51);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[27])"account_sdk_mgr init fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        else if ( GameserverMgr::init(&this->gameserver_mgr) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/gateserver_service.cpp",
            "init",
            56);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[26])"gameserver_mgr init fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        else if ( ServiceBase::addHandler<LoginHandler>(this) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/gateserver_service.cpp",
            "init",
            61);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&child_name,
            "add handler<LoginHandler> failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/gateserver_service.cpp",
          "init",
          46);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          (common::milog::MiLogStream *const)&child_name,
          (const char (*)[51])"async_http_thread == 0 or async_http_capacity == 0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v5 = -1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gateserver_service.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[34])"GateserverService thread_num != 1");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 68: range 000000000C76152A-000000000C761653
int32_t __cdecl GateserverService::start(GateserverService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( ServiceBase::start(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gateserver_service.cpp",
      "start",
      71);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v2, (const char (*)[24])"ServiceBase start fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( AccountSdkMgr::start(&this->account_sdk_mgr) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gateserver_service.cpp",
      "start",
      76);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"account_sdk_mgr start fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 84: range 000000000C761654-000000000C76177D
int32_t __cdecl GateserverService::stop(GateserverService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( ServiceBase::stop(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gateserver_service.cpp",
      "stop",
      87);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v2, (const char (*)[23])"ServiceBase stop fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( AccountSdkMgr::stop(&this->account_sdk_mgr) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gateserver_service.cpp",
      "stop",
      92);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v2,
      (const char (*)[32])"account_sdk_mgr blockStop fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 100: range 000000000C76177E-000000000C761CE7
int32_t __cdecl GateserverService::defaultProcessPacketFunc(
        GateserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Uid; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  PlayerSession *v26; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  unsigned __int64 v29; // rax
  __int64 (__fastcall *v30)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 session_id:105 48 4 14 session_id:122 64 16 15 session_ptr:106";
  *(_QWORD *)(v3 + 16) = GateserverService::defaultProcessPacketFunc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getTargetService(v6) != 2 )
    goto LABEL_26;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 32) = common::minet::Packet::getUserSessionId(v7);
  v8 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v3 + 64), v8);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/gateserver_service.cpp",
      "defaultProcessPacketFunc",
      109);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v33,
           (const char (*)[20])"findPlayerSession: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v2 = -1;
    v11 = 0;
  }
  else
  {
    v12 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Uid = PlayerSession::getUid(v12);
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( Uid == common::minet::Packet::getUserId(v14) )
    {
      v11 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/gateserver_service.cpp",
        "defaultProcessPacketFunc",
        114);
      v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v33,
              (const char (*)[51])"Session uid and packet uid not match, session_uid:");
      v16 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      val = PlayerSession::getUid(v16);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" packet_uid:");
      v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v19);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v2 = -1;
      v11 = 0;
    }
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v3 + 64));
  if ( v11 == 1 )
  {
LABEL_26:
    v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getCmdId(v20) != 7 )
      goto LABEL_16;
    v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserSessionId(v21);
    v22 = (unsigned int)ServiceBox::findService<GateserverService>();
    GateserverService::findPlayerSession((GateserverService *const)(v3 + 64), v22);
    if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/gateserver_service.cpp",
        "defaultProcessPacketFunc",
        126);
      v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v33,
              (const char (*)[20])"findPlayerSession: ");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v2 = -1;
      v25 = 0;
    }
    else
    {
      v26 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PlayerSession::checkThenRetrySdkVerify(v26);
      v25 = 1;
    }
    std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v3 + 64));
    if ( v25 == 1 )
    {
LABEL_16:
      v27 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v27);
      v29 = (unsigned __int64)(v28->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28->_vptr_NetworkMgrBase + 8);
      v30 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v29;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)(v3 + 64),
        p_packet_ptr);
      v2 = v30(v28, v3 + 64);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
    }
  }
  result = v2;
  if ( v34 == (char *)v3 )
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

// Line 139: range 000000000C761CE8-000000000C761DDA
bool __cdecl GateserverService::workThreadProc(GateserverService *const this, uint32_t thread_index)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t PlayerSessionNum; // eax
  uint32_t v4; // ecx
  uint32_t cur_time; // [rsp+1Ch] [rbp-14h]

  cur_time = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_report_session_num_timestamp_);
  }
  if ( cur_time >= this->next_report_session_num_timestamp_ )
  {
    v2 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    PlayerSessionNum = GateserverService::getPlayerSessionNum(this);
    MonitorReport::addValue(v2, MONITOR_PLAYER_SESSION_NUM, PlayerSessionNum);
    v4 = cur_time + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->next_report_session_num_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->next_report_session_num_timestamp_);
    }
    this->next_report_session_num_timestamp_ = v4;
  }
  return AccountSdkMgr::update(&this->account_sdk_mgr, thread_index) != 0;
};

// Line 151: range 000000000C761DDC-000000000C761FB9
PlayerSessionPtr __cdecl GateserverService::findPlayerSession(GateserverService *const this, uint32_t session_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  PlayerSessionPtr result; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 network_mgr_ptr:152";
  *(_QWORD *)(v2 + 16) = GateserverService::findPlayerSession;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v2 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gateserver_service.cpp",
      "findPlayerSession",
      155);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v7,
      (const char (*)[39])"dynamic_pointer_cast NetworkMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    std::shared_ptr<PlayerSession>::shared_ptr((std::shared_ptr<PlayerSession> *const)this, 0LL);
  }
  else
  {
    v5 = (unsigned int)std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v2 + 32);
    NetworkMgr::findPlayerSession((NetworkMgr *const)this, v5);
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 163: range 000000000C761FBA-000000000C762153
uint32_t __cdecl GateserverService::getPlayerSessionNum(GateserverService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t PlayerSessionNum; // r14d
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 network_mgr_ptr:164";
  *(_QWORD *)(v1 + 16) = GateserverService::getPlayerSessionNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v1 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gateserver_service.cpp",
      "getPlayerSessionNum",
      167);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v7,
      (const char (*)[39])"dynamic_pointer_cast NetworkMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    PlayerSessionNum = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    PlayerSessionNum = NetworkMgr::getPlayerSessionNum(v5);
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v1 + 32));
  result = PlayerSessionNum;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 175: range 000000000C762154-000000000C762319
void __cdecl GateserverService::disconnect(GateserverService *const this, PlayerSession *session, uint32_t reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdi
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 network_mgr_ptr:176";
  *(_QWORD *)(v3 + 16) = GateserverService::disconnect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v3 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gateserver_service.cpp",
      "disconnect",
      179);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v8,
      (const char (*)[39])"dynamic_pointer_cast NetworkMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v6 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    NetworkMgr::disconnect(v6, session, reason, 0);
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 188: range 000000000C76231A-000000000C762339
uint32_t __cdecl GateserverService::chooseGameserverId(GateserverService *const this)
{
  return GameserverMgr::chooseGameserverId(&this->gameserver_mgr);
};

// Line 193: range 000000000C76233A-000000000C7625A0
std::string *__cdecl GateserverService::getGameServerDesc[abi:cxx11](
        std::string *retstr,
        GateserverService *const this,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  std::allocator<char> __a; // [rsp+2Fh] [rbp-81h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 network_mgr_ptr:194";
  *(_QWORD *)(v3 + 16) = GateserverService::getGameServerDesc[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v3 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gateserver_service.cpp",
      "getGameServerDesc",
      197);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v10,
      (const char (*)[39])"dynamic_pointer_cast NetworkMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "null", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    v6 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      v6 = (std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    NetworkMgr::getGameServerDesc[abi:cxx11](retstr, v6, app_id);
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 204: range 000000000C7625A2-000000000C7625DC
uint32_t __cdecl GateserverService::getServiceLoad(GateserverService *const this)
{
  if ( std::atomic<ServiceBase::Status>::operator ServiceBase::Status(&this->status_) == STATUS_RUN )
    return GateserverService::getPlayerSessionNum(this);
  else
    return 10000;
};

// Line 214: range 000000000C7625DE-000000000C762741
ConfigPtr __cdecl GateserverService::getConfig(GateserverService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  ConfigPtr result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 base_ptr:215";
  *(_QWORD *)(v1 + 16) = GateserverService::getConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4);
  v5 = (unsigned __int64)(v4->_vptr_ConfigMgrBase + 4);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4->_vptr_ConfigMgrBase + 4);
  v6 = v4;
  (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(
    v1 + 32,
    v4);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v6);
  std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)this);
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 220: range 000000000C762742-000000000C762762
void __cdecl GateserverService::onReloadConfig(GateserverService *const this)
{
  GameserverMgr::onReloadConfig(&this->gameserver_mgr);
};

// Line 225: range 000000000C762764-000000000C7627DB
void __cdecl GateserverService::onEverySecond(GateserverService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // rdx
  std::shared_ptr<MonitorReport> monitor_report_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( !thread_index )
  {
    std::shared_ptr<MonitorReport>::shared_ptr(&monitor_report_ptr, &ResourceBox::monitor_report_ptr);
    ExternalMonitorReportMgr::reportToMonitor(
      &this->external_monitor_report_mgr,
      (std::shared_ptr<MonitorReport>)__PAIR128__(v2, &monitor_report_ptr));
    std::shared_ptr<MonitorReport>::~shared_ptr(&monitor_report_ptr);
  }
};
