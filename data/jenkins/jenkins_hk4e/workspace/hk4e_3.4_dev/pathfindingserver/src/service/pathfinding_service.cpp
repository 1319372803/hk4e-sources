// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/service/pathfinding_service.cpp

// Line 23: range 000000000CCA12FA-000000000CCA1430
void __cdecl PathfindingService::PathfindingService(PathfindingService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'PathfindingService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  std::vector<PathfindingThreadLocal>::vector(&this->thread_local_vec_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_to_thread_index_);
  boost::shared_mutex::shared_mutex(&this->uid_to_thread_index_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_offset_);
  }
  this->uid_offset_ = 0;
  TestPlayerLogMgr::TestPlayerLogMgr(&this->test_player_log_mgr_);
};

// Line 29: range 000000000CCA1432-000000000CCA14C7
void __cdecl PathfindingService::~PathfindingService(PathfindingService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PathfindingService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  TestPlayerLogMgr::~TestPlayerLogMgr(&this->test_player_log_mgr_);
  boost::shared_mutex::~shared_mutex(&this->uid_to_thread_index_mutex_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_to_thread_index_);
  std::vector<PathfindingThreadLocal>::~vector(&this->thread_local_vec_);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000CCA14C8-000000000CCA14F2
void __cdecl PathfindingService::~PathfindingService(PathfindingService *const this)
{
  PathfindingService::~PathfindingService(this);
  operator delete(this, 0x528uLL);
};

// Line 35: range 000000000CCA14F4-000000000CCA1861
int32_t __cdecl PathfindingService::init(PathfindingService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::vector<PathfindingThreadLocal> *p_thread_local_vec; // rcx
  int v7; // eax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:38";
  *(_QWORD *)(v2 + 16) = PathfindingService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Pathfindingserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v5 = -1;
  }
  else
  {
    p_thread_local_vec = &this->thread_local_vec_;
    v7 = *(unsigned __int8 *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 != 0 && (char)v7 <= 3 )
      __asan_report_load4(&this->thread_num_);
    std::vector<PathfindingThreadLocal>::resize(p_thread_local_vec, this->thread_num_);
    std::unordered_map<unsigned int,unsigned int>::clear(&this->uid_to_thread_index_);
    TestPlayerLogMgr::init(&this->test_player_log_mgr_, pt);
    if ( ServiceBase::addHandler<PathfindingHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/pathfinding_service.cpp",
        "init",
        50);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "add handler<PathfindingHandler> failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else if ( ServiceBase::addHandler<GMToolHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/pathfinding_service.cpp",
        "init",
        51);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "add handler<GMToolHandler> failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 57: range 000000000CCA1862-000000000CCA1911
int32_t __cdecl PathfindingService::start(PathfindingService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !TestPlayerLogMgr::start(&this->test_player_log_mgr_) )
    return ServiceBase::start(this);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/service/pathfinding_service.cpp",
    "start",
    60);
  common::milog::MiLogStream::operator()(&v2, "test_player_log_mgr start fail");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 68: range 000000000CCA1912-000000000CCA19BA
int32_t __cdecl PathfindingService::stop(PathfindingService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( ServiceBase::stop(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/pathfinding_service.cpp",
      "stop",
      71);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v2, (const char (*)[24])"ServiceBase::stop fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  TestPlayerLogMgr::stop(&this->test_player_log_mgr_);
  return 0;
};

// Line 78: range 000000000CCA19BC-000000000CCA1B1C
int32_t __cdecl PathfindingService::fini(PathfindingService *const this)
{
  NavMeshManager *v1; // rax
  std::vector<PathfindingThreadLocal>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<PathfindingThreadLocal>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<PathfindingThreadLocal> *__for_range; // [rsp+20h] [rbp-40h]
  PathfindingThreadLocal *tl; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( ServiceBase::fini(this) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/pathfinding_service.cpp",
      "fini",
      81);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v7, (const char (*)[24])"ServiceBase::fini fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  __for_range = &this->thread_local_vec_;
  __for_begin._M_current = std::vector<PathfindingThreadLocal>::begin(&this->thread_local_vec_)._M_current;
  __for_end._M_current = std::vector<PathfindingThreadLocal>::end(&this->thread_local_vec_)._M_current;
  while ( __gnu_cxx::operator!=<PathfindingThreadLocal *,std::vector<PathfindingThreadLocal>>(&__for_begin, &__for_end) )
  {
    tl = __gnu_cxx::__normal_iterator<PathfindingThreadLocal *,std::vector<PathfindingThreadLocal>>::operator*(&__for_begin);
    if ( std::operator!=<NavMeshManager>(&tl->dynamic_navmesh_mgr, 0LL) )
    {
      v1 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      NavMeshManager::Uninit(v1);
    }
    __gnu_cxx::__normal_iterator<PathfindingThreadLocal *,std::vector<PathfindingThreadLocal>>::operator++(&__for_begin);
  }
  std::vector<PathfindingThreadLocal>::clear(&this->thread_local_vec_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->uid_to_thread_index_);
  TestPlayerLogMgr::fini(&this->test_player_log_mgr_);
  return 0;
};

// Line 99: range 000000000CCA1B1E-000000000CCA1BDA
int32_t __cdecl PathfindingService::defaultProcessPacketFunc(
        PathfindingService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const std::string *v3; // rax
  const char *v4; // rax
  uint32_t cmd_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v2);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/pathfinding_service.cpp",
    "defaultProcessPacketFunc",
    101);
  v3 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  v4 = (const char *)std::string::c_str(v3);
  common::milog::MiLogStream::operator()(&v7, "can not find func for cmd_id=%u, name=%s", cmd_id, v4);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 106: range 000000000CCA1BDC-000000000CCA1EB8
int32_t __cdecl PathfindingService::getPacketQueueIndex(
        PathfindingService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t second; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v7; // rdx
  unsigned int *p_second; // rax
  int v9; // r15d
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-D8h] BYREF
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
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:112 64 8 6 it:115 96 16 8 lock:114";
  *(_QWORD *)(v3 + 16) = PathfindingService::getPacketQueueIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "getPacketQueueIndex",
      109);
    common::milog::MiLogStream::operator()(&v12, "packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    second = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v6);
    boost::shared_lock<boost::shared_mutex>::shared_lock(
      (boost::shared_lock<boost::shared_mutex> *const)(v3 + 96),
      &this->uid_to_thread_index_mutex_);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->uid_to_thread_index_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_to_thread_index_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           &__y) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v7->second;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v3 + 96));
    if ( v9 == 1 )
      second = PathfindingService::addPlayer(this, *(_DWORD *)(v3 + 48));
  }
  result = second;
  if ( v13 == (char *)v3 )
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
  return result;
};

// Line 128: range 000000000CCA1EBA-000000000CCA208C
ConfigPtr __cdecl PathfindingService::getConfig(PathfindingService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v10; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v10 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (PathfindingService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:130";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)PathfindingService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, p_r);
    v7 = *(_QWORD *)v6 + 32LL;
    v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 32LL, v8);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v7)(&__r, v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v10, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v10);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v10;
  return result;
};

// Line 142: range 000000000CCA208E-000000000CCA2502
__int64 __fastcall PathfindingService::addPlayer(PathfindingService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // r8
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // r14d
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:141 64 8 6 it:144 96 16 8 lock:143";
  *(_QWORD *)(v2 + 16) = PathfindingService::addPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v2 + 96),
    &this->uid_to_thread_index_mutex_);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->uid_to_thread_index_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_to_thread_index_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/pathfinding_service.cpp",
      "addPlayer",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v19,
           (const char (*)[27])"[PlayerModify] player uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" add thread repeat:");
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v9->second);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_offset_);
    }
    v13 = ++this->uid_offset_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( v13 == this->thread_num_ )
      this->uid_offset_ = 0;
    std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
      &this->uid_to_thread_index_,
      (unsigned int *)(v2 + 48),
      &this->uid_offset_,
      (unsigned int *)&this->uid_to_thread_index_,
      v5);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/pathfinding_service.cpp",
      "addPlayer",
      156);
    v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v19,
            (const char (*)[27])"[PlayerModify] player uid:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" add thread:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->uid_offset_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_offset_);
    }
    second = this->uid_offset_;
  }
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v2 + 96));
  result = second;
  if ( v20 == (char *)v2 )
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

// Line 161: range 000000000CCA2504-000000000CCA2736
void __fastcall PathfindingService::deletePlayer(PathfindingService *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  common::milog::MiLogStream *v9; // rdi
  common::milog::MiLogStream *v10; // r14
  const unsigned int *v11; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:160 64 16 8 lock:162";
  *(_QWORD *)(v2 + 16) = PathfindingService::deletePlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v2 + 64),
    &this->uid_to_thread_index_mutex_);
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/pathfinding_service.cpp",
    "deletePlayer",
    163);
  v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v13, (const char (*)[12])"player uid:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" remove thread:");
  v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->uid_to_thread_index_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, v8);
  v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" current thread:");
  v11 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v9);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, v11);
  common::milog::MiLogStream::~MiLogStream(&v13);
  std::unordered_map<unsigned int,unsigned int>::erase(
    &this->uid_to_thread_index_,
    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v2 + 64));
  if ( v14 == (char *)v2 )
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
};

// Line 168: range 000000000CCA2738-000000000CCA2989
void __fastcall PathfindingService::updateOnlinePlayerNum(PathfindingService *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  const unsigned int *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (PathfindingService *const)64;
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:167";
  *(_QWORD *)(v2 + 16) = PathfindingService::updateOnlinePlayerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "updateOnlinePlayerNum",
      171);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v12,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/pathfinding_service.cpp",
      "updateOnlinePlayerNum",
      175);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v12, (const char (*)[14])"thread index:");
    v8 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v12);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, v8);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" online player num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v11 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v11, MONITOR_ONLINE_PLAYER_NUM, *(_DWORD *)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 000000000CCA298A-000000000CCA2AF3
void __cdecl PathfindingService::onMonitorReport(PathfindingService *const this, uint32_t thread_index)
{
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  NavMeshManager *v4; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  int32_t AvgCost; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rbx
  int32_t v8; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rbx
  int32_t v10; // eax
  int32_t num; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<NavMeshManager> *dynamic_navmesh_mgr; // [rsp+20h] [rbp-20h]
  CPUProfilingMgr *cpuProfilingMgr; // [rsp+28h] [rbp-18h]

  if ( thread_index < std::vector<PathfindingThreadLocal>::size(&this->thread_local_vec_) )
  {
    dynamic_navmesh_mgr = &std::vector<PathfindingThreadLocal>::operator[](&this->thread_local_vec_, thread_index)->dynamic_navmesh_mgr;
    v2 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)dynamic_navmesh_mgr);
    num = NavMeshManager::GetDynamicNavMeshCount(v2);
    v3 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v3, MONITOR_ONLINE_PLAYER_NUM, num);
    v4 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)dynamic_navmesh_mgr);
    cpuProfilingMgr = NavMeshManager::GetCPUProfilingMgr(v4);
    if ( CPUProfilingMgr::GetMode(cpuProfilingMgr) )
    {
      v5 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      AvgCost = CPUProfilingMgr::GetAvgCost(cpuProfilingMgr, CPT_QueryPathTotal);
      MonitorReport::addValue(v5, MONITOR_PATHFINDING_QUERY_PATH_COST, AvgCost);
      v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      v8 = CPUProfilingMgr::GetAvgCost(cpuProfilingMgr, CPT_ObstacleCount);
      MonitorReport::addValue(v7, MONITOR_PATHFINDING_OBSTACLE_COUNT, v8);
      v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      v10 = CPUProfilingMgr::GetAvgCost(cpuProfilingMgr, CPT_ObstacleTotal);
      MonitorReport::addValue(v9, MONITOR_PATHFINDING_OBSTACLE_TOTAL_COST, v10);
      CPUProfilingMgr::Reset(cpuProfilingMgr);
    }
  }
};

// Line 202: range 000000000CCA2AF4-000000000CCA2CAD
int32_t __cdecl PathfindingService::onWorkThreadStart(PathfindingService *const this, uint32_t thread_index)
{
  NavMeshManager *v3; // rax
  PathfindingThreadLocal *tl; // [rsp+18h] [rbp-48h]
  std::shared_ptr<common::tools::TimerMgr> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  tl = std::vector<PathfindingThreadLocal>::operator[](&this->thread_local_vec_, thread_index);
  common::tools::perf::make_shared<common::tools::TimerMgr>();
  std::shared_ptr<common::tools::TimerMgr>::operator=(&tl->timer_mgr_ptr, &__r);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&__r);
  if ( std::operator==<common::tools::TimerMgr>(&tl->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/pathfinding_service.cpp",
      "onWorkThreadStart",
      212);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v6,
      (const char (*)[29])"make_shared<TimerMgr> failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    common::tools::perf::make_shared<NavMeshManager>();
    std::shared_ptr<NavMeshManager>::operator=(&tl->dynamic_navmesh_mgr, (std::shared_ptr<NavMeshManager> *)&__r);
    std::shared_ptr<NavMeshManager>::~shared_ptr((std::shared_ptr<NavMeshManager> *const)&__r);
    if ( std::operator==<NavMeshManager>(&tl->dynamic_navmesh_mgr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/pathfinding_service.cpp",
        "onWorkThreadStart",
        219);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v6,
        (const char (*)[35])"make_shared<NavMeshManager> failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      v3 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      NavMeshManager::Init(v3);
      return 0;
    }
  }
};

// Line 228: range 000000000CCA2CAE-000000000CCA2D11
int32_t __cdecl PathfindingService::onWorkThreadStop(PathfindingService *const this, uint32_t thread_index)
{
  NavMeshManager *v2; // rax
  PathfindingThreadLocal *tl; // [rsp+18h] [rbp-8h]

  tl = std::vector<PathfindingThreadLocal>::operator[](&this->thread_local_vec_, thread_index);
  if ( std::operator!=<NavMeshManager>(&tl->dynamic_navmesh_mgr, 0LL) )
  {
    v2 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    NavMeshManager::Uninit(v2);
  }
  return 0;
};

// Line 241: range 000000000CCA2D12-000000000CCA30B5
_BOOL8 __fastcall PathfindingService::workThreadProc(PathfindingService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  _BOOL4 v6; // r14d
  common::tools::TimerMgr *v7; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t Version; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  NavMeshManager *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int32_t OldestVersion; // eax
  NavMeshManager *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint64_t TokenKeepAliveMs; // rax
  NavMeshManager *v17; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint64_t ObstacleTimeLimit; // rax
  NavMeshManager *v20; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t TestPlayerCount; // eax
  NavMeshManager *v23; // rax
  CPUProfilingMgr *CPUProfilingMgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t CPUProfilingMode; // eax
  _BOOL8 result; // rax
  bool is_busy; // [rsp+17h] [rbp-C9h]
  PathfindingThreadLocal *tl; // [rsp+18h] [rbp-C8h]
  uint64_t cur_tick; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 thread_index:240 64 16 14 config_ptr:260";
  *(_QWORD *)(v2 + 16) = PathfindingService::workThreadProc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = thread_index;
  tl = std::vector<PathfindingThreadLocal>::operator[](&this->thread_local_vec_, *(unsigned int *)(v2 + 48));
  if ( std::operator==<common::tools::TimerMgr>(&tl->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "workThreadProc",
      249);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v31,
           (const char (*)[40])"timer_mgr_ptr is nullptr, thread_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = 0;
  }
  else
  {
    cur_tick = common::tools::TimeUtils::getNowMs();
    v7 = std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)tl);
    is_busy = common::tools::TimerMgr::update(v7, cur_tick);
    PathfindingService::getConfig((PathfindingService *const)(v2 + 64));
    v8 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    Version = NavMeshManager::GetVersion(v8);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( Version != Config::getOldestVersion(v10) )
    {
      v11 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      OldestVersion = Config::getOldestVersion(v12);
      NavMeshManager::SetVersion(v11, OldestVersion);
      is_busy = 1;
    }
    v14 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    TokenKeepAliveMs = Config::getTokenKeepAliveMs(v15);
    NavMeshManager::SetKeepAliveMS(v14, TokenKeepAliveMs);
    v17 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ObstacleTimeLimit = Config::getObstacleTimeLimit(v18);
    NavMeshManager::SetObstacleTimeLimit(v17, ObstacleTimeLimit);
    v20 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    TestPlayerCount = Config::getTestPlayerCount(v21);
    NavMeshManager::UpdateTestPlayerCount(v20, TestPlayerCount);
    v23 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    CPUProfilingMgr = NavMeshManager::GetCPUProfilingMgr(v23);
    v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    CPUProfilingMode = Config::getCPUProfilingMode(v25);
    CPUProfilingMgr::UpdateMode(CPUProfilingMgr, CPUProfilingMode);
    v6 = is_busy;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  result = v6;
  if ( v32 == (char *)v2 )
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

// Line 279: range 000000000CCA30B6-000000000CCA31F1
common::tools::TimerMgrPtr __cdecl PathfindingService::getTimerMgrPtr(PathfindingService *const this)
{
  PathfindingService *v1; // rsi
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  uint32_t *v6; // rdx
  PathfindingThreadLocal *ThreadLocal; // rdx
  common::tools::TimerMgrPtr result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  v2 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v3 = (_BYTE *)v2;
  v4 = v2 & 7;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)v4 >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    v4 = v2;
    __asan_report_load1(v2);
  }
  if ( *v3 )
  {
    v5 = ZTWN11ThreadLocal17work_thread_indexE(v4);
    v6 = (uint32_t *)v5;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v5);
    ThreadLocal = PathfindingService::getThreadLocal(v1, *v6);
    std::shared_ptr<common::tools::TimerMgr>::shared_ptr(
      (std::shared_ptr<common::tools::TimerMgr> *const)this,
      &ThreadLocal->timer_mgr_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "getTimerMgrPtr",
      284);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v10,
      (const char (*)[26])"cannot find timer_mgr_ptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<common::tools::TimerMgr>::shared_ptr((std::shared_ptr<common::tools::TimerMgr> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 288: range 000000000CCA31F2-000000000CCA3357
PathfindingThreadLocal *__cdecl PathfindingService::getThreadLocal(PathfindingService *const this)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  uint32_t *v5; // rdx
  PathfindingService *thisa; // [rsp+8h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  thisa = this;
  if ( !(_BYTE)`guard variable for'PathfindingService::getThreadLocal(void)::empty_thread_local )
  {
    this = (PathfindingService *const)&`guard variable for'PathfindingService::getThreadLocal(void)::empty_thread_local;
    if ( __cxa_guard_acquire(&`guard variable for'PathfindingService::getThreadLocal(void)::empty_thread_local) )
    {
      __cxa_guard_release(&`guard variable for'PathfindingService::getThreadLocal(void)::empty_thread_local);
      this = (PathfindingService *const)PathfindingThreadLocal::~PathfindingThreadLocal;
      __cxa_atexit(
        (void (__fastcall *)(void *))PathfindingThreadLocal::~PathfindingThreadLocal,
        &PathfindingService::getThreadLocal(void)::empty_thread_local,
        &_dso_handle);
    }
  }
  v1 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v2 = (_BYTE *)v1;
  v3 = v1 & 7;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)v3 >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    v3 = v1;
    __asan_report_load1(v1);
  }
  if ( *v2 )
  {
    v4 = ZTWN11ThreadLocal17work_thread_indexE(v3);
    v5 = (uint32_t *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v4);
    return PathfindingService::getThreadLocal(thisa, *v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "getThreadLocal",
      294);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v8,
      (const char (*)[28])"thread is not a work thread");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return &PathfindingService::getThreadLocal(void)::empty_thread_local;
  }
};

// Line 300: range 000000000CCA3358-000000000CCA3582
std::vector<PathfindingThreadLocal>::reference __fastcall PathfindingService::getThreadLocal(
        PathfindingService *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<PathfindingThreadLocal>::reference result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:299";
  *(_QWORD *)(v2 + 16) = PathfindingService::getThreadLocal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = thread_index;
  if ( !(_BYTE)`guard variable for'PathfindingService::getThreadLocal(unsigned int)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'PathfindingService::getThreadLocal(unsigned int)::empty_thread_local) )
  {
    __cxa_guard_release(&`guard variable for'PathfindingService::getThreadLocal(unsigned int)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))PathfindingThreadLocal::~PathfindingThreadLocal,
      &PathfindingService::getThreadLocal(unsigned int)::empty_thread_local,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
  }
  if ( this->thread_num_ > *(_DWORD *)(v2 + 32) )
  {
    result = std::vector<PathfindingThreadLocal>::operator[](&this->thread_local_vec_, *(unsigned int *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/pathfinding_service.cpp",
      "getThreadLocal",
      304);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"thread index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v6,
           (const char (*)[28])" is larget than thread num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = &PathfindingService::getThreadLocal(unsigned int)::empty_thread_local;
  }
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

// Line 313: range 000000000CCA3584-000000000CCA3601
void __cdecl PathfindingService::pushTestPlayerLog(
        PathfindingService *const this,
        uint32_t uid,
        uint16_t cmd_id,
        MessagePtr *p_message_ptr)
{
  std::shared_ptr<google::protobuf::Message> v5; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v5, p_message_ptr);
  TestPlayerLogMgr::pushPacketLog(&this->test_player_log_mgr_, uid, cmd_id, &v5);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v5);
};

// Line 315: range 000000000CCABD4C-000000000CCABD6F
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 315: range 000000000CCA9B62-000000000CCAB657
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  __int64 misc_category; // rax
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  std::shared_ptr<StaticNavMesh> *v12; // rsi
  __int64 i; // rax
  char *v14; // rcx
  char *v15; // rcx
  char v16; // dl
  char *v17; // rcx
  char *v18; // rcx
  char v19; // dl
  const std::piecewise_construct_t *v20; // rdx
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v21; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v22; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v23; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v24; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v25; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v26; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v27; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v28; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v29; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v30; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v31; // xmm0
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v32; // xmm0
  float v33; // xmm0_4
  float v34; // xmm0_4
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  _BYTE *v46; // rcx
  const char *v47; // rcx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  const char *v54; // rcx
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  float v57; // [rsp+0h] [rbp-210h]
  float inY; // [rsp+4h] [rbp-20Ch]
  float inYa; // [rsp+4h] [rbp-20Ch]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1F1h] BYREF
  unsigned int v61; // [rsp+20h] [rbp-1F0h]
  unsigned int v62; // [rsp+24h] [rbp-1ECh]
  unsigned int v63; // [rsp+28h] [rbp-1E8h]
  unsigned int v64; // [rsp+2Ch] [rbp-1E4h]
  unsigned int v65; // [rsp+30h] [rbp-1E0h]
  unsigned int v66; // [rsp+34h] [rbp-1DCh]
  unsigned int v67; // [rsp+38h] [rbp-1D8h]
  unsigned int v68; // [rsp+3Ch] [rbp-1D4h]
  unsigned int v69; // [rsp+40h] [rbp-1D0h]
  unsigned int v70; // [rsp+44h] [rbp-1CCh]
  unsigned int v71; // [rsp+48h] [rbp-1C8h]
  unsigned int v72; // [rsp+4Ch] [rbp-1C4h]
  unsigned int v73; // [rsp+50h] [rbp-1C0h]
  unsigned int v74; // [rsp+54h] [rbp-1BCh]
  unsigned int v75; // [rsp+58h] [rbp-1B8h]
  unsigned int v76; // [rsp+5Ch] [rbp-1B4h]
  unsigned int v77; // [rsp+60h] [rbp-1B0h]
  unsigned int v78; // [rsp+64h] [rbp-1ACh]
  unsigned int v79; // [rsp+68h] [rbp-1A8h]
  unsigned int v80; // [rsp+6Ch] [rbp-1A4h]
  unsigned int v81; // [rsp+70h] [rbp-1A0h]
  unsigned int v82; // [rsp+74h] [rbp-19Ch]
  unsigned int v83; // [rsp+78h] [rbp-198h]
  unsigned int v84; // [rsp+7Ch] [rbp-194h]
  unsigned int v85; // [rsp+80h] [rbp-190h]
  unsigned int v86; // [rsp+84h] [rbp-18Ch]
  unsigned int v87; // [rsp+88h] [rbp-188h]
  unsigned int v88; // [rsp+8Ch] [rbp-184h]
  unsigned int v89; // [rsp+90h] [rbp-180h]
  unsigned int v90; // [rsp+94h] [rbp-17Ch]
  unsigned int v91; // [rsp+98h] [rbp-178h]
  unsigned int v92; // [rsp+9Ch] [rbp-174h]
  unsigned int v93; // [rsp+A0h] [rbp-170h]
  unsigned int v94; // [rsp+A4h] [rbp-16Ch]
  unsigned int v95; // [rsp+A8h] [rbp-168h]
  unsigned int v96; // [rsp+ACh] [rbp-164h]
  unsigned int v97; // [rsp+B0h] [rbp-160h]
  unsigned int v98; // [rsp+B4h] [rbp-15Ch]
  unsigned int v99; // [rsp+B8h] [rbp-158h]
  unsigned int v100; // [rsp+BCh] [rbp-154h]
  unsigned int v101; // [rsp+C0h] [rbp-150h]
  unsigned int v102; // [rsp+C4h] [rbp-14Ch]
  unsigned int v103; // [rsp+C8h] [rbp-148h]
  unsigned int v104; // [rsp+CCh] [rbp-144h]
  unsigned int v105; // [rsp+D0h] [rbp-140h]
  unsigned int v106; // [rsp+D4h] [rbp-13Ch]
  unsigned int v107; // [rsp+D8h] [rbp-138h]
  unsigned int v108; // [rsp+DCh] [rbp-134h]
  unsigned int v109; // [rsp+E0h] [rbp-130h]
  unsigned int v110; // [rsp+E4h] [rbp-12Ch]
  unsigned int v111; // [rsp+E8h] [rbp-128h]
  unsigned int v112; // [rsp+ECh] [rbp-124h]
  unsigned int v113; // [rsp+F0h] [rbp-120h]
  unsigned int v114; // [rsp+F4h] [rbp-11Ch]
  unsigned int v115; // [rsp+F8h] [rbp-118h]
  unsigned int v116; // [rsp+FCh] [rbp-114h]
  unsigned int v117; // [rsp+100h] [rbp-110h]
  unsigned int v118; // [rsp+104h] [rbp-10Ch]
  unsigned int v119; // [rsp+108h] [rbp-108h]
  unsigned int v120; // [rsp+10Ch] [rbp-104h]
  unsigned int v121; // [rsp+110h] [rbp-100h]
  unsigned int v122; // [rsp+114h] [rbp-FCh]
  unsigned int v123; // [rsp+118h] [rbp-F8h]
  unsigned int v124; // [rsp+11Ch] [rbp-F4h]
  unsigned int v125; // [rsp+120h] [rbp-F0h]
  unsigned int v126; // [rsp+124h] [rbp-ECh]
  unsigned int v127; // [rsp+128h] [rbp-E8h]
  unsigned int v128; // [rsp+12Ch] [rbp-E4h]
  unsigned int v129; // [rsp+130h] [rbp-E0h]
  unsigned int v130; // [rsp+134h] [rbp-DCh]
  unsigned int v131; // [rsp+138h] [rbp-D8h]
  unsigned int v132; // [rsp+13Ch] [rbp-D4h]
  unsigned int v133; // [rsp+140h] [rbp-D0h]
  unsigned int v134; // [rsp+144h] [rbp-CCh]
  unsigned int v135; // [rsp+148h] [rbp-C8h]
  unsigned int v136; // [rsp+14Ch] [rbp-C4h]
  unsigned int v137; // [rsp+150h] [rbp-C0h]
  unsigned int v138; // [rsp+154h] [rbp-BCh]
  unsigned int v139; // [rsp+158h] [rbp-B8h]
  unsigned int v140; // [rsp+15Ch] [rbp-B4h]
  unsigned int v141; // [rsp+160h] [rbp-B0h]
  unsigned int v142; // [rsp+164h] [rbp-ACh]
  unsigned int v143; // [rsp+168h] [rbp-A8h]
  unsigned int v144; // [rsp+16Ch] [rbp-A4h]
  unsigned int v145; // [rsp+170h] [rbp-A0h]
  unsigned int v146; // [rsp+174h] [rbp-9Ch]
  unsigned int v147; // [rsp+178h] [rbp-98h]
  unsigned int v148; // [rsp+17Ch] [rbp-94h]
  unsigned int v149; // [rsp+180h] [rbp-90h]
  unsigned int v150; // [rsp+184h] [rbp-8Ch]
  unsigned int v151; // [rsp+188h] [rbp-88h]
  unsigned int v152; // [rsp+18Ch] [rbp-84h]
  unsigned int v153; // [rsp+190h] [rbp-80h]
  unsigned int v154; // [rsp+194h] [rbp-7Ch]
  unsigned int v155; // [rsp+198h] [rbp-78h]
  unsigned int v156; // [rsp+19Ch] [rbp-74h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v157; // [rsp+1A0h] [rbp-70h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v158; // [rsp+1A8h] [rbp-68h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v159; // [rsp+1B0h] [rbp-60h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v160; // [rsp+1B8h] [rbp-58h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v161; // [rsp+1C0h] [rbp-50h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v162; // [rsp+1C8h] [rbp-48h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v163; // [rsp+1D0h] [rbp-40h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v164; // [rsp+1D8h] [rbp-38h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v165; // [rsp+1E0h] [rbp-30h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v166; // [rsp+1E8h] [rbp-28h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v167; // [rsp+1F0h] [rbp-20h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *v168; // [rsp+1F8h] [rbp-18h]

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        system_category = (const boost::system::error_category *)__asan_report_store8();
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        netdb_category = (const boost::system::error_category *)__asan_report_store8();
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8();
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = (__int64)boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)&boost::asio::error::misc_category;
        misc_category = __asan_report_store8();
      }
      boost::asio::error::misc_category = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      std::vector<std::shared_ptr<Config::NavMeshInstance>>::vector(&Config::version_datas);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<std::shared_ptr<Config::NavMeshInstance>>::~vector,
        &Config::version_datas,
        &_dso_handle);
      boost::shared_mutex::shared_mutex(&Config::version_datas_mutex_);
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::shared_mutex::~shared_mutex,
        &Config::version_datas_mutex_,
        &_dso_handle);
      v12 = &default_static_nav_mesh_ptr;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<StaticNavMesh>::~shared_ptr,
        &default_static_nav_mesh_ptr,
        &_dso_handle);
      QueryFilter::QueryFilter(&GMToolHandler::query_filter);
      QueryFilter::QueryFilter(&PathfindingHandler::query_filter);
      for ( i = 7LL; i >= 0; --i )
        ;
      v14 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
      }
      if ( !*v14 )
      {
        v15 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        v16 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v16 != 0;
        if ( v16 != 0
          && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= v16 )
        {
          __asan_report_store1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
        }
        *v15 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(
            &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
            v12);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>();
        v12 = (std::shared_ptr<StaticNavMesh> *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
          &_dso_handle);
      }
      v17 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v19 != 0;
        if ( v19 != 0
          && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v19 )
        {
          __asan_report_store1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
        }
        *v18 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(
            &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
            v12);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>();
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
          &_dso_handle);
      }
      v20 = boost::container::std_piecewise_construct_holder<0>::dummy;
      if ( *(_BYTE *)(((unsigned __int64)&boost::container::piecewise_construct >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::container::piecewise_construct = v20;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&MemoryCacheReader::s_classname[abi:cxx11],
        "MemoryStream",
        &__a);
      std::allocator<char>::~allocator(&__a);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&MemoryCacheReader::s_classname[abi:cxx11],
        &_dso_handle);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&NAV_MESH_DATA_PATH, "data", &__a);
      std::allocator<char>::~allocator(&__a);
      __cxa_atexit((void (__fastcall *)(void *))&std::string::~string, (void *)&NAV_MESH_DATA_PATH, &_dso_handle);
      NavMeshManager::NavMeshManager(&NavMeshManager::instance);
      __cxa_atexit(
        (void (__fastcall *)(void *))NavMeshManager::~NavMeshManager,
        &NavMeshManager::instance,
        &_dso_handle);
      v168 = math::kRotationOrderLUT;
      v149 = 1065353216;
      v150 = 1065353216;
      v151 = 1065353216;
      v152 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[0]);
      v153 = v149;
      v154 = v150;
      v155 = v151;
      v156 = v152;
      v21._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v149, (__m128)v150),
                        _mm_unpacklo_ps((__m128)v151, (__m128)v152));
      if ( *(_WORD *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v168, &NavMeshManager::instance);
      *v168 = v21;
      v167 = &math::kRotationOrderLUT[1];
      v141 = -1082130432;
      v142 = 1065353216;
      v143 = -1082130432;
      v144 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[1]);
      v145 = v141;
      v146 = v142;
      v147 = v143;
      v148 = v144;
      v22._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v141, (__m128)v142),
                        _mm_unpacklo_ps((__m128)v143, (__m128)v144));
      if ( *(_WORD *)(((unsigned __int64)v167 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v167, &NavMeshManager::instance);
      *v167 = v22;
      v166 = &math::kRotationOrderLUT[2];
      v133 = 1065353216;
      v134 = 1065353216;
      v135 = 1065353216;
      v136 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[2]);
      v137 = v133;
      v138 = v134;
      v139 = v135;
      v140 = v136;
      v23._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v133, (__m128)v134),
                        _mm_unpacklo_ps((__m128)v135, (__m128)v136));
      if ( *(_WORD *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v166, &NavMeshManager::instance);
      *v166 = v23;
      v165 = &math::kRotationOrderLUT[3];
      v125 = 1065353216;
      v126 = 1065353216;
      v127 = -1082130432;
      v128 = -1082130432;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[3]);
      v129 = v125;
      v130 = v126;
      v131 = v127;
      v132 = v128;
      v24._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v125, (__m128)v126),
                        _mm_unpacklo_ps((__m128)v127, (__m128)v128));
      if ( *(_WORD *)(((unsigned __int64)v165 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v165, &NavMeshManager::instance);
      *v165 = v24;
      v164 = &math::kRotationOrderLUT[4];
      v117 = 1065353216;
      v118 = -1082130432;
      v119 = 1065353216;
      v120 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[4]);
      v121 = v117;
      v122 = v118;
      v123 = v119;
      v124 = v120;
      v25._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v117, (__m128)v118),
                        _mm_unpacklo_ps((__m128)v119, (__m128)v120));
      if ( *(_WORD *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v164, &NavMeshManager::instance);
      *v164 = v25;
      v163 = &math::kRotationOrderLUT[5];
      v109 = -1082130432;
      v110 = 1065353216;
      v111 = 1065353216;
      v112 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[5]);
      v113 = v109;
      v114 = v110;
      v115 = v111;
      v116 = v112;
      v26._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v109, (__m128)v110),
                        _mm_unpacklo_ps((__m128)v111, (__m128)v112));
      if ( *(_WORD *)(((unsigned __int64)v163 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v163, &NavMeshManager::instance);
      *v163 = v26;
      v162 = &math::kRotationOrderLUT[6];
      v101 = 1065353216;
      v102 = 1065353216;
      v103 = 1065353216;
      v104 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[6]);
      v105 = v101;
      v106 = v102;
      v107 = v103;
      v108 = v104;
      v27._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v101, (__m128)v102),
                        _mm_unpacklo_ps((__m128)v103, (__m128)v104));
      if ( *(_WORD *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v162, &NavMeshManager::instance);
      *v162 = v27;
      v161 = &math::kRotationOrderLUT[7];
      v93 = -1082130432;
      v94 = 1065353216;
      v95 = 1065353216;
      v96 = -1082130432;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[7]);
      v97 = v93;
      v98 = v94;
      v99 = v95;
      v100 = v96;
      v28._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v93, (__m128)v94),
                        _mm_unpacklo_ps((__m128)v95, (__m128)v96));
      if ( *(_WORD *)(((unsigned __int64)v161 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v161, &NavMeshManager::instance);
      *v161 = v28;
      v160 = &math::kRotationOrderLUT[8];
      v85 = 1065353216;
      v86 = -1082130432;
      v87 = 1065353216;
      v88 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[8]);
      v89 = v85;
      v90 = v86;
      v91 = v87;
      v92 = v88;
      v29._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v85, (__m128)v86),
                        _mm_unpacklo_ps((__m128)v87, (__m128)v88));
      if ( *(_WORD *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v160, &NavMeshManager::instance);
      *v160 = v29;
      v159 = &math::kRotationOrderLUT[9];
      v77 = 1065353216;
      v78 = 1065353216;
      v79 = -1082130432;
      v80 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[9]);
      v81 = v77;
      v82 = v78;
      v83 = v79;
      v84 = v80;
      v30._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v77, (__m128)v78),
                        _mm_unpacklo_ps((__m128)v79, (__m128)v80));
      if ( *(_WORD *)(((unsigned __int64)v159 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v159, &NavMeshManager::instance);
      *v159 = v30;
      v158 = &math::kRotationOrderLUT[10];
      v69 = 1065353216;
      v70 = -1082130432;
      v71 = 1065353216;
      v72 = 1065353216;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[10]);
      v73 = v69;
      v74 = v70;
      v75 = v71;
      v76 = v72;
      v31._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v69, (__m128)v70),
                        _mm_unpacklo_ps((__m128)v71, (__m128)v72));
      if ( *(_WORD *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v158, &NavMeshManager::instance);
      *v158 = v31;
      v157 = &math::kRotationOrderLUT[11];
      v61 = 1065353216;
      v62 = 1065353216;
      v63 = 1065353216;
      v64 = -1082130432;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&math::kRotationOrderLUT[11]);
      v65 = v61;
      v66 = v62;
      v67 = v63;
      v68 = v64;
      v32._anon_0.p = _mm_movelh_ps(
                        _mm_unpacklo_ps((__m128)v61, (__m128)v62),
                        _mm_unpacklo_ps((__m128)v63, (__m128)v64));
      if ( *(_WORD *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v157, &NavMeshManager::instance);
      *v157 = v32;
      AABB::AABB((AABB *const)&AABB::zero, &Vector3f::zero, &Vector3f::zero);
      FloatToHalfConverter::FloatToHalfConverter(&g_FloatToHalf);
      RegisterRuntimeInitializeAndCleanup::RegisterRuntimeInitializeAndCleanup(
        &sInitializePrecomputeTables,
        (RegisterRuntimeInitializeAndCleanup::CallbackFunction *)InitializeHalfConversionTables,
        0LL,
        0,
        0LL);
      if ( *(char *)(((unsigned __int64)&Matrix3x3f::identity >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&Matrix3x3f::identity.m_Data[8] + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)&Matrix3x3f::identity.m_Data[8] + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Matrix3x3f::identity.m_Data[8]
                                                                                      + 3) >> 3)
                                                                                    + 0x7FFF8000) )
      {
        __asan_report_store_n(&Matrix3x3f::identity, 36LL);
      }
      `anonymous namespace'::CreateIdentityMatrix3x3f((Matrix3x3f *)&Matrix3x3f::identity);
      if ( *(char *)(((unsigned __int64)&Matrix3x3f::zero >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&Matrix3x3f::zero.m_Data[8] + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)&Matrix3x3f::zero.m_Data[8] + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Matrix3x3f::zero.m_Data[8]
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_store_n(&Matrix3x3f::zero, 36LL);
      }
      `anonymous namespace'::CreateZeroMatrix3x3f((Matrix3x3f *)&Matrix3x3f::zero);
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)&Matrix4x4f::identity, kIdentity);
      inY = std::numeric_limits<float>::infinity();
      v33 = std::numeric_limits<float>::infinity();
      Vector2f::Vector2f((Vector2f *const)&Vector2f::infinityVec, v33, inY);
      Vector2f::Vector2f((Vector2f *const)&Vector2f::zero, 0.0, 0.0);
      Vector2f::Vector2f((Vector2f *const)&Vector2f::one, 1.0, 1.0);
      Vector2f::Vector2f((Vector2f *const)&Vector2f::xAxis, 1.0, 0.0);
      Vector2f::Vector2f((Vector2f *const)&Vector2f::yAxis, 0.0, 1.0);
      inYa = std::numeric_limits<float>::infinity();
      v57 = std::numeric_limits<float>::infinity();
      v34 = std::numeric_limits<float>::infinity();
      Vector3f::Vector3f((Vector3f *const)&Vector3f::infinityVec, v34, v57, inYa);
      Vector3f::Vector3f((Vector3f *const)&Vector3f::zero, 0.0, 0.0, 0.0);
      Vector3f::Vector3f((Vector3f *const)&Vector3f::one, 1.0, 1.0, 1.0);
      Vector3f::Vector3f((Vector3f *const)&Vector3f::xAxis, 1.0, 0.0, 0.0);
      Vector3f::Vector3f((Vector3f *const)&Vector3f::yAxis, 0.0, 1.0, 0.0);
      Vector3f::Vector3f((Vector3f *const)&Vector3f::zAxis, 0.0, 0.0, 1.0);
      Vector4f::Vector4f((Vector4f *const)&Vector4f::zero, 0.0, 0.0, 0.0, 0.0);
      Vector4f::Vector4f((Vector4f *const)&Vector4f::one, 1.0, 1.0, 1.0, 1.0);
      v35 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v35 )
      {
        v36 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v36 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v37 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v37 )
      {
        v38 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        }
        *v38 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v39 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v39 )
      {
        v40 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        }
        *v40 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v41 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v41 )
      {
        v42 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        }
        *v42 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v43 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v43 )
      {
        v44 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v44 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v45 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v45 )
      {
        v46 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v46 = 1;
        v47 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v47;
      }
      v48 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v48 )
      {
        v49 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v49 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v50 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v50 )
      {
        v51 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v51 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v52 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v52 )
      {
        v53 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v53 = 1;
        v54 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v54;
      }
      v55 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v55 )
      {
        v56 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        }
        *v56 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 315: range 000000000CCABC5E-000000000CCABD4B
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v2 )
      {
        v3 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        }
        *v3 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};
