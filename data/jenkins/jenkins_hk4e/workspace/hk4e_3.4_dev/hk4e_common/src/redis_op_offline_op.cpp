// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_offline_op.cpp

// Line 24: range 000000000EA6CF26-000000000EA6D870
int32_t __cdecl RedisOpOfflineOp::genOfflineOpIndex(uint32_t uid, uint32_t op_type, uint32_t *index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // rax
  uint32_t v8; // edi
  int32_t result; // eax
  char v11[656]; // [rsp+10h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 8 8 value:38 96 16 16 redis_mgr_ptr:26 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 12 redis_key:32 384 32 9 <unknown> 448 32 9 <unkn"
                        "own> 512 56 13 _tc_guard_:25";
  *(_QWORD *)(v3 + 16) = RedisOpOfflineOp::genOfflineOpIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
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
    (std::string *const)(v3 + 192),
    "genOfflineOpIndex",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 512),
    (const std::string *)(v3 + 128),
    (const std::string *)(v3 + 192));
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 96), 0LL) )
  {
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
      "src/redis_op_offline_op.cpp",
      "genOfflineOpIndex",
      29);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getPlayerCustomRedisKey<proto::OfflineOpGIndexRedisData>(uid, op_type, (std::string *)(v3 + 320)) )
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
        "src/redis_op_offline_op.cpp",
        "genOfflineOpIndex",
        35);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 384), off_1BF8BBE0, uid, op_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64);
      *(_QWORD *)(v3 + 64) = 0LL;
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( common::midb::RedisMgr::cmdIncr(v7, 0xFu, (const std::string *)(v3 + 320), (int64_t *)(v3 + 64)) )
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
          "src/redis_op_offline_op.cpp",
          "genOfflineOpIndex",
          41);
        common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
          (common::milog::MiLogStream *const)(v3 + 448),
          (const char (*)[62])"cmdIncr OfflineOpGIndexRedisData REDIS_INDEX_OFFLINE_OP fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 64);
        v8 = *(_QWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
        {
          v8 = (unsigned int)index;
          __asan_report_store4(index);
        }
        *index = v8;
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 512));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 50: range 000000000EA6D872-000000000EA6DB6C
int32_t __cdecl RedisOpOfflineOp::getAllOfflineOpData(
        uint32_t uid,
        uint32_t index,
        std::vector<std::string> *bin_str_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t AllOfflineOpDataByRange; // r14d
  int32_t result; // eax
  char v9[304]; // [rsp+10h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 32 12 index_buf:51 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpOfflineOp::getAllOfflineOpData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  snprintf((char *)(v3 + 64), 0x20uLL, "%u", index);
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 192),
    "+inf",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    (const char *)(v3 + 64),
    (const std::allocator<char> *)(v3 + 32));
  AllOfflineOpDataByRange = RedisOpOfflineOp::getAllOfflineOpDataByRange(
                              uid,
                              (const std::string *)(v3 + 128),
                              (const std::string *)(v3 + 192),
                              bin_str_vec);
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  result = AllOfflineOpDataByRange;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 57: range 000000000EA6DB6E-000000000EA6DE77
int32_t __cdecl RedisOpOfflineOp::getOfflineOpData(
        uint32_t uid,
        uint32_t op_type,
        uint32_t index,
        std::vector<std::string> *bin_str_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t OfflineOpDataByRange; // r14d
  int32_t result; // eax
  char v11[304]; // [rsp+20h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 32 12 index_buf:58 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = RedisOpOfflineOp::getOfflineOpData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  snprintf((char *)(v4 + 64), 0x20uLL, "%u", index);
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 192),
    "+inf",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 128),
    (const char *)(v4 + 64),
    (const std::allocator<char> *)(v4 + 32));
  OfflineOpDataByRange = RedisOpOfflineOp::getOfflineOpDataByRange(
                           uid,
                           op_type,
                           (const std::string *)(v4 + 128),
                           (const std::string *)(v4 + 192),
                           bin_str_vec);
  std::string::~string((void *)(v4 + 128));
  *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 192));
  *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  result = OfflineOpDataByRange;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 000000000EA6DE78-000000000EA6E4F8
int32_t __cdecl RedisOpOfflineOp::getAllOfflineOpDataByRange(
        uint32_t uid,
        const std::string *min,
        const std::string *max,
        std::vector<std::string> *bin_str_vec)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rax
  int v9; // r15d
  std::string *M_current; // r15
  unsigned __int64 v11; // rax
  int32_t result; // eax
  std::string *__last; // [rsp+8h] [rbp-1A8h]
  uint32_t type; // [rsp+3Ch] [rbp-174h]
  char v17[368]; // [rsp+40h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 8 9 <unknown> 64 8 9 <unknown> 96 16 16 redis_mgr_ptr:65 128 24 19 temp_bin_str_vec:75 192 "
                        "32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = RedisOpOfflineOp::getAllOfflineOpDataByRange;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862727] = -218959118;
  v7[536862729] = -202116109;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v5 + 96), 0LL) )
  {
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 33) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_offline_op.cpp",
      "getAllOfflineOpDataByRange",
      68);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 192), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    for ( type = 0; type <= 7; ++type )
    {
      if ( proto::OfflineOpType_IsValid(type) )
      {
        v8 = ((v5 + 128) >> 3) + 2147450880;
        *(_WORD *)v8 = 0;
        *(_BYTE *)(v8 + 2) = 0;
        std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
        if ( RedisOpOfflineOp::getOfflineOpDataByRange(uid, type, min, max, (std::vector<std::string> *)(v5 + 128)) )
        {
          *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_offline_op.cpp",
            "getAllOfflineOpDataByRange",
            78);
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 256), off_1BF8BBE0, uid, type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
          *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v9 = 0;
        }
        else
        {
          __last = std::vector<std::string>::end((std::vector<std::string> *const)(v5 + 128))._M_current;
          M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v5 + 128))._M_current;
          *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 32);
          *(std::vector<std::string>::iterator *)(v5 + 32) = std::vector<std::string>::end(bin_str_vec);
          __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::__normal_iterator<std::string*>(
            (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v5 + 64),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 32));
          if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v5 + 64);
          std::vector<std::string>::insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>,void>(
            bin_str_vec,
            *(std::vector<std::string>::const_iterator *)(v5 + 64),
            (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current,
            (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)__last);
          *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
          v9 = 1;
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
        v11 = ((v5 + 128) >> 3) + 2147450880;
        *(_WORD *)v11 = -1800;
        *(_BYTE *)(v11 + 2) = -8;
        if ( v9 != 1 )
          goto LABEL_23;
      }
    }
    v4 = 0;
  }
LABEL_23:
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 96));
  result = v4;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 000000000EA6E4FA-000000000EA6ED79
int32_t __cdecl RedisOpOfflineOp::getOfflineOpDataRedisLength(uint32_t uid, uint32_t op_type, uint32_t *length)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // rax
  int32_t result; // eax
  char v10[624]; // [rsp+10h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 16 redis_mgr_ptr:90 96 32 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 32 12 redis_key:96 352 32 9 <unknown> 416 32 9 <unknown> 480 56 13 _tc_guard_:89";
  *(_QWORD *)(v3 + 16) = RedisOpOfflineOp::getOfflineOpDataRedisLength;
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
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "getOfflineOpDataRedisLength",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 480),
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
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64), 0LL) )
  {
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
      "src/redis_op_offline_op.cpp",
      "getOfflineOpDataRedisLength",
      93);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getPlayerCustomRedisKey<proto::OfflineOpSortedSetRedisData>(
           uid,
           op_type,
           (std::string *)(v3 + 288)) )
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
        "src/redis_op_offline_op.cpp",
        "getOfflineOpDataRedisLength",
        99);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), off_1BF8BBE0, uid, op_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( common::midb::RedisMgr::cmdZCard(v7, 0xFu, (const std::string *)(v3 + 288), length) )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_offline_op.cpp",
          "getOfflineOpDataRedisLength",
          104);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[38])"cmdZCard REDIS_INDEX_OFFLINE_OP fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 480));
  result = v6;
  if ( v10 == (char *)v3 )
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
  }
  return result;
};

// Line 111: range 000000000EA6ED7A-000000000EA6F61B
int32_t __cdecl RedisOpOfflineOp::getOfflineOpDataByRange(
        uint32_t uid,
        uint32_t op_type,
        const std::string *min,
        const std::string *max,
        std::vector<std::string> *bin_str_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  common::midb::RedisMgr *v9; // rax
  int32_t result; // eax
  char v14[624]; // [rsp+20h] [rbp-270h] BYREF

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:113 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:119 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:112";
  *(_QWORD *)(v5 + 16) = RedisOpOfflineOp::getOfflineOpDataByRange;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753535;
  v7[536862722] = -219021312;
  v7[536862724] = -218959118;
  v7[536862726] = -218959118;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -218959118;
  v7[536862734] = -218959118;
  v7[536862736] = -218103808;
  v7[536862737] = -202116109;
  std::allocator<char>::allocator(v5 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 160),
    "getOfflineOpDataByRange",
    (const std::allocator<char> *)(v5 + 48));
  std::allocator<char>::allocator(v5 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 96),
    "REDIS",
    (const std::allocator<char> *)(v5 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v5 + 480),
    (const std::string *)(v5 + 96),
    (const std::string *)(v5 + 160));
  std::string::~string((void *)(v5 + 96));
  *(_DWORD *)(((v5 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 32);
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v5 + 160));
  *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 48);
  *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v5 + 64), 0LL) )
  {
    *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_offline_op.cpp",
      "getOfflineOpDataByRange",
      116);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
    *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v5 + 288);
    if ( RedisOpBase::getPlayerCustomRedisKey<proto::OfflineOpSortedSetRedisData>(
           uid,
           op_type,
           (std::string *)(v5 + 288)) )
    {
      *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_offline_op.cpp",
        "getOfflineOpDataByRange",
        122);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 352), off_1BF8BBE0, uid, op_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
      *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( common::midb::RedisMgr::cmdZRangeByScore(v9, 0xFu, (const std::string *)(v5 + 288), min, max, bin_str_vec) )
      {
        *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_offline_op.cpp",
          "getOfflineOpDataByRange",
          127);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          (common::milog::MiLogStream *const)(v5 + 416),
          (const char (*)[46])"cmdZRangeByScore REDIS_INDEX_OFFLINE_OP fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
        *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v8 = -1;
      }
      else
      {
        v8 = 0;
      }
    }
    std::string::~string((void *)(v5 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v5 + 480));
  result = v8;
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 000000000EA6F61C-000000000EA70099
int32_t __cdecl RedisOpOfflineOp::insertOfflineOpData(uint32_t uid, const proto::OfflineOpRedisData *new_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // r14
  google::protobuf::uint32 v7; // eax
  int32_t result; // eax
  proto::OfflineOpType type; // [rsp+1Ch] [rbp-2F4h]
  char v10[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:143 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 16 new_data_str:137 288 32 9 <unknown> 352 32 9 <unknown> 416 32 13 redis_key:150 48"
                        "0 32 9 <unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:136";
  *(_QWORD *)(v2 + 16) = RedisOpOfflineOp::insertOfflineOpData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
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
    "insertOfflineOpData",
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
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 224);
  if ( !google::protobuf::MessageLite::SerializeToString(new_data, (std::string *)(v2 + 224)) )
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_offline_op.cpp",
      "insertOfflineOpData",
      140);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[33])"new_data.SerializeToString fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
      (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
      &ResourceBox::redis_mgr_ptr);
    if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64), 0LL) )
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
        "src/redis_op_offline_op.cpp",
        "insertOfflineOpData",
        146);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 352), "redis_mgr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      type = proto::OfflineOpRedisData::op_type(new_data);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 416);
      if ( RedisOpBase::getPlayerCustomRedisKey<proto::OfflineOpSortedSetRedisData>(
             uid,
             type,
             (std::string *)(v2 + 416)) )
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
          "src/redis_op_offline_op.cpp",
          "insertOfflineOpData",
          153);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 480),
          off_1BF8BBE0,
          uid,
          (unsigned int)type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v7 = proto::OfflineOpRedisData::index(new_data);
        if ( common::midb::RedisMgr::cmdZAddnx(
               v6,
               0xFu,
               (const std::string *)(v2 + 416),
               (const std::string *)(v2 + 224),
               v7) )
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
            "src/redis_op_offline_op.cpp",
            "insertOfflineOpData",
            158);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[39])"cmdZAddnx REDIS_INDEX_OFFLINE_OP fails");
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
    std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  }
  std::string::~string((void *)(v2 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 608));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 165: range 000000000EA7009A-000000000EA7049A
int32_t __cdecl RedisOpOfflineOp::removeOfflineOpData(uint32_t uid, uint32_t index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int32_t result; // eax
  uint32_t type; // [rsp+1Ch] [rbp-F4h]
  char v8[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 17 redis_mgr_ptr:166 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RedisOpOfflineOp::removeOfflineOpData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 32),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 32), 0LL) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_offline_op.cpp",
      "removeOfflineOpData",
      169);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    for ( type = 0; type <= 7; ++type )
    {
      if ( proto::OfflineOpType_IsValid(type) && RedisOpOfflineOp::removeOfflineOpData(uid, type, index) )
      {
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_offline_op.cpp",
          "removeOfflineOpData",
          178);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_1BF8BBE0, uid, type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    v5 = 0;
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 187: range 000000000EA7049C-000000000EA70D1E
int32_t __cdecl RedisOpOfflineOp::removeOfflineOpData(uint32_t uid, uint32_t op_type, uint32_t index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // rax
  int32_t result; // eax
  char v10[624]; // [rsp+10h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:189 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:195 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:188";
  *(_QWORD *)(v3 + 16) = RedisOpOfflineOp::removeOfflineOpData;
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
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "removeOfflineOpData",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 480),
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
  if ( std::operator==<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64), 0LL) )
  {
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
      "src/redis_op_offline_op.cpp",
      "removeOfflineOpData",
      192);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getPlayerCustomRedisKey<proto::OfflineOpSortedSetRedisData>(
           uid,
           op_type,
           (std::string *)(v3 + 288)) )
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
        "src/redis_op_offline_op.cpp",
        "removeOfflineOpData",
        198);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), off_1BF8BBE0, uid, op_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( common::midb::RedisMgr::cmdZRemRangeByScore(v7, 0xFu, (const std::string *)(v3 + 288), 0LL, index) )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_offline_op.cpp",
          "removeOfflineOpData",
          203);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[49])"cmdZRemRangeByScore REDIS_INDEX_OFFLINE_OP fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 480));
  result = v6;
  if ( v10 == (char *)v3 )
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
  }
  return result;
};

// Line 207: range 000000000EA70EC0-000000000EA70ED4
void __cdecl GLOBAL__sub_I_redis_op_offline_op_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 207: range 000000000EA70D1F-000000000EA70EBF
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
    __asan_before_dynamic_init("src/redis_op_offline_op.cpp");
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
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
