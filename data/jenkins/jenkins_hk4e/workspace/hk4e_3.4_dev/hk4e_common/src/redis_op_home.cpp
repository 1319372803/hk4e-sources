// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_home.cpp

// Line 23: range 000000000D49BF98-000000000D49CABF
int32_t __cdecl RedisOpHome::getHomeStatus(uint32_t uid, proto::HomeStatusRedisData *data, bool *is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  char v10[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 16 redis_mgr_ptr:26 96 32 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 32 12 redis_key:26 352 32 9 <unknown> 416 32 18 status_data_str:28 48"
                        "0 32 9 <unknown> 544 32 9 <unknown> 608 56 13 _tc_guard_:24";
  *(_QWORD *)(v3 + 16) = RedisOpHome::getHomeStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "getHomeStatus",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 608),
    (const std::string *)(v3 + 96),
    (const std::string *)(v3 + 160));
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( !std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::HomeStatusRedisData>(uid, (std::string *)(v3 + 288)) )
    {
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeStatus",
        26);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
      goto LABEL_28;
    }
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 416);
    v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGet(v7, 0xCu, (const std::string *)(v3 + 288), (std::string *)(v3 + 416)) )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeStatus",
        31);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 480),
        (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(v3 + 416) )
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 0;
        proto::HomeStatusRedisData::set_status(data, HOME_STATUS_OFFLINE);
        proto::HomeStatusRedisData::set_gameserver_id(data, 0);
        proto::HomeStatusRedisData::set_load_rand(data, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(data, v3 + 416) != 1 )
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "getHomeStatus",
            47);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[23])"ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_27;
        }
      }
      v6 = 0;
    }
LABEL_27:
    std::string::~string((void *)(v3 + 416));
LABEL_28:
    std::string::~string((void *)(v3 + 288));
    goto LABEL_29;
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_home.cpp",
    "getHomeStatus",
    26);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v6 = -1;
LABEL_29:
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 58: range 000000000D49CAC0-000000000D49DC04
__int64 __fastcall RedisOpHome::compareAndModifyHomeStatus(
        uint32_t uid,
        uint64_t last_load_rand,
        const proto::HomeStatusRedisData *new_data,
        proto::HomeStatusRedisData *cur_data)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  google::protobuf::uint64 rand; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  google::protobuf::uint64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  char v22[1168]; // [rsp+20h] [rbp-490h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1120LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 4 6 uid:57 96 8 9 <unknown> 128 8 9 <unknown> 160 8 17 l"
                        "ast_load_rand:57 192 16 16 redis_mgr_ptr:61 224 16 11 tran_ptr:64 256 32 9 <unknown> 320 32 9 <u"
                        "nknown> 384 32 9 <unknown> 448 32 12 redis_key:61 512 32 9 <unknown> 576 32 15 cur_data_str:65 6"
                        "40 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 15 new_data_str:96 896 32 9 <unkn"
                        "own> 960 32 9 <unknown> 1024 56 13 _tc_guard_:59";
  *(_QWORD *)(v4 + 16) = RedisOpHome::compareAndModifyHomeStatus;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -218959118;
  v6[536862747] = -218959118;
  v6[536862749] = -218959118;
  v6[536862751] = -218959118;
  v6[536862753] = -218103808;
  v6[536862754] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  *(_QWORD *)(v4 + 160) = last_load_rand;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 320),
    "compareAndModifyHomeStatus",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 256),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 1024),
    (const std::string *)(v4 + 256),
    (const std::string *)(v4 + 320));
  std::string::~string((void *)(v4 + 256));
  *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 320));
  *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 192),
    &ResourceBox::redis_mgr_ptr);
  if ( !std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 192)) )
  {
    *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 448);
    if ( RedisOpBase::getUidRedisKey<proto::HomeStatusRedisData>(*(_DWORD *)(v4 + 80), (std::string *)(v4 + 448)) )
    {
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "compareAndModifyHomeStatus",
        61);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 512),
        "get key for uid=%u failed",
        *(unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
      goto LABEL_43;
    }
    *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v4 + 224, v4 + 448);
    *(_QWORD *)(v4 + 224) = 0LL;
    *(_QWORD *)(v4 + 232) = 0LL;
    *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 576);
    v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGetWithTran(
           v8,
           0xCu,
           (const std::string *)(v4 + 448),
           (std::string *)(v4 + 576),
           (common::midb::GetAndSetTranPtr *)(v4 + 224)) )
    {
      *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "compareAndModifyHomeStatus",
        68);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v4 + 640),
        (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
      *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
LABEL_42:
      std::string::~string((void *)(v4 + 576));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v4 + 224));
LABEL_43:
      std::string::~string((void *)(v4 + 448));
      goto LABEL_44;
    }
    if ( (unsigned __int8)std::string::empty(v4 + 576) != 1 )
    {
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(cur_data, v4 + 576) != 1 )
      {
        *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "compareAndModifyHomeStatus",
          76);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v4 + 704),
          (const char (*)[32])"cur_data.ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
        *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_42;
      }
    }
    else
    {
      proto::HomeStatusRedisData::set_status(cur_data, HOME_STATUS_OFFLINE);
      proto::HomeStatusRedisData::set_gameserver_id(cur_data, 0);
      proto::HomeStatusRedisData::set_load_rand(cur_data, 0LL);
    }
    *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 768, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 768),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/redis_op_home.cpp",
      "compareAndModifyHomeStatus",
      88);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
           (common::milog::MiLogStream *const)(v4 + 768),
           (const char (*)[17])"last_load_rand: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v9,
            (const unsigned __int64 *)(v4 + 160));
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" redis load_rand: ");
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    rand = proto::HomeStatusRedisData::load_rand(cur_data);
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      rand = __asan_report_store8();
    *(_QWORD *)(v4 + 96) = rand;
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v4 + 96));
    v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" new load_rand: ");
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    v15 = proto::HomeStatusRedisData::load_rand(new_data);
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      v15 = __asan_report_store8();
    *(_QWORD *)(v4 + 128) = v15;
    v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v14,
            (const unsigned __int64 *)(v4 + 128));
    v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 80));
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
    *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -117901064;
    if ( proto::HomeStatusRedisData::load_rand(cur_data) == *(_QWORD *)(v4 + 160) )
    {
      *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 832);
      if ( !google::protobuf::MessageLite::SerializeToString(new_data, (std::string *)(v4 + 832)) )
      {
        *(_DWORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "compareAndModifyHomeStatus",
          99);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v4 + 896),
          (const char (*)[34])"new_data.SerializeToString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 896));
        *(_DWORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSetWithTran(
               v18,
               (const common::midb::GetAndSetTranPtr *)(v4 + 224),
               (const std::string *)(v4 + 448),
               (const std::string *)(v4 + 832)) )
        {
          *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "compareAndModifyHomeStatus",
            104);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v4 + 960),
            (const char (*)[37])"redis_mgr_ptr->cmdSetWithTran failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 960));
          *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v7 = 0;
        }
      }
      std::string::~string((void *)(v4 + 832));
    }
    else
    {
      v7 = 5001;
    }
    goto LABEL_42;
  }
  *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 384, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 384),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_home.cpp",
    "compareAndModifyHomeStatus",
    61);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 384), "redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
  *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_44:
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 1024));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8084) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1120LL, v22);
  }
  return v7;
};

// Line 113: range 000000000D49DC06-000000000D49EB9F
__int64 __fastcall RedisOpHome::compareAndDeleteHomeStatus(uint32_t uid, uint64_t last_load_rand)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  google::protobuf::uint64 rand; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  char v16[1072]; // [rsp+10h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 uid:112 80 8 9 <unknown> 112 8 18 last_load_rand:112"
                        " 144 16 17 redis_mgr_ptr:116 176 16 12 tran_ptr:119 208 32 9 <unknown> 272 32 9 <unknown> 336 32"
                        " 9 <unknown> 400 32 13 redis_key:116 464 32 9 <unknown> 528 32 16 cur_data_str:120 592 32 9 <unk"
                        "nown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 40 16 redis_status:128 928 56"
                        " 14 _tc_guard_:114";
  *(_QWORD *)(v2 + 16) = RedisOpHome::compareAndDeleteHomeStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862747] = -234881024;
  v4[536862748] = -218959118;
  v4[536862750] = -218103808;
  v4[536862751] = -202116109;
  *(_DWORD *)(v2 + 64) = uid;
  *(_QWORD *)(v2 + 112) = last_load_rand;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "compareAndDeleteHomeStatus",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 208),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 928),
    (const std::string *)(v2 + 208),
    (const std::string *)(v2 + 272));
  std::string::~string((void *)(v2 + 208));
  *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 272));
  *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "compareAndDeleteHomeStatus",
      116);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 336), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 400);
    if ( RedisOpBase::getUidRedisKey<proto::HomeStatusRedisData>(*(_DWORD *)(v2 + 64), (std::string *)(v2 + 400)) )
    {
      *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "compareAndDeleteHomeStatus",
        116);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 464),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
      *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 176, v2 + 400);
      *(_QWORD *)(v2 + 176) = 0LL;
      *(_QWORD *)(v2 + 184) = 0LL;
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 528);
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v6,
             0xCu,
             (const std::string *)(v2 + 400),
             (std::string *)(v2 + 528),
             (common::midb::GetAndSetTranPtr *)(v2 + 176)) )
      {
        *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 592),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "compareAndDeleteHomeStatus",
          123);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 592),
          (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
        *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v7 = ((v2 + 848) >> 3) + 2147450880;
        *(_DWORD *)v7 = 0;
        *(_BYTE *)(v7 + 4) = 0;
        proto::HomeStatusRedisData::HomeStatusRedisData((proto::HomeStatusRedisData *const)(v2 + 848));
        if ( (unsigned __int8)std::string::empty(v2 + 528) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 848, v2 + 528) != 1 )
        {
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "compareAndDeleteHomeStatus",
            133);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 656),
            (const char (*)[36])"redis_status.ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/redis_op_home.cpp",
            "compareAndDeleteHomeStatus",
            139);
          v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 (common::milog::MiLogStream *const)(v2 + 720),
                 (const char (*)[17])"last_load_rand: ");
          v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v8,
                 (const unsigned __int64 *)(v2 + 112));
          v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v9,
                  (const char (*)[19])" redis load_rand: ");
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
          rand = proto::HomeStatusRedisData::load_rand((const proto::HomeStatusRedisData *const)(v2 + 848));
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
            rand = __asan_report_store8();
          *(_QWORD *)(v2 + 80) = rand;
          v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v10,
                  (const unsigned __int64 *)(v2 + 80));
          v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
          if ( proto::HomeStatusRedisData::load_rand((const proto::HomeStatusRedisData *const)(v2 + 848)) == *(_QWORD *)(v2 + 112) )
          {
            v14 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdDelWithTran(
                   v14,
                   (const common::midb::GetAndSetTranPtr *)(v2 + 176),
                   (const std::string *)(v2 + 400)) )
            {
              *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 784, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 784),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_home.cpp",
                "compareAndDeleteHomeStatus",
                148);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[37])"redis_mgr_ptr->cmdDelWithTran failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
              *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
          else
          {
            v5 = 5001;
          }
        }
        proto::HomeStatusRedisData::~HomeStatusRedisData((proto::HomeStatusRedisData *const)(v2 + 848));
      }
      std::string::~string((void *)(v2 + 528));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 176));
    }
    std::string::~string((void *)(v2 + 400));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 928));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 156: range 000000000D49EBA0-000000000D49F6D7
__int64 __fastcall RedisOpHome::getHomeBriefData(
        uint32_t uid,
        proto::HomeBriefDataRedisData *home_brief_data,
        unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  char v12[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:155 96 16 17 redis_mgr_ptr:158 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:158 384 32 9 <unknown> 448 32 12 dat"
                        "a_str:160 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:157";
  *(_QWORD *)(v3 + 16) = RedisOpHome::getHomeBriefData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  *(_DWORD *)(v3 + 80) = uid;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 192),
    "getHomeBriefData",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 640),
    (const std::string *)(v3 + 128),
    (const std::string *)(v3 + 192));
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( !std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 96)) )
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::HomeBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 320)) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeBriefData",
        158);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 384),
        "get key for uid=%u failed",
        *(unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
      goto LABEL_28;
    }
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 448);
    v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGet(v7, 0xDu, (const std::string *)(v3 + 320), (std::string *)(v3 + 448)) )
    {
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeBriefData",
        163);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
             (common::milog::MiLogStream *const)(v3 + 512),
             (const char (*)[15])"cmdGet failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(v3 + 448) != 1 )
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(home_brief_data, v3 + 448) != 1 )
        {
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "getHomeBriefData",
            172);
          v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 (common::milog::MiLogStream *const)(v3 + 576),
                 (const char (*)[24])"ParseFromString failed ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v3 + 448));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_27;
        }
      }
      else
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 0;
      }
      v6 = 0;
    }
LABEL_27:
    std::string::~string((void *)(v3 + 448));
LABEL_28:
    std::string::~string((void *)(v3 + 320));
    goto LABEL_29;
  }
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_home.cpp",
    "getHomeBriefData",
    158);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v6 = -1;
LABEL_29:
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 640));
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 185: range 000000000D49F6D8-000000000D4A055D
int32_t __cdecl RedisOpHome::getHomeBriefDataBatch(
        const std::vector<unsigned int> *uid_vec,
        std::vector<proto::HomeBriefDataRedisData> *home_brief_data_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::string *v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<std::string>::size_type v16; // r14
  common::milog::MiLogStream *v17; // r14
  std::vector<std::string>::size_type v18; // rax
  std::vector<unsigned int>::size_type v19; // rdx
  std::vector<std::string>::reference v20; // rax
  std::vector<std::string>::reference v21; // rax
  uint32_t i; // [rsp+2Ch] [rbp-3A4h]
  proto::HomeBriefDataRedisData *brief_redis_data; // [rsp+38h] [rbp-398h]
  char v25[912]; // [rsp+40h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:188 96 8 15 __for_begin:188 128 8 13 __for_end:1"
                        "88 160 8 9 <unknown> 192 24 17 redis_key_vec:187 256 24 19 redis_value_vec:199 320 32 9 <unknown"
                        "> 384 32 9 <unknown> 448 32 11 key_str:190 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unkno"
                        "wn> 704 32 9 <unknown> 768 56 14 _tc_guard_:186";
  *(_QWORD *)(v3 + 16) = RedisOpHome::getHomeBriefDataBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 384),
    "getHomeBriefDataBatch",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 320),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
    (const std::string *)(v3 + 320),
    (const std::string *)(v3 + 384));
  std::string::~string((void *)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 384));
  *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 192) >> 3) + 2147450880;
  *(_WORD *)v6 = 0;
  *(_BYTE *)(v6 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(uid_vec);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(uid_vec);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
  {
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = v9;
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 448);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 80);
    if ( RedisOpBase::getUidRedisKey<proto::HomeBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 448)) )
    {
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeBriefDataBatch",
        193);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[23])"getUidRedisKey failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      v12 = std::move<std::string &>((std::string *)(v3 + 448));
      std::vector<std::string>::emplace_back<std::string>((std::vector<std::string> *const)(v3 + 192), v12, v12);
      v11 = 1;
    }
    std::string::~string((void *)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    if ( v11 != 1 )
    {
      v13 = 0;
      goto LABEL_25;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
  }
  v13 = 1;
LABEL_25:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    v14 = ((v3 + 256) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 256));
    v15 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(
           v15,
           0xDu,
           (const std::vector<std::string> *)(v3 + 192),
           (std::vector<std::string> *)(v3 + 256)) )
    {
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeBriefDataBatch",
        202);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 576),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      v16 = std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 256));
      if ( v16 == std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 192)) )
      {
        v19 = std::vector<unsigned int>::size(uid_vec);
        std::vector<proto::HomeBriefDataRedisData>::resize(home_brief_data_vec, v19);
        for ( i = 0; ; ++i )
        {
          if ( i >= std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 256)) )
          {
            v2 = 0;
            goto LABEL_45;
          }
          brief_redis_data = std::vector<proto::HomeBriefDataRedisData>::operator[](home_brief_data_vec, i);
          v20 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 256), i);
          if ( (unsigned __int8)std::string::empty(v20) != 1 )
          {
            v21 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 256), i);
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(brief_redis_data, v21) != 1 )
              break;
          }
        }
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "getHomeBriefDataBatch",
          222);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)(v3 + 704),
          (const char (*)[23])"ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "getHomeBriefDataBatch",
          208);
        v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[46])"redis_value_vec should equals redis_key_vec: ");
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v18 = std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 256));
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          v18 = __asan_report_store8();
        *(_QWORD *)(v3 + 160) = v18;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v17,
          (const unsigned __int64 *)(v3 + 160));
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
    }
LABEL_45:
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 256));
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 231: range 000000000D4A055E-000000000D4A0FF2
__int64 __fastcall RedisOpHome::setHomeBriefData(uint32_t uid, const proto::HomeBriefDataRedisData *home_brief_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  char v10[784]; // [rsp+10h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:230 96 16 17 redis_mgr_ptr:233 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:233 384 32 9 <unknown> 448 32 12 dat"
                        "a_str:235 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:232";
  *(_QWORD *)(v2 + 16) = RedisOpHome::setHomeBriefData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "setHomeBriefData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 640),
    (const std::string *)(v2 + 128),
    (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 96)) )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "setHomeBriefData",
      233);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::HomeBriefDataRedisData>(*(_DWORD *)(v2 + 80), (std::string *)(v2 + 320)) )
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "setHomeBriefData",
        233);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 384),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 448);
      if ( !google::protobuf::MessageLite::SerializeToString(home_brief_data, (std::string *)(v2 + 448)) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "setHomeBriefData",
          238);
        v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               (common::milog::MiLogStream *const)(v2 + 512),
               (const char (*)[26])"SerializeToString failed ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 448));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSet(v7, 0xDu, (const std::string *)(v2 + 320), (const std::string *)(v2 + 448)) )
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "setHomeBriefData",
            244);
          v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                 (common::milog::MiLogStream *const)(v2 + 576),
                 (const char (*)[15])"cmdSet failed ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      std::string::~string((void *)(v2 + 448));
    }
    std::string::~string((void *)(v2 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 640));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 251: range 000000000D4A0FF4-000000000D4A1F27
int32_t __cdecl RedisOpHome::getHomeBlueprintBriefDataBatch(
        const std::set<std::string> *share_code_set,
        std::vector<proto::HomeBlueprintBriefRedisData> *brief_data_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // r15d
  std::map<std::string,std::string>::mapped_type *v9; // rax
  int v10; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rax
  int v14; // r15d
  std::vector<proto::HomeBlueprintBriefRedisData>::value_type *v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // edx
  const std::string *share_code; // [rsp+28h] [rbp-3F8h]
  std::map<std::string,std::string> *__for_range_0; // [rsp+30h] [rbp-3F0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::reference v21; // [rsp+38h] [rbp-3E8h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *redis_value; // [rsp+48h] [rbp-3D8h]
  char v23[976]; // [rsp+50h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:259 112 8 13 __for_end:259 144 8 15 __f"
                        "or_begin:274 176 8 13 __for_end:274 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400"
                        " 32 11 key_str:261 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <unknown> 656 48 16 redis_kv_m"
                        "ap:258 736 56 14 _tc_guard_:252 832 56 14 brief_data:280";
  *(_QWORD *)(v3 + 16) = RedisOpHome::getHomeBlueprintBriefDataBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61953;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862742] = -218959118;
  v5[536862744] = -234881024;
  v5[536862745] = -218959118;
  v5[536862747] = -218103808;
  v5[536862748] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "getHomeBlueprintBriefDataBatch",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 736),
    (const std::string *)(v3 + 208),
    (const std::string *)(v3 + 272));
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 272));
  *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "getHomeBlueprintBriefDataBatch",
      255);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 336),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    v6 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 656));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<std::string>::iterator *)(v3 + 80) = std::set<std::string>::begin(share_code_set);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<std::string>::iterator *)(v3 + 112) = std::set<std::string>::end(share_code_set);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 80),
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 112)) )
    {
      share_code = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 400);
      if ( RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintBriefRedisData>(
             share_code,
             (std::string *)(v3 + 400)) )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "getHomeBlueprintBriefDataBatch",
          264);
        v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               (common::milog::MiLogStream *const)(v3 + 464),
               (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, share_code);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::map<std::string,std::string>::operator[](
               (std::map<std::string,std::string> *const)(v3 + 656),
               (const std::map<std::string,std::string>::key_type *)(v3 + 400));
        std::string::operator=(v9, &unk_1A817780);
        v8 = 1;
      }
      std::string::~string((void *)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
    }
    v10 = 1;
LABEL_23:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
    {
      v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdMget(v11, 0x13u, (std::map<std::string,std::string> *)(v3 + 656)) )
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "getHomeBlueprintBriefDataBatch",
          271);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v3 + 528),
          (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        __for_range_0 = (std::map<std::string,std::string> *)(v3 + 656);
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 144) = std::map<std::string,std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 176) = std::map<std::string,std::string>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 144),
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 176)) )
        {
          v21 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 144));
          std::get<0ul,std::string const,std::string>(v21);
          redis_value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v21);
          if ( (unsigned __int8)std::string::empty(redis_value) )
          {
            v12 = 0;
          }
          else
          {
            v13 = ((v3 + 832) >> 3) + 2147450880;
            *(_DWORD *)v13 = 0;
            *(_WORD *)(v13 + 4) = 0;
            *(_BYTE *)(v13 + 6) = 0;
            proto::HomeBlueprintBriefRedisData::HomeBlueprintBriefRedisData((proto::HomeBlueprintBriefRedisData *const)(v3 + 832));
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 832, redis_value) != 1 )
            {
              *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 592, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 592),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_home.cpp",
                "getHomeBlueprintBriefDataBatch",
                283);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[23])"ParseFromString failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
              *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v14 = 0;
            }
            else
            {
              v15 = std::move<proto::HomeBlueprintBriefRedisData &>((proto::HomeBlueprintBriefRedisData *)(v3 + 832));
              std::vector<proto::HomeBlueprintBriefRedisData>::push_back(brief_data_vec, v15);
              v14 = 1;
            }
            proto::HomeBlueprintBriefRedisData::~HomeBlueprintBriefRedisData((proto::HomeBlueprintBriefRedisData *const)(v3 + 832));
            if ( v14 == 1 )
              v12 = 2;
            else
              v12 = 1;
          }
          v16 = ((v3 + 832) >> 3) + 2147450880;
          *(_DWORD *)v16 = -117901064;
          *(_WORD *)(v16 + 4) = -1800;
          *(_BYTE *)(v16 + 6) = -8;
          if ( v12 && v12 != 2 )
          {
            v17 = 0;
            goto LABEL_49;
          }
          std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 144));
        }
        v17 = 1;
LABEL_49:
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v17 == 1 )
          v2 = 0;
      }
    }
    std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 656));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 736));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v2;
};

// Line 292: range 000000000D4A1F28-000000000D4A2941
int32_t __cdecl RedisOpHome::setHomeBlueprintBriefData(const proto::HomeBlueprintBriefRedisData *brief_data)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  const std::string *share_code; // [rsp+18h] [rbp-2D8h]
  char v11[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(672LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256"
                        " 32 13 redis_key:299 320 32 9 <unknown> 384 32 15 redis_value:306 448 32 9 <unknown> 512 32 9 <u"
                        "nknown> 576 56 14 _tc_guard_:293";
  *(_QWORD *)(v1 + 16) = RedisOpHome::setHomeBlueprintBriefData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -218103808;
  v3[536862740] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 128),
    "setHomeBlueprintBriefData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 576),
    (const std::string *)(v1 + 64),
    (const std::string *)(v1 + 128));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 128));
  *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "setHomeBlueprintBriefData",
      296);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 192),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 256);
    share_code = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](brief_data);
    if ( RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintBriefRedisData>(share_code, (std::string *)(v1 + 256)) )
    {
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "setHomeBlueprintBriefData",
        303);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, share_code);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v1 + 384);
      if ( !google::protobuf::MessageLite::SerializeToString(brief_data, (std::string *)(v1 + 384)) )
      {
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "setHomeBlueprintBriefData",
          309);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v1 + 448),
               (const char (*)[48])"brief data SerializeToString failed share_code:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, share_code);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSet(v7, 0x13u, (const std::string *)(v1 + 256), (const std::string *)(v1 + 384)) )
        {
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "setHomeBlueprintBriefData",
            314);
          v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 (common::milog::MiLogStream *const)(v1 + 512),
                 (const char (*)[27])"cmdSet failed, share_code:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, share_code);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
        }
        else
        {
          v4 = 0;
        }
      }
      std::string::~string((void *)(v1 + 384));
    }
    std::string::~string((void *)(v1 + 256));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 576));
  result = v4;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 321: range 000000000D4A2942-000000000D4A313F
int32_t __cdecl RedisOpHome::removeHomeBlueprintBriefData(const std::string *share_code)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  char v8[592]; // [rsp+10h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 13 redis_key:328 320 32 9 <unknown> 384 32 9 <unknown> 448 56 14 _tc_guard_:322";
  *(_QWORD *)(v1 + 16) = RedisOpHome::removeHomeBlueprintBriefData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218103808;
  v3[536862736] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 128),
    "removeHomeBlueprintBriefData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 448),
    (const std::string *)(v1 + 64),
    (const std::string *)(v1 + 128));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 128));
  *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "removeHomeBlueprintBriefData",
      325);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 192),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 256);
    if ( RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintBriefRedisData>(share_code, (std::string *)(v1 + 256)) )
    {
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "removeHomeBlueprintBriefData",
        331);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, share_code);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v6, 0x13u, (const std::string *)(v1 + 256)) )
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "removeHomeBlueprintBriefData",
          336);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v1 + 384),
          (const char (*)[30])"redis_mgr_ptr->cmdDel  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 256));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 448));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 343: range 000000000D4A3140-000000000D4A3A62
int32_t __cdecl RedisOpHome::getHomeBlueprintDetailData(
        const std::string *share_code,
        proto::HomeBlueprintDetailRedisData *detail_data,
        bool *is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  char v11[656]; // [rsp+20h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 11 key_str:345 "
                        "256 32 9 <unknown> 320 32 13 value_str:351 384 32 9 <unknown> 448 32 9 <unknown> 512 56 14 _tc_guard_:344";
  *(_QWORD *)(v3 + 16) = RedisOpHome::getHomeBlueprintDetailData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "getHomeBlueprintDetailData",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 512),
    (const std::string *)(v3 + 64),
    (const std::string *)(v3 + 128));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v3 + 192);
  if ( !RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintDetailRedisData>(share_code, (std::string *)(v3 + 192)) )
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGet(v8, 0x13u, (const std::string *)(v3 + 192), (std::string *)(v3 + 320)) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "getHomeBlueprintDetailData",
        354);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 384),
        (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(v3 + 320) )
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(detail_data, v3 + 320) != 1 )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "getHomeBlueprintDetailData",
            366);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[23])"ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
          goto LABEL_23;
        }
      }
      v7 = 0;
    }
LABEL_23:
    std::string::~string((void *)(v3 + 320));
    goto LABEL_24;
  }
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_home.cpp",
    "getHomeBlueprintDetailData",
    348);
  v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         (common::milog::MiLogStream *const)(v3 + 256),
         (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, share_code);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_24:
  std::string::~string((void *)(v3 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 512));
  result = v7;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 374: range 000000000D4A3A64-000000000D4A447D
int32_t __cdecl RedisOpHome::setHomeBlueprintDetailData(const proto::HomeBlueprintDetailRedisData *detail_data)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  const std::string *share_code; // [rsp+18h] [rbp-2D8h]
  char v11[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(672LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256"
                        " 32 13 redis_key:381 320 32 9 <unknown> 384 32 15 redis_value:388 448 32 9 <unknown> 512 32 9 <u"
                        "nknown> 576 56 14 _tc_guard_:375";
  *(_QWORD *)(v1 + 16) = RedisOpHome::setHomeBlueprintDetailData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -218103808;
  v3[536862740] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 128),
    "setHomeBlueprintDetailData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 576),
    (const std::string *)(v1 + 64),
    (const std::string *)(v1 + 128));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 128));
  *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "setHomeBlueprintDetailData",
      378);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 192),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 256);
    share_code = proto::HomeBlueprintDetailRedisData::share_code[abi:cxx11](detail_data);
    if ( RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintDetailRedisData>(
           share_code,
           (std::string *)(v1 + 256)) )
    {
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "setHomeBlueprintDetailData",
        385);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, share_code);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v1 + 384);
      if ( !google::protobuf::MessageLite::SerializeToString(detail_data, (std::string *)(v1 + 384)) )
      {
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "setHomeBlueprintDetailData",
          391);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v1 + 448),
               (const char (*)[49])"detail data SerializeToString failed share_code:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, share_code);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSet(v7, 0x13u, (const std::string *)(v1 + 256), (const std::string *)(v1 + 384)) )
        {
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_home.cpp",
            "setHomeBlueprintDetailData",
            396);
          v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 (common::milog::MiLogStream *const)(v1 + 512),
                 (const char (*)[27])"cmdSet failed, share_code:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, share_code);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
        }
        else
        {
          v4 = 0;
        }
      }
      std::string::~string((void *)(v1 + 384));
    }
    std::string::~string((void *)(v1 + 256));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 576));
  result = v4;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 403: range 000000000D4A447E-000000000D4A4C7B
int32_t __cdecl RedisOpHome::removeHomeBlueprintDetailData(const std::string *share_code)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  char v8[592]; // [rsp+10h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 13 redis_key:410 320 32 9 <unknown> 384 32 9 <unknown> 448 56 14 _tc_guard_:404";
  *(_QWORD *)(v1 + 16) = RedisOpHome::removeHomeBlueprintDetailData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218103808;
  v3[536862736] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 128),
    "removeHomeBlueprintDetailData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 448),
    (const std::string *)(v1 + 64),
    (const std::string *)(v1 + 128));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 128));
  *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_home.cpp",
      "removeHomeBlueprintDetailData",
      407);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 192),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 256);
    if ( RedisOpBase::getCommonCustomRedisKey<proto::HomeBlueprintDetailRedisData>(
           share_code,
           (std::string *)(v1 + 256)) )
    {
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_home.cpp",
        "removeHomeBlueprintDetailData",
        413);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[44])"getCommonCustomRedisKey failed, share_code:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, share_code);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v6, 0x13u, (const std::string *)(v1 + 256)) )
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_home.cpp",
          "removeHomeBlueprintDetailData",
          418);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v1 + 384),
          (const char (*)[30])"redis_mgr_ptr->cmdDel  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 256));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 448));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 422: range 000000000D4A4E1D-000000000D4A4E31
void __cdecl GLOBAL__sub_I_redis_op_home_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 422: range 000000000D4A4C7C-000000000D4A4E1C
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  const char *v9; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/redis_op_home.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v8 = 1;
        v9 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
