// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_online_status.cpp

// Line 23: range 000000000CE01632-000000000CE02119
int32_t __cdecl RedisOpPlayerStatus::getPlayerStatus(uint32_t uid, proto::PlayerStatusRedisData *data, bool *is_exist)
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
  *(_QWORD *)(v3 + 16) = RedisOpPlayerStatus::getPlayerStatus;
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
    "getPlayerStatus",
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
    if ( RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_online_status.cpp",
        "getPlayerStatus",
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
    if ( common::midb::RedisMgr::cmdGet(v7, 1u, (const std::string *)(v3 + 288), (std::string *)(v3 + 416)) )
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
        "src/redis_op_online_status.cpp",
        "getPlayerStatus",
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
            "src/redis_op_online_status.cpp",
            "getPlayerStatus",
            44);
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
    "src/redis_op_online_status.cpp",
    "getPlayerStatus",
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

// Line 53: range 000000000CE0211A-000000000CE02E80
int32_t __cdecl RedisOpPlayerStatus::getPlayerStatus(
        const std::vector<unsigned int> *uid_vec,
        std::map<unsigned int,proto::PlayerStatusRedisData> *uid_data_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  const char (*v9)[1]; // r8
  int v10; // r15d
  int v11; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  int v16; // r15d
  int v17; // edx
  uint32_t uid; // [rsp+2Ch] [rbp-354h]
  std::string *value; // [rsp+40h] [rbp-340h]
  proto::PlayerStatusRedisData *status_redis_data; // [rsp+48h] [rbp-338h]
  char v22[816]; // [rsp+50h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 6 uid:73 80 8 14 __for_begin:57 112 8 12 __for_end:57 "
                        "144 8 14 __for_begin:73 176 8 12 __for_end:73 208 32 9 <unknown> 272 32 9 <unknown> 336 32 10 ke"
                        "y_str:59 400 32 9 <unknown> 464 32 10 key_str:75 528 32 9 <unknown> 592 48 15 redis_kv_map:55 67"
                        "2 56 13 _tc_guard_:54";
  *(_QWORD *)(v3 + 16) = RedisOpPlayerStatus::getPlayerStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = 61956;
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
  v5[536862740] = -218959118;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "getPlayerStatus",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 672),
    (const std::string *)(v3 + 208),
    (const std::string *)(v3 + 272));
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 272));
  *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 592) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 592));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 80) = std::vector<unsigned int>::begin(uid_vec);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::end(uid_vec);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112)) )
  {
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    uid = *v8;
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 336);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(uid, (std::string *)(v3 + 336)) )
    {
      v2 = -1;
      v10 = 0;
    }
    else
    {
      std::map<std::string,std::string>::emplace<std::string&,char const(&)[1]>(
        (std::map<std::string,std::string> *const)(v3 + 592),
        (std::string *)(v3 + 336),
        (const char (*)[1])byte_1A26D460,
        (std::string *)(v3 + 336),
        v9);
      v10 = 1;
    }
    std::string::~string((void *)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    if ( v10 != 1 )
    {
      v11 = 0;
      goto LABEL_19;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
  }
  v11 = 1;
LABEL_19:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    v12 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(v12, 1u, (std::map<std::string,std::string> *)(v3 + 592)) )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_online_status.cpp",
        "getPlayerStatus",
        69);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 400),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(uid_vec);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(uid_vec);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        v14 = (int *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64);
        *(_DWORD *)(v3 + 64) = v15;
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        std::string::basic_string(v3 + 464);
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(*(_DWORD *)(v3 + 64), (std::string *)(v3 + 464)) )
        {
          v2 = -1;
          v16 = 0;
        }
        else
        {
          value = std::map<std::string,std::string>::operator[](
                    (std::map<std::string,std::string> *const)(v3 + 592),
                    (const std::map<std::string,std::string>::key_type *)(v3 + 464));
          if ( (unsigned __int8)std::string::empty(value) != 1
            && (status_redis_data = std::map<unsigned int,proto::PlayerStatusRedisData>::operator[](
                                      uid_data_map,
                                      (const std::map<unsigned int,proto::PlayerStatusRedisData>::key_type *)(v3 + 64)),
                (unsigned __int8)google::protobuf::MessageLite::ParseFromString(status_redis_data, value) ^ 1) )
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
              "src/redis_op_online_status.cpp",
              "getPlayerStatus",
              87);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              (common::milog::MiLogStream *const)(v3 + 528),
              (const char (*)[23])"ParseFromString failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 0;
          }
          else
          {
            v16 = 1;
          }
        }
        std::string::~string((void *)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        if ( v16 != 1 )
        {
          v17 = 0;
          goto LABEL_48;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
      }
      v17 = 1;
LABEL_48:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v17 == 1 )
        v2 = 0;
    }
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 592));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 672));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
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
  }
  return v2;
};

// Line 98: range 000000000CE02E82-000000000CE0401B
__int64 __fastcall RedisOpPlayerStatus::compareAndModifyPlayerStatus(
        uint32_t uid,
        uint64_t last_login_rand,
        const proto::PlayerStatusRedisData *new_data)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  google::protobuf::uint64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  google::protobuf::uint64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  char v21[1232]; // [rsp+20h] [rbp-4D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1184LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 32 1 9 <unknown> 48 1 9 <unknown> 64 4 6 uid:97 80 8 9 <unknown> 112 8 9 <unknown> 144 8 18 l"
                        "ast_login_rand:97 176 16 17 redis_mgr_ptr:101 208 16 12 tran_ptr:104 240 32 9 <unknown> 304 32 9"
                        " <unknown> 368 32 9 <unknown> 432 32 13 redis_key:101 496 32 9 <unknown> 560 32 16 cur_data_str:"
                        "105 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 16 new_data_str:132 880 32 9"
                        " <unknown> 944 32 9 <unknown> 1008 40 16 redis_status:113 1088 56 13 _tc_guard_:99";
  *(_QWORD *)(v3 + 16) = RedisOpPlayerStatus::compareAndModifyPlayerStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -234881024;
  v5[536862753] = -218959118;
  v5[536862755] = -218103808;
  v5[536862756] = -202116109;
  *(_DWORD *)(v3 + 64) = uid;
  *(_QWORD *)(v3 + 144) = last_login_rand;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 304),
    "compareAndModifyPlayerStatus",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 1088),
    (const std::string *)(v3 + 240),
    (const std::string *)(v3 + 304));
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 304));
  *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 176),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 176)) )
  {
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_online_status.cpp",
      "compareAndModifyPlayerStatus",
      101);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 368), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 432);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(*(_DWORD *)(v3 + 64), (std::string *)(v3 + 432)) )
    {
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 111) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_online_status.cpp",
        "compareAndModifyPlayerStatus",
        101);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 496),
        "get key for uid=%u failed",
        *(unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_WORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 208, v3 + 432);
      *(_QWORD *)(v3 + 208) = 0LL;
      *(_QWORD *)(v3 + 216) = 0LL;
      *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 560);
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v7,
             1u,
             (const std::string *)(v3 + 432),
             (std::string *)(v3 + 560),
             (common::midb::GetAndSetTranPtr *)(v3 + 208)) )
      {
        *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 624, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 624),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_online_status.cpp",
          "compareAndModifyPlayerStatus",
          108);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v3 + 624),
          (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
        *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v8 = ((v3 + 1008) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_BYTE *)(v8 + 4) = 0;
        proto::PlayerStatusRedisData::PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v3 + 1008));
        if ( (unsigned __int8)std::string::empty(v3 + 560) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 1008, v3 + 560) != 1 )
        {
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_online_status.cpp",
            "compareAndModifyPlayerStatus",
            118);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v3 + 688),
            (const char (*)[36])"redis_status.ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 111) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 752, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 752),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/redis_op_online_status.cpp",
            "compareAndModifyPlayerStatus",
            124);
          v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 (common::milog::MiLogStream *const)(v3 + 752),
                 (const char (*)[18])"last_login_rand: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v9,
                  (const unsigned __int64 *)(v3 + 144));
          v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v10,
                  (const char (*)[20])" redis login_rand: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          v12 = proto::PlayerStatusRedisData::login_rand((const proto::PlayerStatusRedisData *const)(v3 + 1008));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v12 = __asan_report_store8();
          *(_QWORD *)(v3 + 80) = v12;
          v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v11,
                  (const unsigned __int64 *)(v3 + 80));
          v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v13,
                  (const char (*)[18])" new login_rand: ");
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
          v15 = proto::PlayerStatusRedisData::login_rand(new_data);
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
            v15 = __asan_report_store8();
          *(_QWORD *)(v3 + 112) = v15;
          v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v14,
                  (const unsigned __int64 *)(v3 + 112));
          v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
          if ( proto::PlayerStatusRedisData::login_rand((const proto::PlayerStatusRedisData *const)(v3 + 1008)) == *(_QWORD *)(v3 + 144) )
          {
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
            std::string::basic_string(v3 + 816);
            if ( !google::protobuf::MessageLite::SerializeToString(new_data, (std::string *)(v3 + 816)) )
            {
              *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 880, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 880),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_online_status.cpp",
                "compareAndModifyPlayerStatus",
                135);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v3 + 880),
                (const char (*)[34])"new_data.SerializeToString failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
              *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v18 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
              if ( common::midb::RedisMgr::cmdSetWithTran(
                     v18,
                     (const common::midb::GetAndSetTranPtr *)(v3 + 208),
                     (const std::string *)(v3 + 432),
                     (const std::string *)(v3 + 816)) )
              {
                *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 944, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 944),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/redis_op_online_status.cpp",
                  "compareAndModifyPlayerStatus",
                  140);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v3 + 944),
                  (const char (*)[37])"redis_mgr_ptr->cmdSetWithTran failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
                *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                v6 = 0;
              }
            }
            std::string::~string((void *)(v3 + 816));
          }
          else
          {
            v6 = 5001;
          }
        }
        proto::PlayerStatusRedisData::~PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v3 + 1008));
      }
      std::string::~string((void *)(v3 + 560));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v3 + 208));
    }
    std::string::~string((void *)(v3 + 432));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 176));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 1088));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1184LL, v21);
  }
  return v6;
};

// Line 149: range 000000000CE0401C-000000000CE04FB5
__int64 __fastcall RedisOpPlayerStatus::compareAndDeletePlayerStatus(uint32_t uid, uint64_t last_login_rand)
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
  google::protobuf::uint64 v11; // rax
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
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 uid:148 80 8 9 <unknown> 112 8 19 last_login_rand:14"
                        "8 144 16 17 redis_mgr_ptr:152 176 16 12 tran_ptr:155 208 32 9 <unknown> 272 32 9 <unknown> 336 3"
                        "2 9 <unknown> 400 32 13 redis_key:152 464 32 9 <unknown> 528 32 16 cur_data_str:156 592 32 9 <un"
                        "known> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 40 16 redis_status:164 928 5"
                        "6 14 _tc_guard_:150";
  *(_QWORD *)(v2 + 16) = RedisOpPlayerStatus::compareAndDeletePlayerStatus;
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
  *(_QWORD *)(v2 + 112) = last_login_rand;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "compareAndDeletePlayerStatus",
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
      "src/redis_op_online_status.cpp",
      "compareAndDeletePlayerStatus",
      152);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 336), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 400);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(*(_DWORD *)(v2 + 64), (std::string *)(v2 + 400)) )
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
        "src/redis_op_online_status.cpp",
        "compareAndDeletePlayerStatus",
        152);
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
             1u,
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
          "src/redis_op_online_status.cpp",
          "compareAndDeletePlayerStatus",
          159);
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
        proto::PlayerStatusRedisData::PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v2 + 848));
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
            "src/redis_op_online_status.cpp",
            "compareAndDeletePlayerStatus",
            169);
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
            "src/redis_op_online_status.cpp",
            "compareAndDeletePlayerStatus",
            175);
          v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 (common::milog::MiLogStream *const)(v2 + 720),
                 (const char (*)[18])"last_login_rand: ");
          v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v8,
                 (const unsigned __int64 *)(v2 + 112));
          v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v9,
                  (const char (*)[20])" redis login_rand: ");
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
          v11 = proto::PlayerStatusRedisData::login_rand((const proto::PlayerStatusRedisData *const)(v2 + 848));
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
            v11 = __asan_report_store8();
          *(_QWORD *)(v2 + 80) = v11;
          v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v10,
                  (const unsigned __int64 *)(v2 + 80));
          v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
          if ( proto::PlayerStatusRedisData::login_rand((const proto::PlayerStatusRedisData *const)(v2 + 848)) == *(_QWORD *)(v2 + 112) )
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
                "src/redis_op_online_status.cpp",
                "compareAndDeletePlayerStatus",
                184);
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
        proto::PlayerStatusRedisData::~PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v2 + 848));
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

// Line 189: range 000000000CE05157-000000000CE0516B
void __cdecl GLOBAL__sub_I_redis_op_online_status_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 189: range 000000000CE04FB6-000000000CE05156
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
    __asan_before_dynamic_init("src/redis_op_online_status.cpp");
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
