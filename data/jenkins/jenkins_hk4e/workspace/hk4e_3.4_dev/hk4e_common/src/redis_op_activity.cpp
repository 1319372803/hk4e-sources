// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_activity.cpp

// Line 17: range 000000000D4A8CA6-000000000D4A97B9
__int64 __fastcall RedisOpActivity::getCustomDungeon(
        uint64_t dungeon_guid,
        proto::CustomDungeonRedisData *redis_data,
        unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  char v16[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 dungeon_guid:16 96 32 9 <unknown> 160 32 9 <unknown"
                        "> 224 32 9 <unknown> 288 32 12 redis_key:24 352 32 9 <unknown> 416 32 11 data_str:30 480 32 9 <u"
                        "nknown> 544 32 9 <unknown> 608 56 13 _tc_guard_:18";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::getCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
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
  *(_QWORD *)(v3 + 64) = dungeon_guid;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "getCustomDungeon",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
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
      "src/redis_op_activity.cpp",
      "getCustomDungeon",
      21);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonRedisData>(*(_QWORD *)(v3 + 64), (std::string *)(v3 + 288)) )
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
        "src/redis_op_activity.cpp",
        "getCustomDungeon",
        27);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[27])"get key for dungeion_guid=");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 416);
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGet(v9, 0x10u, (const std::string *)(v3 + 288), (std::string *)(v3 + 416)) )
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
          "src/redis_op_activity.cpp",
          "getCustomDungeon",
          33);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[29])"cmdGet failed, dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v10,
          (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else if ( (unsigned __int8)std::string::empty(v3 + 416) )
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 0;
        v6 = 0;
      }
      else
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(redis_data, v3 + 416) != 1 )
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
            "src/redis_op_activity.cpp",
            "getCustomDungeon",
            44);
          v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[38])"ParseFromString failed, dungeon_guid:");
          v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v11,
                  (const unsigned __int64 *)(v3 + 64));
          v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" data:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 416));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
      std::string::~string((void *)(v3 + 416));
    }
    std::string::~string((void *)(v3 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v16 == (char *)v3 )
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

// Line 51: range 000000000D4A97BA-000000000D4AA26E
int32_t __cdecl RedisOpActivity::updateCustomDungeon(const proto::CustomDungeonRedisData *redis_data, uint32_t ttl)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  char v13[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 dungeon_guid:58 96 32 9 <unknown> 160 32 9 <unknown"
                        "> 224 32 9 <unknown> 288 32 12 redis_key:59 352 32 9 <unknown> 416 32 11 data_str:65 480 32 9 <u"
                        "nknown> 544 32 9 <unknown> 608 56 13 _tc_guard_:52";
  *(_QWORD *)(v2 + 16) = RedisOpActivity::updateCustomDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "updateCustomDungeon",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 608),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "updateCustomDungeon",
      55);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = proto::CustomDungeonRedisData::dungeon_guid(redis_data);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8();
    *(_QWORD *)(v2 + 64) = v6;
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64, &ResourceBox::redis_mgr_ptr);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonRedisData>(*(_QWORD *)(v2 + 64), (std::string *)(v2 + 288)) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "updateCustomDungeon",
        62);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[27])"get key for dungeion_guid=");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 416);
      if ( !google::protobuf::MessageLite::SerializeToString(redis_data, (std::string *)(v2 + 416)) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "updateCustomDungeon",
          68);
        v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 480),
               (const char (*)[39])"SerializeToString failed dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v9,
          (const unsigned __int64 *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSetex(
               v10,
               0x10u,
               (const std::string *)(v2 + 288),
               (const std::string *)(v2 + 416),
               ttl) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_activity.cpp",
            "updateCustomDungeon",
            73);
          v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[29])"cmdSet failed, dungeon_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      std::string::~string((void *)(v2 + 416));
    }
    std::string::~string((void *)(v2 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 608));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 80: range 000000000D4AA270-000000000D4AAAA8
__int64 __fastcall RedisOpActivity::removeCustomDungeon(uint64_t dungeon_guid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  char v9[624]; // [rsp+10h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 dungeon_guid:79 96 32 9 <unknown> 160 32 9 <unknown"
                        "> 224 32 9 <unknown> 288 32 12 redis_key:87 352 32 9 <unknown> 416 32 9 <unknown> 480 56 13 _tc_guard_:81";
  *(_QWORD *)(v1 + 16) = RedisOpActivity::removeCustomDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -218959360;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  *(_QWORD *)(v1 + 64) = dungeon_guid;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeCustomDungeon",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 480),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "removeCustomDungeon",
      84);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonRedisData>(*(_QWORD *)(v1 + 64), (std::string *)(v1 + 288)) )
    {
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "removeCustomDungeon",
        90);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v1 + 352),
             (const char (*)[27])"get key for dungeion_guid=");
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)(v1 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v7, 0x10u, (const std::string *)(v1 + 288)) )
      {
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "removeCustomDungeon",
          96);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[30])"redis_mgr_ptr->cmdDel  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 104: range 000000000D4AAAAA-000000000D4ABA43
int32_t __cdecl RedisOpActivity::getCustomDungeonBrief(
        const std::set<long unsigned int> *dungeon_guid_set,
        std::vector<proto::CustomDungeonBriefRedisData> *brief_data_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  char *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::map<std::string,std::string>::mapped_type *v12; // rax
  int v13; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // edx
  unsigned __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 v18; // rax
  int v19; // edx
  std::map<std::string,std::string> *__for_range_0; // [rsp+30h] [rbp-430h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::reference v23; // [rsp+38h] [rbp-428h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *redis_value; // [rsp+48h] [rbp-418h]
  char v25[1040]; // [rsp+50h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 1 9 <unknown> 48 1 9 <unknown> 64 8 16 dungeon_guid:112 96 8 15 __for_begin:112 128 8 13 _"
                        "_for_end:112 160 8 15 __for_begin:127 192 8 13 __for_end:127 224 32 9 <unknown> 288 32 9 <unknow"
                        "n> 352 32 9 <unknown> 416 32 11 key_str:114 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unkn"
                        "own> 672 48 16 redis_kv_map:111 752 56 14 _tc_guard_:105 848 104 14 brief_data:133";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::getCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862745] = -218959360;
  v5[536862746] = 62194;
  v5[536862749] = -218103808;
  v5[536862750] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "getCustomDungeonBrief",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 752),
    (const std::string *)(v3 + 224),
    (const std::string *)(v3 + 288));
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
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
      "src/redis_op_activity.cpp",
      "getCustomDungeonBrief",
      108);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 352),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    v6 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 672));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<long unsigned int>::iterator *)(v3 + 96) = std::set<unsigned long>::begin(dungeon_guid_set);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<long unsigned int>::iterator *)(v3 + 128) = std::set<unsigned long>::end(dungeon_guid_set);
    while ( 1 )
    {
      v7 = (char *)(v3 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 96),
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 128)) )
        break;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      v8 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 96));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, v7);
      v9 = *(_QWORD *)v8;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 64) = v9;
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 416);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64, v7);
      if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonBriefRedisData>(
             *(_QWORD *)(v3 + 64),
             (std::string *)(v3 + 416)) )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getCustomDungeonBrief",
          117);
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[40])"getUint64RedisKey failed, dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v10,
          (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v12 = std::map<std::string,std::string>::operator[](
                (std::map<std::string,std::string> *const)(v3 + 672),
                (const std::map<std::string,std::string>::key_type *)(v3 + 416));
        std::string::operator=(v12, &unk_1A82A0E0);
        v11 = 1;
      }
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v11 != 1 )
      {
        v13 = 0;
        goto LABEL_29;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 96));
    }
    v13 = 1;
LABEL_29:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      v14 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdMget(v14, 0x10u, (std::map<std::string,std::string> *)(v3 + 672)) )
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getCustomDungeonBrief",
          124);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v3 + 544),
          (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        __for_range_0 = (std::map<std::string,std::string> *)(v3 + 672);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 160) = std::map<std::string,std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 192) = std::map<std::string,std::string>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 160),
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 192)) )
        {
          v23 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 160));
          std::get<0ul,std::string const,std::string>(v23);
          redis_value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v23);
          if ( (unsigned __int8)std::string::empty(redis_value) )
          {
            v15 = 0;
          }
          else
          {
            v16 = ((v3 + 848) >> 3) + 2147450880;
            *(_DWORD *)v16 = 0;
            *(_DWORD *)(v16 + 4) = 0;
            *(_DWORD *)(v16 + 8) = 0;
            *(_BYTE *)(v16 + 12) = 0;
            proto::CustomDungeonBriefRedisData::CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 848));
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 848, redis_value) != 1 )
            {
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 608, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 608),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_activity.cpp",
                "getCustomDungeonBrief",
                136);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[23])"ParseFromString failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v17 = 0;
            }
            else
            {
              std::vector<proto::CustomDungeonBriefRedisData>::push_back(
                brief_data_vec,
                (const std::vector<proto::CustomDungeonBriefRedisData>::value_type *)(v3 + 848));
              v17 = 1;
            }
            proto::CustomDungeonBriefRedisData::~CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 848));
            if ( v17 == 1 )
              v15 = 2;
            else
              v15 = 1;
          }
          v18 = ((v3 + 848) >> 3) + 2147450880;
          *(_DWORD *)v18 = -117901064;
          *(_DWORD *)(v18 + 4) = -117901064;
          *(_DWORD *)(v18 + 8) = -117901064;
          *(_BYTE *)(v18 + 12) = -8;
          if ( v15 && v15 != 2 )
          {
            v19 = 0;
            goto LABEL_55;
          }
          std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 160));
        }
        v19 = 1;
LABEL_55:
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v19 == 1 )
          v2 = 0;
      }
    }
    std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 672));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 752));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v2;
};

// Line 145: range 000000000D4ABA44-000000000D4AC4D4
int32_t __cdecl RedisOpActivity::updateCustomDungeonBrief(
        const proto::CustomDungeonBriefRedisData *brief_redis_data,
        uint32_t ttl)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  char v13[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 8 16 dungeon_guid:153 96 32 9 <unknown> 160 32 9 <unknow"
                        "n> 224 32 9 <unknown> 288 32 13 redis_key:152 352 32 9 <unknown> 416 32 15 redis_value:159 480 3"
                        "2 9 <unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:146";
  *(_QWORD *)(v2 + 16) = RedisOpActivity::updateCustomDungeonBrief;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "updateCustomDungeonBrief",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 608),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "updateCustomDungeonBrief",
      149);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis_data);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8();
    *(_QWORD *)(v2 + 64) = v6;
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonBriefRedisData>(
           *(_QWORD *)(v2 + 64),
           (std::string *)(v2 + 288)) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "updateCustomDungeonBrief",
        156);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[32])"get redis key for dungeon_guid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 416);
      if ( !google::protobuf::MessageLite::SerializeToString(brief_redis_data, (std::string *)(v2 + 416)) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "updateCustomDungeonBrief",
          162);
        v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               (common::milog::MiLogStream *const)(v2 + 480),
               (const char (*)[51])"brief redis SerializeToString failed dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v9,
          (const unsigned __int64 *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSetex(
               v10,
               0x10u,
               (const std::string *)(v2 + 288),
               (const std::string *)(v2 + 416),
               ttl) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_activity.cpp",
            "updateCustomDungeonBrief",
            167);
          v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[29])"cmdSet failed, dungeon_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      std::string::~string((void *)(v2 + 416));
    }
    std::string::~string((void *)(v2 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 608));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 174: range 000000000D4AC4D6-000000000D4ACD0E
__int64 __fastcall RedisOpActivity::removeCustomDungeonBrief(uint64_t dungeon_guid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  char v9[624]; // [rsp+10h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 8 16 dungeon_guid:173 96 32 9 <unknown> 160 32 9 <unknow"
                        "n> 224 32 9 <unknown> 288 32 13 redis_key:181 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:175";
  *(_QWORD *)(v1 + 16) = RedisOpActivity::removeCustomDungeonBrief;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -218959360;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  *(_QWORD *)(v1 + 64) = dungeon_guid;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeCustomDungeonBrief",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 480),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "removeCustomDungeonBrief",
      178);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonBriefRedisData>(
           *(_QWORD *)(v1 + 64),
           (std::string *)(v1 + 288)) )
    {
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "removeCustomDungeonBrief",
        184);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v1 + 352),
             (const char (*)[27])"get key for dungeion_guid=");
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)(v1 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v7, 0x10u, (const std::string *)(v1 + 288)) )
      {
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "removeCustomDungeonBrief",
          190);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[30])"redis_mgr_ptr->cmdDel  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 198: range 000000000D4ACD10-000000000D4AD849
int32_t __cdecl RedisOpActivity::addCustomDungeonLike(
        uint32_t uid,
        uint64_t dungeon_guid,
        bool *is_repeated,
        bool is_need_ttl)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  bool v9; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  char v14[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:200 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:200 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:199";
  *(_QWORD *)(v4 + 16) = RedisOpActivity::addCustomDungeonLike;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218103808;
  v6[536862741] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "addCustomDungeonLike",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 608),
    (const std::string *)(v4 + 96),
    (const std::string *)(v4 + 160));
  std::string::~string((void *)(v4 + 96));
  *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "addCustomDungeonLike",
      200);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::CustomDungeonLikeRedisData>(uid, (std::string *)(v4 + 288)) )
    {
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "addCustomDungeonLike",
        200);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned long>((std::string *)(v4 + 416), dungeon_guid);
      v9 = common::midb::RedisMgr::cmdSAdd(
             v8,
             0x10u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 416),
             is_repeated) != 0;
      std::string::~string((void *)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
      {
        *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "addCustomDungeonLike",
          204);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v4 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdSAdd  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else if ( !is_need_ttl )
      {
        v7 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdExpire(v10, 0x10u, (const std::string *)(v4 + 288), 0x4F1A00u) )
        {
          *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_activity.cpp",
            "addCustomDungeonLike",
            215);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v4 + 544),
            (const char (*)[32])"redis_mgr_ptr->cmdExpire failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
          *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v7 = 0;
        }
      }
    }
    std::string::~string((void *)(v4 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 608));
  result = v7;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 223: range 000000000D4AD84A-000000000D4AE1D5
int32_t __cdecl RedisOpActivity::removeCustomDungeonLike(uint32_t uid, uint64_t dungeon_guid, uint32_t *rem_num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:225 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:225 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:224";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::removeCustomDungeonLike;
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
  v5[536862738] = -218103808;
  v5[536862739] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "removeCustomDungeonLike",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
  {
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "removeCustomDungeonLike",
      225);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::CustomDungeonLikeRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_activity.cpp",
        "removeCustomDungeonLike",
        225);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned long>((std::string *)(v3 + 416), dungeon_guid);
      v8 = common::midb::RedisMgr::cmdSRem(
             v7,
             0x10u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             rem_num) != 0;
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "removeCustomDungeonLike",
          229);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[32])"redis_mgr_ptr->cmdSARem  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 237: range 000000000D4AE1D6-000000000D4AEB61
int32_t __cdecl RedisOpActivity::isCustomDungeonLiked(uint32_t uid, uint64_t dungeon_guid, bool *is_liked)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:239 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:239 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:238";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::isCustomDungeonLiked;
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
  v5[536862738] = -218103808;
  v5[536862739] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "isCustomDungeonLiked",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
  {
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "isCustomDungeonLiked",
      239);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::CustomDungeonLikeRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_activity.cpp",
        "isCustomDungeonLiked",
        239);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned long>((std::string *)(v3 + 416), dungeon_guid);
      v8 = common::midb::RedisMgr::cmdSIsMember(
             v7,
             0x10u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             is_liked) != 0;
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "isCustomDungeonLiked",
          243);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[35])"redis_mgr_ptr->cmdSIsMember failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 251: range 000000000D4AEB62-000000000D4AF812
__int64 __fastcall RedisOpActivity::getUgc(
        uint64_t ugc_guid,
        bool is_edit,
        proto::UgcRedisData *redis_data,
        unsigned __int64 is_exist)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  char v20[816]; // [rsp+20h] [rbp-330h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(768LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:250 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:258 352 32 9 <unknown> 416 32 9 <unknown> 480 32 12 data_s"
                        "tr:278 544 32 9 <unknown> 608 32 9 <unknown> 672 56 14 _tc_guard_:252";
  *(_QWORD *)(v4 + 16) = RedisOpActivity::getUgc;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218103808;
  v6[536862743] = -202116109;
  *(_QWORD *)(v4 + 64) = ugc_guid;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "getUgc",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 672),
    (const std::string *)(v4 + 96),
    (const std::string *)(v4 + 160));
  std::string::~string((void *)(v4 + 96));
  *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( is_edit )
    {
      if ( RedisOpBase::getUint64RedisKey<proto::UgcEditRedisData>(*(_QWORD *)(v4 + 64), (std::string *)(v4 + 288)) )
      {
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getUgc",
          265);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               (common::milog::MiLogStream *const)(v4 + 352),
               (const char (*)[27])"get key for edit ugc_guid=");
        v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v8,
               (const unsigned __int64 *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
LABEL_33:
        std::string::~string((void *)(v4 + 288));
        goto LABEL_34;
      }
    }
    else if ( RedisOpBase::getUint64RedisKey<proto::UgcPublishRedisData>(
                *(_QWORD *)(v4 + 64),
                (std::string *)(v4 + 288)) )
    {
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "getUgc",
        274);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v4 + 416),
              (const char (*)[30])"get key for publish ugc_guid=");
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)(v4 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
      goto LABEL_33;
    }
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 480);
    v12 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGet(v12, 0x10u, (const std::string *)(v4 + 288), (std::string *)(v4 + 480)) )
    {
      *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "getUgc",
        281);
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v4 + 544),
              (const char (*)[25])"cmdGet failed, ugc_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
      *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else if ( (unsigned __int8)std::string::empty(v4 + 480) )
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 0;
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 1;
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(redis_data, v4 + 480) != 1 )
      {
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getUgc",
          293);
        v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v4 + 608),
                (const char (*)[34])"ParseFromString failed, ugc_guid:");
        v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v14,
                (const unsigned __int64 *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" data:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v4 + 480));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::string::~string((void *)(v4 + 480));
    goto LABEL_33;
  }
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_activity.cpp",
    "getUgc",
    255);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
    (common::milog::MiLogStream *const)(v4 + 224),
    (const char (*)[18])"redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_34:
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 672));
  result = v7;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 300: range 000000000D4AF814-000000000D4B0303
__int64 __fastcall RedisOpActivity::getUgcBrief(
        uint64_t ugc_guid,
        proto::UgcBriefRedisData *brief_data,
        unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  char v14[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:299 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:307 352 32 9 <unknown> 416 32 12 data_str:313 480 32 9 <un"
                        "known> 544 32 9 <unknown> 608 56 14 _tc_guard_:301";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::getUgcBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
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
  *(_QWORD *)(v3 + 64) = ugc_guid;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "getUgcBrief",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
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
      "src/redis_op_activity.cpp",
      "getUgcBrief",
      304);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::UgcBriefRedisData>(*(_QWORD *)(v3 + 64), (std::string *)(v3 + 288)) )
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
        "src/redis_op_activity.cpp",
        "getUgcBrief",
        310);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[36])"getUint64RedisKey failed, ugc_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 416);
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGet(v8, 0x10u, (const std::string *)(v3 + 288), (std::string *)(v3 + 416)) )
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
          "src/redis_op_activity.cpp",
          "getUgcBrief",
          316);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[29])"redis_mgr_ptr->cmdGet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else if ( (unsigned __int8)std::string::empty(v3 + 416) )
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 0;
        v6 = 0;
      }
      else
      {
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(brief_data, v3 + 416) != 1 )
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
            "src/redis_op_activity.cpp",
            "getUgcBrief",
            327);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 (common::milog::MiLogStream *const)(v3 + 544),
                 (const char (*)[34])"ParseFromString failed, ugc_guid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v9,
                  (const unsigned __int64 *)(v3 + 64));
          v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" data:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v3 + 416));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
      std::string::~string((void *)(v3 + 416));
    }
    std::string::~string((void *)(v3 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 334: range 000000000D4B0304-000000000D4B12DE
int32_t __cdecl RedisOpActivity::getMultiUgcBrief(
        const std::set<long unsigned int> *ugc_guid_set,
        std::vector<proto::UgcBriefRedisData> *brief_data_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  char *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::map<std::string,std::string>::mapped_type *v12; // rax
  int v13; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // eax
  _DWORD *v16; // rax
  int v17; // r15d
  _DWORD *v18; // rdx
  int v19; // edx
  std::map<std::string,std::string> *__for_range_0; // [rsp+30h] [rbp-410h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::reference v23; // [rsp+38h] [rbp-408h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *redis_value; // [rsp+48h] [rbp-3F8h]
  char v25[1008]; // [rsp+50h] [rbp-3F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(960LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 8 12 ugc_guid:342 112 8 15 __for_begin:342 144 8 13 __fo"
                        "r_end:342 176 8 15 __for_begin:357 208 8 13 __for_end:357 240 32 9 <unknown> 304 32 9 <unknown> "
                        "368 32 9 <unknown> 432 32 11 key_str:344 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown"
                        "> 688 48 16 redis_kv_map:341 768 56 14 _tc_guard_:335 864 64 14 brief_data:363";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::getMultiUgcBrief;
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
  v5[536862726] = -234881024;
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
  v5[536862743] = -218959118;
  v5[536862745] = -234881024;
  v5[536862746] = -218959118;
  v5[536862749] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 304),
    "getMultiUgcBrief",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
    (const std::string *)(v3 + 240),
    (const std::string *)(v3 + 304));
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 304));
  *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
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
      "src/redis_op_activity.cpp",
      "getMultiUgcBrief",
      338);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 368),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    v6 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 688));
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<long unsigned int>::iterator *)(v3 + 112) = std::set<unsigned long>::begin(ugc_guid_set);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<long unsigned int>::iterator *)(v3 + 144) = std::set<unsigned long>::end(ugc_guid_set);
    while ( 1 )
    {
      v7 = (char *)(v3 + 144);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 112),
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 144)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
      v8 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 112));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, v7);
      v9 = *(_QWORD *)v8;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 80) = v9;
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 432);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 80, v7);
      if ( RedisOpBase::getUint64RedisKey<proto::UgcBriefRedisData>(*(_QWORD *)(v3 + 80), (std::string *)(v3 + 432)) )
      {
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getMultiUgcBrief",
          347);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[36])"getUint64RedisKey failed, ugc_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v10,
          (const unsigned __int64 *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v12 = std::map<std::string,std::string>::operator[](
                (std::map<std::string,std::string> *const)(v3 + 688),
                (const std::map<std::string,std::string>::key_type *)(v3 + 432));
        std::string::operator=(v12, &unk_1A82A0E0);
        v11 = 1;
      }
      std::string::~string((void *)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      if ( v11 != 1 )
      {
        v13 = 0;
        goto LABEL_29;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 112));
    }
    v13 = 1;
LABEL_29:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      v14 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdMget(v14, 0x10u, (std::map<std::string,std::string> *)(v3 + 688)) )
      {
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "getMultiUgcBrief",
          354);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v3 + 560),
          (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        __for_range_0 = (std::map<std::string,std::string> *)(v3 + 688);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 176) = std::map<std::string,std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 208) = std::map<std::string,std::string>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 176),
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 208)) )
        {
          v23 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 176));
          std::get<0ul,std::string const,std::string>(v23);
          redis_value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v23);
          if ( (unsigned __int8)std::string::empty(redis_value) )
          {
            v15 = 0;
          }
          else
          {
            v16 = (_DWORD *)(((v3 + 864) >> 3) + 2147450880);
            *v16 = 0;
            v16[1] = 0;
            proto::UgcBriefRedisData::UgcBriefRedisData((proto::UgcBriefRedisData *const)(v3 + 864));
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 864, redis_value) != 1 )
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
                "src/redis_op_activity.cpp",
                "getMultiUgcBrief",
                366);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v3 + 624),
                (const char (*)[23])"ParseFromString failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
              *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v17 = 0;
            }
            else
            {
              std::vector<proto::UgcBriefRedisData>::push_back(
                brief_data_vec,
                (const std::vector<proto::UgcBriefRedisData>::value_type *)(v3 + 864));
              v17 = 1;
            }
            proto::UgcBriefRedisData::~UgcBriefRedisData((proto::UgcBriefRedisData *const)(v3 + 864));
            if ( v17 == 1 )
              v15 = 2;
            else
              v15 = 1;
          }
          v18 = (_DWORD *)(((v3 + 864) >> 3) + 2147450880);
          *v18 = -117901064;
          v18[1] = -117901064;
          if ( v15 && v15 != 2 )
          {
            v19 = 0;
            goto LABEL_55;
          }
          std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 176));
        }
        v19 = 1;
LABEL_55:
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v19 == 1 )
          v2 = 0;
      }
    }
    std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 688));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8074) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 375: range 000000000D4B12E0-000000000D4B1F9D
int32_t __cdecl RedisOpActivity::updateUgc(const proto::UgcRedisData *redis_data, bool is_edit, uint32_t ttl)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  google::protobuf::uint64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  char v21[816]; // [rsp+10h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:382 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:383 352 32 9 <unknown> 416 32 9 <unknown> 480 32 15 redis_"
                        "value:400 544 32 9 <unknown> 608 32 9 <unknown> 672 56 14 _tc_guard_:376";
  *(_QWORD *)(v3 + 16) = RedisOpActivity::updateUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "updateUgc",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 672),
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
  if ( !std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    v7 = proto::UgcRedisData::ugc_guid(redis_data);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8();
    *(_QWORD *)(v3 + 64) = v7;
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( is_edit )
    {
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64, &ResourceBox::redis_mgr_ptr);
      if ( RedisOpBase::getUint64RedisKey<proto::UgcEditRedisData>(*(_QWORD *)(v3 + 64), (std::string *)(v3 + 288)) )
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
          "src/redis_op_activity.cpp",
          "updateUgc",
          388);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               (common::milog::MiLogStream *const)(v3 + 352),
               (const char (*)[27])"get key for edit ugc_guid=");
        v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v8,
               (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
LABEL_33:
        std::string::~string((void *)(v3 + 288));
        goto LABEL_34;
      }
    }
    else
    {
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64, &ResourceBox::redis_mgr_ptr);
      if ( RedisOpBase::getUint64RedisKey<proto::UgcPublishRedisData>(*(_QWORD *)(v3 + 64), (std::string *)(v3 + 288)) )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "updateUgc",
          396);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[30])"get key for publish ugc_guid=");
        v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v10,
                (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
        goto LABEL_33;
      }
    }
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 480);
    if ( !google::protobuf::MessageLite::SerializeToString(redis_data, (std::string *)(v3 + 480)) )
    {
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "updateUgc",
        403);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[36])"SerializeToString failed, ugc_guid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v12,
              (const unsigned __int64 *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" redis_key: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 288));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v15 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSetex(
             v15,
             0x10u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 480),
             ttl) )
      {
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "updateUgc",
          408);
        v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[25])"cmdSet failed, ugc_guid:");
        v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v16,
                (const unsigned __int64 *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" redis_key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v3 + 288));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 480));
    goto LABEL_33;
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_activity.cpp",
    "updateUgc",
    379);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
    (common::milog::MiLogStream *const)(v3 + 224),
    (const char (*)[18])"redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v6 = -1;
LABEL_34:
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 672));
  result = v6;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  return result;
};

// Line 415: range 000000000D4B1F9E-000000000D4B2A9A
int32_t __cdecl RedisOpActivity::updateUgcBrief(const proto::UgcBriefRedisData *ugc_brief_redis_data, uint32_t ttl)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  char v17[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:422 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:423 352 32 9 <unknown> 416 32 15 redis_value:429 480 32 9 "
                        "<unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:416";
  *(_QWORD *)(v2 + 16) = RedisOpActivity::updateUgcBrief;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "updateUgcBrief",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 608),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "updateUgcBrief",
      419);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = proto::UgcBriefRedisData::ugc_guid(ugc_brief_redis_data);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8();
    *(_QWORD *)(v2 + 64) = v6;
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64, &ResourceBox::redis_mgr_ptr);
    if ( RedisOpBase::getUint64RedisKey<proto::UgcBriefRedisData>(*(_QWORD *)(v2 + 64), (std::string *)(v2 + 288)) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "updateUgcBrief",
        426);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[28])"get key for brief ugc_guid=");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 416);
      if ( !google::protobuf::MessageLite::SerializeToString(ugc_brief_redis_data, (std::string *)(v2 + 416)) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "updateUgcBrief",
          432);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               (common::milog::MiLogStream *const)(v2 + 480),
               (const char (*)[42])"brief SerializeToString failed, ugc_guid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v9,
                (const unsigned __int64 *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" redis_key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v2 + 288));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSetex(
               v12,
               0x10u,
               (const std::string *)(v2 + 288),
               (const std::string *)(v2 + 416),
               ttl) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_activity.cpp",
            "updateUgcBrief",
            437);
          v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[25])"cmdSet failed, ugc_guid:");
          v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v13,
                  (const unsigned __int64 *)(v2 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" redis_key: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v2 + 288));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      std::string::~string((void *)(v2 + 416));
    }
    std::string::~string((void *)(v2 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 608));
  result = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 444: range 000000000D4B2A9C-000000000D4B32D4
__int64 __fastcall RedisOpActivity::removeUgcPublish(uint64_t ugc_guid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  char v9[624]; // [rsp+10h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:443 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:451 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:445";
  *(_QWORD *)(v1 + 16) = RedisOpActivity::removeUgcPublish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -218959360;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  *(_QWORD *)(v1 + 64) = ugc_guid;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeUgcPublish",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 480),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "removeUgcPublish",
      448);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::UgcPublishRedisData>(*(_QWORD *)(v1 + 64), (std::string *)(v1 + 288)) )
    {
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "removeUgcPublish",
        454);
      v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             (common::milog::MiLogStream *const)(v1 + 352),
             (const char (*)[22])"get key for ugc_guid=");
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)(v1 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v7, 0x10u, (const std::string *)(v1 + 288)) )
      {
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "removeUgcPublish",
          460);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[29])"redis_mgr_ptr->cmdDel failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 468: range 000000000D4B32D6-000000000D4B3B0E
__int64 __fastcall RedisOpActivity::removeUgcBrief(uint64_t ugc_guid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  char v9[624]; // [rsp+10h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 8 12 ugc_guid:467 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 13 redis_key:475 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:469";
  *(_QWORD *)(v1 + 16) = RedisOpActivity::removeUgcBrief;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -218959360;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  *(_QWORD *)(v1 + 64) = ugc_guid;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeUgcBrief",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "REDIS",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 480),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_activity.cpp",
      "removeUgcBrief",
      472);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v1 + 224),
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUint64RedisKey<proto::UgcBriefRedisData>(*(_QWORD *)(v1 + 64), (std::string *)(v1 + 288)) )
    {
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_activity.cpp",
        "removeUgcBrief",
        478);
      v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             (common::milog::MiLogStream *const)(v1 + 352),
             (const char (*)[22])"get key for ugc_guid=");
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)(v1 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v7, 0x10u, (const std::string *)(v1 + 288)) )
      {
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_activity.cpp",
          "removeUgcBrief",
          484);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[29])"redis_mgr_ptr->cmdDel failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
        *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::string::~string((void *)(v1 + 288));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 489: range 000000000D4B3CB0-000000000D4B3CC4
void __cdecl GLOBAL__sub_I_redis_op_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 489: range 000000000D4B3B0F-000000000D4B3CAF
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
    __asan_before_dynamic_init("src/redis_op_activity.cpp");
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
