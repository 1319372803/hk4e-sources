// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_activity.h

// Line 133: range 000000000CCD65D4-000000000CCD6AC6
__int64 __fastcall RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(
        uint32_t group_id,
        uint64_t dungeon_guid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  __int64 result; // rax
  std::allocator<char> v10; // [rsp+1Eh] [rbp-132h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string label_value; // [rsp+20h] [rbp-130h] BYREF
  char v13[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 dungeon_guid:133 64 32 13 redis_key:141 128 56 14 _tc_guard_:135";
  *(_QWORD *)(v2 + 16) = RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_QWORD *)(v2 + 32) = dungeon_guid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "removeCustomDungeonRecommend", &__a);
  std::allocator<char>::allocator(&v10);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 64), "REDIS", &v10);
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 128),
    (const std::string *)(v2 + 64),
    &label_value);
  std::string::~string((void *)(v2 + 64));
  std::allocator<char>::~allocator(&v10);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&label_value,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../hk4e_common/src/redis_op_activity.h",
      "removeCustomDungeonRecommend",
      138);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&label_value,
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
    v5 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 64);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonOldRecommendRedisData>(group_id, (std::string *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&label_value,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../hk4e_common/src/redis_op_activity.h",
        "removeCustomDungeonRecommend",
        144);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&label_value,
             (const char (*)[32])"get redis key for dungeon_guid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
      v5 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      common::tools::StringUtils::numToStr<unsigned long>(&label_value, *(_QWORD *)(v2 + 32));
      LOBYTE(v8) = common::midb::RedisMgr::cmdSRem(v8, 0x10u, (const std::string *)(v2 + 64), &label_value) != 0;
      std::string::~string(&label_value);
      if ( (_BYTE)v8 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&label_value,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../hk4e_common/src/redis_op_activity.h",
          "removeCustomDungeonRecommend",
          149);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)&label_value,
          (const char (*)[30])"redis_mgr_ptr->cmdSAdd failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 64));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 128));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 357: range 000000000CCD60E0-000000000CCD65D2
__int64 __fastcall RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(
        uint32_t group_id,
        uint64_t dungeon_guid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  __int64 result; // rax
  std::allocator<char> v10; // [rsp+1Eh] [rbp-132h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string label_value; // [rsp+20h] [rbp-130h] BYREF
  char v13[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 dungeon_guid:133 64 32 13 redis_key:141 128 56 14 _tc_guard_:135";
  *(_QWORD *)(v2 + 16) = RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_QWORD *)(v2 + 32) = dungeon_guid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&label_value, "removeCustomDungeonRecommend", &__a);
  std::allocator<char>::allocator(&v10);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 64), "REDIS", &v10);
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 128),
    (const std::string *)(v2 + 64),
    &label_value);
  std::string::~string((void *)(v2 + 64));
  std::allocator<char>::~allocator(&v10);
  std::string::~string(&label_value);
  std::allocator<char>::~allocator(&__a);
  if ( std::operator==<common::midb::RedisMgr>(0LL, &ResourceBox::redis_mgr_ptr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&label_value,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../hk4e_common/src/redis_op_activity.h",
      "removeCustomDungeonRecommend",
      138);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&label_value,
      (const char (*)[18])"redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
    v5 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 64);
    if ( RedisOpBase::getUint64RedisKey<proto::CustomDungeonNewRecommendRedisData>(group_id, (std::string *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&label_value,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../hk4e_common/src/redis_op_activity.h",
        "removeCustomDungeonRecommend",
        144);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&label_value,
             (const char (*)[32])"get redis key for dungeon_guid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
      v5 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      common::tools::StringUtils::numToStr<unsigned long>(&label_value, *(_QWORD *)(v2 + 32));
      LOBYTE(v8) = common::midb::RedisMgr::cmdSRem(v8, 0x10u, (const std::string *)(v2 + 64), &label_value) != 0;
      std::string::~string(&label_value);
      if ( (_BYTE)v8 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&label_value,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../hk4e_common/src/redis_op_activity.h",
          "removeCustomDungeonRecommend",
          149);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)&label_value,
          (const char (*)[30])"redis_mgr_ptr->cmdSAdd failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 64));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 128));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
