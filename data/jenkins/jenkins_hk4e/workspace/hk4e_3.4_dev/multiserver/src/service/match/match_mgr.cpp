// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_mgr.cpp

// Line 20: range 000000000D7A02AC-000000000D7A02BA
int32_t __cdecl MatchMgr::init(MatchMgr *const this)
{
  return 0;
};

// Line 25: range 000000000D7A02BC-000000000D7A058F
int32_t __cdecl MatchMgr::start(MatchMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( MatchPoolBase::start(&this->dungeon_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "start",
      28);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v2,
      (const char (*)[41])"[MATCH] dungeon_match_pool_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::start(&this->mp_play_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "start",
      34);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v2,
      (const char (*)[41])"[MATCH] mp_play_match_pool_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::start(&this->mechanicus_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "start",
      40);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v2,
      (const char (*)[44])"[MATCH] mechanicus_match_pool_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::start(&this->general_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "start",
      46);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v2,
      (const char (*)[41])"[MATCH] general_match_pool_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::start(&this->gcg_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "start",
      52);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v2,
      (const char (*)[37])"[MATCH] gcg_match_pool_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 60: range 000000000D7A0590-000000000D7A0863
int32_t __cdecl MatchMgr::stop(MatchMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( MatchPoolBase::stop(&this->dungeon_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "stop",
      63);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v2,
      (const char (*)[40])"[MATCH] dungeon_match_pool_ stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::stop(&this->mp_play_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "stop",
      69);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v2,
      (const char (*)[40])"[MATCH] mp_play_match_pool_ stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::stop(&this->mechanicus_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "stop",
      75);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v2,
      (const char (*)[43])"[MATCH] mechanicus_match_pool_ stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::stop(&this->general_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "stop",
      81);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v2,
      (const char (*)[40])"[MATCH] general_match_pool_ stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchPoolBase::stop(&this->gcg_match_pool_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_mgr.cpp",
      "stop",
      87);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v2,
      (const char (*)[36])"[MATCH] gcg_match_pool_ stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 95: range 000000000D7A0864-000000000D7A0C00
__int64 __fastcall MatchMgr::dispatchPacket(
        MatchMgr *const this,
        proto::MatchType match_type,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::shared_ptr<common::minet::Packet> v9; // [rsp+20h] [rbp-90h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 32 4 13 match_type:94";
  *(_QWORD *)(v3 + 16) = MatchMgr::dispatchPacket;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = match_type;
  switch ( *(_DWORD *)(v3 + 32) )
  {
    case 1:
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      MatchPoolBase::pushPacket(&this->dungeon_match_pool_, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
      break;
    case 2:
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      MatchPoolBase::pushPacket(&this->mp_play_match_pool_, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
      break;
    case 3:
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      MatchPoolBase::pushPacket(&this->mechanicus_match_pool_, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
      break;
    case 4:
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      MatchPoolBase::pushPacket(&this->general_match_pool_, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
      break;
    case 5:
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      MatchPoolBase::pushPacket(&this->gcg_match_pool_, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
      break;
    default:
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_mgr.cpp",
        "dispatchPacket",
        125);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v10,
             (const char (*)[23])"unsupport match type: ");
      common::milog::MiLogStream::operator<<<proto::MatchType,(proto::MatchType*)0>(
        v6,
        (const proto::MatchType *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v10);
      break;
  }
  result = 0LL;
  if ( v11 == (char *)v3 )
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

// Line 134: range 000000000D7A0C02-000000000D7A0EFA
int32_t __cdecl MatchMgr::fillMatchserverWorkloadInfoNotify(
        MatchMgr *const this,
        proto::MatchserverWorkloadInfoNotify *notify)
{
  uint32_t MatchUnitNum; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ebx
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ebx
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  uint32_t v11; // ebx
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  uint32_t v14; // ebx
  unsigned int *v15; // rax
  uint32_t *v16; // rdx
  unsigned __int64 v17; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+10h] [rbp-70h] BYREF
  uint32_t total_num; // [rsp+14h] [rbp-6Ch]
  google::protobuf::Map<unsigned int,unsigned int> *match_unit_map; // [rsp+18h] [rbp-68h]
  google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-60h]
  const unsigned int *p__; // [rsp+28h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_end; // [rsp+50h] [rbp-30h] BYREF

  match_unit_map = proto::MatchserverWorkloadInfoNotify::mutable_match_unit_map(notify);
  MatchUnitNum = MatchPoolBase::getMatchUnitNum(&this->dungeon_match_pool_);
  key = 1;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](match_unit_map, &key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = MatchUnitNum;
  v5 = MatchPoolBase::getMatchUnitNum(&this->mp_play_match_pool_);
  key = 2;
  v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](match_unit_map, &key);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v5;
  v8 = MatchPoolBase::getMatchUnitNum(&this->mechanicus_match_pool_);
  key = 3;
  v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](match_unit_map, &key);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = v8;
  v11 = MatchPoolBase::getMatchUnitNum(&this->general_match_pool_);
  key = 4;
  v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](match_unit_map, &key);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = v11;
  v14 = MatchPoolBase::getMatchUnitNum(&this->gcg_match_pool_);
  key = 5;
  v15 = google::protobuf::Map<unsigned int,unsigned int>::operator[](match_unit_map, &key);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = v14;
  total_num = 0;
  __for_range = match_unit_map;
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, match_unit_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p__ = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::iterator::operator*(&__for_begin);
    v17 = (unsigned __int64)(p__ + 1);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v17);
    total_num += p__[1];
    google::protobuf::Map<unsigned int,unsigned int>::iterator::operator++(&__for_begin);
  }
  proto::MatchserverWorkloadInfoNotify::set_match_unit_num(notify, total_num);
  return 0;
};

// Line 153: range 000000000D7A0EFC-000000000D7A1809
void __cdecl MatchMgr::monitorReport(MatchMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  MonitorReport *v4; // r14
  uint32_t MatchUnitNum; // eax
  MonitorReport *v6; // r14
  uint32_t QueueSize; // eax
  MonitorReport *v8; // r14
  uint32_t v9; // eax
  MonitorReport *v10; // r14
  uint32_t v11; // eax
  MonitorReport *v12; // r14
  uint32_t v13; // eax
  MonitorReport *v14; // r14
  uint32_t v15; // eax
  MonitorReport *v16; // r14
  uint32_t v17; // eax
  MonitorReport *v18; // r14
  uint32_t v19; // eax
  MonitorReport *v20; // r14
  uint32_t v21; // eax
  MonitorReport *v22; // r14
  uint32_t v23; // eax
  std::allocator<char> v24; // [rsp+1Eh] [rbp-F2h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  std::string label_key; // [rsp+20h] [rbp-F0h] BYREF
  std::string label_value; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 holder:179";
  *(_QWORD *)(v1 + 16) = MatchMgr::monitorReport;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "DungeonMatch", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v24);
  MonitorReportUtils::ContextHolder::ContextHolder(
    (MonitorReportUtils::ContextHolder *const)(v1 + 48),
    &label_key,
    &label_value);
  std::string::~string(&label_key);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  v4 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  MatchUnitNum = MatchPoolBase::getMatchUnitNum(&this->dungeon_match_pool_);
  MonitorReport::addValue(v4, MONITOR_MATCH_UNIT_NUM, MatchUnitNum);
  v6 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  QueueSize = MatchPoolBase::getQueueSize(&this->dungeon_match_pool_);
  MonitorReport::addValue(v6, MONITOR_MATCH_QUEUE_NUM, QueueSize);
  MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v1 + 48));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "MpPlayMatch", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v24);
  MonitorReportUtils::ContextHolder::ContextHolder(
    (MonitorReportUtils::ContextHolder *const)(v1 + 48),
    &label_key,
    &label_value);
  std::string::~string(&label_key);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  v8 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v9 = MatchPoolBase::getMatchUnitNum(&this->mp_play_match_pool_);
  MonitorReport::addValue(v8, MONITOR_MATCH_UNIT_NUM, v9);
  v10 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v11 = MatchPoolBase::getQueueSize(&this->mp_play_match_pool_);
  MonitorReport::addValue(v10, MONITOR_MATCH_QUEUE_NUM, v11);
  MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v1 + 48));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "MechanicusMatch", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v24);
  MonitorReportUtils::ContextHolder::ContextHolder(
    (MonitorReportUtils::ContextHolder *const)(v1 + 48),
    &label_key,
    &label_value);
  std::string::~string(&label_key);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  v12 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v13 = MatchPoolBase::getMatchUnitNum(&this->mechanicus_match_pool_);
  MonitorReport::addValue(v12, MONITOR_MATCH_UNIT_NUM, v13);
  v14 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v15 = MatchPoolBase::getQueueSize(&this->mechanicus_match_pool_);
  MonitorReport::addValue(v14, MONITOR_MATCH_QUEUE_NUM, v15);
  MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v1 + 48));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "GeneralMatch", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v24);
  MonitorReportUtils::ContextHolder::ContextHolder(
    (MonitorReportUtils::ContextHolder *const)(v1 + 48),
    &label_key,
    &label_value);
  std::string::~string(&label_key);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  v16 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v17 = MatchPoolBase::getMatchUnitNum(&this->general_match_pool_);
  MonitorReport::addValue(v16, MONITOR_MATCH_UNIT_NUM, v17);
  v18 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v19 = MatchPoolBase::getQueueSize(&this->general_match_pool_);
  MonitorReport::addValue(v18, MONITOR_MATCH_QUEUE_NUM, v19);
  MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v1 + 48));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "GCGMatch", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v24);
  MonitorReportUtils::ContextHolder::ContextHolder(
    (MonitorReportUtils::ContextHolder *const)(v1 + 48),
    &label_key,
    &label_value);
  std::string::~string(&label_key);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  v20 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v21 = MatchPoolBase::getMatchUnitNum(&this->gcg_match_pool_);
  MonitorReport::addValue(v20, MONITOR_MATCH_UNIT_NUM, v21);
  v22 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v23 = MatchPoolBase::getQueueSize(&this->gcg_match_pool_);
  MonitorReport::addValue(v22, MONITOR_MATCH_QUEUE_NUM, v23);
  MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v1 + 48));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
