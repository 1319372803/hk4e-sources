// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_log_helper.cpp

// Line 23: range 000000000D79FDAC-000000000D7A02AB
int32_t __cdecl MatchLogHelper::printStatLog(std::shared_ptr<google::protobuf::Message> *p_body_ptr)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  time_t v8; // rax
  std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  MatchService *v12; // rax
  int32_t result; // eax
  StatLogMgr *stat_log_mgr_ptr; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-150h] BYREF
  char v16[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 12 action_id:25 48 4 16 sub_action_id:26 64 16 15 head_log_ptr:24 96 32 11 trans_no:27 16"
                        "0 64 11 stat_log:47";
  *(_QWORD *)(v1 + 16) = MatchLogHelper::printStatLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862727] = -202116109;
  common::tools::perf::make_shared<proto_log::MatchLogHead>();
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  std::string::basic_string(v1 + 96);
  if ( StatLogUtils::getContextData((uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (std::string *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_log_helper.cpp",
      "printStatLog",
      30);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v15,
      (const char (*)[30])"[MATCH] getContextData failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else if ( !*(_DWORD *)(v1 + 32) || !proto_log::MatchActionType_IsValid(*(_DWORD *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_log_helper.cpp",
      "printStatLog",
      37);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"[MATCH] invalid action_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v8 = time(0LL);
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v15, v8);
    proto_log::MatchLogHead::set_time(v7, (std::string *)&v15);
    std::string::~string(&v15);
    v9 = std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    proto_log::MatchLogHead::set_action_id(v9, *(_DWORD *)(v1 + 32));
    v10 = std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v11 = proto_log::MatchActionType_Name[abi:cxx11]((proto_log::MatchActionType)*(_DWORD *)(v1 + 32));
    proto_log::MatchLogHead::set_action_name(v10, v11);
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_QWORD *)(v1 + 168) = 0LL;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 184) = 0LL;
    *(_QWORD *)(v1 + 192) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_QWORD *)(v1 + 216) = 0LL;
    std::shared_ptr<google::protobuf::Message>::operator=<proto_log::MatchLogHead>(
      (std::shared_ptr<google::protobuf::Message> *const)(v1 + 160),
      (const std::shared_ptr<proto_log::MatchLogHead> *)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::operator=(
      (std::shared_ptr<google::protobuf::Message> *const)(v1 + 192),
      p_body_ptr);
    v12 = ServiceBox::findService<MatchService>();
    stat_log_mgr_ptr = ServiceBase::findStatLogMgr(v12, 0x1Bu);
    if ( stat_log_mgr_ptr )
    {
      StatLogMgr::pushStatLog(stat_log_mgr_ptr, (const StatLog *)(v1 + 160));
      v4 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_log_helper.cpp",
        "printStatLog",
        54);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"findStatLogMgr fail");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v4 = -1;
    }
    StatLog::~StatLog((StatLog *const)(v1 + 160));
  }
  std::string::~string((void *)(v1 + 96));
  std::shared_ptr<proto_log::MatchLogHead>::~shared_ptr((std::shared_ptr<proto_log::MatchLogHead> *const)(v1 + 64));
  result = v4;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
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
