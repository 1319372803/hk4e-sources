// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/nodeserver_service.cpp

// Line 28: range 0000000003858BFC-0000000003858E99
int32_t __cdecl NodeserverService::init(NodeserverService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  int32_t v6; // r14d
  uint32_t v7; // ecx
  char v8; // al
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ns_pt:30";
  *(_QWORD *)(v2 + 16) = NodeserverService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Nodeserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  v5 = (char *)(v2 + 32);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = common::tools::TimeUtils::getNow() + 30;
    v8 = *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(&this->next_broadcast_multiserver_service_time_, v5);
    }
    this->next_broadcast_multiserver_service_time_ = v7;
    if ( ServiceBase::addHandler<MainHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/nodeserver_service.cpp",
        "init",
        42);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "add handler<MainHandler> failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v6;
  if ( v12 == (char *)v2 )
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

// Line 48: range 0000000003858E9A-000000000385907C
bool __cdecl NodeserverService::workThreadProc(NodeserverService *const this, uint32_t thread_index)
{
  const char *v2; // rsi
  uint32_t v3; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t v6; // ecx
  char v7; // dl
  uint32_t cur_time; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( !thread_index )
  {
    cur_time = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->next_broadcast_multiserver_service_time_);
    }
    if ( cur_time >= this->next_broadcast_multiserver_service_time_ )
    {
      NodeserverService::broadcastMultiserverServiceTypeNotify(this);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/service/nodeserver_service.cpp",
        "workThreadProc",
        57);
      v2 = "broadcastMultiserverServiceTypeNotify finished";
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v10,
        (const char (*)[47])"broadcastMultiserverServiceTypeNotify finished");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v3 = cur_time + 120;
      v4 = *(_BYTE *)(((unsigned __int64)&this->next_broadcast_multiserver_service_time_ >> 3) + 0x7FFF8000);
      if ( v4 != 0 && v4 <= 3 )
      {
        LOBYTE(v2) = v4 != 0;
        __asan_report_store4(&this->next_broadcast_multiserver_service_time_, v2);
      }
      this->next_broadcast_multiserver_service_time_ = v3;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->next_update_player_mgr_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_update_player_mgr_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->next_update_player_mgr_);
    }
    if ( cur_time >= this->next_update_player_mgr_ )
    {
      v5 = cur_time;
      PlayerMgr::update(&this->player_mgr, cur_time);
      v6 = cur_time + 30;
      v7 = *(_BYTE *)(((unsigned __int64)&this->next_update_player_mgr_ >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v7 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(&this->next_update_player_mgr_, v5);
      }
      this->next_update_player_mgr_ = v6;
    }
  }
  return 0;
};

// Line 73: range 000000000385907E-0000000003859B26
int32_t __cdecl NodeserverService::defaultProcessPacketFunc(
        NodeserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int v7; // r15d
  common::milog::MiLogStream *v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r15
  const std::string *v11; // rax
  int v12; // r15d
  common::milog::MiLogStream *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r15
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r15
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::minet::Packet *v26; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t HomeUserId; // eax
  const std::string *v31; // rax
  const char *v32; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t v34; // eax
  common::minet::Packet *v35; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t UserId; // eax
  const std::string *v39; // rax
  const char *v40; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t v42; // eax
  common::minet::Packet *v43; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  unsigned __int64 v46; // rax
  __int64 (__fastcall *v47)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  int32_t result; // eax
  unsigned int v49; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  uint32_t cmd_id; // [rsp+30h] [rbp-B0h]
  uint32_t target_service; // [rsp+34h] [rbp-ACh]
  uint32_t gameserver_app_id_0; // [rsp+38h] [rbp-A8h]
  uint32_t gameserver_app_id; // [rsp+3Ch] [rbp-A4h]
  proto::GetPlayerTokenRsp *rsp_0; // [rsp+40h] [rbp-A0h]
  const proto::GetPlayerTokenReq *req; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v57; // [rsp+50h] [rbp-90h] BYREF
  char v58[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 req_ptr:77";
  *(_QWORD *)(v3 + 16) = NodeserverService::defaultProcessPacketFunc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v6);
  switch ( cmd_id )
  {
    case 0xACu:
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v3 + 32));
      if ( std::operator==<proto::GetPlayerTokenReq const>(
             (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v3 + 32),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/nodeserver_service.cpp",
          "defaultProcessPacketFunc",
          77);
        common::milog::MiLogStream::operator()(&v57, "get GetPlayerTokenReq failed");
        common::milog::MiLogStream::~MiLogStream(&v57);
        v2 = -1;
        v7 = 0;
      }
      else
      {
        req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/service/nodeserver_service.cpp",
          "defaultProcessPacketFunc",
          78);
        v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v57,
               (const char (*)[43])"[LOGIN] OnGetPlayerTokenReq, account_type:");
        val = proto::GetPlayerTokenReq::account_type(req);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" account_uid:");
        v11 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        common::milog::MiLogStream::~MiLogStream(&v57);
        v7 = 1;
      }
      std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v3 + 32));
      if ( v7 != 1 )
        goto LABEL_40;
      break;
    case 0xC6u:
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getProto<proto::GetPlayerTokenRsp>((common::minet::Packet *const)(v3 + 32));
      if ( std::operator==<proto::GetPlayerTokenRsp>((const std::shared_ptr<proto::GetPlayerTokenRsp> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/nodeserver_service.cpp",
          "defaultProcessPacketFunc",
          82);
        common::milog::MiLogStream::operator()(&v57, "get GetPlayerTokenRsp failed");
        common::milog::MiLogStream::~MiLogStream(&v57);
        v2 = -1;
        v12 = 0;
      }
      else
      {
        rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/service/nodeserver_service.cpp",
          "defaultProcessPacketFunc",
          83);
        v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v57,
                (const char (*)[43])"[LOGIN] OnGetPlayerTokenRsp, account_type:");
        v49 = proto::GetPlayerTokenRsp::account_type(rsp_0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v49);
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" account_uid:");
        v16 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        val = proto::GetPlayerTokenRsp::uid(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v57);
        v12 = 1;
      }
      std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v3 + 32));
      if ( v12 != 1 )
        goto LABEL_40;
      break;
    case 0x70u:
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/nodeserver_service.cpp",
        "defaultProcessPacketFunc",
        87);
      v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v57,
              (const char (*)[31])"[LOGIN] OnPlayerLoginReq, uid:");
      v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      break;
    case 0x87u:
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/nodeserver_service.cpp",
        "defaultProcessPacketFunc",
        91);
      v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v57,
              (const char (*)[31])"[LOGIN] OnPlayerLoginRsp, uid:");
      v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v22);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      break;
    case 0x27C5u:
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/nodeserver_service.cpp",
        "defaultProcessPacketFunc",
        95);
      v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v57,
              (const char (*)[43])"[LOGIN] OnPlayerLoginBlockInfoNotify, uid:");
      v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v24);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      break;
  }
  v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  target_service = common::minet::Packet::getTargetService(v25);
  if ( target_service == 3 )
  {
    v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( !common::minet::Packet::getTargetAppId(v26) )
    {
      v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::getHomeUserId(v28) )
      {
        v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        HomeUserId = common::minet::Packet::getHomeUserId(v29);
        gameserver_app_id = HomeMgr::findHomeGameserverId(&this->home_mgr, HomeUserId);
        if ( !gameserver_app_id )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/nodeserver_service.cpp",
            "defaultProcessPacketFunc",
            109);
          v31 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
          v32 = (const char *)std::string::c_str(v31);
          v33 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          v34 = common::minet::Packet::getHomeUserId(v33);
          common::milog::MiLogStream::operator()(&v57, "home_uid=%u is not online, skip packet %u:%s", v34, cmd_id, v32);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v2 = 0;
          goto LABEL_40;
        }
        v35 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::setTarget(v35, 3u, gameserver_app_id);
      }
      else
      {
        v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::getUserId(v36) )
        {
          v37 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          UserId = common::minet::Packet::getUserId(v37);
          gameserver_app_id_0 = PlayerMgr::findPlayerGameserverId(&this->player_mgr, UserId);
          if ( !gameserver_app_id_0 )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/service/nodeserver_service.cpp",
              "defaultProcessPacketFunc",
              119);
            v39 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
            v40 = (const char *)std::string::c_str(v39);
            v41 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            v42 = common::minet::Packet::getUserId(v41);
            common::milog::MiLogStream::operator()(&v57, "uid=%u is not online, skip packet %u:%s", v42, cmd_id, v40);
            common::milog::MiLogStream::~MiLogStream(&v57);
            v2 = 0;
            goto LABEL_40;
          }
          v43 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          common::minet::Packet::setTarget(v43, 3u, gameserver_app_id_0);
        }
      }
    }
  }
  v44 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
  v45 = v44;
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v44);
  v46 = (unsigned __int64)(v45->_vptr_NetworkMgrBase + 8);
  if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
    v46 = __asan_report_load8(v45->_vptr_NetworkMgrBase + 8);
  v47 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v46;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v3 + 32),
    p_packet_ptr);
  v2 = v47(v45, v3 + 32);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
LABEL_40:
  result = v2;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 130: range 0000000003859B28-0000000003859D28
__int64 __fastcall NodeserverService::findBindPlayerUid(NodeserverService *const this, uint32_t gm_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // r14d
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 gm_uid:129 64 8 8 iter:132 96 16 9 rlock:131";
  *(_QWORD *)(v2 + 16) = NodeserverService::findBindPlayerUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = gm_uid;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v2 + 96),
    &this->gm_uid_mutex_);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->gm_uid_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->gm_uid_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v5->second;
  }
  else
  {
    second = 0;
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v2 + 96));
  result = second;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000003859D2A-0000000003859E85
__int64 __fastcall NodeserverService::isBindByGmUid(NodeserverService *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // eax
  unsigned int v6; // r14d
  __int64 result; // rax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 player_uid:141 64 16 9 rlock:143";
  *(_QWORD *)(v2 + 16) = NodeserverService::isBindByGmUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = player_uid;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v2 + 64),
    &this->gm_uid_mutex_);
  LOBYTE(v5) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 &this->player_uid_set_,
                 (const unsigned int *)(v2 + 48));
  v6 = v5;
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v2 + 64));
  result = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 148: range 0000000003859E86-000000000385A161
void __fastcall NodeserverService::bindGmUid(NodeserverService *const this, uint32_t gm_uid, uint32_t player_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rax
  int v7; // r14d
  char *v8; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 10 gm_uid:147 48 4 14 player_uid:147 64 8 8 iter:151 96 16 9 wlock:150";
  *(_QWORD *)(v3 + 16) = NodeserverService::bindGmUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = gm_uid;
  *(_DWORD *)(v3 + 48) = player_uid;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v3 + 96),
    &this->gm_uid_mutex_);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->gm_uid_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->gm_uid_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    std::unordered_set<unsigned int>::erase(&this->player_uid_set_, &v6->second);
  }
  v7 = *(_DWORD *)(v3 + 48);
  v8 = (char *)(v3 + 32);
  v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->gm_uid_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v10 = v9;
  v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
  {
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(v9, v8);
  }
  *v10 = v7;
  std::unordered_set<unsigned int>::insert(
    &this->player_uid_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v3 + 96));
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/service/nodeserver_service.cpp",
    "bindGmUid",
    161);
  common::milog::MiLogStream::operator()(
    &v14,
    "gm_uid: %u --> player_uid: %u",
    *(unsigned int *)(v3 + 32),
    *(unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 165: range 000000000385A162-000000000385A418
void __fastcall NodeserverService::unBindGmUid(NodeserverService *const this, uint32_t gm_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-C0h] BYREF
  char v9[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 player_uid:166 48 4 10 gm_uid:164 64 8 8 iter:169 96 16 9 wlock:168";
  *(_QWORD *)(v2 + 16) = NodeserverService::unBindGmUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = gm_uid;
  *(_DWORD *)(v2 + 32) = 0;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v2 + 96),
    &this->gm_uid_mutex_);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->gm_uid_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->gm_uid_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v2 + 32) = v5->second;
    std::unordered_set<unsigned int>::erase(
      &this->player_uid_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
    std::unordered_map<unsigned int,unsigned int>::erase(
      &this->gm_uid_map_,
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64));
  }
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v2 + 96));
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/service/nodeserver_service.cpp",
    "unBindGmUid",
    178);
  common::milog::MiLogStream::operator()(
    &v8,
    "UnbindGmUid gm_uid: %u, player_uid: %u",
    *(unsigned int *)(v2 + 48),
    *(unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 182: range 000000000385A41A-000000000385A66B
void __cdecl NodeserverService::getGmUidMap(
        NodeserverService *const this,
        google::protobuf::Map<unsigned int,unsigned int> *proto_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  char v10; // cl
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gm_uid; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *player_uid; // [rsp+38h] [rbp-78h]
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:183";
  *(_QWORD *)(v2 + 16) = NodeserverService::getGmUidMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v2 + 32),
    &this->gm_uid_mutex_);
  __for_range = &this->gm_uid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->gm_uid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->gm_uid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    gm_uid = std::get<0ul,unsigned int const,unsigned int>(v15);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    player_uid = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *player_uid;
    v7 = gm_uid;
    v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, gm_uid);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7);
    }
    *v9 = v6;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 191: range 000000000385A66C-000000000385AD95
void __cdecl NodeserverService::broadcastMultiserverServiceTypeNotify(NodeserverService *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ServiceSessionMgr *ServiceSessionMgr; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  proto::ServiceType *v9; // rdx
  common::minet::Packet *v10; // r15
  uint32_t v11; // r14d
  unsigned __int64 v12; // rax
  uint32_t v13; // eax
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  unsigned int (__fastcall *v18)(std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v19; // r14
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-168h]
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-150h] BYREF
  char v25[304]; // [rsp+60h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 15 network_ptr:197 80 16 14 packet_ptr:217 112 24 20 service_type_vec:204 176 40 10 notify:211";
  *(_QWORD *)(v1 + 16) = NodeserverService::broadcastMultiserverServiceTypeNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  v4 = (unsigned __int64)std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 40LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 40LL);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v5)(v4) == 1 )
  {
    std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v1 + 48));
    if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v1 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/nodeserver_service.cpp",
        "broadcastMultiserverServiceTypeNotify",
        200);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v24, (const char (*)[17])"network_ptr null");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 112));
      v6 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      ServiceSessionMgr = NetworkMgr::getServiceSessionMgr(v6);
      if ( ServiceSessionMgr::getAllMultiserverServiceType(ServiceSessionMgr, (std::vector<unsigned int> *)(v1 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/nodeserver_service.cpp",
          "broadcastMultiserverServiceTypeNotify",
          207);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v24,
          (const char (*)[36])"getAllMultiserverServiceType failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        proto::MultiserverServiceTypeNotify::MultiserverServiceTypeNotify((proto::MultiserverServiceTypeNotify *const)(v1 + 176));
        __for_range = (std::vector<unsigned int> *)(v1 + 112);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 112))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 112))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v9 = (proto::ServiceType *)v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          proto::MultiserverServiceTypeNotify::add_service_type_list(
            (proto::MultiserverServiceTypeNotify *const)(v1 + 176),
            *v9);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::minet::PacketUtils::createPacket<proto::MultiserverServiceTypeNotify>((const proto::MultiserverServiceTypeNotify *)(v1 + 80));
        if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/nodeserver_service.cpp",
            "broadcastMultiserverServiceTypeNotify",
            220);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v24,
            (const char (*)[20])"createPacket failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        else
        {
          v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::cur_app_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)&ResourceBox::cur_app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ResourceBox::cur_app_id >> 3)
                                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&ResourceBox::cur_app_id);
          }
          v11 = ResourceBox::cur_app_id;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v12 = (unsigned __int64)(this->_vptr_ServiceBase + 13);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(this->_vptr_ServiceBase + 13);
          v13 = (*(__int64 (__fastcall **)(NodeserverService *const))v12)(this);
          common::minet::Packet::setSource(v10, v13, v11);
          v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          common::minet::Packet::setTargetService(v14, 3u);
          v15 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v15);
          v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 9);
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v16->_vptr_NetworkMgrBase + 9);
          v18 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v23,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          v19 = v18(v16, &v23) != 0;
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
          if ( v19 )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/nodeserver_service.cpp",
              "broadcastMultiserverServiceTypeNotify",
              228);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v24,
              (const char (*)[23])"broadcastPacket failed");
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 80));
        proto::MultiserverServiceTypeNotify::~MultiserverServiceTypeNotify((proto::MultiserverServiceTypeNotify *const)(v1 + 176));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 112));
    }
    std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v1 + 48));
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
