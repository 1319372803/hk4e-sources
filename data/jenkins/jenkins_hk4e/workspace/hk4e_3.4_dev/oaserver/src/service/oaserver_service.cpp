// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/service/oaserver_service.cpp

// Line 24: range 000000000CA9055E-000000000CA90927
int32_t __cdecl OaserverService::init(OaserverService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:26";
  *(_QWORD *)(v2 + 16) = OaserverService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Oaserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/oaserver_service.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[24])"ServiceBase::init fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  else if ( ServiceBase::findStatLogMgr(this, 0x17u) )
  {
    if ( ServiceBase::addHandler<RechargeHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/oaserver_service.cpp",
        "init",
        42);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "add handler<RechargeHandler> failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else if ( MysqlOpOrder::checkMysqlTableExistance() )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/oaserver_service.cpp",
        "init",
        47);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[30])"checkMysqlTableExistance fail");
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
      "./src/service/oaserver_service.cpp",
      "init",
      37);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[21])"miss stat log config");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 56: range 000000000CA90928-000000000CA909D7
int32_t __cdecl OaserverService::defaultProcessPacketFunc(
        OaserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream *v2; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int16 val; // [rsp+1Eh] [rbp-32h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/service/oaserver_service.cpp",
    "defaultProcessPacketFunc",
    57);
  v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v6,
         (const char (*)[32])"Not found function for cmd_id: ");
  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  val = common::minet::Packet::getCmdId(v3);
  common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0;
};

// Line 63: range 000000000CA909D8-000000000CA90A6F
int32_t __cdecl OaserverService::onWorkThreadStart(OaserverService *const this, uint32_t thread_index)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( mysqlpp::Connection::thread_start() )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/service/oaserver_service.cpp",
    "onWorkThreadStart",
    66);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v3, (const char (*)[19])"thread_start fails");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 74: range 000000000CA90A70-000000000CA90A8A
int32_t __cdecl OaserverService::onWorkThreadStop(OaserverService *const this, uint32_t thread_index)
{
  mysqlpp::Connection::thread_end();
  return 0;
};

// Line 80: range 000000000CA90A8C-000000000CA90BA2
// local variable allocation has failed, the output may be wrong!
void __cdecl OaserverService::onEverySecond(OaserverService *const this, uint32_t thread_index)
{
  volatile __int32 *v2; // rdx
  char v3; // cl
  __int64 v4; // rsi
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  std::string v6; // [rsp+0h] [rbp-60h] OVERLAPPED BYREF
  __int32 v7; // [rsp+20h] [rbp-40h]
  int v8; // [rsp+24h] [rbp-3Ch]
  std::string::size_type v9; // [rsp+28h] [rbp-38h]
  std::string v10; // [rsp+30h] [rbp-30h] BYREF

  v6._M_string_length = (std::string::size_type)this;
  HIDWORD(v6._M_dataplus._M_p) = thread_index;
  if ( !thread_index )
  {
    v9 = v6._M_string_length + 776;
    v7 = 0;
    v8 = 0;
    v2 = (volatile __int32 *)(v6._M_string_length + 776);
    v3 = *(_BYTE *)(((v6._M_string_length + 776) >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((LOBYTE(v6._M_string_length) + 8) & 7) + 3) >= v3 )
    {
      LODWORD(v4) = v3 != 0;
      __asan_report_store4(v6._M_string_length + 776, v4);
    }
    *((_DWORD *)&v6._anon_0._M_allocated_capacity + 3) = _InterlockedExchange(v2, v7);
    v5 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v6._anon_0._M_allocated_capacity + 11);
    std::string::basic_string<std::allocator<char>>(
      &v10,
      byte_1A31C760,
      (const std::allocator<char> *)&v6._anon_0._M_allocated_capacity + 11);
    MonitorReport::addValue(v5, MONITOR_RECHARGE_NUM, *((int32_t *)&v6._anon_0._M_allocated_capacity + 3), v6);
    std::string::~string(&v10);
    std::allocator<char>::~allocator((char *)&v6._anon_0._M_allocated_capacity + 11);
  }
};

// Line 90: range 000000000CA90BA4-000000000CA90C11
void __cdecl OaserverService::incProcessRechargeNum(OaserverService *const this)
{
  __int64 v1; // rsi
  std::atomic<unsigned int> *p_process_recharge_num; // rdx
  char v3; // cl

  p_process_recharge_num = &this->process_recharge_num_;
  v3 = *(_BYTE *)(((unsigned __int64)&this->process_recharge_num_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && (char)((((_BYTE)this + 8) & 7) + 3) >= v3 )
  {
    LOBYTE(v1) = v3 != 0;
    __asan_report_store4(&this->process_recharge_num_, v1);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)p_process_recharge_num, 1u);
};

// Line 97: range 000000000CA90C12-000000000CA90DE4
ConfigPtr __cdecl OaserverService::getConfig(OaserverService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v9; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v9 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (OaserverService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 base_ptr:99";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)OaserverService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5, &v1[2]);
    v6 = *(_QWORD *)v5 + 32LL;
    v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL, v7);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&__r, v5);
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9);
  std::dynamic_pointer_cast<Config,ConfigBase>(v9);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v9;
  return result;
};

// Line 112: range 000000000CA90DE6-000000000CA912E2
int32_t __cdecl OaserverService::printStatLog(OaserverService *const this, MessagePtr *p_body_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  time_t v8; // rax
  std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  OaserverService *v12; // rax
  int32_t result; // eax
  StatLogMgr *stat_log_mgr_ptr; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-150h] BYREF
  char v16[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 13 action_id:114 48 4 17 sub_action_id:114 64 16 16 head_log_ptr:113 96 32 12 trans_no:11"
                        "5 160 64 12 stat_log:135";
  *(_QWORD *)(v2 + 16) = OaserverService::printStatLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862727] = -202116109;
  common::tools::perf::make_shared<proto_log::OrderLogHead>();
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::string::basic_string(v2 + 96);
  if ( StatLogUtils::getContextData((uint32_t *)(v2 + 32), (uint32_t *)(v2 + 48), (std::string *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/oaserver_service.cpp",
      "printStatLog",
      118);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v15, (const char (*)[21])"getContextData fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else if ( !*(_DWORD *)(v2 + 32) || !proto_log::OrderActionType_IsValid(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/oaserver_service.cpp",
      "printStatLog",
      125);
    common::milog::MiLogStream::operator()(&v15, "invalid action_id=%u", *(unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = time(0LL);
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v15, v8);
    proto_log::OrderLogHead::set_time(v7, (std::string *)&v15);
    std::string::~string(&v15);
    v9 = std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::OrderLogHead::set_action_id(v9, *(_DWORD *)(v2 + 32));
    v10 = std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = proto_log::OrderActionType_Name[abi:cxx11]((proto_log::OrderActionType)*(_DWORD *)(v2 + 32));
    proto_log::OrderLogHead::set_action_name(v10, v11);
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_QWORD *)(v2 + 168) = 0LL;
    *(_QWORD *)(v2 + 176) = 0LL;
    *(_QWORD *)(v2 + 184) = 0LL;
    *(_QWORD *)(v2 + 192) = 0LL;
    *(_QWORD *)(v2 + 200) = 0LL;
    *(_QWORD *)(v2 + 208) = 0LL;
    *(_QWORD *)(v2 + 216) = 0LL;
    std::shared_ptr<google::protobuf::Message>::operator=<proto_log::OrderLogHead>(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 160),
      (const std::shared_ptr<proto_log::OrderLogHead> *)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::operator=(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 192),
      p_body_ptr);
    v12 = ServiceBox::findService<OaserverService>();
    stat_log_mgr_ptr = ServiceBase::findStatLogMgr(v12, 0x17u);
    if ( stat_log_mgr_ptr )
    {
      StatLogMgr::pushStatLog(stat_log_mgr_ptr, (const StatLog *)(v2 + 160));
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/oaserver_service.cpp",
        "printStatLog",
        142);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"findStatLogMgr fail");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    StatLog::~StatLog((StatLog *const)(v2 + 160));
  }
  std::string::~string((void *)(v2 + 96));
  std::shared_ptr<proto_log::OrderLogHead>::~shared_ptr((std::shared_ptr<proto_log::OrderLogHead> *const)(v2 + 64));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 148: range 000000000CAAB9AE-000000000CAAB9C2
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 148: range 000000000CA91BCE-000000000CAAB3A7
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
