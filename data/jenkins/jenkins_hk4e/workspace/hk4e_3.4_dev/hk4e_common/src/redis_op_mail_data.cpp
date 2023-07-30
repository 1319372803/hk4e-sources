// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_mail_data.cpp

// Line 22: range 000000000E9C6716-000000000E9C704F
int32_t __cdecl RedisOpMailData::genNewMailId(uint32_t uid, uint32_t *new_mail_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // rax
  uint32_t v7; // edi
  int32_t result; // eax
  char v9[656]; // [rsp+10h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 8 10 mail_id:25 96 16 16 redis_mgr_ptr:24 128 32 9 <unkn"
                        "own> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 12 redis_key:24 384 32 9 <unknown> 448 32 9 <u"
                        "nknown> 512 56 13 _tc_guard_:23";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::genNewMailId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "genNewMailId",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 512),
    (const std::string *)(v2 + 128),
    (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 96)) )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "genNewMailId",
      24);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::MailMaxIdRedisData>(uid, (std::string *)(v2 + 320)) )
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
        "src/redis_op_mail_data.cpp",
        "genNewMailId",
        24);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 384), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 64);
      *(_QWORD *)(v2 + 64) = 0LL;
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdIncr(v6, 2u, (const std::string *)(v2 + 320), (int64_t *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "genNewMailId",
          28);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[37])"[Mail] redis_mgr_ptr->cmdIncr failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 64);
        v7 = *(_QWORD *)(v2 + 64);
        if ( *(_BYTE *)(((unsigned __int64)new_mail_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)new_mail_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_mail_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          v7 = (unsigned int)new_mail_id;
          __asan_report_store4(new_mail_id);
        }
        *new_mail_id = v7;
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 512));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 38: range 000000000E9C7050-000000000E9C7F48
int32_t __cdecl RedisOpMailData::insertNewMail(uint32_t uid, const proto::MailRedisData *mail)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // eax
  google::protobuf::uint32 v7; // eax
  const proto::MailBin *v8; // rax
  const proto::MailBin *v9; // rax
  common::midb::RedisMgr *v10; // rax
  common::midb::RedisMgr *v11; // rax
  int32_t result; // eax
  uint32_t cur_time; // [rsp+18h] [rbp-3B8h]
  uint32_t expire_time; // [rsp+1Ch] [rbp-3B4h]
  char v15[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 16 16 redis_mgr_ptr:46 96 32 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 12 redis_key:53 416 32 9 <unknown> 480 32 11 ma"
                        "il_str:60 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 56 13 _tc_guard_:39";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::insertNewMail;
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
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218103808;
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "insertNewMail",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 800),
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
  if ( proto::MailRedisData::id(mail) )
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
      (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
      &ResourceBox::redis_mgr_ptr);
    if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "insertNewMail",
        49);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[25])"[Mail] redis_mgr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
      goto LABEL_36;
    }
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 352);
    v6 = proto::MailRedisData::id(mail);
    if ( RedisOpMailData::constructMailKey(uid, v6, (std::string *)(v2 + 352)) )
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "insertNewMail",
        56);
      v7 = proto::MailRedisData::id(mail);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 416),
        "[Mail] get key for uid=%u mail_id=%u failed",
        uid,
        v7);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
      goto LABEL_35;
    }
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 480);
    if ( !google::protobuf::MessageLite::SerializeToString(mail, (std::string *)(v2 + 480)) )
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "insertNewMail",
        63);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 544),
        (const char (*)[37])"[Mail] mail SerializeToString failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      cur_time = common::tools::TimeUtils::getNow();
      v8 = proto::MailRedisData::mail_bin(mail);
      if ( proto::MailBin::collect_state(v8) == 3 )
      {
        v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSet(v11, 2u, (const std::string *)(v2 + 352), (const std::string *)(v2 + 480)) )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "insertNewMail",
            88);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 736),
            (const char (*)[38])"[Mail] redis_mgr_ptr->cmdSetex failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          goto LABEL_34;
        }
      }
      else
      {
        v9 = proto::MailRedisData::mail_bin(mail);
        expire_time = proto::MailBin::expire_time(v9);
        if ( expire_time <= cur_time )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "insertNewMail",
            81);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[30])"[Mail] insert one expire mail");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          v10 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdSetex(
                 v10,
                 2u,
                 (const std::string *)(v2 + 352),
                 (const std::string *)(v2 + 480),
                 expire_time - cur_time) )
          {
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_mail_data.cpp",
              "insertNewMail",
              75);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[38])"[Mail] redis_mgr_ptr->cmdSetex failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
            goto LABEL_34;
          }
        }
      }
      v5 = 0;
    }
LABEL_34:
    std::string::~string((void *)(v2 + 480));
LABEL_35:
    std::string::~string((void *)(v2 + 352));
LABEL_36:
    std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
    goto LABEL_37;
  }
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_op_mail_data.cpp",
    "insertNewMail",
    42);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
    (common::milog::MiLogStream *const)(v2 + 224),
    (const char (*)[20])"[Mail] mail id is 0");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v5 = -1;
LABEL_37:
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 800));
  result = v5;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
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
  }
  return result;
};

// Line 97: range 000000000E9C7F4A-000000000E9C87B0
int32_t __cdecl RedisOpMailData::delMailMaxId(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::midb::RedisMgr *v5; // rax
  int32_t result; // eax
  char v7[624]; // [rsp+20h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 16 redis_mgr_ptr:99 96 32 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 32 12 redis_key:99 352 32 9 <unknown> 416 32 9 <unknown> 480 56 13 _tc_guard_:98";
  *(_QWORD *)(v1 + 16) = RedisOpMailData::delMailMaxId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "delMailMaxId",
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
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v1 + 64)) )
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
      "src/redis_op_mail_data.cpp",
      "delMailMaxId",
      99);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailMaxIdRedisData>(uid, (std::string *)(v1 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "delMailMaxId",
        99);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v5, 2u, (const std::string *)(v1 + 288)) )
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
          "src/redis_op_mail_data.cpp",
          "delMailMaxId",
          103);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[36])"[Mail] redis_mgr_ptr->cmdDel failed");
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
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 111: range 000000000E9C87B2-000000000E9C8B9A
int32_t __cdecl RedisOpMailData::getMailData(
        uint32_t uid,
        const std::vector<unsigned int> *mail_id_vec,
        std::vector<proto::MailRedisData> *mail_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 16 mail_key_vec:112 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_vec, (std::vector<std::string> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailData",
      116);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else if ( RedisOpMailData::getMailDataByRedisKey((const std::vector<std::string> *)(v3 + 32), mail_vec) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailData",
      123);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[36])"[Mail] getMailDataByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 131: range 000000000E9C8B9C-000000000E9C8D71
int32_t __cdecl RedisOpMailData::getMailData(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        std::vector<proto::MailRedisData> *mail_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v7; // rax
  int32_t result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 24 15 mail_id_vec:132";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
  M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  v7._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
    (std::vector<unsigned int> *const)(v3 + 64),
    v7,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  LODWORD(M_node) = RedisOpMailData::getMailData(uid, (const std::vector<unsigned int> *)(v3 + 64), mail_vec);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = (int)M_node;
  if ( v10 == (char *)v3 )
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

// Line 137: range 000000000E9C8D72-000000000E9C915A
int32_t __cdecl RedisOpMailData::getMailData(
        uint32_t uid,
        const std::vector<std::string> *mail_id_str_vec,
        std::vector<proto::MailRedisData> *mail_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 16 mail_key_vec:138 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_str_vec, (std::vector<std::string> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailData",
      142);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else if ( RedisOpMailData::getMailDataByRedisKey((const std::vector<std::string> *)(v3 + 32), mail_vec) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailData",
      149);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[36])"[Mail] getMailDataByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 157: range 000000000E9C915C-000000000E9C9544
int32_t __cdecl RedisOpMailData::getMailStr(
        uint32_t uid,
        const std::vector<unsigned int> *mail_id_vec,
        std::vector<std::string> *mail_str_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 16 mail_key_vec:158 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_vec, (std::vector<std::string> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailStr",
      162);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else if ( RedisOpMailData::getMailStrByRedisKey((const std::vector<std::string> *)(v3 + 32), mail_str_vec) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailStr",
      169);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[36])"[Mail] getMailDataByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 177: range 000000000E9C9546-000000000E9C971B
int32_t __cdecl RedisOpMailData::getMailStr(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        std::vector<std::string> *mail_str_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v7; // rax
  int32_t result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 24 15 mail_id_vec:178";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
  M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  v7._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
    (std::vector<unsigned int> *const)(v3 + 64),
    v7,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  LODWORD(M_node) = RedisOpMailData::getMailStr(uid, (const std::vector<unsigned int> *)(v3 + 64), mail_str_vec);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = (int)M_node;
  if ( v10 == (char *)v3 )
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

// Line 183: range 000000000E9C971C-000000000E9C9B04
int32_t __cdecl RedisOpMailData::getMailStr(
        uint32_t uid,
        const std::vector<std::string> *mail_id_str_vec,
        std::vector<std::string> *mail_str_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 16 mail_key_vec:184 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_str_vec, (std::vector<std::string> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailStr",
      188);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else if ( RedisOpMailData::getMailStrByRedisKey((const std::vector<std::string> *)(v3 + 32), mail_str_vec) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailStr",
      195);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[36])"[Mail] getMailDataByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 203: range 000000000E9C9B06-000000000E9C9EEC
int32_t __cdecl RedisOpMailData::getAllMailData(uint32_t uid, std::vector<proto::MailRedisData> *mail_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 24 19 mail_id_str_vec:204 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getAllMailData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  if ( RedisOpMailData::getAllValidMailIdStr(uid, (std::vector<std::string> *)(v2 + 32), 1, 0) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getAllMailData",
      208);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[35])"[Mail] getAllValidMailIdStr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else if ( RedisOpMailData::getMailData(uid, (const std::vector<std::string> *)(v2 + 32), mail_vec) )
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getAllMailData",
      215);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[26])"[Mail] getMailData failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 223: range 000000000E9C9EEE-000000000E9CA2E0
int32_t __cdecl RedisOpMailData::getAllMailStr(
        uint32_t uid,
        std::vector<std::string> *mail_str_vec,
        bool is_persistent)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+20h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 19 mail_id_str_vec:224 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getAllMailStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  if ( RedisOpMailData::getAllValidMailIdStr(uid, (std::vector<std::string> *)(v3 + 32), 1, is_persistent) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getAllMailStr",
      228);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[35])"[Mail] getAllValidMailIdStr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else if ( RedisOpMailData::getMailStr(uid, (const std::vector<std::string> *)(v3 + 32), mail_str_vec) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getAllMailStr",
      235);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[25])"[Mail] getMailStr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 243: range 000000000E9CA2E2-000000000E9CA6D8
int32_t __cdecl RedisOpMailData::getMailDataWithTran(
        uint32_t uid,
        const std::vector<unsigned int> *mail_id_vec,
        std::vector<proto::MailRedisData> *mail_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 16 mail_key_vec:244 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = RedisOpMailData::getMailDataWithTran;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_vec, (std::vector<std::string> *)(v4 + 32)) )
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTran",
      248);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v4 + 96),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( RedisOpMailData::getMailDataWithTranByRedisKey(
              (const std::vector<std::string> *)(v4 + 32),
              mail_vec,
              tran_ptr) )
  {
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTran",
      255);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v4 + 160),
      (const char (*)[44])"[Mail] getMailDataWithTranByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 263: range 000000000E9CA6DA-000000000E9CA8BA
int32_t __cdecl RedisOpMailData::getMailDataWithTran(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        std::vector<proto::MailRedisData> *mail_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v8; // rax
  int32_t result; // eax
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 24 15 mail_id_vec:264";
  *(_QWORD *)(v4 + 16) = RedisOpMailData::getMailDataWithTran;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v4 + 48));
  M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  v8._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
    (std::vector<unsigned int> *const)(v4 + 64),
    v8,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (const std::vector<unsigned int>::allocator_type *)(v4 + 48));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v4 + 48));
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  LODWORD(M_node) = RedisOpMailData::getMailDataWithTran(
                      uid,
                      (const std::vector<unsigned int> *)(v4 + 64),
                      mail_vec,
                      tran_ptr);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  result = (int)M_node;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 269: range 000000000E9CA8BC-000000000E9CACDA
int32_t __cdecl RedisOpMailData::getMailDataWithTran(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        std::map<std::string,proto::MailRedisData> *mail_key_value_map,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[304]; // [rsp+30h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 32 9 <unknown> 112 32 9 <unknown> 176 48 16 mail_key_set:270";
  *(_QWORD *)(v4 + 16) = RedisOpMailData::getMailDataWithTran;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v4 + 176));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_set, (std::set<std::string> *)(v4 + 176)) )
  {
    if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 48, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTran",
      274);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v4 + 48),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 48));
    *(_DWORD *)(((v4 + 48) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( RedisOpMailData::getMailDataWithTranByRedisKey(
              (const std::set<std::string> *)(v4 + 176),
              mail_key_value_map,
              tran_ptr) )
  {
    if ( *(char *)(((v4 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 112, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTran",
      281);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v4 + 112),
      (const char (*)[44])"[Mail] getMailDataWithTranByRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 112));
    *(_DWORD *)(((v4 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v4 + 176));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 289: range 000000000E9CACDC-000000000E9CBA5A
int32_t __cdecl RedisOpMailData::modifyMailDataWithTran(
        uint32_t uid,
        const std::map<std::string,proto::MailRedisData> *mail_key_value_map,
        const std::set<std::string> *persist_set,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  const proto::MailBin *v9; // rax
  std::map<std::string,std::string>::mapped_type *v11; // rax
  std::map<std::string,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  common::midb::RedisMgr *v14; // rdi
  int32_t v15; // r14d
  common::milog::MiLogStream *v16; // r14
  int v17; // edx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::map<std::string,std::string>::size_type v20; // rax
  uint32_t cur_time; // [rsp+24h] [rbp-3BCh]
  uint32_t expire_time; // [rsp+2Ch] [rbp-3B4h]
  std::_Rb_tree_const_iterator<std::pair<const std::string,proto::MailRedisData> >::reference v26; // [rsp+38h] [rbp-3A8h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *mail_key; // [rsp+40h] [rbp-3A0h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *mail; // [rsp+48h] [rbp-398h]
  char v29[912]; // [rsp+50h] [rbp-390h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 8 15 __for_begin:294 128 8 13 __for_end"
                        ":294 160 8 9 <unknown> 192 16 9 timer:318 224 32 9 <unknown> 288 32 9 <unknown> 352 32 12 mail_s"
                        "tr:303 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 48 17 key_value_map:292 688 "
                        "48 11 ttl_map:293 768 56 14 _tc_guard_:290";
  *(_QWORD *)(v4 + 16) = RedisOpMailData::modifyMailDataWithTran;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -219021312;
  v6[536862741] = 62194;
  v6[536862743] = -218959118;
  v6[536862745] = -218103808;
  v6[536862746] = -202116109;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "modifyMailDataWithTran",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 768),
    (const std::string *)(v4 + 224),
    (const std::string *)(v4 + 288));
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  cur_time = common::tools::TimeUtils::getNow();
  v7 = ((v4 + 608) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v4 + 608));
  v8 = ((v4 + 688) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_WORD *)(v8 + 4) = 0;
  std::map<std::string,unsigned int>::map((std::map<std::string,unsigned int> *const)(v4 + 688));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96);
  *(std::map<std::string,proto::MailRedisData>::const_iterator *)(v4 + 96) = std::map<std::string,proto::MailRedisData>::begin(mail_key_value_map);
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128);
  *(std::map<std::string,proto::MailRedisData>::const_iterator *)(v4 + 128) = std::map<std::string,proto::MailRedisData>::end(mail_key_value_map);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const std::string,proto::MailRedisData> >::_Self *)(v4 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<const std::string,proto::MailRedisData> >::_Self *)(v4 + 128)) )
  {
    v26 = std::_Rb_tree_const_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const std::string,proto::MailRedisData> > *const)(v4 + 96));
    mail_key = std::get<0ul,std::string const,proto::MailRedisData>(v26);
    mail = (std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *)std::get<1ul,std::string const,proto::MailRedisData>(v26);
    v9 = proto::MailRedisData::mail_bin(mail);
    expire_time = proto::MailBin::expire_time(v9);
    if ( common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(persist_set, mail_key)
      || cur_time <= expire_time )
    {
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 352);
      if ( !google::protobuf::MessageLite::SerializeToString(mail, (std::string *)(v4 + 352)) )
      {
        *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "modifyMailDataWithTran",
          306);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v4 + 416),
          (const char (*)[41])"[Mail] mail_str.SerializeToString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
        *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v11 = std::map<std::string,std::string>::operator[](
                (std::map<std::string,std::string> *const)(v4 + 608),
                mail_key);
        std::string::operator=(v11, v4 + 352);
        if ( !common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(persist_set, mail_key) )
        {
          v12 = std::map<std::string,unsigned int>::operator[](
                  (std::map<std::string,unsigned int> *const)(v4 + 688),
                  mail_key);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v12);
          }
          *v13 = expire_time - cur_time;
        }
      }
      std::string::~string((void *)(v4 + 352));
    }
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_const_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::string,proto::MailRedisData> > *const)(v4 + 96));
  }
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 192));
  v14 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
  if ( common::midb::RedisMgr::cmdSetexWithTranUsingPipeline(
         v14,
         tran_ptr,
         (const std::map<std::string,std::string> *)(v4 + 608),
         (std::map<std::string,unsigned int> *)(v4 + 688),
         persist_set) )
  {
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "modifyMailDataWithTran",
      322);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      (common::milog::MiLogStream *const)(v4 + 480),
      (const char (*)[59])"[Mail] redis_mgr_ptr->cmdSetexWithTranUsingPipeline failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v15 = -1;
  }
  else
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
      1u,
      "src/redis_op_mail_data.cpp",
      "modifyMailDataWithTran",
      325);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v4 + 544),
            (const char (*)[6])"time:");
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
    v17 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 192));
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = v17;
    v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v4 + 80));
    v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" size:");
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v20 = std::map<std::string,std::string>::size((const std::map<std::string,std::string> *const)(v4 + 608));
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      v20 = __asan_report_store8(v4 + 160);
    *(_QWORD *)(v4 + 160) = v20;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, (const unsigned __int64 *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
    *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v15 = 0;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 192));
  std::map<std::string,unsigned int>::~map((std::map<std::string,unsigned int> *const)(v4 + 688));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v4 + 608));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 768));
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v15;
};

// Line 331: range 000000000E9CBA5C-000000000E9CC4E2
int32_t __cdecl RedisOpMailData::delMailData(uint32_t uid, const std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // r14
  int v11; // edx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::set<std::string>::size_type v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  char v17[784]; // [rsp+20h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 8 9 <unknown> 128 16 9 timer:341 160 32"
                        " 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 48 "
                        "11 key_set:333 560 48 9 <unknown> 640 56 14 _tc_guard_:332";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::delMailData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -218959118;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "delMailData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 640),
    (const std::string *)(v2 + 160),
    (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  v5 = ((v2 + 480) >> 3) + 2147450880;
  *(_DWORD *)v5 = 0;
  *(_WORD *)(v5 + 4) = 0;
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 480));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_set, (std::set<std::string> *)(v2 + 480)) )
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "delMailData",
      337);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    v8 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_WORD *)(v8 + 4) = 0;
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 560), (const std::set<std::string> *)(v2 + 480));
    ret = common::midb::RedisMgr::cmdDel(v7, 2u, v2 + 560);
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 560));
    v9 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    if ( ret )
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
        "src/redis_op_mail_data.cpp",
        "delMailData",
        345);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[36])"[Mail] redis_mgr_ptr->cmdDel failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/redis_op_mail_data.cpp",
        "delMailData",
        349);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[6])"time:");
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v11 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = v11;
      v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" size:");
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v14 = std::set<std::string>::size((const std::set<std::string> *const)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_store8(v2 + 96);
      *(_QWORD *)(v2 + 96) = v14;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v6 = 0;
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 480));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 640));
  result = v6;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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

// Line 355: range 000000000E9CC4E4-000000000E9CCEDA
int32_t __cdecl RedisOpMailData::delMailDataWithTran(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  int32_t v7; // r14d
  common::midb::RedisMgr *v8; // rcx
  common::milog::MiLogStream *v9; // r14
  int v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::set<std::string>::size_type v13; // rax
  int32_t result; // eax
  char v16[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 8 9 <unknown> 112 16 9 timer:365 144 32"
                        " 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 48 "
                        "11 key_set:357 544 56 14 _tc_guard_:356";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::delMailDataWithTran;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862736] = -218959118;
  v5[536862738] = -218103808;
  v5[536862739] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "delMailDataWithTran",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 144),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
    (const std::string *)(v3 + 144),
    (const std::string *)(v3 + 208));
  std::string::~string((void *)(v3 + 144));
  *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 464) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::set<std::string>::set((std::set<std::string> *const)(v3 + 464));
  if ( RedisOpMailData::constructMailKey(uid, mail_id_set, (std::set<std::string> *)(v3 + 464)) )
  {
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "delMailDataWithTran",
      361);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v3 + 272),
      (const char (*)[31])"[Mail] constructMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
    v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdDelWithTran(v8, tran_ptr, (const std::set<std::string> *)(v3 + 464)) )
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
        "src/redis_op_mail_data.cpp",
        "delMailDataWithTran",
        369);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        (common::milog::MiLogStream *const)(v3 + 336),
        (const char (*)[44])"[Mail] redis_mgr_ptr->cmdDelWithTran failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/redis_op_mail_data.cpp",
        "delMailDataWithTran",
        373);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
             (common::milog::MiLogStream *const)(v3 + 400),
             (const char (*)[6])"time:");
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v10 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 112));
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64);
      *(_DWORD *)(v3 + 64) = v10;
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" size:");
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
      v13 = std::set<std::string>::size((const std::set<std::string> *const)(v3 + 464));
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_store8(v3 + 80);
      *(_QWORD *)(v3 + 80) = v13;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v7 = 0;
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v3 + 464));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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

// Line 379: range 000000000E9CCEDC-000000000E9CDC2E
__int64 __fastcall RedisOpMailData::delAllMailData(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  std::string *M_current; // r15
  std::string *v8; // r14
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t ret; // [rsp+1Ch] [rbp-3A4h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-3A0h]
  const std::string *mail_id_str; // [rsp+28h] [rbp-398h]
  char v17[912]; // [rsp+30h] [rbp-390h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(864LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 11 mail_id:408 96 4 7 uid:378 112 8 9 <unknown> 144 8 "
                        "9 <unknown> 176 8 15 __for_begin:406 208 8 13 __for_end:406 240 24 19 mail_id_str_vec:381 304 24"
                        " 22 collect_id_str_vec:391 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <un"
                        "known> 624 32 9 <unknown> 688 48 15 mail_id_set:405 768 56 14 _tc_guard_:380";
  *(_QWORD *)(v1 + 16) = RedisOpMailData::delAllMailData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862723] = -234881024;
  v3[536862724] = 62194;
  v3[536862724] = -234881024;
  v3[536862725] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = 62194;
  v3[536862726] = -234881024;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862734] = -219021312;
  v3[536862735] = 62194;
  v3[536862736] = -219021312;
  v3[536862737] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862740] = -219021312;
  v3[536862741] = 62194;
  v3[536862743] = -218959118;
  v3[536862745] = -218103808;
  v3[536862746] = -202116109;
  *(_DWORD *)(v1 + 96) = uid;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 432),
    "delAllMailData",
    (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 368),
    "REDIS",
    (const std::allocator<char> *)(v1 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 768),
    (const std::string *)(v1 + 368),
    (const std::string *)(v1 + 432));
  std::string::~string((void *)(v1 + 368));
  *(_DWORD *)(((v1 + 368) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 432));
  *(_DWORD *)(((v1 + 432) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  v4 = ((v1 + 240) >> 3) + 2147450880;
  *(_WORD *)v4 = 0;
  *(_BYTE *)(v4 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 240));
  if ( RedisOpMailData::getAllValidMailIdStr(*(_DWORD *)(v1 + 96), (std::vector<std::string> *)(v1 + 240), 1, 0) )
  {
    *(_DWORD *)(((v1 + 496) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 527) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 16 + 31) & 7) >= *(_BYTE *)(((v1 + 527) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 496, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 496),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "delAllMailData",
      386);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v1 + 496),
      (const char (*)[28])"[Mail] getAllMailKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 496));
    *(_DWORD *)(((v1 + 496) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    v6 = ((v1 + 304) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 304));
    if ( RedisOpMailData::getAllValidMailIdStr(*(_DWORD *)(v1 + 96), (std::vector<std::string> *)(v1 + 304), 1, 1) )
    {
      *(_DWORD *)(((v1 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 591) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 79) & 7) >= *(_BYTE *)(((v1 + 591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 560),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "delAllMailData",
        395);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v1 + 560),
        (const char (*)[28])"[Mail] getAllMailKey failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 560));
      *(_DWORD *)(((v1 + 560) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v1 + 304))._M_current;
      v8 = std::vector<std::string>::begin((std::vector<std::string> *const)(v1 + 304))._M_current;
      *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v1 + 112);
      *(std::vector<std::string>::iterator *)(v1 + 112) = std::vector<std::string>::end((std::vector<std::string> *const)(v1 + 240));
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::__normal_iterator<std::string*>(
        (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v1 + 144),
        (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 112));
      if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v1 + 144);
      std::vector<std::string>::insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>,void>(
        (std::vector<std::string> *const)(v1 + 240),
        *(std::vector<std::string>::const_iterator *)(v1 + 144),
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)v8,
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
      *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( std::vector<std::string>::empty((const std::vector<std::string> *const)(v1 + 240)) )
      {
        v5 = 0;
      }
      else
      {
        v9 = ((v1 + 688) >> 3) + 2147450880;
        *(_DWORD *)v9 = 0;
        *(_WORD *)(v9 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 688));
        __for_range = (std::vector<std::string> *)(v1 + 240);
        *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 176);
        *(std::vector<std::string>::iterator *)(v1 + 176) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 208);
        *(std::vector<std::string>::iterator *)(v1 + 208) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 176),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 208)) )
        {
          mail_id_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 176));
          *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v1 + 80);
          *(_DWORD *)(v1 + 80) = 0;
          if ( !common::tools::StringUtils::strToNum<unsigned int>(mail_id_str, (unsigned int *)(v1 + 80), 0) )
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v1 + 688),
              (const std::set<unsigned int>::value_type *)(v1 + 80));
          *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 176));
        }
        *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
        ret = RedisOpMailData::delMailData(*(_DWORD *)(v1 + 96), (const std::set<unsigned int> *)(v1 + 688));
        if ( ret )
        {
          *(_DWORD *)(((v1 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 624) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 655) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 113) & 7) >= *(_BYTE *)(((v1 + 655) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 624, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 624),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "delAllMailData",
            418);
          v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)(v1 + 624),
                  (const char (*)[26])"delMailData failed, uid: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v1 + 96));
          v12 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v11, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::set<unsigned int> *)(v1 + 688));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 624));
          *(_DWORD *)(((v1 + 624) >> 3) + 0x7FFF8000) = -117901064;
        }
        v5 = ret;
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 688));
      }
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 304));
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 240));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 768));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v1 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v5;
};

// Line 425: range 000000000E9CDC30-000000000E9CE5BF
int32_t __cdecl RedisOpMailData::insertMailId(uint32_t uid, uint32_t mail_id, uint32_t expire_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // r14
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
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:427 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:427 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:426";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::insertMailId;
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
    "insertMailId",
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
      "src/redis_op_mail_data.cpp",
      "insertMailId",
      427);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "insertMailId",
        427);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), off_1BF28EE0, uid);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), mail_id);
      v8 = common::midb::RedisMgr::cmdZAddnx(
             v7,
             2u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             expire_time) != 0;
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
          "src/redis_op_mail_data.cpp",
          "insertMailId",
          431);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[39])"[Mail] redis_mgr_ptr->cmdZAddnx failed");
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

// Line 439: range 000000000E9CE5C0-000000000E9CF3CF
int32_t __cdecl RedisOpMailData::getAllValidMailIdStr(
        uint32_t uid,
        std::vector<std::string> *mail_id_str_vec,
        bool is_reverse,
        bool is_persistent)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  common::midb::RedisMgr *v8; // rax
  common::midb::RedisMgr *v9; // rax
  int32_t result; // eax
  uint32_t cur_time; // [rsp+2Ch] [rbp-3F4h]
  char v14[1008]; // [rsp+30h] [rbp-3F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(960LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:441 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:441 352 32 9 <unknown> 416 32 13 min_score:444 480 3"
                        "2 13 max_score:445 544 32 12 time_buf:446 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknow"
                        "n> 800 32 9 <unknown> 864 56 14 _tc_guard_:440";
  *(_QWORD *)(v4 + 16) = RedisOpMailData::getAllValidMailIdStr;
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
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218103808;
  v6[536862749] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "getAllValidMailIdStr",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 864),
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
  if ( !std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v4 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "getAllValidMailIdStr",
        441);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
      goto LABEL_30;
    }
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 416);
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 480);
    *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( is_persistent )
    {
      snprintf((char *)(v4 + 544), 0x20uLL, "%u", 0xFFFFFFFFLL);
      std::string::append(v4 + 416, v4 + 544);
      std::string::operator=(v4 + 480, "+inf");
    }
    else
    {
      cur_time = common::tools::TimeUtils::getNow();
      snprintf((char *)(v4 + 544), 0x20uLL, "%u", cur_time);
      std::string::push_back(v4 + 416, 40LL);
      std::string::append(v4 + 416, v4 + 544);
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 608, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 608), 0xFFFFFFFF);
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 672), "(", (std::string *)(v4 + 608));
      std::string::operator=(v4 + 480, v4 + 672);
      std::string::~string((void *)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::string::~string((void *)(v4 + 608));
      *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( is_reverse )
    {
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRevRangeByScore(
             v8,
             2u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 416),
             (const std::string *)(v4 + 480),
             mail_id_str_vec) )
      {
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getAllValidMailIdStr",
          466);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)(v4 + 736),
          (const char (*)[49])"[Mail] redis_mgr_ptr->cmdZRevRangeByScore failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_29;
      }
    }
    else
    {
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRangeByScore(
             v9,
             2u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 416),
             (const std::string *)(v4 + 480),
             mail_id_str_vec) )
      {
        *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getAllValidMailIdStr",
          475);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          (common::milog::MiLogStream *const)(v4 + 800),
          (const char (*)[46])"[Mail] redis_mgr_ptr->cmdZRangeByScore failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
        *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_29;
      }
    }
    v7 = 0;
LABEL_29:
    std::string::~string((void *)(v4 + 480));
    std::string::~string((void *)(v4 + 416));
LABEL_30:
    std::string::~string((void *)(v4 + 288));
    goto LABEL_31;
  }
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
    "src/redis_op_mail_data.cpp",
    "getAllValidMailIdStr",
    441);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_31:
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 864));
  result = v7;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 484: range 000000000E9CF3D0-000000000E9CF7F1
int32_t __cdecl RedisOpMailData::removeMailId(uint32_t uid, const std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  unsigned int *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  unsigned int mail_id; // [rsp+14h] [rbp-13Ch]
  char v10[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 8 15 __for_begin:486 80 8 13 __for_end:486 112 32 9 <unknown> 176 48 19 mail_id_str_set:485";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeMailId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 176));
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48);
  *(std::set<unsigned int>::iterator *)(v2 + 48) = std::set<unsigned int>::begin(mail_id_set);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80);
  *(std::set<unsigned int>::iterator *)(v2 + 80) = std::set<unsigned int>::end(mail_id_set);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 48),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 80)) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 48));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    mail_id = *v6;
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 112, 32LL);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 112), mail_id);
    std::set<std::string>::insert(
      (std::set<std::string> *const)(v2 + 176),
      (std::set<std::string>::value_type *)(v2 + 112));
    std::string::~string((void *)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  v7 = RedisOpMailData::removeMailId(uid, (const std::set<std::string> *)(v2 + 176));
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 176));
  result = v7;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 495: range 000000000E9CF7F2-000000000E9D0060
int32_t __cdecl RedisOpMailData::removeMailId(uint32_t uid, const std::set<std::string> *mail_id_str_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // rax
  int32_t result; // eax
  char v8[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:497 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:497 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:496";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeMailId;
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
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeMailId",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 480),
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
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "removeMailId",
      497);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeMailId",
        497);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRem(v6, 2u, (const std::string *)(v2 + 288), mail_id_str_set) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "removeMailId",
          501);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"[Mail] redis_mgr_ptr->cmdZRem failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 480));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 508: range 000000000E9D0062-000000000E9D11D7
__int64 __fastcall RedisOpMailData::removeExpiredMailId(uint32_t uid, std::set<std::string> *expire_mail_id_str_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  common::midb::RedisMgr *v7; // r14
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::midb::RedisMgr *v10; // r14
  unsigned int cur_time; // [rsp+18h] [rbp-4C8h]
  int32_t ret; // [rsp+1Ch] [rbp-4C4h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-4C0h]
  const std::string *mail_id_str; // [rsp+28h] [rbp-4B8h]
  char v16[1200]; // [rsp+30h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 7 uid:507 128 8 15 "
                        "__for_begin:521 160 8 13 __for_end:521 192 16 17 redis_mgr_ptr:510 224 24 19 mail_id_str_vec:513"
                        " 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 13 redis_key:510 544 32 9 <unkn"
                        "own> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unkno"
                        "wn> 928 32 9 <unknown> 992 32 9 <unknown> 1056 56 14 _tc_guard_:509";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeExpiredMailId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218103808;
  v4[536862755] = -202116109;
  *(_DWORD *)(v2 + 112) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "removeExpiredMailId",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 1056),
    (const std::string *)(v2 + 288),
    (const std::string *)(v2 + 352));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 192),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 192)) )
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "removeExpiredMailId",
      510);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 416), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 480);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(*(_DWORD *)(v2 + 112), (std::string *)(v2 + 480)) )
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "removeExpiredMailId",
        510);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 544),
        off_1BF28EE0,
        *(unsigned int *)(v2 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      cur_time = common::tools::TimeUtils::getNow();
      v6 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 224));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 608), cur_time);
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        "-inf",
        (const std::allocator<char> *)(v2 + 80));
      v8 = common::midb::RedisMgr::cmdZRangeByScore(
             v7,
             2u,
             (const std::string *)(v2 + 480),
             (const std::string *)(v2 + 672),
             (const std::string *)(v2 + 608),
             (std::vector<std::string> *)(v2 + 224)) != 0;
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "removeExpiredMailId",
          517);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          (common::milog::MiLogStream *const)(v2 + 736),
          (const char (*)[46])"[Mail] redis_mgr_ptr->cmdZRangeByScore failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::vector<std::string> *)(v2 + 224);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128);
        *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160);
        *(std::vector<std::string>::iterator *)(v2 + 160) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 160)) )
        {
          mail_id_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 128));
          std::set<std::string>::insert(expire_mail_id_str_set, mail_id_str);
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/redis_op_mail_data.cpp",
          "removeExpiredMailId",
          525);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               (common::milog::MiLogStream *const)(v2 + 800),
               (const char (*)[27])" expired mail id str set: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v10 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 864, 32LL);
        }
        common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 864), cur_time);
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 928),
          "-inf",
          (const std::allocator<char> *)(v2 + 96));
        ret = common::midb::RedisMgr::cmdZRemRangeByScore(
                v10,
                2u,
                (const std::string *)(v2 + 480),
                (const std::string *)(v2 + 928),
                (const std::string *)(v2 + 864));
        std::string::~string((void *)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        if ( ret )
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 992, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 992),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "removeExpiredMailId",
            531);
          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v2 + 992),
            (const char (*)[49])"[Mail] redis_mgr_ptr->cmdZRemRangeByScore failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
    }
    std::string::~string((void *)(v2 + 480));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 1056));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v16);
  }
  return v5;
};

// Line 539: range 000000000E9D11D8-000000000E9D1A3E
int32_t __cdecl RedisOpMailData::removeAllMailId(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::midb::RedisMgr *v5; // rax
  int32_t result; // eax
  char v7[624]; // [rsp+20h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:541 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:541 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:540";
  *(_QWORD *)(v1 + 16) = RedisOpMailData::removeAllMailId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeAllMailId",
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
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v1 + 64)) )
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
      "src/redis_op_mail_data.cpp",
      "removeAllMailId",
      541);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v1 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeAllMailId",
        541);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v5, 2u, (const std::string *)(v1 + 288)) )
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
          "src/redis_op_mail_data.cpp",
          "removeAllMailId",
          547);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[36])"[Mail] redis_mgr_ptr->cmdDel failed");
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
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 555: range 000000000E9D1A40-000000000E9D2521
int32_t __cdecl RedisOpMailData::getMailIdCount(uint32_t uid, uint32_t *count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // r14
  int32_t result; // eax
  char v8[784]; // [rsp+10h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 16 17 redis_mgr_ptr:55"
                        "7 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:557 384 32 9 <unk"
                        "nown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:556";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getMailIdCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
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
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "getMailIdCount",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 640),
    (const std::string *)(v2 + 128),
    (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
      "src/redis_op_mail_data.cpp",
      "getMailIdCount",
      557);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v2 + 320)) )
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
        "src/redis_op_mail_data.cpp",
        "getMailIdCount",
        557);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 384), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        "+inf",
        (const std::allocator<char> *)(v2 + 80));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "-inf",
        (const std::allocator<char> *)(v2 + 64));
      LOBYTE(v6) = common::midb::RedisMgr::cmdZCount(
                     v6,
                     2u,
                     (const std::string *)(v2 + 320),
                     (const std::string *)(v2 + 448),
                     (const std::string *)(v2 + 512),
                     count) != 0;
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)v6 )
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
          "src/redis_op_mail_data.cpp",
          "getMailIdCount",
          561);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[39])"[Mail] redis_mgr_ptr->cmdZCount failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 640));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 569: range 000000000E9D2522-000000000E9D317E
int32_t __cdecl RedisOpMailData::getValidMailIdCount(uint32_t uid, uint32_t *count, bool is_persistent)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::midb::RedisMgr *v7; // rax
  int32_t result; // eax
  uint32_t cur_time; // [rsp+1Ch] [rbp-3B4h]
  char v11[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:571 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:571 352 32 9 <unknown> 416 32 13 min_score:574 480 3"
                        "2 13 max_score:575 544 32 12 time_buf:576 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknow"
                        "n> 800 56 14 _tc_guard_:570";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getValidMailIdCount;
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
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "getValidMailIdCount",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 800),
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
      "src/redis_op_mail_data.cpp",
      "getValidMailIdCount",
      571);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "getValidMailIdCount",
        571);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 416);
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 480);
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( is_persistent )
      {
        snprintf((char *)(v3 + 544), 0x20uLL, "%u", 0xFFFFFFFFLL);
        std::string::append(v3 + 416, v3 + 544);
        std::string::operator=(v3 + 480, "+inf");
      }
      else
      {
        cur_time = common::tools::TimeUtils::getNow();
        snprintf((char *)(v3 + 544), 0x20uLL, "%u", cur_time);
        std::string::push_back(v3 + 416, 40LL);
        std::string::append(v3 + 416, v3 + 544);
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 608, 32LL);
        }
        common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 608), 0xFFFFFFFF);
        if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 672, 32LL);
        }
        std::operator+<char>((std::string *)(v3 + 672), "(", (std::string *)(v3 + 608));
        std::string::operator=(v3 + 480, v3 + 672);
        std::string::~string((void *)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      }
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZCount(
             v7,
             2u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             (const std::string *)(v3 + 480),
             count) )
      {
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getValidMailIdCount",
          594);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v3 + 736),
          (const char (*)[39])"[Mail] redis_mgr_ptr->cmdZCount failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
      std::string::~string((void *)(v3 + 480));
      std::string::~string((void *)(v3 + 416));
    }
    std::string::~string((void *)(v3 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 800));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
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
  }
  return result;
};

// Line 602: range 000000000E9D3180-000000000E9D3CFF
__int64 __fastcall RedisOpMailData::insertMailTicket(uint32_t uid, const std::string *ticket, uint32_t timestamp)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::midb::RedisMgr *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  char v17[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:601 96 16 17 redis_mgr_ptr:604 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:604 384 32 9 <unknown> 448 32 9 <unk"
                        "nown> 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:603";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::insertMailTicket;
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
    "insertMailTicket",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 96)) )
  {
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
      "src/redis_op_mail_data.cpp",
      "insertMailTicket",
      604);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketHashMapRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 320)) )
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
        "src/redis_op_mail_data.cpp",
        "insertMailTicket",
        604);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 384),
        off_1BF28EE0,
        *(unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 448), timestamp);
      ret = common::midb::RedisMgr::cmdHSetnx(
              v7,
              2u,
              (const std::string *)(v3 + 320),
              ticket,
              (const std::string *)(v3 + 448));
      std::string::~string((void *)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      if ( ret )
      {
        if ( ret == -2 )
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
            "src/redis_op_mail_data.cpp",
            "insertMailTicket",
            611);
          v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 (common::milog::MiLogStream *const)(v3 + 512),
                 (const char (*)[49])"[Mail] redis_mgr_ptr->cmdHSetnx duplicated, key:");
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 320));
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
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
            "src/redis_op_mail_data.cpp",
            "insertMailTicket",
            615);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[45])"[Mail] redis_mgr_ptr->cmdHSetnx failed, key:");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v11,
                  (const std::string *)(v3 + 320));
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        }
        v6 = ret;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 640));
  result = v6;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 624: range 000000000E9D3D00-000000000E9D3ED7
int32_t __cdecl RedisOpMailData::getMailTicketMap(uint32_t uid, std::map<std::string,std::string> *ticket_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getMailTicketMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( RedisOpMailData::getRedisHashMap<proto::MailTicketHashMapRedisData>(uid, ticket_map) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailTicketMap",
      628);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[30])"[Mail] getRedisHashMap failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 636: range 000000000E9D3ED8-000000000E9D4746
int32_t __cdecl RedisOpMailData::removeMailTicket(uint32_t uid, const std::set<std::string> *ticket_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // rax
  int32_t result; // eax
  char v8[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:638 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:638 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:637";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeMailTicket;
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
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeMailTicket",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 480),
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
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "removeMailTicket",
      638);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketHashMapRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeMailTicket",
        638);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdHDel(v6, 2u, (const std::string *)(v2 + 288), ticket_set) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "removeMailTicket",
          642);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"[Mail] redis_mgr_ptr->cmdHDel failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 480));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 649: range 000000000E9D4748-000000000E9D4FAE
int32_t __cdecl RedisOpMailData::removeAllMailTicket(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::midb::RedisMgr *v5; // rax
  int32_t result; // eax
  char v7[624]; // [rsp+20h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:651 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:651 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:650";
  *(_QWORD *)(v1 + 16) = RedisOpMailData::removeAllMailTicket;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeAllMailTicket",
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
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v1 + 64)) )
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
      "src/redis_op_mail_data.cpp",
      "removeAllMailTicket",
      651);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketHashMapRedisData>(uid, (std::string *)(v1 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeAllMailTicket",
        651);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v5, 2u, (const std::string *)(v1 + 288)) )
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
          "src/redis_op_mail_data.cpp",
          "removeAllMailTicket",
          657);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[36])"[Mail] redis_mgr_ptr->cmdDel failed");
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
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 666: range 000000000E9D4FB0-000000000E9D5B2F
__int64 __fastcall RedisOpMailData::insertMailTicketWithMailId(
        uint32_t uid,
        const std::string *ticket,
        uint32_t mail_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::midb::RedisMgr *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  char v17[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:665 96 16 17 redis_mgr_ptr:668 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:668 384 32 9 <unknown> 448 32 9 <unk"
                        "nown> 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:667";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::insertMailTicketWithMailId;
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
    "insertMailTicketWithMailId",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 96)) )
  {
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
      "src/redis_op_mail_data.cpp",
      "insertMailTicketWithMailId",
      668);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketMailIdHashMapRedisData>(
           *(_DWORD *)(v3 + 80),
           (std::string *)(v3 + 320)) )
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
        "src/redis_op_mail_data.cpp",
        "insertMailTicketWithMailId",
        668);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 384),
        off_1BF28EE0,
        *(unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 448), mail_id);
      ret = common::midb::RedisMgr::cmdHSetnx(
              v7,
              2u,
              (const std::string *)(v3 + 320),
              ticket,
              (const std::string *)(v3 + 448));
      std::string::~string((void *)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      if ( ret )
      {
        if ( ret == -2 )
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
            "src/redis_op_mail_data.cpp",
            "insertMailTicketWithMailId",
            675);
          v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 (common::milog::MiLogStream *const)(v3 + 512),
                 (const char (*)[49])"[Mail] redis_mgr_ptr->cmdHSetnx duplicated, key:");
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 320));
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
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
            "src/redis_op_mail_data.cpp",
            "insertMailTicketWithMailId",
            679);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[45])"[Mail] redis_mgr_ptr->cmdHSetnx failed, key:");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v11,
                  (const std::string *)(v3 + 320));
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        }
        v6 = ret;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 640));
  result = v6;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 688: range 000000000E9D5B30-000000000E9D639E
int32_t __cdecl RedisOpMailData::removeMailTicketWithMailId(uint32_t uid, const std::set<std::string> *ticket_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // rax
  int32_t result; // eax
  char v8[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:690 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:690 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:689";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeMailTicketWithMailId;
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
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeMailTicketWithMailId",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 480),
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
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "removeMailTicketWithMailId",
      690);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketMailIdHashMapRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeMailTicketWithMailId",
        690);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdHDel(v6, 2u, (const std::string *)(v2 + 288), ticket_set) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "removeMailTicketWithMailId",
          694);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"[Mail] redis_mgr_ptr->cmdHDel failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 480));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 703: range 000000000E9D63A0-000000000E9D698C
int32_t __cdecl RedisOpMailData::getMailIdByTicket(
        uint32_t uid,
        const std::vector<std::string> *ticket_vec,
        std::vector<unsigned int> *mail_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  bool v7; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v8; // rax
  int32_t result; // eax
  const std::string *ticket; // [rsp+38h] [rbp-178h]
  char v12[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 11 mail_id:717 48 8 15 __for_begin:712 80 8 13 __for_end:712 112 8 8 iter:714 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 48 14 ticket_map:704";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailIdByTicket;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -202116109;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 240));
  if ( RedisOpMailData::getRedisHashMap<proto::MailTicketMailIdHashMapRedisData>(
         uid,
         (std::map<std::string,std::string> *)(v3 + 240)) )
  {
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailIdByTicket",
      708);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v3 + 176),
      (const char (*)[30])"[Mail] getRedisHashMap failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 48);
    *(std::vector<std::string>::const_iterator *)(v3 + 48) = std::vector<std::string>::begin(ticket_vec);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80);
    *(std::vector<std::string>::const_iterator *)(v3 + 80) = std::vector<std::string>::end(ticket_vec);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 80)) )
    {
      ticket = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 48));
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112);
      *(std::map<std::string,std::string>::iterator *)(v3 + 112) = std::map<std::string,std::string>::find(
                                                                     (std::map<std::string,std::string> *const)(v3 + 240),
                                                                     ticket);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144);
      *(std::map<std::string,std::string>::iterator *)(v3 + 144) = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 240));
      v7 = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 112),
             (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 144));
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v7 )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v8 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 112));
        if ( !common::tools::StringUtils::strToNum<unsigned int>(&v8->second, (unsigned int *)(v3 + 32), 1) )
          std::vector<unsigned int>::push_back(mail_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 48));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    v6 = 0;
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 240));
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 730: range 000000000E9D698E-000000000E9D750D
__int64 __fastcall RedisOpMailData::insertMailTransaction(
        uint32_t uid,
        const std::string *transaction,
        uint32_t expire_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::midb::RedisMgr *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  char v17[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:729 96 16 17 redis_mgr_ptr:732 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:732 384 32 9 <unknown> 448 32 9 <unk"
                        "nown> 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:731";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::insertMailTransaction;
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
    "insertMailTransaction",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 96)) )
  {
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
      "src/redis_op_mail_data.cpp",
      "insertMailTransaction",
      732);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::MailTransactionIdHashMapRedisData>(
           *(_DWORD *)(v3 + 80),
           (std::string *)(v3 + 320)) )
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
        "src/redis_op_mail_data.cpp",
        "insertMailTransaction",
        732);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 384),
        off_1BF28EE0,
        *(unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 448), expire_time);
      ret = common::midb::RedisMgr::cmdHSetnx(
              v7,
              2u,
              (const std::string *)(v3 + 320),
              transaction,
              (const std::string *)(v3 + 448));
      std::string::~string((void *)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      if ( ret )
      {
        if ( ret == -2 )
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
            "src/redis_op_mail_data.cpp",
            "insertMailTransaction",
            740);
          v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 (common::milog::MiLogStream *const)(v3 + 512),
                 (const char (*)[49])"[Mail] redis_mgr_ptr->cmdHSetnx duplicated, key:");
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 320));
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
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
            "src/redis_op_mail_data.cpp",
            "insertMailTransaction",
            744);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[45])"[Mail] redis_mgr_ptr->cmdHSetnx failed, key:");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v11,
                  (const std::string *)(v3 + 320));
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        }
        v6 = ret;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 640));
  result = v6;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 753: range 000000000E9D750E-000000000E9D76E5
int32_t __cdecl RedisOpMailData::getMailTransactionMap(
        uint32_t uid,
        std::map<std::string,std::string> *transaction_str_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getMailTransactionMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( RedisOpMailData::getRedisHashMap<proto::MailTransactionIdHashMapRedisData>(uid, transaction_str_map) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailTransactionMap",
      757);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[30])"[Mail] getRedisHashMap failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 765: range 000000000E9D76E6-000000000E9D7F54
int32_t __cdecl RedisOpMailData::removeMailTransaction(uint32_t uid, const std::set<std::string> *transaction_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::midb::RedisMgr *v6; // rax
  int32_t result; // eax
  char v8[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:767 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:767 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:766";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::removeMailTransaction;
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
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeMailTransaction",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 480),
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
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "removeMailTransaction",
      767);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailTransactionIdHashMapRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeMailTransaction",
        767);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdHDel(v6, 2u, (const std::string *)(v2 + 288), transaction_set) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "removeMailTransaction",
          771);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"[Mail] redis_mgr_ptr->cmdHDel failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::string::~string((void *)(v2 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 480));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 778: range 000000000E9D7F56-000000000E9D87BC
int32_t __cdecl RedisOpMailData::removeAllMailTransaction(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::midb::RedisMgr *v5; // rax
  int32_t result; // eax
  char v7[624]; // [rsp+20h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:780 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:780 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:779";
  *(_QWORD *)(v1 + 16) = RedisOpMailData::removeAllMailTransaction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "removeAllMailTransaction",
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
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v1 + 64)) )
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
      "src/redis_op_mail_data.cpp",
      "removeAllMailTransaction",
      780);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::MailTransactionIdHashMapRedisData>(uid, (std::string *)(v1 + 288)) )
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
        "src/redis_op_mail_data.cpp",
        "removeAllMailTransaction",
        780);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
      *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdDel(v5, 2u, (const std::string *)(v1 + 288)) )
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
          "src/redis_op_mail_data.cpp",
          "removeAllMailTransaction",
          786);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v1 + 416),
          (const char (*)[36])"[Mail] redis_mgr_ptr->cmdDel failed");
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
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 794: range 000000000E9DF01E-000000000E9DFF38
int32_t __cdecl RedisOpMailData::getRedisHashMap<proto::MailTicketHashMapRedisData>(
        uint32_t uid,
        std::map<std::string,std::string> *key_value_map)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rax
  common::midb::RedisMgr *v9; // rax
  int v10; // r14d
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr M_node; // r14
  std::map<std::string,std::string>::iterator v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::map<std::string,std::string>::size_type v17; // rax
  uint32_t cursor; // [rsp+28h] [rbp-398h]
  char v20[912]; // [rsp+30h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 next_cursor:802 96 4 12 loop_cnt:803 112 8 9 <unkno"
                        "wn> 144 16 17 redis_mgr_ptr:797 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 "
                        "13 redis_key:797 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688"
                        " 48 11 tmp_map:812 768 56 14 _tc_guard_:796";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getRedisHashMap<proto::MailTicketHashMapRedisData>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
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
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "getRedisHashMap",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 176),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
    (const std::string *)(v3 + 176),
    (const std::string *)(v3 + 240));
  std::string::~string((void *)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 144)) )
  {
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getRedisHashMap",
      797);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketHashMapRedisData>(uid, (std::string *)(v3 + 368)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        797);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 432), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      cursor = 0;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v6 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96);
      *(_DWORD *)(v3 + 96) = 0;
      while ( 1 )
      {
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 96);
        if ( *(_DWORD *)(v3 + 96) <= 9u )
        {
          v8 = ((v3 + 688) >> 3) + 2147450880;
          *(_DWORD *)v8 = 0;
          *(_WORD *)(v8 + 4) = 0;
          std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 688));
          v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdHScan(
                 v9,
                 2u,
                 (const std::string *)(v3 + 368),
                 cursor,
                 0xC8u,
                 (std::map<std::string,std::string> *)(v3 + 688),
                 (uint32_t *)(v3 + 80)) )
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
              "src/redis_op_mail_data.cpp",
              "getRedisHashMap",
              816);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v3 + 560),
              (const char (*)[38])"[Mail] redis_mgr_ptr->cmdHScan failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
            *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 96);
            ++*(_DWORD *)(v3 + 96);
            M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            v12._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            std::map<std::string,std::string>::insert<std::_Rb_tree_iterator<std::pair<std::string const,std::string>>>(
              key_value_map,
              v12,
              (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >)M_node);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( *(_DWORD *)(v3 + 80) )
            {
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              cursor = *(_DWORD *)(v3 + 80);
              *(_DWORD *)(v3 + 80) = 0;
              v10 = 2;
            }
            else
            {
              v10 = 1;
            }
          }
          std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 688));
          if ( v10 )
            v7 = v10 == 2 ? 2 : 0;
          else
            v7 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "getRedisHashMap",
            808);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v3 + 496),
            (const char (*)[17])"hscan loop limit");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v7 = 0;
        }
        v13 = ((v3 + 688) >> 3) + 2147450880;
        *(_DWORD *)v13 = -117901064;
        *(_WORD *)(v13 + 4) = -1800;
        if ( !v7 )
          break;
        if ( v7 != 2 )
          goto LABEL_49;
      }
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
        1u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        831);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v3 + 624),
              (const char (*)[13])" loop_cnt = ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v15,
              (const char (*)[24])" ,key_value_map.size = ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v17 = std::map<std::string,std::string>::size(key_value_map);
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store8(v3 + 112);
      *(_QWORD *)(v3 + 112) = v17;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v16,
        (const unsigned __int64 *)(v3 + 112));
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
      *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
    }
LABEL_49:
    std::string::~string((void *)(v3 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v20 == (char *)v3 )
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

// Line 794: range 000000000E9E0602-000000000E9E151C
int32_t __cdecl RedisOpMailData::getRedisHashMap<proto::MailTicketMailIdHashMapRedisData>(
        uint32_t uid,
        std::map<std::string,std::string> *key_value_map)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rax
  common::midb::RedisMgr *v9; // rax
  int v10; // r14d
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr M_node; // r14
  std::map<std::string,std::string>::iterator v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::map<std::string,std::string>::size_type v17; // rax
  uint32_t cursor; // [rsp+28h] [rbp-398h]
  char v20[912]; // [rsp+30h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 next_cursor:802 96 4 12 loop_cnt:803 112 8 9 <unkno"
                        "wn> 144 16 17 redis_mgr_ptr:797 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 "
                        "13 redis_key:797 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688"
                        " 48 11 tmp_map:812 768 56 14 _tc_guard_:796";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getRedisHashMap<proto::MailTicketMailIdHashMapRedisData>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
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
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "getRedisHashMap",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 176),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
    (const std::string *)(v3 + 176),
    (const std::string *)(v3 + 240));
  std::string::~string((void *)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 144)) )
  {
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getRedisHashMap",
      797);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::MailTicketMailIdHashMapRedisData>(uid, (std::string *)(v3 + 368)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        797);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 432), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      cursor = 0;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v6 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96);
      *(_DWORD *)(v3 + 96) = 0;
      while ( 1 )
      {
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 96);
        if ( *(_DWORD *)(v3 + 96) <= 9u )
        {
          v8 = ((v3 + 688) >> 3) + 2147450880;
          *(_DWORD *)v8 = 0;
          *(_WORD *)(v8 + 4) = 0;
          std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 688));
          v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdHScan(
                 v9,
                 2u,
                 (const std::string *)(v3 + 368),
                 cursor,
                 0xC8u,
                 (std::map<std::string,std::string> *)(v3 + 688),
                 (uint32_t *)(v3 + 80)) )
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
              "src/redis_op_mail_data.cpp",
              "getRedisHashMap",
              816);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v3 + 560),
              (const char (*)[38])"[Mail] redis_mgr_ptr->cmdHScan failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
            *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 96);
            ++*(_DWORD *)(v3 + 96);
            M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            v12._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            std::map<std::string,std::string>::insert<std::_Rb_tree_iterator<std::pair<std::string const,std::string>>>(
              key_value_map,
              v12,
              (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >)M_node);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( *(_DWORD *)(v3 + 80) )
            {
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              cursor = *(_DWORD *)(v3 + 80);
              *(_DWORD *)(v3 + 80) = 0;
              v10 = 2;
            }
            else
            {
              v10 = 1;
            }
          }
          std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 688));
          if ( v10 )
            v7 = v10 == 2 ? 2 : 0;
          else
            v7 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "getRedisHashMap",
            808);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v3 + 496),
            (const char (*)[17])"hscan loop limit");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v7 = 0;
        }
        v13 = ((v3 + 688) >> 3) + 2147450880;
        *(_DWORD *)v13 = -117901064;
        *(_WORD *)(v13 + 4) = -1800;
        if ( !v7 )
          break;
        if ( v7 != 2 )
          goto LABEL_49;
      }
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
        1u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        831);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v3 + 624),
              (const char (*)[13])" loop_cnt = ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v15,
              (const char (*)[24])" ,key_value_map.size = ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v17 = std::map<std::string,std::string>::size(key_value_map);
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store8(v3 + 112);
      *(_QWORD *)(v3 + 112) = v17;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v16,
        (const unsigned __int64 *)(v3 + 112));
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
      *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
    }
LABEL_49:
    std::string::~string((void *)(v3 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v20 == (char *)v3 )
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

// Line 794: range 000000000E9E1C24-000000000E9E2B3E
int32_t __cdecl RedisOpMailData::getRedisHashMap<proto::MailTransactionIdHashMapRedisData>(
        uint32_t uid,
        std::map<std::string,std::string> *key_value_map)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rax
  common::midb::RedisMgr *v9; // rax
  int v10; // r14d
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr M_node; // r14
  std::map<std::string,std::string>::iterator v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::map<std::string,std::string>::size_type v17; // rax
  uint32_t cursor; // [rsp+28h] [rbp-398h]
  char v20[912]; // [rsp+30h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 next_cursor:802 96 4 12 loop_cnt:803 112 8 9 <unkno"
                        "wn> 144 16 17 redis_mgr_ptr:797 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 "
                        "13 redis_key:797 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688"
                        " 48 11 tmp_map:812 768 56 14 _tc_guard_:796";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getRedisHashMap<proto::MailTransactionIdHashMapRedisData>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
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
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "getRedisHashMap",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 176),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
    (const std::string *)(v3 + 176),
    (const std::string *)(v3 + 240));
  std::string::~string((void *)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 144)) )
  {
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getRedisHashMap",
      797);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::MailTransactionIdHashMapRedisData>(uid, (std::string *)(v3 + 368)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        797);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 432), off_1BF28EE0, uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      cursor = 0;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v6 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96);
      *(_DWORD *)(v3 + 96) = 0;
      while ( 1 )
      {
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 96);
        if ( *(_DWORD *)(v3 + 96) <= 9u )
        {
          v8 = ((v3 + 688) >> 3) + 2147450880;
          *(_DWORD *)v8 = 0;
          *(_WORD *)(v8 + 4) = 0;
          std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 688));
          v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdHScan(
                 v9,
                 2u,
                 (const std::string *)(v3 + 368),
                 cursor,
                 0xC8u,
                 (std::map<std::string,std::string> *)(v3 + 688),
                 (uint32_t *)(v3 + 80)) )
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
              "src/redis_op_mail_data.cpp",
              "getRedisHashMap",
              816);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v3 + 560),
              (const char (*)[38])"[Mail] redis_mgr_ptr->cmdHScan failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
            *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 96);
            ++*(_DWORD *)(v3 + 96);
            M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            v12._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v3 + 688))._M_node;
            std::map<std::string,std::string>::insert<std::_Rb_tree_iterator<std::pair<std::string const,std::string>>>(
              key_value_map,
              v12,
              (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >)M_node);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( *(_DWORD *)(v3 + 80) )
            {
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              cursor = *(_DWORD *)(v3 + 80);
              *(_DWORD *)(v3 + 80) = 0;
              v10 = 2;
            }
            else
            {
              v10 = 1;
            }
          }
          std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 688));
          if ( v10 )
            v7 = v10 == 2 ? 2 : 0;
          else
            v7 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "getRedisHashMap",
            808);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v3 + 496),
            (const char (*)[17])"hscan loop limit");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v7 = 0;
        }
        v13 = ((v3 + 688) >> 3) + 2147450880;
        *(_DWORD *)v13 = -117901064;
        *(_WORD *)(v13 + 4) = -1800;
        if ( !v7 )
          break;
        if ( v7 != 2 )
          goto LABEL_49;
      }
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
        1u,
        "src/redis_op_mail_data.cpp",
        "getRedisHashMap",
        831);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v3 + 624),
              (const char (*)[13])" loop_cnt = ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v15,
              (const char (*)[24])" ,key_value_map.size = ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v17 = std::map<std::string,std::string>::size(key_value_map);
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store8(v3 + 112);
      *(_QWORD *)(v3 + 112) = v17;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v16,
        (const unsigned __int64 *)(v3 + 112));
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
      *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
    }
LABEL_49:
    std::string::~string((void *)(v3 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v20 == (char *)v3 )
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

// Line 837: range 000000000E9D87BE-000000000E9D8A1A
int32_t __cdecl RedisOpMailData::constructMailKey(uint32_t uid, uint32_t mail_id, std::string *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 9 <unknown> 96 32 15 mail_id_buf:844";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::constructMailKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  if ( RedisOpBase::getUidRedisKey<proto::MailRedisData>(uid, key) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "constructMailKey",
      840);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[29])"[Mail] getUidRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
    snprintf((char *)(v3 + 96), 0x20uLL, "%u", mail_id);
    std::string::push_back(key, 58LL);
    std::string::append(key, v3 + 96);
    result = 0;
  }
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 853: range 000000000E9D8A1C-000000000E9D8FA7
int32_t __cdecl RedisOpMailData::constructMailKey(
        uint32_t uid,
        const std::vector<unsigned int> *mail_id_vec,
        std::vector<std::string> *key_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::string *v9; // rdx
  int32_t result; // eax
  unsigned int mail_id; // [rsp+24h] [rbp-19Ch]
  char v13[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:861 64 8 13 __for_end:861 96 32 14 key_prefix:854 160 32 9 <unknown> 224 3"
                        "2 7 key:863 288 32 15 mail_id_buf:864";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::constructMailKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  std::string::basic_string(v3 + 96);
  if ( RedisOpBase::getUidRedisKey<proto::MailRedisData>(uid, (std::string *)(v3 + 96)) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "constructMailKey",
      857);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[29])"[Mail] getUidRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 32) = std::vector<unsigned int>::begin(mail_id_vec);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::end(mail_id_vec);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64)) )
    {
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 32));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      mail_id = *v8;
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 224, v3 + 96);
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      snprintf((char *)(v3 + 288), 0x20uLL, "%u", mail_id);
      std::string::push_back(v3 + 224, 58LL);
      std::string::append(v3 + 224, v3 + 288);
      v9 = std::move<std::string &>((std::string *)(v3 + 224));
      std::vector<std::string>::emplace_back<std::string>(key_vec, v9, v9);
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 32));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v6 = 0;
  }
  std::string::~string((void *)(v3 + 96));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 875: range 000000000E9D8FA8-000000000E9D9528
int32_t __cdecl RedisOpMailData::constructMailKey(
        uint32_t uid,
        const std::set<unsigned int> *mail_id_set,
        std::set<std::string> *key_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  int32_t result; // eax
  unsigned int mail_id; // [rsp+24h] [rbp-19Ch]
  char v12[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:883 64 8 13 __for_end:883 96 32 14 key_prefix:876 160 32 9 <unknown> 224 3"
                        "2 7 key:885 288 32 15 mail_id_buf:886";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::constructMailKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  std::string::basic_string(v3 + 96);
  if ( RedisOpBase::getUidRedisKey<proto::MailRedisData>(uid, (std::string *)(v3 + 96)) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "constructMailKey",
      879);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[29])"[Mail] getUidRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32);
    *(std::set<unsigned int>::iterator *)(v3 + 32) = std::set<unsigned int>::begin(mail_id_set);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::end(mail_id_set);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 32),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64)) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 32));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      mail_id = *v8;
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 224, v3 + 96);
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      snprintf((char *)(v3 + 288), 0x20uLL, "%u", mail_id);
      std::string::push_back(v3 + 224, 58LL);
      std::string::append(v3 + 224, v3 + 288);
      std::set<std::string>::insert(key_set, (const std::set<std::string>::value_type *)(v3 + 224));
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 32));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v6 = 0;
  }
  std::string::~string((void *)(v3 + 96));
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 897: range 000000000E9D952A-000000000E9D9A74
int32_t __cdecl RedisOpMailData::constructMailKey(
        uint32_t uid,
        const std::vector<std::string> *mail_id_str_vec,
        std::vector<std::string> *key_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference v7; // rax
  int32_t result; // eax
  char v10[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:905 64 8 13 __for_end:905 96 32 14 key_prefix:898 160 32 9 <unknown> 224 3"
                        "2 15 mail_id_str:905 288 32 7 key:907";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::constructMailKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  std::string::basic_string(v3 + 96);
  if ( RedisOpBase::getUidRedisKey<proto::MailRedisData>(uid, (std::string *)(v3 + 96)) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "constructMailKey",
      901);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[29])"[Mail] getUidRedisKey failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32);
    *(std::vector<std::string>::const_iterator *)(v3 + 32) = std::vector<std::string>::begin(mail_id_str_vec);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::end(mail_id_str_vec);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64)) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 32));
      std::string::basic_string(v3 + 224, v7);
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 288, v3 + 96);
      std::string::push_back(v3 + 288, 58LL);
      std::string::append(v3 + 288, v3 + 224);
      std::vector<std::string>::push_back(key_vec, (const std::vector<std::string>::value_type *)(v3 + 288));
      std::string::~string((void *)(v3 + 288));
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 32));
    }
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v6 = 0;
  }
  std::string::~string((void *)(v3 + 96));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 917: range 000000000E9D9A76-000000000E9DA3D2
int32_t __cdecl RedisOpMailData::getMailDataByRedisKey(
        const std::vector<std::string> *mail_key_vec,
        std::vector<proto::MailRedisData> *mail_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  common::midb::RedisMgr *v6; // rdi
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  std::remove_reference<proto::MailRedisData&>::type *v9; // rdx
  unsigned __int64 v10; // rax
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-2C0h]
  const std::string *mail_str; // [rsp+28h] [rbp-2B8h]
  char v15[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:927 112 8 13 __for_end:927 144 24 16 ma"
                        "il_str_vec:919 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 4"
                        "0 8 mail:929 544 56 14 _tc_guard_:918";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getMailDataByRedisKey;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61953;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "getMailDataByRedisKey",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 208),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
    (const std::string *)(v2 + 208),
    (const std::string *)(v2 + 272));
  std::string::~string((void *)(v2 + 208));
  *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 272));
  *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  v5 = ((v2 + 144) >> 3) + 2147450880;
  *(_WORD *)v5 = 0;
  *(_BYTE *)(v5 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 144));
  v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
  if ( common::midb::RedisMgr::cmdMget(v6, 2u, mail_key_vec, (std::vector<std::string> *)(v2 + 144)) )
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
      "src/redis_op_mail_data.cpp",
      "getMailDataByRedisKey",
      923);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 336),
      (const char (*)[37])"[Mail] redis_mgr_ptr->cmdMget failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v2 + 144);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 80);
    *(std::vector<std::string>::iterator *)(v2 + 80) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112);
    *(std::vector<std::string>::iterator *)(v2 + 112) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 80),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 112)) )
    {
      mail_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 80));
      v8 = ((v2 + 464) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_BYTE *)(v8 + 4) = 0;
      proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v2 + 464));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 464, mail_str) != 1 )
      {
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getMailDataByRedisKey",
          932);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 400),
          (const char (*)[28])"Mail ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v9 = std::move<proto::MailRedisData &>((proto::MailRedisData *)(v2 + 464));
        std::vector<proto::MailRedisData>::emplace_back<proto::MailRedisData>(mail_vec, v9, v9);
      }
      proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v2 + 464));
      v10 = ((v2 + 464) >> 3) + 2147450880;
      *(_DWORD *)v10 = -117901064;
      *(_BYTE *)(v10 + 4) = -8;
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 80));
    }
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    v7 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  result = v7;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 942: range 000000000E9DA3D4-000000000E9DA8A5
int32_t __cdecl RedisOpMailData::getMailStrByRedisKey(
        const std::vector<std::string> *mail_key_vec,
        std::vector<std::string> *mail_str_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::midb::RedisMgr *v5; // rdi
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[400]; // [rsp+20h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "56 14 _tc_guard_:943";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::getMailStrByRedisKey;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "getMailStrByRedisKey",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 256),
    (const std::string *)(v2 + 64),
    (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  v5 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
  if ( common::midb::RedisMgr::cmdMget(v5, 2u, mail_key_vec, mail_str_vec) )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_mail_data.cpp",
      "getMailStrByRedisKey",
      947);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[37])"[Mail] redis_mgr_ptr->cmdMget failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 256));
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 955: range 000000000E9DA8A6-000000000E9DB213
int32_t __cdecl RedisOpMailData::getMailDataWithTranByRedisKey(
        const std::vector<std::string> *mail_key_vec,
        std::vector<proto::MailRedisData> *mail_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::midb::RedisMgr *v7; // rdi
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  std::remove_reference<proto::MailRedisData&>::type *v10; // rdx
  unsigned __int64 v11; // rax
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-2C0h]
  const std::string *mail_str; // [rsp+38h] [rbp-2B8h]
  char v17[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:965 112 8 13 __for_end:965 144 24 16 ma"
                        "il_str_vec:957 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 4"
                        "0 8 mail:967 544 56 14 _tc_guard_:956";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailDataWithTranByRedisKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61953;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218103808;
  v5[536862739] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "getMailDataWithTranByRedisKey",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
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
  v6 = ((v3 + 144) >> 3) + 2147450880;
  *(_WORD *)v6 = 0;
  *(_BYTE *)(v6 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 144));
  v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
  if ( common::midb::RedisMgr::cmdMgetWithTran(v7, 2u, mail_key_vec, (std::vector<std::string> *)(v3 + 144), tran_ptr) )
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
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTranByRedisKey",
      961);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v3 + 336),
      (const char (*)[45])"[Mail] redis_mgr_ptr->cmdMgetWithTran failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 144);
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80);
    *(std::vector<std::string>::iterator *)(v3 + 80) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112);
    *(std::vector<std::string>::iterator *)(v3 + 112) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 80),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 112)) )
    {
      mail_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 80));
      v9 = ((v3 + 464) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_BYTE *)(v9 + 4) = 0;
      proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v3 + 464));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 464, mail_str) != 1 )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getMailDataWithTranByRedisKey",
          970);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v3 + 400),
          (const char (*)[28])"Mail ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v10 = std::move<proto::MailRedisData &>((proto::MailRedisData *)(v3 + 464));
        std::vector<proto::MailRedisData>::emplace_back<proto::MailRedisData>(mail_vec, v10, v10);
      }
      proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v3 + 464));
      v11 = ((v3 + 464) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_BYTE *)(v11 + 4) = -8;
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 80));
    }
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    v8 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  result = v8;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 980: range 000000000E9DB214-000000000E9DBF1A
int32_t __cdecl RedisOpMailData::getMailDataWithTranByRedisKey(
        const std::set<std::string> *mail_key_set,
        std::map<std::string,proto::MailRedisData> *mail_key_value_map,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::map<std::string,std::string>::mapped_type *v7; // rax
  common::midb::RedisMgr *v8; // rax
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rdx
  unsigned __int64 v12; // rax
  proto::MailRedisData *v13; // rax
  unsigned __int64 v14; // rax
  std::map<std::string,std::string> *__for_range_0; // [rsp+38h] [rbp-3B8h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::reference v18; // [rsp+40h] [rbp-3B0h]
  std::tuple_element<0,std::pair<const std::string,std::string > >::type *mail_key_0; // [rsp+48h] [rbp-3A8h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *mail_str; // [rsp+50h] [rbp-3A0h]
  const std::string *mail_key; // [rsp+58h] [rbp-398h]
  char v22[912]; // [rsp+60h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:983 112 8 13 __for_end:983 144 8 15 __f"
                        "or_begin:996 176 8 13 __for_end:996 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400"
                        " 32 9 <unknown> 464 32 9 <unknown> 528 40 8 mail:995 608 40 9 mail:1004 688 48 17 key_value_map:"
                        "982 768 56 14 _tc_guard_:981";
  *(_QWORD *)(v3 + 16) = RedisOpMailData::getMailDataWithTranByRedisKey;
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
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862743] = -218959118;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "getMailDataWithTranByRedisKey",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 768),
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
  v6 = ((v3 + 688) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 688));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80);
  *(std::set<std::string>::iterator *)(v3 + 80) = std::set<std::string>::begin(mail_key_set);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112);
  *(std::set<std::string>::iterator *)(v3 + 112) = std::set<std::string>::end(mail_key_set);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 80),
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 112)) )
  {
    mail_key = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
    v7 = std::map<std::string,std::string>::operator[]((std::map<std::string,std::string> *const)(v3 + 688), mail_key);
    std::string::operator=(v7, &unk_1BF1B500);
    std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
  }
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
  if ( common::midb::RedisMgr::cmdMgetWithTran(v8, 2u, (std::map<std::string,std::string> *)(v3 + 688), tran_ptr) )
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
      "src/redis_op_mail_data.cpp",
      "getMailDataWithTranByRedisKey",
      991);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v3 + 336),
      (const char (*)[45])"[Mail] redis_mgr_ptr->cmdMgetWithTran failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    v10 = ((v3 + 528) >> 3) + 2147450880;
    *(_DWORD *)v10 = 0;
    *(_BYTE *)(v10 + 4) = 0;
    proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v3 + 528));
    __for_range_0 = (std::map<std::string,std::string> *)(v3 + 688);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144);
    *(std::map<std::string,std::string>::iterator *)(v3 + 144) = std::map<std::string,std::string>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176);
    *(std::map<std::string,std::string>::iterator *)(v3 + 176) = std::map<std::string,std::string>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 144),
              (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 176)) )
    {
      v18 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 144));
      mail_key_0 = std::get<0ul,std::string const,std::string>(v18);
      mail_str = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v18);
      if ( (unsigned __int8)std::string::empty(mail_str) )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "getMailDataWithTranByRedisKey",
          1000);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)(v3 + 400),
                (const char (*)[30])"mail_str is empty, mail_key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, mail_key_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v12 = ((v3 + 608) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_BYTE *)(v12 + 4) = 0;
        proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v3 + 608));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 608, mail_str) != 1 )
        {
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "getMailDataWithTranByRedisKey",
            1007);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v3 + 464),
            (const char (*)[28])"Mail ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          v13 = std::map<std::string,proto::MailRedisData>::operator[](mail_key_value_map, mail_key_0);
          proto::MailRedisData::operator=(v13, (const proto::MailRedisData *)(v3 + 608));
        }
        proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v3 + 608));
      }
      v14 = ((v3 + 608) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_BYTE *)(v14 + 4) = -8;
      std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 144));
    }
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    v9 = 0;
    proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v3 + 528));
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 688));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 768));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
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
  return v9;
};

// Line 1019: range 000000000E9DBF1C-000000000E9DCA54
int32_t __cdecl RedisOpMailData::clearMailIdExpireTime(uint32_t uid, const std::set<std::string> *mail_id_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  common::midb::RedisMgr *v8; // rax
  int32_t result; // eax
  const std::string *mail_id; // [rsp+28h] [rbp-318h]
  char v11[784]; // [rsp+30h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 8 16 __for_begin:1030 112 8 14 __for_end:1030 144 16 18 "
                        "redis_mgr_ptr:1026 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 14 redis_key:"
                        "1026 432 32 9 <unknown> 496 32 9 <unknown> 560 48 21 member_score_map:1029 640 56 15 _tc_guard_:1025";
  *(_QWORD *)(v2 + 16) = RedisOpMailData::clearMailIdExpireTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61953;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -218959118;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  if ( std::set<std::string>::empty(mail_id_set) )
  {
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 240),
      "clearMailIdExpireTime",
      (const std::allocator<char> *)(v2 + 64));
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 176),
      "REDIS",
      (const std::allocator<char> *)(v2 + 48));
    MonitorReportUtils::TimeCostGuard::TimeCostGuard(
      (MonitorReportUtils::TimeCostGuard *const)(v2 + 640),
      (const std::string *)(v2 + 176),
      (const std::string *)(v2 + 240));
    std::string::~string((void *)(v2 + 176));
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 240));
    *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
      (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
      &ResourceBox::redis_mgr_ptr);
    if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_mail_data.cpp",
        "clearMailIdExpireTime",
        1026);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 368);
      if ( RedisOpBase::getUidRedisKey<proto::MailIdSortedSetRedisData>(uid, (std::string *)(v2 + 368)) )
      {
        *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_mail_data.cpp",
          "clearMailIdExpireTime",
          1026);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 432), off_1BF28EE0, uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
        *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v6 = ((v2 + 560) >> 3) + 2147450880;
        *(_DWORD *)v6 = 0;
        *(_WORD *)(v6 + 4) = 0;
        std::map<std::string,long>::map((std::map<std::string,long int> *const)(v2 + 560));
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 80);
        *(std::set<std::string>::iterator *)(v2 + 80) = std::set<std::string>::begin(mail_id_set);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 112);
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::end(mail_id_set);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112)) )
        {
          mail_id = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
          v7 = (unsigned __int64)std::map<std::string,long>::operator[](
                                   (std::map<std::string,long int> *const)(v2 + 560),
                                   mail_id);
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_store8(v7);
          *(_QWORD *)v7 = 0xFFFFFFFFLL;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdZAddUsingPipeline(
               v8,
               2u,
               (const std::string *)(v2 + 368),
               (const std::map<std::string,long int> *)(v2 + 560)) )
        {
          *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 47) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_mail_data.cpp",
            "clearMailIdExpireTime",
            1037);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 496),
            (const char (*)[39])"[Mail] redis_mgr_ptr->cmdZAddnx failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
          *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
        std::map<std::string,long>::~map((std::map<std::string,long int> *const)(v2 + 560));
      }
      std::string::~string((void *)(v2 + 368));
    }
    std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 640));
  }
  result = v5;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 1041: range 000000000E9DCBF6-000000000E9DCC0A
void __cdecl GLOBAL__sub_I_redis_op_mail_data_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1041: range 000000000E9DCA55-000000000E9DCBF5
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
    __asan_before_dynamic_init("src/redis_op_mail_data.cpp");
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
