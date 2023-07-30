// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/network/network_mgr.cpp

// Line 36: range 000000000385181E-00000000038518FD
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  std::shared_ptr<common::minet::AServerMgr<ServiceSession> > __r; // [rsp+10h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->service_ptr_);
  ServiceSessionMgr::ServiceSessionMgr(&this->service_session_mgr_);
  common::tools::perf::make_shared<common::minet::AServerMgr<ServiceSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<ServiceSession>>(
    &this->service_ptr_,
    &__r);
  std::shared_ptr<common::minet::AServerMgr<ServiceSession>>::~shared_ptr(&__r);
};

// Line 41: range 00000000038518FE-000000000385196B
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  ServiceSessionMgr::~ServiceSessionMgr(&this->service_session_mgr_);
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->service_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 41: range 000000000385196C-0000000003851996
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0xB0uLL);
};

// Line 47: range 0000000003851998-00000000038520E9
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NodeserverApp *v6; // rax
  _BOOL4 v7; // r15d
  NodeserverApp *v8; // rax
  NodeserverApp *v9; // r15
  NodeserverApp *v10; // rax
  uint32_t AppId; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r15d
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-140h]
  std::allocator<char> __a; // [rsp+22h] [rbp-11Eh] BYREF
  bool rewrite_with_remote_json; // [rsp+23h] [rbp-11Dh]
  uint32_t port_service; // [rsp+24h] [rbp-11Ch]
  std::string value; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v16._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v22;
  v16._M_string_length = (std::string::size_type)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 13 service_pt:72 80 40 16 remote_config:53";
  *(_QWORD *)(v3 + 16) = NetworkMgr::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value((Json::Value *)(v3 + 80), nullValue);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v3 + 80)) )
    rewrite_with_remote_json = 1;
  if ( !rewrite_with_remote_json )
    goto LABEL_11;
  v6 = Singleton<NodeserverApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      63);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v21,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
    v7 = 0;
    goto LABEL_19;
  }
  v8 = Singleton<NodeserverApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      68);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v21,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "Root.NetConf.ServiceServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v21);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<NodeserverApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "port_service", &__a);
    v10 = Singleton<NodeserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port_service = AppBase::findAppPort((AppBase *const)v9, AppId, v16);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port_service);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v21, &value);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v16._anon_0._M_allocated_capacity + 1) + 8));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = *(_QWORD *)v12 + 8LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(*(_QWORD *)v12 + 8LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v12, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        77);
      common::milog::MiLogStream::operator()(&v21, "init service server failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = -1;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v14 == 1;
  }
LABEL_19:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 80));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v16._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 91: range 00000000038520EA-00000000038522F7
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  NodeserverApp *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  bool rewrite_with_remote_json; // [rsp+1Fh] [rbp-D1h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 16 remote_config:95";
  *(_QWORD *)(v2 + 16) = NetworkMgr::reload;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value((Json::Value *)(v2 + 48), nullValue);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v2 + 48)) )
    rewrite_with_remote_json = 1;
  if ( rewrite_with_remote_json
    && (v5 = Singleton<NodeserverApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v5, (const Json::Value *)(v2 + 48))) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      105);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v9,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  Json::Value::~Value((Json::Value_0 *const)(v2 + 48));
  result = v6;
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

// Line 115: range 00000000038522F8-0000000003852365
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->service_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 16LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 16LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 121: range 0000000003852366-00000000038523D3
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->service_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 48LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 48LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 127: range 00000000038523D4-0000000003852441
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->service_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 40LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 40LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 133: range 0000000003852442-0000000003852B59
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 p_M_before_begin; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rax
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(NetworkMgr *const, std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *); // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::minet::Packet *v13; // rax
  common::minet::Packet *v14; // rax
  common::minet::Packet *v15; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int CmdId; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t UserId; // eax
  std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  __int64 (__fastcall *v23)(std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *); // r15
  int32_t result; // eax
  uint32_t target_service; // [rsp+24h] [rbp-ECh]
  uint32_t target_app_id; // [rsp+28h] [rbp-E8h]
  ServiceSessionMgr v27; // [rsp+30h] [rbp-E0h] BYREF

  p_M_before_begin = (unsigned __int64)&v27.type_to_app_ids_map_._M_h._M_before_begin;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      p_M_before_begin = v3;
  }
  *(_QWORD *)p_M_before_begin = 1102416563LL;
  *(_QWORD *)(p_M_before_begin + 8) = "1 32 16 15 session_ptr:158";
  *(_QWORD *)(p_M_before_begin + 16) = NetworkMgr::sendPacket;
  v4 = p_M_before_begin >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      136);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
      "packet is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getTargetAppId(v6) == -1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_NetworkMgrBase + 9);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(this->_vptr_NetworkMgrBase + 9);
      v8 = *(__int64 (__fastcall **)(NetworkMgr *const, std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *))v7;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&v27.session_map_._M_h._M_element_count,
        p_packet_ptr);
      v5 = v8(this, &v27.session_map_._M_h._M_element_count);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v27.session_map_._M_h._M_element_count);
    }
    else
    {
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      target_service = common::minet::Packet::getTargetService(v9);
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      target_app_id = common::minet::Packet::getTargetAppId(v10);
      if ( target_service == 2 )
      {
        target_service = 3;
        target_app_id = 0;
      }
      std::shared_ptr<common::minet::AServerSession>::shared_ptr(
        (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
        0LL);
      if ( target_app_id )
      {
        ServiceSessionMgr::findSessionByTypeAndAppId(&v27, (_DWORD)this + 24, target_service);
        std::shared_ptr<common::minet::AServerSession>::operator=<ServiceSession>(
          (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
          (std::shared_ptr<ServiceSession> *)&v27);
        std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v27);
      }
      else
      {
        v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::getCmdId(v11) == 172 )
        {
          common::tools::RandomUtils::rand<unsigned int>(0, 0xFFFFFFFF);
          ServiceSessionMgr::findSessionByTypeAndOffset(
            (ServiceSessionMgr *const)(&v27.mu_._M_mutex.__align + 2),
            (_DWORD)this + 24,
            target_service);
          std::shared_ptr<common::minet::AServerSession>::operator=<ServiceSession>(
            (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
            (std::shared_ptr<ServiceSession> *)&v27.mu_._M_mutex.__align + 1);
          std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v27.mu_._M_mutex.__align + 1);
        }
        else
        {
          v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          if ( common::minet::Packet::getCmdId(v12) == 198 )
          {
            v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            if ( common::minet::Packet::getServiceAppId(v13, 3u) )
            {
              ServiceSessionMgr::findSessionByTypeAndAppId(
                (ServiceSessionMgr *const)&v27.session_map_._M_h._M_bucket_count,
                (_DWORD)this + 24,
                3u);
              std::shared_ptr<common::minet::AServerSession>::operator=<ServiceSession>(
                (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
                (std::shared_ptr<ServiceSession> *)&v27.session_map_._M_h._M_bucket_count);
              std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v27.session_map_._M_h._M_bucket_count);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/network/network_mgr.cpp",
                "sendPacket",
                175);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
                (const char (*)[40])" get game app id failed,use send offset");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize);
              v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              common::minet::Packet::getSendOffset(v14);
              ServiceSessionMgr::findSessionByTypeAndOffset(
                (ServiceSessionMgr *const)(&v27.mu_._M_mutex.__align + 4),
                (_DWORD)this + 24,
                3u);
              std::shared_ptr<common::minet::AServerSession>::operator=<ServiceSession>(
                (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
                (std::shared_ptr<ServiceSession> *)&v27.mu_._M_mutex.__align + 2);
              std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v27.mu_._M_mutex.__align + 2);
            }
          }
          else
          {
            v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            common::minet::Packet::getSendOffset(v15);
            ServiceSessionMgr::findSessionByTypeAndOffset(
              (ServiceSessionMgr *const)&v27.session_map_._M_h._M_element_count,
              (_DWORD)this + 24,
              target_service);
            std::shared_ptr<common::minet::AServerSession>::operator=<ServiceSession>(
              (std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32),
              (std::shared_ptr<ServiceSession> *)&v27.session_map_._M_h._M_element_count);
            std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v27.session_map_._M_h._M_element_count);
          }
        }
      }
      if ( std::operator==<common::minet::AServerSession>(
             0LL,
             (const std::shared_ptr<common::minet::AServerSession> *)(p_M_before_begin + 32)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/network_mgr.cpp",
          "sendPacket",
          192);
        v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        CmdId = common::minet::Packet::getCmdId(v16);
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        UserId = common::minet::Packet::getUserId(v18);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize,
          "can not find valid session for packet uid=%u, cmd_id=%u, target_service=%u, target_app_id=%u",
          UserId,
          CmdId,
          target_service,
          target_app_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27.session_map_._M_h._M_rehash_policy._M_next_resize);
        v5 = -1;
      }
      else
      {
        v20 = std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 32));
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v20);
        v22 = (unsigned __int64)(v21->_vptr_AServerSession + 10);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(v21->_vptr_AServerSession + 10);
        v23 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *))v22;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&v27.session_map_._M_h._M_element_count,
          p_packet_ptr);
        v5 = v23(v21, &v27.session_map_._M_h._M_element_count);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v27.session_map_._M_h._M_element_count);
      }
      std::shared_ptr<common::minet::AServerSession>::~shared_ptr((std::shared_ptr<common::minet::AServerSession> *const)(p_M_before_begin + 32));
    }
  }
  result = v5;
  if ( &v27.type_to_app_ids_map_._M_h._M_before_begin == (std::_Hashtable<unsigned int,std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,std::allocator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__node_base *)p_M_before_begin )
  {
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_before_begin = 1172321806LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 200: range 0000000003852B5A-0000000003852DC3
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t TargetService; // eax
  std::shared_ptr<common::minet::Packet> v5; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "broadcastPacket",
      203);
    common::milog::MiLogStream::operator()(&v6, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  TargetService = common::minet::Packet::getTargetService(v3);
  if ( TargetService == 13 )
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v5, p_packet_ptr);
    ServiceSessionMgr::broadcastPacketByServiceType(&this->service_session_mgr_, &v5, 0xDu);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v5);
  }
  else
  {
    if ( TargetService > 0xD )
    {
LABEL_13:
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "broadcastPacket",
        219);
      common::milog::MiLogStream::operator()(&v6, "wait to finish this func");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return 0;
    }
    if ( TargetService > 3 )
    {
      if ( TargetService != 11 )
        goto LABEL_13;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v5, p_packet_ptr);
      ServiceSessionMgr::broadcastPacketByServiceType(&this->service_session_mgr_, &v5, 0xBu);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v5);
    }
    else
    {
      if ( TargetService < 2 )
        goto LABEL_13;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v5, p_packet_ptr);
      ServiceSessionMgr::broadcastPacketByServiceType(&this->service_session_mgr_, &v5, 3u);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v5);
    }
  }
  return 0;
};

// Line 226: range 0000000003852DC4-00000000038537B0
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v23; // rax
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+14h] [rbp-FCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 8 8 iter:239 80 48 11 num_map:227";
  *(_QWORD *)(v1 + 16) = NetworkMgr::monitorReport;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 80));
  ServiceSessionMgr::getSessionNumByCount(&this->service_session_mgr_, (std::map<unsigned int,unsigned int> *)(v1 + 80));
  __x = 3;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      230);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"ConnectionNum Game num:");
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &v5->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 5;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      231);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v26,
           (const char (*)[22])"ConnectionNum Db num:");
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &v7->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 8;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      232);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"ConnectionNum Muip num:");
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v9->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 16;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      233);
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v26,
            (const char (*)[22])"ConnectionNum Oa num:");
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v11->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 15;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      234);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v26,
            (const char (*)[26])"ConnectionNum Social num:");
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 13;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      235);
    v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v26,
            (const char (*)[28])"ConnectionNum Activity num:");
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v15->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 17;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      236);
    v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v26,
            (const char (*)[25])"ConnectionNum Match num:");
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 10;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      237);
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v26,
            (const char (*)[24])"ConnectionNum Mail num:");
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v19->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 11;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      238);
    v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v26,
            (const char (*)[22])"ConnectionNum Mp num:");
    v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  __x = 9;
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(v1 + 80),
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v1 + 80))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      239);
    v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v26,
            (const char (*)[30])"ConnectionNum OfflineMsg num:");
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v23->second);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 80));
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};
