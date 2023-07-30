// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/redis_op_social_data.cpp

// Line 18: range 000000000D4306F6-000000000D43131B
int32_t __cdecl RedisOpSocialData::getPlayerFriendSet(uint32_t uid, std::set<unsigned int> *friend_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v8; // rax
  int32_t result; // eax
  std::set<std::string> *__for_range; // [rsp+18h] [rbp-358h]
  char v11[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 13 friend_uid:31 80 8 14 __for_begin:29 112 8 12 __for"
                        "_end:29 144 16 16 redis_mgr_ptr:20 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 "
                        "32 12 redis_key:20 432 32 9 <unknown> 496 32 9 <unknown> 560 32 17 friend_uid_str:29 624 48 17 r"
                        "aw_friend_set:22 704 56 13 _tc_guard_:19";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerFriendSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "getPlayerFriendSet",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 176),
    (const std::string *)(v2 + 240));
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getPlayerFriendSet",
      20);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerFriendSet",
        20);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v7,
             4u,
             (const std::string *)(v2 + 368),
             (std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPlayerFriendSet",
          25);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 496),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v2 + 624);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 80) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112)) )
        {
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
          v8 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
          std::string::basic_string(v2 + 560, v8);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 64);
          *(_DWORD *)(v2 + 64) = 0;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v2 + 560),
            (unsigned int *)(v2 + 64),
            1);
          std::set<unsigned int>::insert(friend_set, (const std::set<unsigned int>::value_type *)(v2 + 64));
          std::string::~string((void *)(v2 + 560));
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
        }
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 40: range 000000000D43131C-000000000D431F52
int32_t __cdecl RedisOpSocialData::getPlayerFriendListWithTran(
        uint32_t uid,
        std::set<unsigned int> *friend_set,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v9; // rax
  int32_t result; // eax
  std::set<std::string> *__for_range; // [rsp+28h] [rbp-358h]
  char v13[848]; // [rsp+30h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 13 friend_uid:53 80 8 14 __for_begin:51 112 8 12 __for"
                        "_end:51 144 16 16 redis_mgr_ptr:42 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 "
                        "32 12 redis_key:42 432 32 9 <unknown> 496 32 9 <unknown> 560 32 17 friend_uid_str:51 624 48 17 r"
                        "aw_friend_set:44 704 56 13 _tc_guard_:41";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerFriendListWithTran;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
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
  v5[536862741] = -218959118;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "getPlayerFriendListWithTran",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 176),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 704),
    (const std::string *)(v3 + 176),
    (const std::string *)(v3 + 240));
  std::string::~string((void *)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 240));
  *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
      "src/redis_op_social_data.cpp",
      "getPlayerFriendListWithTran",
      42);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v3 + 368)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerFriendListWithTran",
        42);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_WORD *)(v7 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v3 + 624));
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSmemberWithTran(
             v8,
             4u,
             (const std::string *)(v3 + 368),
             (std::set<std::string> *)(v3 + 624),
             tran_ptr) )
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
          "src/redis_op_social_data.cpp",
          "getPlayerFriendListWithTran",
          47);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v3 + 496),
          (const char (*)[42])"redis_mgr_ptr->cmdSmemberWithTran  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v3 + 624);
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v3 + 80) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v3 + 112) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 112)) )
        {
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
          v9 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
          std::string::basic_string(v3 + 560, v9);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = 0;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v3 + 560),
            (unsigned int *)(v3 + 64),
            1);
          std::set<unsigned int>::insert(friend_set, (const std::set<unsigned int>::value_type *)(v3 + 64));
          std::string::~string((void *)(v3 + 560));
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v3 + 80));
        }
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        v6 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v3 + 624));
    }
    std::string::~string((void *)(v3 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 704));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 62: range 000000000D431F54-000000000D432ADA
int32_t __cdecl RedisOpSocialData::getPlayerAskFriendList(uint32_t uid, std::vector<unsigned int> *ask_friend_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v8; // rax
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+18h] [rbp-358h]
  char v11[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 13 friend_uid:75 96 8 14 __for_begin:73 128 8 12 __for"
                        "_end:73 160 16 16 redis_mgr_ptr:64 192 24 21 ask_friend_str_vec:66 256 32 9 <unknown> 320 32 9 <"
                        "unknown> 384 32 9 <unknown> 448 32 12 redis_key:64 512 32 9 <unknown> 576 32 9 <unknown> 640 32 "
                        "17 friend_uid_str:73 704 56 13 _tc_guard_:63";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerAskFriendList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    "getPlayerAskFriendList",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 256),
    (const std::string *)(v2 + 320));
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 160),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 160)) )
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
      "src/redis_op_social_data.cpp",
      "getPlayerAskFriendList",
      64);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 384), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 448);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v2 + 448)) )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerAskFriendList",
        64);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 512),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 192));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRevRangeByScore(
             v7,
             5u,
             (const std::string *)(v2 + 448),
             (std::vector<std::string> *)(v2 + 192)) )
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPlayerAskFriendList",
          69);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[43])"redis_mgr_ptr->cmdZRevRangeByScore  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::vector<std::string> *)(v2 + 192);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128)) )
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          v8 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
          std::string::basic_string(v2 + 640, v8);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v2 + 640),
            (unsigned int *)(v2 + 80),
            1);
          std::vector<unsigned int>::push_back(ask_friend_vec, (const std::vector<unsigned int>::value_type *)(v2 + 80));
          std::string::~string((void *)(v2 + 640));
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
        }
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
    }
    std::string::~string((void *)(v2 + 448));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 160));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 85: range 000000000D432ADC-000000000D433673
int32_t __cdecl RedisOpSocialData::getPlayerAskFriendListWithTran(
        uint32_t uid,
        std::vector<unsigned int> *ask_friend_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v9; // rax
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+28h] [rbp-358h]
  char v13[848]; // [rsp+30h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 13 friend_uid:98 96 8 14 __for_begin:96 128 8 12 __for"
                        "_end:96 160 16 16 redis_mgr_ptr:87 192 24 21 ask_friend_str_vec:89 256 32 9 <unknown> 320 32 9 <"
                        "unknown> 384 32 9 <unknown> 448 32 12 redis_key:87 512 32 9 <unknown> 576 32 9 <unknown> 640 32 "
                        "17 friend_uid_str:96 704 56 13 _tc_guard_:86";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerAskFriendListWithTran;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 320),
    "getPlayerAskFriendListWithTran",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 256),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 704),
    (const std::string *)(v3 + 256),
    (const std::string *)(v3 + 320));
  std::string::~string((void *)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 160),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 160)) )
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
      "src/redis_op_social_data.cpp",
      "getPlayerAskFriendListWithTran",
      87);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 384), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 448);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v3 + 448)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerAskFriendListWithTran",
        87);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 512),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = ((v3 + 192) >> 3) + 2147450880;
      *(_WORD *)v7 = 0;
      *(_BYTE *)(v7 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRevRangeByScoreWithTran(
             v8,
             5u,
             (const std::string *)(v3 + 448),
             (std::vector<std::string> *)(v3 + 192),
             tran_ptr) )
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
          "src/redis_op_social_data.cpp",
          "getPlayerAskFriendListWithTran",
          92);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v3 + 576),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        __for_range = (std::vector<std::string> *)(v3 + 192);
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v3 + 96) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 96),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128)) )
        {
          *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
          v9 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
          std::string::basic_string(v3 + 640, v9);
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v3 + 640),
            (unsigned int *)(v3 + 80),
            1);
          std::vector<unsigned int>::push_back(ask_friend_vec, (const std::vector<unsigned int>::value_type *)(v3 + 80));
          std::string::~string((void *)(v3 + 640));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
        }
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        v6 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
    }
    std::string::~string((void *)(v3 + 448));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 160));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 704));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 107: range 000000000D433674-000000000D434014
int32_t __cdecl RedisOpSocialData::addAskAddFriendList(
        uint32_t uid,
        uint32_t target_id,
        uint32_t timestamp,
        bool *is_repeated)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  bool v9; // r14
  int32_t result; // eax
  char v13[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:109 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:109 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:108";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::addAskAddFriendList;
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
  v6[536862738] = -218103808;
  v6[536862739] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "addAskAddFriendList",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 544),
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
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "addAskAddFriendList",
      109);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v4 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "addAskAddFriendList",
        109);
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
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 416), target_id);
      v9 = common::midb::RedisMgr::cmdZAddnx(
             v8,
             5u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 416),
             timestamp,
             is_repeated) != 0;
      std::string::~string((void *)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
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
          "src/redis_op_social_data.cpp",
          "addAskAddFriendList",
          113);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v4 + 480),
          (const char (*)[33])"redis_mgr_ptr->cmdZAddnx  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::string::~string((void *)(v4 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 544));
  result = v7;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 121: range 000000000D434016-000000000D4349BC
int32_t __cdecl RedisOpSocialData::addAskAddFriendListWithTran(
        const common::midb::GetAndSetTranPtr *tran_ptr,
        uint32_t uid,
        uint32_t target_id,
        uint32_t timestamp,
        bool *is_repeated)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  bool v10; // r14
  int32_t result; // eax
  char v15[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(640LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:123 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:123 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:122";
  *(_QWORD *)(v5 + 16) = RedisOpSocialData::addAskAddFriendListWithTran;
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
  v7[536862736] = -218959118;
  v7[536862738] = -218103808;
  v7[536862739] = -202116109;
  std::allocator<char>::allocator(v5 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 160),
    "addAskAddFriendListWithTran",
    (const std::allocator<char> *)(v5 + 48));
  std::allocator<char>::allocator(v5 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 96),
    "REDIS",
    (const std::allocator<char> *)(v5 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v5 + 544),
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v5 + 64)) )
  {
    *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 1) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "addAskAddFriendListWithTran",
      123);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
    *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v5 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v5 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "addAskAddFriendListWithTran",
        123);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v5 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
      *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v5 + 416), target_id);
      v10 = common::midb::RedisMgr::cmdZAddnxWithTran(
              v9,
              tran_ptr,
              (const std::string *)(v5 + 288),
              (const std::string *)(v5 + 416),
              timestamp,
              is_repeated) != 0;
      std::string::~string((void *)(v5 + 416));
      *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v10 )
      {
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 1) & 7) >= *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "addAskAddFriendListWithTran",
          127);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v5 + 480),
          (const char (*)[41])"redis_mgr_ptr->cmdZAddnxWithTran  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 480));
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v5 + 544));
  result = v8;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 000000000D4349BE-000000000D43522C
int32_t __cdecl RedisOpSocialData::getAskAddFriendListCount(uint32_t uid, uint32_t *count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:137 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:137 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:136";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getAskAddFriendListCount;
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
    "getAskAddFriendListCount",
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
      "src/redis_op_social_data.cpp",
      "getAskAddFriendListCount",
      137);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getAskAddFriendListCount",
        137);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZCard(v6, 5u, (const std::string *)(v2 + 288), count) )
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
          "src/redis_op_social_data.cpp",
          "getAskAddFriendListCount",
          141);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[32])"redis_mgr_ptr->cmdZCard  failed");
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

// Line 148: range 000000000D43522E-000000000D435AAD
int32_t __cdecl RedisOpSocialData::getAskAddFriendListCountWithTran(
        uint32_t uid,
        uint32_t *count,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  char v10[624]; // [rsp+20h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:150 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:150 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:149";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getAskAddFriendListCountWithTran;
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
    "getAskAddFriendListCountWithTran",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
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
      "src/redis_op_social_data.cpp",
      "getAskAddFriendListCountWithTran",
      150);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getAskAddFriendListCountWithTran",
        150);
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
      if ( common::midb::RedisMgr::cmdZCardWithTran(v7, 5u, (const std::string *)(v3 + 288), count, tran_ptr) )
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
          "src/redis_op_social_data.cpp",
          "getAskAddFriendListCountWithTran",
          154);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[40])"redis_mgr_ptr->cmdSCardWithTran  failed");
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

// Line 162: range 000000000D435AAE-000000000D43631C
int32_t __cdecl RedisOpSocialData::getFriendCount(uint32_t uid, uint32_t *count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:164 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:164 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:163";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getFriendCount;
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
    "getFriendCount",
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
      "src/redis_op_social_data.cpp",
      "getFriendCount",
      164);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getFriendCount",
        164);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSCard(v6, 4u, (const std::string *)(v2 + 288), count) )
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
          "src/redis_op_social_data.cpp",
          "getFriendCount",
          168);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[32])"redis_mgr_ptr->cmdSCard  failed");
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

// Line 175: range 000000000D43631E-000000000D436B9D
int32_t __cdecl RedisOpSocialData::getFriendCountWithTran(
        uint32_t uid,
        uint32_t *count,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  char v10[624]; // [rsp+20h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:177 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:177 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:176";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getFriendCountWithTran;
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
    "getFriendCountWithTran",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
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
      "src/redis_op_social_data.cpp",
      "getFriendCountWithTran",
      177);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getFriendCountWithTran",
        177);
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
      if ( common::midb::RedisMgr::cmdSCardWithTran(v7, 4u, (const std::string *)(v3 + 288), count, tran_ptr) )
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
          "src/redis_op_social_data.cpp",
          "getFriendCountWithTran",
          181);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[40])"redis_mgr_ptr->cmdSCardWithTran  failed");
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

// Line 188: range 000000000D436B9E-000000000D437515
int32_t __cdecl RedisOpSocialData::removeAskFriend(uint32_t uid, uint32_t target_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  bool v7; // r14
  int32_t result; // eax
  char v9[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:190 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:190 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:189";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removeAskFriend;
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
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeAskFriend",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
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
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removeAskFriend",
      190);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removeAskFriend",
        190);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 416), target_id);
      v7 = common::midb::RedisMgr::cmdZRem(v6, 5u, (const std::string *)(v2 + 288), (const std::string *)(v2 + 416)) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removeAskFriend",
          194);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdZRem  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 202: range 000000000D437516-000000000D43814E
int32_t __cdecl RedisOpSocialData::removeAskFriend(uint32_t uid, const std::set<unsigned int> *target_id_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  unsigned int target_uid; // [rsp+14h] [rbp-35Ch]
  char v12[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:206 112 8 13 __for_end:206 144 16 17 re"
                        "dis_mgr_ptr:204 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 13 redis_key:204"
                        " 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 20 redis_member_set:205 704 56 "
                        "14 _tc_guard_:203";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removeAskFriend;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "removeAskFriend",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
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
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removeAskFriend",
      204);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "removeAskFriend",
        204);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v2 + 80) = std::set<unsigned int>::begin(target_id_set);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v2 + 112) = std::set<unsigned int>::end(target_id_set);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 80),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 112)) )
      {
        v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 80));
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        target_uid = *v8;
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 496), target_uid);
        std::set<std::string>::insert(
          (std::set<std::string> *const)(v2 + 624),
          (std::set<std::string>::value_type *)(v2 + 496));
        std::string::~string((void *)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 80));
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdZRem(
             v9,
             5u,
             (const std::string *)(v2 + 368),
             (const std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removeAskFriend",
          212);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 560),
          (const char (*)[30])"redis_mgr_ptr->cmdZRem failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
  result = v5;
  if ( v12 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 219: range 000000000D438150-000000000D438ACD
int32_t __cdecl RedisOpSocialData::removeAskFriendWithTran(
        const common::midb::GetAndSetTranPtr *tran_ptr,
        uint32_t uid,
        uint32_t target_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:221 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:221 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:220";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::removeAskFriendWithTran;
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
    "removeAskFriendWithTran",
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
      "src/redis_op_social_data.cpp",
      "removeAskFriendWithTran",
      221);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removeAskFriendWithTran",
        221);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), target_id);
      v8 = common::midb::RedisMgr::cmdZRemWithTran(
             v7,
             tran_ptr,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416)) != 0;
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
          "src/redis_op_social_data.cpp",
          "removeAskFriendWithTran",
          225);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[39])"redis_mgr_ptr->cmdZRemWithTran  failed");
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

// Line 233: range 000000000D438ACE-000000000D439445
int32_t __cdecl RedisOpSocialData::removeFriend(uint32_t uid, uint32_t target_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  bool v7; // r14
  int32_t result; // eax
  char v9[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:235 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:235 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:234";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removeFriend;
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
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removeFriend",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
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
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removeFriend",
      235);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removeFriend",
        235);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 416), target_id);
      v7 = common::midb::RedisMgr::cmdSRem(v6, 4u, (const std::string *)(v2 + 288), (const std::string *)(v2 + 416)) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removeFriend",
          239);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdSRem  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 247: range 000000000D439446-000000000D439DC3
int32_t __cdecl RedisOpSocialData::removeFriendWithTran(
        const common::midb::GetAndSetTranPtr *tran_ptr,
        uint32_t uid,
        uint32_t target_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:249 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:249 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:248";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::removeFriendWithTran;
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
    "removeFriendWithTran",
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
      "src/redis_op_social_data.cpp",
      "removeFriendWithTran",
      249);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removeFriendWithTran",
        249);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), target_id);
      v8 = common::midb::RedisMgr::cmdSRemWithTran(
             v7,
             tran_ptr,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416)) != 0;
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
          "src/redis_op_social_data.cpp",
          "removeFriendWithTran",
          253);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[39])"redis_mgr_ptr->cmdSRemWithTran  failed");
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

// Line 261: range 000000000D439DC4-000000000D43A74C
int32_t __cdecl RedisOpSocialData::addFriend(uint32_t uid, uint32_t target_uid, bool *is_repeated)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:263 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:263 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:262";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::addFriend;
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
    "addFriend",
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
      "src/redis_op_social_data.cpp",
      "addFriend",
      263);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "addFriend",
        263);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), target_uid);
      v8 = common::midb::RedisMgr::cmdSAdd(
             v7,
             4u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             is_repeated) != 0;
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
          "src/redis_op_social_data.cpp",
          "addFriend",
          267);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdSAdd  failed");
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

// Line 275: range 000000000D43A74E-000000000D43B262
__int64 __fastcall RedisOpSocialData::addFriendWithTran(
        const common::midb::GetAndSetTranPtr *tran_ptr,
        uint32_t uid,
        uint32_t target_uid,
        bool *is_repeated)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned int v9; // esi
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  char v15[784]; // [rsp+20h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 14 target_uid:274 96 16 17 redis_mgr_ptr:277 128 32 9 "
                        "<unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:277 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:276";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::addFriendWithTran;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218103808;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 80) = target_uid;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 192),
    "addFriendWithTran",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 128),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 640),
    (const std::string *)(v4 + 128),
    (const std::string *)(v4 + 192));
  std::string::~string((void *)(v4 + 128));
  *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 192));
  *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 96)) )
  {
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 32 + 63) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "addFriendWithTran",
      277);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v4 + 320)) )
    {
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
        "src/redis_op_social_data.cpp",
        "addFriendWithTran",
        277);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 384),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      v9 = *(_DWORD *)(v4 + 80);
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        v9 = 32;
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 448), v9);
      v10 = common::midb::RedisMgr::cmdSAddWithTran(
              v8,
              tran_ptr,
              (const std::string *)(v4 + 320),
              (const std::string *)(v4 + 448),
              is_repeated) != 0;
      std::string::~string((void *)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      if ( v10 )
      {
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 63) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "addFriendWithTran",
          281);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v4 + 512),
          (const char (*)[39])"redis_mgr_ptr->cmdSAddWithTran  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 127) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/redis_op_social_data.cpp",
          "addFriendWithTran",
          285);
        v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)(v4 + 576),
                (const char (*)[21])"[Social] ADD friend ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v7 = 0;
      }
    }
    std::string::~string((void *)(v4 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 640));
  result = v7;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 291: range 000000000D43B264-000000000D43BD88
int32_t __cdecl RedisOpSocialData::getPlayerBriefDataWithTran(
        uint32_t uid,
        proto::PlayerBriefDataRedisData *player_brief_data,
        bool *is_exist,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
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
  *(_QWORD *)(v4 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:293 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:293 352 32 9 <unknown> 416 32 12 data_str:295 480 32"
                        " 9 <unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:292";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::getPlayerBriefDataWithTran;
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
    "getPlayerBriefDataWithTran",
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
  if ( !std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(uid, (std::string *)(v4 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataWithTran",
        293);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
      goto LABEL_28;
    }
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 416);
    v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGetWithTran(
           v8,
           6u,
           (const std::string *)(v4 + 288),
           (std::string *)(v4 + 416),
           tran_ptr) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataWithTran",
        298);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)(v4 + 480),
             (const char (*)[38])"redis_mgr_ptr->cmdGetWithTran failed ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v4 + 416));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(v4 + 416) != 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 1;
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(player_brief_data, v4 + 416) != 1 )
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
            "src/redis_op_social_data.cpp",
            "getPlayerBriefDataWithTran",
            307);
          v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)(v4 + 544),
                  (const char (*)[24])"ParseFromString failed ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v4 + 416));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
          *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
          goto LABEL_27;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 0;
      }
      v7 = 0;
    }
LABEL_27:
    std::string::~string((void *)(v4 + 416));
LABEL_28:
    std::string::~string((void *)(v4 + 288));
    goto LABEL_29;
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
    "src/redis_op_social_data.cpp",
    "getPlayerBriefDataWithTran",
    293);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_29:
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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

// Line 320: range 000000000D43BD8A-000000000D43C824
__int64 __fastcall RedisOpSocialData::setPlayerBriefDataWithTran(
        const common::midb::GetAndSetTranPtr *tran_ptr,
        uint32_t uid,
        proto::PlayerBriefDataRedisData *player_brief_data)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:319 96 16 17 redis_mgr_ptr:322 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:322 384 32 9 <unknown> 448 32 12 dat"
                        "a_str:324 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:321";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::setPlayerBriefDataWithTran;
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
    "setPlayerBriefDataWithTran",
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
      "src/redis_op_social_data.cpp",
      "setPlayerBriefDataWithTran",
      322);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "setPlayerBriefDataWithTran",
        322);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 384),
        "get key for uid=%u failed",
        *(unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 448);
      if ( !google::protobuf::MessageLite::SerializeToString(player_brief_data, (std::string *)(v3 + 448)) )
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
          "src/redis_op_social_data.cpp",
          "setPlayerBriefDataWithTran",
          327);
        v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               (common::milog::MiLogStream *const)(v3 + 512),
               (const char (*)[26])"SerializeToString failed ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v3 + 448));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSetWithTran(
               v8,
               tran_ptr,
               (const std::string *)(v3 + 320),
               (const std::string *)(v3 + 448)) )
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
            "src/redis_op_social_data.cpp",
            "setPlayerBriefDataWithTran",
            333);
          v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 (common::milog::MiLogStream *const)(v3 + 576),
                 (const char (*)[23])"cmdSetWithTran failed ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
      std::string::~string((void *)(v3 + 448));
    }
    std::string::~string((void *)(v3 + 320));
  }
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

// Line 341: range 000000000D43C826-000000000D43D35D
__int64 __fastcall RedisOpSocialData::getPlayerBriefData(
        uint32_t uid,
        proto::PlayerBriefDataRedisData *player_brief_data,
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:340 96 16 17 redis_mgr_ptr:343 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:343 384 32 9 <unknown> 448 32 12 dat"
                        "a_str:345 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:342";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerBriefData;
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
    "getPlayerBriefData",
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
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefData",
        343);
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
    if ( common::midb::RedisMgr::cmdGet(v7, 6u, (const std::string *)(v3 + 320), (std::string *)(v3 + 448)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefData",
        348);
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
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(player_brief_data, v3 + 448) != 1 )
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
            "src/redis_op_social_data.cpp",
            "getPlayerBriefData",
            357);
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
    "src/redis_op_social_data.cpp",
    "getPlayerBriefData",
    343);
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

// Line 370: range 000000000D43D35E-000000000D43E1E3
int32_t __cdecl RedisOpSocialData::getPlayerBriefDataBatch(
        const std::vector<unsigned int> *uid_vec,
        std::vector<proto::PlayerBriefDataRedisData> *player_brief_data_vec)
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
  proto::PlayerBriefDataRedisData *brief_redis_data; // [rsp+38h] [rbp-398h]
  char v25[912]; // [rsp+40h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:373 96 8 15 __for_begin:373 128 8 13 __for_end:3"
                        "73 160 8 9 <unknown> 192 24 17 redis_key_vec:372 256 24 19 redis_value_vec:384 320 32 9 <unknown"
                        "> 384 32 9 <unknown> 448 32 11 key_str:375 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unkno"
                        "wn> 704 32 9 <unknown> 768 56 14 _tc_guard_:371";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerBriefDataBatch;
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
    "getPlayerBriefDataBatch",
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
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 448)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        378);
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
           6u,
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        387);
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
        std::vector<proto::PlayerBriefDataRedisData>::resize(player_brief_data_vec, v19);
        for ( i = 0; ; ++i )
        {
          if ( i >= std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 256)) )
          {
            v2 = 0;
            goto LABEL_45;
          }
          brief_redis_data = std::vector<proto::PlayerBriefDataRedisData>::operator[](player_brief_data_vec, i);
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
          "src/redis_op_social_data.cpp",
          "getPlayerBriefDataBatch",
          407);
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
          "src/redis_op_social_data.cpp",
          "getPlayerBriefDataBatch",
          393);
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

// Line 416: range 000000000D43E1E4-000000000D43F9D5
int32_t __cdecl RedisOpSocialData::getPlayerBriefDataBatch(
        const std::vector<unsigned int> *uid_vec,
        std::vector<proto::FriendBrief> *player_brief_data_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  common::milog::MiLogStream *v12; // rax
  std::map<std::string,std::string>::mapped_type *v13; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  int v16; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // al
  int v19; // edx
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v20; // rax
  bool v21; // al
  common::milog::MiLogStream *v22; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v26; // rax
  const proto::PlayerBasicBriefData *v27; // rax
  google::protobuf::uint32 v28; // edx
  const proto::PlayerBasicBriefData *v29; // rax
  google::protobuf::uint32 v30; // edx
  const proto::PlayerSocialBriefData *v31; // rax
  const std::string *v32; // rax
  const proto::PlayerBasicBriefData *v33; // rax
  google::protobuf::uint32 v34; // eax
  const proto::PlayerBasicBriefData *v35; // rax
  google::protobuf::uint32 v36; // eax
  const proto::PlayerBasicBriefData *v37; // rax
  const std::string *v38; // rax
  const proto::PlayerMpBriefData *v39; // rax
  bool is_mp_avaliable; // al
  const proto::PlayerBasicBriefData *v41; // rax
  const std::string *v42; // rax
  const proto::PlayerBasicBriefData *v43; // rax
  google::protobuf::uint32 login_time; // eax
  const proto::PlayerBasicBriefData *v45; // rax
  signed int v46; // eax
  const proto::PlayerSocialBriefData *v47; // rax
  google::protobuf::uint32 v48; // eax
  const proto::PlayerSocialBriefData *v49; // rax
  std::remove_reference<proto::FriendBrief&>::type *v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  int v53; // edx
  int v55; // [rsp+Ch] [rbp-664h]
  int v56; // [rsp+Ch] [rbp-664h]
  int v57; // [rsp+Ch] [rbp-664h]
  uint32_t uid; // [rsp+24h] [rbp-64Ch]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-640h]
  std::string *redis_key; // [rsp+38h] [rbp-638h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+40h] [rbp-630h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range_1; // [rsp+48h] [rbp-628h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo>::reference avatar_info; // [rsp+50h] [rbp-620h]
  proto::SocialShowAvatarInfo *detail_avatar_info; // [rsp+58h] [rbp-618h]
  char v65[1552]; // [rsp+60h] [rbp-610h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1504LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "26 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:421 96 8 15 __for_begin:421 128 8 13 __for_end:4"
                        "21 160 8 15 __for_begin:438 192 8 13 __for_end:438 224 8 20 redis_value_iter:440 256 8 9 <unknow"
                        "n> 288 8 12 uid_iter:449 320 8 9 <unknown> 352 8 15 __for_begin:477 384 8 13 __for_end:477 416 2"
                        "4 17 redis_key_vec:420 480 32 9 <unknown> 544 32 9 <unknown> 608 32 11 key_str:423 672 32 9 <unk"
                        "nown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 48 16 redis_kv_map:418 1008 5"
                        "6 14 _tc_guard_:417 1104 56 21 redis_key_uid_map:419 1200 56 14 redis_data:458 1296 136 16 friend_brief:457";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerBriefDataBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862753] = -218959360;
  v5[536862754] = 62194;
  v5[536862756] = -218959360;
  v5[536862757] = 62194;
  v5[536862759] = -218959360;
  v5[536862760] = 62194;
  v5[536862764] = -218103808;
  v5[536862765] = -202116109;
  v5[536862766] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 544),
    "getPlayerBriefDataBatch",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 480),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 1008),
    (const std::string *)(v3 + 480),
    (const std::string *)(v3 + 544));
  std::string::~string((void *)(v3 + 480));
  *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 544));
  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 928) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 928));
  v7 = ((v3 + 1104) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 1104));
  v8 = ((v3 + 416) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 416));
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
    v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    v10 = (int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = v11;
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 608);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 80);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 608)) )
    {
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        426);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[26])"getPlayerRedisKey failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v55 = 0;
    }
    else
    {
      v13 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v3 + 928),
              (const std::map<std::string,std::string>::key_type *)(v3 + 608));
      std::string::operator=(v13, byte_1A7F42E0);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      v56 = *(_DWORD *)(v3 + 80);
      v14 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v3 + 1104),
              (const std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 608));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v14);
      }
      *v15 = v56;
      std::vector<std::string>::push_back(
        (std::vector<std::string> *const)(v3 + 416),
        (const std::vector<std::string>::value_type *)(v3 + 608));
      v55 = 1;
    }
    std::string::~string((void *)(v3 + 608));
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
    if ( v55 != 1 )
    {
      v16 = 0;
      goto LABEL_29;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
  }
  v16 = 1;
LABEL_29:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    v17 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(v17, 6u, (std::map<std::string,std::string> *)(v3 + 928)) )
    {
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        435);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 736),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      __for_range_0 = (std::vector<std::string> *)(v3 + 416);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 192) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 192)) )
      {
        redis_key = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 160));
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 224) = std::map<std::string,std::string>::find(
                                                                       (std::map<std::string,std::string> *const)(v3 + 928),
                                                                       redis_key);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 256) = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 928));
        v18 = std::operator==(
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 256),
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 224));
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
        {
          v19 = 0;
        }
        else
        {
          v20 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 224));
          if ( (unsigned __int8)std::string::empty(&v20->second) )
          {
            v19 = 0;
          }
          else
          {
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 288) = std::unordered_map<std::string,unsigned int>::find(
                                                                                      (std::unordered_map<std::string,unsigned int> *const)(v3 + 1104),
                                                                                      redis_key);
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 320) = std::unordered_map<std::string,unsigned int>::end((std::unordered_map<std::string,unsigned int> *const)(v3 + 1104));
            v21 = std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 288),
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 320));
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
            {
              *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 800, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 800),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "getPlayerBriefDataBatch",
                452);
              v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v3 + 800),
                      (const char (*)[30])"key_str not found, redis_key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, redis_key);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
              *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 1;
            }
            else
            {
              v23 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v3 + 288));
              if ( *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v23->second);
              }
              uid = v23->second;
              v24 = ((v3 + 1296) >> 3) + 2147450880;
              *(_DWORD *)v24 = 0;
              *(_DWORD *)(v24 + 4) = 0;
              *(_DWORD *)(v24 + 8) = 0;
              *(_DWORD *)(v24 + 12) = 0;
              *(_BYTE *)(v24 + 16) = 0;
              proto::FriendBrief::FriendBrief((proto::FriendBrief *const)(v3 + 1296));
              v25 = ((v3 + 1200) >> 3) + 2147450880;
              *(_DWORD *)v25 = 0;
              *(_WORD *)(v25 + 4) = 0;
              *(_BYTE *)(v25 + 6) = 0;
              proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 1200));
              v26 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 224));
              if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 1200, &v26->second) != 1 )
              {
                *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 864, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 864),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/redis_op_social_data.cpp",
                  "getPlayerBriefDataBatch",
                  461);
                common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[23])"ParseFromString failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                v57 = 0;
              }
              else
              {
                proto::FriendBrief::set_uid((proto::FriendBrief *const)(v3 + 1296), uid);
                profile_picture_proto = proto::FriendBrief::mutable_profile_picture((proto::FriendBrief *const)(v3 + 1296));
                v27 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v28 = proto::PlayerBasicBriefData::head_image_avatar_id(v27);
                proto::ProfilePicture::set_avatar_id(profile_picture_proto, v28);
                v29 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v30 = proto::PlayerBasicBriefData::profile_picture_costume_id(v29);
                proto::ProfilePicture::set_costume_id(profile_picture_proto, v30);
                v31 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v32 = proto::PlayerSocialBriefData::signature[abi:cxx11](v31);
                proto::FriendBrief::set_signature((proto::FriendBrief *const)(v3 + 1296), v32);
                v33 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v34 = proto::PlayerBasicBriefData::level(v33);
                proto::FriendBrief::set_level((proto::FriendBrief *const)(v3 + 1296), v34);
                v35 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v36 = proto::PlayerBasicBriefData::world_level(v35);
                proto::FriendBrief::set_world_level((proto::FriendBrief *const)(v3 + 1296), v36);
                v37 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v38 = proto::PlayerBasicBriefData::nickname[abi:cxx11](v37);
                proto::FriendBrief::set_nickname((proto::FriendBrief *const)(v3 + 1296), v38);
                v39 = proto::PlayerBriefDataRedisData::mp_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                is_mp_avaliable = proto::PlayerMpBriefData::is_mp_avaliable(v39);
                proto::FriendBrief::set_is_mp_mode_available((proto::FriendBrief *const)(v3 + 1296), is_mp_avaliable);
                v41 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v42 = proto::PlayerBasicBriefData::online_id[abi:cxx11](v41);
                proto::FriendBrief::set_online_id((proto::FriendBrief *const)(v3 + 1296), v42);
                v43 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                login_time = proto::PlayerBasicBriefData::last_login_time(v43);
                proto::FriendBrief::set_last_active_time((proto::FriendBrief *const)(v3 + 1296), login_time);
                v45 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v46 = proto::PlayerBasicBriefData::platform_type(v45);
                proto::FriendBrief::set_platform_type((proto::FriendBrief *const)(v3 + 1296), (proto::PlatformType)v46);
                v47 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                v48 = proto::PlayerSocialBriefData::name_card_id(v47);
                proto::FriendBrief::set_name_card_id((proto::FriendBrief *const)(v3 + 1296), v48);
                v49 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v3 + 1200));
                __for_range_1 = proto::PlayerSocialBriefData::show_avatar_info_list(v49);
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator *)(v3 + 352) = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range_1);
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator *)(v3 + 384) = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range_1);
                while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
                          (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)(v3 + 352),
                          (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo>::iterator *)(v3 + 384)) )
                {
                  avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)(v3 + 352));
                  detail_avatar_info = proto::FriendBrief::add_show_avatar_info_list((proto::FriendBrief *const)(v3 + 1296));
                  proto::SocialShowAvatarInfo::CopyFrom(detail_avatar_info, avatar_info);
                  google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)(v3 + 352));
                }
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                v50 = std::move<proto::FriendBrief &>((proto::FriendBrief *)(v3 + 1296));
                std::vector<proto::FriendBrief>::emplace_back<proto::FriendBrief>(player_brief_data_vec, v50, v50);
                v57 = 1;
              }
              proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 1200));
              proto::FriendBrief::~FriendBrief((proto::FriendBrief *const)(v3 + 1296));
              if ( v57 == 1 )
                v19 = 2;
              else
                v19 = 0;
            }
          }
        }
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        v51 = ((v3 + 1296) >> 3) + 2147450880;
        *(_DWORD *)v51 = -117901064;
        *(_DWORD *)(v51 + 4) = -117901064;
        *(_DWORD *)(v51 + 8) = -117901064;
        *(_DWORD *)(v51 + 12) = -117901064;
        *(_BYTE *)(v51 + 16) = -8;
        v52 = ((v3 + 1200) >> 3) + 2147450880;
        *(_DWORD *)v52 = -117901064;
        *(_WORD *)(v52 + 4) = -1800;
        *(_BYTE *)(v52 + 6) = -8;
        if ( v19 && v19 != 2 )
        {
          v53 = 0;
          goto LABEL_78;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 160));
      }
      v53 = 1;
LABEL_78:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v53 == 1 )
        v2 = 0;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 416));
  std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 1104));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 928));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 1008));
  if ( v65 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B8) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1504LL, v65);
  }
  return v2;
};

// Line 488: range 000000000D43F9D6-000000000D440F81
int32_t __cdecl RedisOpSocialData::getPlayerBriefDataBatch(
        const std::vector<unsigned int> *uid_vec,
        std::map<unsigned int,proto::PlayerBriefDataRedisData> *uid_brief_data_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  common::milog::MiLogStream *v12; // rax
  std::map<std::string,std::string>::mapped_type *v13; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  int v16; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // al
  int v19; // edx
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v20; // rax
  bool v21; // al
  common::milog::MiLogStream *v22; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v23; // rax
  unsigned int second; // ecx
  unsigned __int64 v25; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v26; // rax
  common::milog::MiLogStream *v27; // rax
  proto::PlayerBriefDataRedisData *v28; // rdx
  proto::PlayerBriefDataRedisData *v29; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned __int64 v32; // rax
  int v33; // edx
  int v35; // [rsp+Ch] [rbp-584h]
  int v36; // [rsp+Ch] [rbp-584h]
  int v37; // [rsp+Ch] [rbp-584h]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-560h]
  std::string *redis_key; // [rsp+38h] [rbp-558h]
  char v40[1360]; // [rsp+40h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:493 96 4 7 uid:528 112 8 15 __for_begin:493 144 "
                        "8 13 __for_end:493 176 8 15 __for_begin:510 208 8 13 __for_end:510 240 8 20 redis_value_iter:512"
                        " 272 8 9 <unknown> 304 8 12 uid_iter:521 336 8 9 <unknown> 368 24 17 redis_key_vec:492 432 32 9 "
                        "<unknown> 496 32 9 <unknown> 560 32 11 key_str:495 624 32 9 <unknown> 688 32 9 <unknown> 752 32 "
                        "9 <unknown> 816 32 9 <unknown> 880 32 9 <unknown> 944 48 16 redis_kv_map:490 1024 56 14 _tc_guar"
                        "d_:489 1120 56 21 redis_key_uid_map:491 1216 56 14 redis_data:529";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerBriefDataBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862732] = -218959360;
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
  v5[536862751] = -218959118;
  v5[536862753] = -234881024;
  v5[536862754] = -218959118;
  v5[536862756] = -234881024;
  v5[536862757] = -218959118;
  v5[536862759] = -218103808;
  v5[536862760] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 496),
    "getPlayerBriefDataBatch",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 432),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 1024),
    (const std::string *)(v3 + 432),
    (const std::string *)(v3 + 496));
  std::string::~string((void *)(v3 + 432));
  *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 496));
  *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 944) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 944));
  v7 = ((v3 + 1120) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 1120));
  v8 = ((v3 + 368) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 368));
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(uid_vec);
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(uid_vec);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
  {
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
    v10 = (int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = v11;
    *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 560);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 80);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 80), (std::string *)(v3 + 560)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        498);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v3 + 624),
              (const char (*)[26])"getPlayerRedisKey failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
      *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v35 = 0;
    }
    else
    {
      v13 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v3 + 944),
              (const std::map<std::string,std::string>::key_type *)(v3 + 560));
      std::string::operator=(v13, byte_1A7F42E0);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      v36 = *(_DWORD *)(v3 + 80);
      v14 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v3 + 1120),
              (const std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 560));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v14);
      }
      *v15 = v36;
      std::vector<std::string>::push_back(
        (std::vector<std::string> *const)(v3 + 368),
        (const std::vector<std::string>::value_type *)(v3 + 560));
      v35 = 1;
    }
    std::string::~string((void *)(v3 + 560));
    *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
    if ( v35 != 1 )
    {
      v16 = 0;
      goto LABEL_29;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
  }
  v16 = 1;
LABEL_29:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    v17 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(v17, 6u, (std::map<std::string,std::string> *)(v3 + 944)) )
    {
      *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 688),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerBriefDataBatch",
        507);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 688),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
      *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      __for_range_0 = (std::vector<std::string> *)(v3 + 368);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 176) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 208) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 176),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 208)) )
      {
        redis_key = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 176));
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 240) = std::map<std::string,std::string>::find(
                                                                       (std::map<std::string,std::string> *const)(v3 + 944),
                                                                       redis_key);
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 272) = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 944));
        v18 = std::operator==(
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 272),
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 240));
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
        {
          v19 = 0;
        }
        else
        {
          v20 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 240));
          if ( (unsigned __int8)std::string::empty(&v20->second) )
          {
            v19 = 0;
          }
          else
          {
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 304) = std::unordered_map<std::string,unsigned int>::find(
                                                                                      (std::unordered_map<std::string,unsigned int> *const)(v3 + 1120),
                                                                                      redis_key);
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 336) = std::unordered_map<std::string,unsigned int>::end((std::unordered_map<std::string,unsigned int> *const)(v3 + 1120));
            v21 = std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 304),
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 336));
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "getPlayerBriefDataBatch",
                524);
              v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[30])"key_str not found, redis_key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, redis_key);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 1;
            }
            else
            {
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
              v23 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v3 + 304));
              if ( *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v23->second);
              }
              second = v23->second;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 96);
              *(_DWORD *)(v3 + 96) = second;
              v25 = ((v3 + 1216) >> 3) + 2147450880;
              *(_DWORD *)v25 = 0;
              *(_WORD *)(v25 + 4) = 0;
              *(_BYTE *)(v25 + 6) = 0;
              proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 1216));
              v26 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 240));
              if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 1216, &v26->second) != 1 )
              {
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 816, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 816),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "src/redis_op_social_data.cpp",
                  "getPlayerBriefDataBatch",
                  532);
                v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        (common::milog::MiLogStream *const)(v3 + 816),
                        (const char (*)[29])"ParseFromString failed, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
                v37 = 0;
              }
              else
              {
                v28 = std::move<proto::PlayerBriefDataRedisData &>((proto::PlayerBriefDataRedisData *)(v3 + 1216));
                v30 = std::map<unsigned int,proto::PlayerBriefDataRedisData>::emplace<unsigned int &,proto::PlayerBriefDataRedisData>(
                        uid_brief_data_map,
                        (unsigned int *)(v3 + 96),
                        v28,
                        (unsigned int *)(v3 + 96),
                        v29);
                if ( !v30.second )
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
                    4u,
                    "src/redis_op_social_data.cpp",
                    "getPlayerBriefDataBatch",
                    537);
                  v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          (common::milog::MiLogStream *const)(v3 + 880),
                          (const char (*)[35])"duplicated uid in brief map!, uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v3 + 96));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
                  *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
                  v37 = 0;
                }
                else
                {
                  v37 = 1;
                }
              }
              proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 1216));
              if ( v37 == 1 )
                v19 = 2;
              else
                v19 = 0;
            }
          }
        }
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        v32 = ((v3 + 1216) >> 3) + 2147450880;
        *(_DWORD *)v32 = -117901064;
        *(_WORD *)(v32 + 4) = -1800;
        *(_BYTE *)(v32 + 6) = -8;
        if ( v19 && v19 != 2 )
        {
          v33 = 0;
          goto LABEL_77;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 176));
      }
      v33 = 1;
LABEL_77:
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v33 == 1 )
        v2 = 0;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 368));
  std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 1120));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 944));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 1024));
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A0) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v40);
  }
  return v2;
};

// Line 545: range 000000000D440F82-000000000D441A16
__int64 __fastcall RedisOpSocialData::setPlayerBriefData(
        uint32_t uid,
        const proto::PlayerBriefDataRedisData *player_brief_data)
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
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:544 96 16 17 redis_mgr_ptr:547 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:547 384 32 9 <unknown> 448 32 12 dat"
                        "a_str:549 512 32 9 <unknown> 576 32 9 <unknown> 640 56 14 _tc_guard_:546";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::setPlayerBriefData;
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
    "setPlayerBriefData",
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
      "src/redis_op_social_data.cpp",
      "setPlayerBriefData",
      547);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v2 + 80), (std::string *)(v2 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "setPlayerBriefData",
        547);
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
      if ( !google::protobuf::MessageLite::SerializeToString(player_brief_data, (std::string *)(v2 + 448)) )
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
          "src/redis_op_social_data.cpp",
          "setPlayerBriefData",
          552);
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
        if ( common::midb::RedisMgr::cmdSet(v7, 6u, (const std::string *)(v2 + 320), (const std::string *)(v2 + 448)) )
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
            "src/redis_op_social_data.cpp",
            "setPlayerBriefData",
            558);
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

// Line 565: range 000000000D441A18-000000000D442888
int32_t __cdecl RedisOpSocialData::updatePlayerSocialData(uint32_t uid, const proto::PlayerSocialBriefData *data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  proto::PlayerSocialBriefData *social_brief; // [rsp+18h] [rbp-3F8h]
  char v11[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:567 96 16 12 tran_ptr:595 128 32 9 <"
                        "unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 13 redis_key:567 384 32 9 <unknown> 448 32"
                        " 25 player_brief_data_str:570 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 "
                        "<unknown> 768 56 14 _tc_guard_:566 864 56 14 brief_data:577";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::updatePlayerSocialData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -234881024;
  v4[536862746] = -218959118;
  v4[536862748] = -218103808;
  v4[536862749] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "updatePlayerSocialData",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 768),
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
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "updatePlayerSocialData",
      567);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(uid, (std::string *)(v2 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerSocialData",
        567);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 384),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 448);
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGet(v6, 6u, (const std::string *)(v2 + 320), (std::string *)(v2 + 448)) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "updatePlayerSocialData",
          573);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 512),
          (const char (*)[31])"redis_mgr_ptr->cmdSAdd  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v7 = ((v2 + 864) >> 3) + 2147450880;
        *(_DWORD *)v7 = 0;
        *(_WORD *)(v7 + 4) = 0;
        *(_BYTE *)(v7 + 6) = 0;
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 864));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 864, v2 + 448) != 1 )
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "updatePlayerSocialData",
            580);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[23])"ParseFromString failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          social_brief = proto::PlayerBriefDataRedisData::mutable_social_brief((proto::PlayerBriefDataRedisData *const)(v2 + 864));
          proto::PlayerSocialBriefData::CopyFrom(social_brief, data);
          std::string::clear(v2 + 448);
          if ( !google::protobuf::MessageLite::SerializeToString(
                  (const google::protobuf::MessageLite *const)(v2 + 864),
                  (std::string *)(v2 + 448)) )
          {
            *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 640, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 640),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "updatePlayerSocialData",
              590);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v2 + 640),
              (const char (*)[34])"data_str.SerializeToString failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
            *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
          else
          {
            *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 96, v2 + 448);
            *(_QWORD *)(v2 + 96) = 0LL;
            *(_QWORD *)(v2 + 104) = 0LL;
            v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdSet(
                   v8,
                   6u,
                   (const std::string *)(v2 + 320),
                   (const std::string *)(v2 + 448)) )
            {
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 704, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 704),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "updatePlayerSocialData",
                598);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[29])"redis_mgr_ptr->cmdSet failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
            std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 96));
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 864));
      }
      std::string::~string((void *)(v2 + 448));
    }
    std::string::~string((void *)(v2 + 320));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 768));
  result = v5;
  if ( v11 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
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
  }
  return result;
};

// Line 607: range 000000000D44288A-000000000D443812
__int64 __fastcall RedisOpSocialData::updatePlayerBasicBriefData(
        uint32_t uid,
        const proto::PlayerBasicBriefData *basic_brief_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::PlayerBasicBriefData *basic_brief; // [rsp+18h] [rbp-458h]
  char v15[1104]; // [rsp+20h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:606 96 16 17 redis_mgr_ptr:609 128 16 12 tran_pt"
                        "r:611 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 13 redis_key:609 416 32 9 "
                        "<unknown> 480 32 12 data_str:612 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32"
                        " 9 <unknown> 800 32 9 <unknown> 864 56 14 _tc_guard_:608 960 56 14 brief_data:619";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::updatePlayerBasicBriefData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
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
  v4[536862746] = -218959118;
  v4[536862748] = -234881024;
  v4[536862749] = -218959118;
  v4[536862751] = -218103808;
  v4[536862752] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "updatePlayerBasicBriefData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 864),
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
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 96)) )
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
      "src/redis_op_social_data.cpp",
      "updatePlayerBasicBriefData",
      609);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v2 + 80), (std::string *)(v2 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerBasicBriefData",
        609);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 128, v2 + 352);
      *(_QWORD *)(v2 + 128) = 0LL;
      *(_QWORD *)(v2 + 136) = 0LL;
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 480);
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v6,
             6u,
             (const std::string *)(v2 + 352),
             (std::string *)(v2 + 480),
             (common::midb::GetAndSetTranPtr *)(v2 + 128)) )
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
          "src/redis_op_social_data.cpp",
          "updatePlayerBasicBriefData",
          615);
        v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 544),
               (const char (*)[39])"redis_mgr_ptr->cmdGetWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v8 = ((v2 + 960) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_WORD *)(v8 + 4) = 0;
        *(_BYTE *)(v8 + 6) = 0;
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
        if ( (unsigned __int8)std::string::empty(v2 + 480) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 960, v2 + 480) != 1 )
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
            "src/redis_op_social_data.cpp",
            "updatePlayerBasicBriefData",
            624);
          v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 (common::milog::MiLogStream *const)(v2 + 608),
                 (const char (*)[25])"ParseFromString failed: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 480));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          basic_brief = proto::PlayerBriefDataRedisData::mutable_basic_brief((proto::PlayerBriefDataRedisData *const)(v2 + 960));
          proto::PlayerBasicBriefData::CopyFrom(basic_brief, basic_brief_data);
          std::string::clear(v2 + 480);
          if ( !google::protobuf::MessageLite::SerializeToString(
                  (const google::protobuf::MessageLite *const)(v2 + 960),
                  (std::string *)(v2 + 480)) )
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
              "src/redis_op_social_data.cpp",
              "updatePlayerBasicBriefData",
              635);
            v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[27])"SerializeToString failed: ");
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)(v2 + 736),
              (google::protobuf::Message *)(v2 + 960));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 736));
            std::string::~string((void *)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdSetWithTran(
                   v11,
                   (const common::midb::GetAndSetTranPtr *)(v2 + 128),
                   (const std::string *)(v2 + 352),
                   (const std::string *)(v2 + 480)) )
            {
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
                3u,
                "src/redis_op_social_data.cpp",
                "updatePlayerBasicBriefData",
                641);
              v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      (common::milog::MiLogStream *const)(v2 + 800),
                      (const char (*)[24])"cmdSetWithTran failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
      }
      std::string::~string((void *)(v2 + 480));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 128));
    }
    std::string::~string((void *)(v2 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 864));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v15);
  }
  return v5;
};

// Line 649: range 000000000D443814-000000000D44479C
__int64 __fastcall RedisOpSocialData::updatePlayerMpBriefData(
        uint32_t uid,
        const proto::PlayerMpBriefData *mp_brief_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::PlayerMpBriefData *mp_brief; // [rsp+18h] [rbp-458h]
  char v15[1104]; // [rsp+20h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:648 96 16 17 redis_mgr_ptr:651 128 16 12 tran_pt"
                        "r:653 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 13 redis_key:651 416 32 9 "
                        "<unknown> 480 32 12 data_str:654 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32"
                        " 9 <unknown> 800 32 9 <unknown> 864 56 14 _tc_guard_:650 960 56 14 brief_data:661";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::updatePlayerMpBriefData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
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
  v4[536862746] = -218959118;
  v4[536862748] = -234881024;
  v4[536862749] = -218959118;
  v4[536862751] = -218103808;
  v4[536862752] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "updatePlayerMpBriefData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 864),
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
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 96)) )
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
      "src/redis_op_social_data.cpp",
      "updatePlayerMpBriefData",
      651);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v2 + 80), (std::string *)(v2 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerMpBriefData",
        651);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 128, v2 + 352);
      *(_QWORD *)(v2 + 128) = 0LL;
      *(_QWORD *)(v2 + 136) = 0LL;
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 480);
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v6,
             6u,
             (const std::string *)(v2 + 352),
             (std::string *)(v2 + 480),
             (common::midb::GetAndSetTranPtr *)(v2 + 128)) )
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
          "src/redis_op_social_data.cpp",
          "updatePlayerMpBriefData",
          657);
        v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 544),
               (const char (*)[39])"redis_mgr_ptr->cmdGetWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v8 = ((v2 + 960) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_WORD *)(v8 + 4) = 0;
        *(_BYTE *)(v8 + 6) = 0;
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
        if ( (unsigned __int8)std::string::empty(v2 + 480) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 960, v2 + 480) != 1 )
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
            "src/redis_op_social_data.cpp",
            "updatePlayerMpBriefData",
            666);
          v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 (common::milog::MiLogStream *const)(v2 + 608),
                 (const char (*)[25])"ParseFromString failed: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 480));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          mp_brief = proto::PlayerBriefDataRedisData::mutable_mp_brief((proto::PlayerBriefDataRedisData *const)(v2 + 960));
          proto::PlayerMpBriefData::CopyFrom(mp_brief, mp_brief_data);
          std::string::clear(v2 + 480);
          if ( !google::protobuf::MessageLite::SerializeToString(
                  (const google::protobuf::MessageLite *const)(v2 + 960),
                  (std::string *)(v2 + 480)) )
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
              "src/redis_op_social_data.cpp",
              "updatePlayerMpBriefData",
              677);
            v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[27])"SerializeToString failed: ");
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)(v2 + 736),
              (google::protobuf::Message *)(v2 + 960));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 736));
            std::string::~string((void *)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdSetWithTran(
                   v11,
                   (const common::midb::GetAndSetTranPtr *)(v2 + 128),
                   (const std::string *)(v2 + 352),
                   (const std::string *)(v2 + 480)) )
            {
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
                3u,
                "src/redis_op_social_data.cpp",
                "updatePlayerMpBriefData",
                683);
              v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      (common::milog::MiLogStream *const)(v2 + 800),
                      (const char (*)[24])"cmdSetWithTran failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
      }
      std::string::~string((void *)(v2 + 480));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 128));
    }
    std::string::~string((void *)(v2 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 864));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v15);
  }
  return v5;
};

// Line 691: range 000000000D44479E-000000000D445726
__int64 __fastcall RedisOpSocialData::updatePlayerHomeBriefData(
        uint32_t uid,
        const proto::PlayerHomeBriefData *home_brief_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::PlayerHomeBriefData *home_brief; // [rsp+18h] [rbp-458h]
  char v15[1104]; // [rsp+20h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:690 96 16 17 redis_mgr_ptr:693 128 16 12 tran_pt"
                        "r:695 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 13 redis_key:693 416 32 9 "
                        "<unknown> 480 32 12 data_str:696 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32"
                        " 9 <unknown> 800 32 9 <unknown> 864 56 14 _tc_guard_:692 960 56 14 brief_data:703";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::updatePlayerHomeBriefData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
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
  v4[536862746] = -218959118;
  v4[536862748] = -234881024;
  v4[536862749] = -218959118;
  v4[536862751] = -218103808;
  v4[536862752] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "updatePlayerHomeBriefData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 864),
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
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 96)) )
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
      "src/redis_op_social_data.cpp",
      "updatePlayerHomeBriefData",
      693);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v2 + 80), (std::string *)(v2 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerHomeBriefData",
        693);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 128, v2 + 352);
      *(_QWORD *)(v2 + 128) = 0LL;
      *(_QWORD *)(v2 + 136) = 0LL;
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 480);
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v6,
             6u,
             (const std::string *)(v2 + 352),
             (std::string *)(v2 + 480),
             (common::midb::GetAndSetTranPtr *)(v2 + 128)) )
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
          "src/redis_op_social_data.cpp",
          "updatePlayerHomeBriefData",
          699);
        v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 544),
               (const char (*)[39])"redis_mgr_ptr->cmdGetWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v8 = ((v2 + 960) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_WORD *)(v8 + 4) = 0;
        *(_BYTE *)(v8 + 6) = 0;
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
        if ( (unsigned __int8)std::string::empty(v2 + 480) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 960, v2 + 480) != 1 )
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
            "src/redis_op_social_data.cpp",
            "updatePlayerHomeBriefData",
            708);
          v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 (common::milog::MiLogStream *const)(v2 + 608),
                 (const char (*)[25])"ParseFromString failed: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 480));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          home_brief = proto::PlayerBriefDataRedisData::mutable_home_brief((proto::PlayerBriefDataRedisData *const)(v2 + 960));
          proto::PlayerHomeBriefData::CopyFrom(home_brief, home_brief_data);
          std::string::clear(v2 + 480);
          if ( !google::protobuf::MessageLite::SerializeToString(
                  (const google::protobuf::MessageLite *const)(v2 + 960),
                  (std::string *)(v2 + 480)) )
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
              "src/redis_op_social_data.cpp",
              "updatePlayerHomeBriefData",
              719);
            v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[27])"SerializeToString failed: ");
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)(v2 + 736),
              (google::protobuf::Message *)(v2 + 960));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 736));
            std::string::~string((void *)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdSetWithTran(
                   v11,
                   (const common::midb::GetAndSetTranPtr *)(v2 + 128),
                   (const std::string *)(v2 + 352),
                   (const std::string *)(v2 + 480)) )
            {
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
                3u,
                "src/redis_op_social_data.cpp",
                "updatePlayerHomeBriefData",
                725);
              v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      (common::milog::MiLogStream *const)(v2 + 800),
                      (const char (*)[24])"cmdSetWithTran failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 960));
      }
      std::string::~string((void *)(v2 + 480));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 128));
    }
    std::string::~string((void *)(v2 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 864));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v15);
  }
  return v5;
};

// Line 737: range 000000000D445728-000000000D446749
__int64 __fastcall RedisOpSocialData::updatePlayerBriefData(
        uint32_t uid,
        const proto::PlayerBasicBriefData *basic_brief_data,
        const proto::PlayerMpBriefData *mp_brief_data,
        const proto::PlayerSocialBriefData *social_brief_data,
        const proto::PlayerHomeBriefData *home_brief_data)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  proto::PlayerMpBriefData *mp_brief; // [rsp+30h] [rbp-470h]
  proto::PlayerBasicBriefData *basic_brief; // [rsp+38h] [rbp-468h]
  proto::PlayerSocialBriefData *social_brief; // [rsp+40h] [rbp-460h]
  proto::PlayerHomeBriefData *home_brief; // [rsp+48h] [rbp-458h]
  char v24[1104]; // [rsp+50h] [rbp-450h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1056LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:732 96 16 17 redis_mgr_ptr:739 128 16 12 tran_pt"
                        "r:741 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 13 redis_key:739 416 32 9 "
                        "<unknown> 480 32 12 data_str:742 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32"
                        " 9 <unknown> 800 32 9 <unknown> 864 56 14 _tc_guard_:738 960 56 14 brief_data:749";
  *(_QWORD *)(v5 + 16) = RedisOpSocialData::updatePlayerBriefData;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556927;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862726] = -218959118;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -218959118;
  v7[536862734] = -218959118;
  v7[536862736] = -218959118;
  v7[536862738] = -218959118;
  v7[536862740] = -218959118;
  v7[536862742] = -218959118;
  v7[536862744] = -218959118;
  v7[536862746] = -218959118;
  v7[536862748] = -234881024;
  v7[536862749] = -218959118;
  v7[536862751] = -218103808;
  v7[536862752] = -202116109;
  *(_DWORD *)(v5 + 80) = uid;
  std::allocator<char>::allocator(v5 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 224),
    "updatePlayerBriefData",
    (const std::allocator<char> *)(v5 + 64));
  std::allocator<char>::allocator(v5 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 160),
    "REDIS",
    (const std::allocator<char> *)(v5 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v5 + 864),
    (const std::string *)(v5 + 160),
    (const std::string *)(v5 + 224));
  std::string::~string((void *)(v5 + 160));
  *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 48);
  *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v5 + 224));
  *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 64);
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 96),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v5 + 96)) )
  {
    *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "updatePlayerBriefData",
      739);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
    *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v5 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v5 + 80), (std::string *)(v5 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerBriefData",
        739);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v5 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
      *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v5 + 128, v5 + 352);
      *(_QWORD *)(v5 + 128) = 0LL;
      *(_QWORD *)(v5 + 136) = 0LL;
      *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v5 + 480);
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdGetWithTran(
             v9,
             6u,
             (const std::string *)(v5 + 352),
             (std::string *)(v5 + 480),
             (common::midb::GetAndSetTranPtr *)(v5 + 128)) )
      {
        *(_DWORD *)(((v5 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "updatePlayerBriefData",
          745);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v5 + 544),
                (const char (*)[39])"redis_mgr_ptr->cmdGetWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 544));
        *(_DWORD *)(((v5 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v8 = -1;
      }
      else
      {
        v11 = ((v5 + 960) >> 3) + 2147450880;
        *(_DWORD *)v11 = 0;
        *(_WORD *)(v11 + 4) = 0;
        *(_BYTE *)(v11 + 6) = 0;
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v5 + 960));
        if ( (unsigned __int8)std::string::empty(v5 + 480) != 1
          && (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v5 + 960, v5 + 480) != 1 )
        {
          *(_DWORD *)(((v5 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "updatePlayerBriefData",
            754);
          v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  (common::milog::MiLogStream *const)(v5 + 608),
                  (const char (*)[25])"ParseFromString failed: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v5 + 480));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 608));
          *(_DWORD *)(((v5 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v8 = -1;
        }
        else
        {
          mp_brief = proto::PlayerBriefDataRedisData::mutable_mp_brief((proto::PlayerBriefDataRedisData *const)(v5 + 960));
          proto::PlayerMpBriefData::CopyFrom(mp_brief, mp_brief_data);
          basic_brief = proto::PlayerBriefDataRedisData::mutable_basic_brief((proto::PlayerBriefDataRedisData *const)(v5 + 960));
          proto::PlayerBasicBriefData::CopyFrom(basic_brief, basic_brief_data);
          social_brief = proto::PlayerBriefDataRedisData::mutable_social_brief((proto::PlayerBriefDataRedisData *const)(v5 + 960));
          proto::PlayerSocialBriefData::CopyFrom(social_brief, social_brief_data);
          home_brief = proto::PlayerBriefDataRedisData::mutable_home_brief((proto::PlayerBriefDataRedisData *const)(v5 + 960));
          proto::PlayerHomeBriefData::CopyFrom(home_brief, home_brief_data);
          std::string::clear(v5 + 480);
          if ( !google::protobuf::MessageLite::SerializeToString(
                  (const google::protobuf::MessageLite *const)(v5 + 960),
                  (std::string *)(v5 + 480)) )
          {
            *(_DWORD *)(((v5 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "updatePlayerBriefData",
              774);
            v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)(v5 + 672),
                    (const char (*)[27])"SerializeToString failed: ");
            *(_DWORD *)(((v5 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 736, 32LL);
            }
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)(v5 + 736),
              (google::protobuf::Message *)(v5 + 960));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v5 + 736));
            std::string::~string((void *)(v5 + 736));
            *(_DWORD *)(((v5 + 736) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 672));
            *(_DWORD *)(((v5 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v8 = -1;
          }
          else
          {
            v14 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdSetWithTran(
                   v14,
                   (const common::midb::GetAndSetTranPtr *)(v5 + 128),
                   (const std::string *)(v5 + 352),
                   (const std::string *)(v5 + 480)) )
            {
              *(_DWORD *)(((v5 + 800) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 800) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 831) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 831) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 800, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 800),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "updatePlayerBriefData",
                780);
              v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      (common::milog::MiLogStream *const)(v5 + 800),
                      (const char (*)[24])"cmdSetWithTran failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 800));
              *(_DWORD *)(((v5 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v8 = -1;
            }
            else
            {
              v8 = 0;
            }
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v5 + 960));
      }
      std::string::~string((void *)(v5 + 480));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v5 + 128));
    }
    std::string::~string((void *)(v5 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v5 + 864));
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1056LL, v24);
  }
  return v8;
};

// Line 788: range 000000000D44674A-000000000D4470D2
int32_t __cdecl RedisOpSocialData::isPlayerFriend(uint32_t uid, uint32_t target_uid, bool *is_friend)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:790 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:790 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:789";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::isPlayerFriend;
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
    "isPlayerFriend",
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
      "src/redis_op_social_data.cpp",
      "isPlayerFriend",
      790);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "isPlayerFriend",
        790);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), target_uid);
      v8 = common::midb::RedisMgr::cmdSIsMember(
             v7,
             4u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             is_friend) != 0;
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
          "src/redis_op_social_data.cpp",
          "isPlayerFriend",
          794);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[20])"cmdSIsMember failed");
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

// Line 802: range 000000000D4470D4-000000000D447A6D
int32_t __cdecl RedisOpSocialData::isPlayerFriendWithTran(
        uint32_t uid,
        uint32_t target_uid,
        bool *is_friend,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  bool v9; // r14
  int32_t result; // eax
  char v13[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:804 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:804 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:803";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::isPlayerFriendWithTran;
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
  v6[536862738] = -218103808;
  v6[536862739] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "isPlayerFriendWithTran",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 544),
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
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "isPlayerFriendWithTran",
      804);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerFriendListRedisData>(uid, (std::string *)(v4 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "isPlayerFriendWithTran",
        804);
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
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 416), target_uid);
      v9 = common::midb::RedisMgr::cmdSIsMemberWithTran(
             v8,
             4u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 416),
             is_friend,
             tran_ptr) != 0;
      std::string::~string((void *)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
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
          "src/redis_op_social_data.cpp",
          "isPlayerFriendWithTran",
          808);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v4 + 480),
          (const char (*)[20])"cmdSIsMember failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::string::~string((void *)(v4 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 544));
  result = v7;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 816: range 000000000D447A6E-000000000D4484C1
int32_t __cdecl RedisOpSocialData::isPlayerAskAddFriend(uint32_t uid, uint32_t target_uid, bool *is_friend)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  char v9; // si
  int32_t result; // eax
  char v12[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:818 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:818 352 32 9 <unknown> 416 32 9 score:820 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:817";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::isPlayerAskAddFriend;
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
    "isPlayerAskAddFriend",
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
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 64)) )
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
      "src/redis_op_social_data.cpp",
      "isPlayerAskAddFriend",
      818);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "isPlayerAskAddFriend",
        818);
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
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 416);
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 480), target_uid);
      v8 = common::midb::RedisMgr::cmdZSCore(
             v7,
             5u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 480),
             (std::string *)(v3 + 416)) != 0;
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
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
          "src/redis_op_social_data.cpp",
          "isPlayerAskAddFriend",
          823);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v3 + 544),
          (const char (*)[17])"cmdZSCore failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = std::string::empty(v3 + 416) ^ 1;
        if ( *(_BYTE *)(((unsigned __int64)is_friend >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_friend & 7) >= *(_BYTE *)(((unsigned __int64)is_friend >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_friend);
        }
        *is_friend = v9;
        v6 = 0;
      }
      std::string::~string((void *)(v3 + 416));
    }
    std::string::~string((void *)(v3 + 288));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v12 == (char *)v3 )
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

// Line 832: range 000000000D4484C2-000000000D448F26
int32_t __cdecl RedisOpSocialData::isPlayerAskAddFriendWithTran(
        uint32_t uid,
        uint32_t target_uid,
        bool *is_friend,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  bool v9; // r14
  char v10; // si
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
  *(_QWORD *)(v4 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:834 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:834 352 32 9 <unknown> 416 32 9 score:836 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:833";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::isPlayerAskAddFriendWithTran;
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
    "isPlayerAskAddFriendWithTran",
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
      "src/redis_op_social_data.cpp",
      "isPlayerAskAddFriendWithTran",
      834);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerAskFriendListRedisData>(uid, (std::string *)(v4 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "isPlayerAskAddFriendWithTran",
        834);
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
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 416);
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 480), target_uid);
      v9 = common::midb::RedisMgr::cmdZScoreWithTran(
             v8,
             5u,
             (const std::string *)(v4 + 288),
             (const std::string *)(v4 + 480),
             (std::string *)(v4 + 416),
             tran_ptr) != 0;
      std::string::~string((void *)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
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
          "src/redis_op_social_data.cpp",
          "isPlayerAskAddFriendWithTran",
          839);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v4 + 544),
          (const char (*)[17])"cmdZSCore failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
        *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v10 = std::string::empty(v4 + 416) ^ 1;
        if ( *(_BYTE *)(((unsigned __int64)is_friend >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_friend & 7) >= *(_BYTE *)(((unsigned __int64)is_friend >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_friend);
        }
        *is_friend = v10;
        v7 = 0;
      }
      std::string::~string((void *)(v4 + 416));
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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

// Line 850: range 000000000D448F28-000000000D449B4D
int32_t __cdecl RedisOpSocialData::getPlayerBlacklistSet(uint32_t uid, std::set<unsigned int> *player_blacklist_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v8; // rax
  int32_t result; // eax
  std::set<std::string> *__for_range; // [rsp+18h] [rbp-358h]
  char v11[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 17 blacklist_uid:863 80 8 15 __for_begin:861 112 8 13 "
                        "__for_end:861 144 16 17 redis_mgr_ptr:852 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknow"
                        "n> 368 32 13 redis_key:852 432 32 9 <unknown> 496 32 9 <unknown> 560 32 11 uid_str:861 624 48 15"
                        " raw_uid_set:854 704 56 14 _tc_guard_:851";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerBlacklistSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "getPlayerBlacklistSet",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 176),
    (const std::string *)(v2 + 240));
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getPlayerBlacklistSet",
      852);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBlacklistRedisData>(uid, (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBlacklistSet",
        852);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v7,
             7u,
             (const std::string *)(v2 + 368),
             (std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPlayerBlacklistSet",
          857);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 496),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v2 + 624);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 80) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112)) )
        {
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
          v8 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
          std::string::basic_string(v2 + 560, v8);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 64);
          *(_DWORD *)(v2 + 64) = 0;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v2 + 560),
            (unsigned int *)(v2 + 64),
            1);
          std::set<unsigned int>::insert(player_blacklist_set, (const std::set<unsigned int>::value_type *)(v2 + 64));
          std::string::~string((void *)(v2 + 560));
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
        }
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 873: range 000000000D449B4E-000000000D44A4D6
int32_t __cdecl RedisOpSocialData::addPlayerBlacklist(uint32_t uid, uint32_t target_uid, bool *is_repeated)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  bool v8; // r14
  int32_t result; // eax
  char v11[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:875 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:875 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:874";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::addPlayerBlacklist;
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
    "addPlayerBlacklist",
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
      "src/redis_op_social_data.cpp",
      "addPlayerBlacklist",
      875);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBlacklistRedisData>(uid, (std::string *)(v3 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "addPlayerBlacklist",
        875);
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
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 416), target_uid);
      v8 = common::midb::RedisMgr::cmdSAdd(
             v7,
             7u,
             (const std::string *)(v3 + 288),
             (const std::string *)(v3 + 416),
             is_repeated) != 0;
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
          "src/redis_op_social_data.cpp",
          "addPlayerBlacklist",
          879);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[39])"redis_mgr_ptr->cmdSAddWithTran  failed");
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

// Line 888: range 000000000D44A4D8-000000000D44AE4F
int32_t __cdecl RedisOpSocialData::removePlayerBlacklist(uint32_t uid, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  bool v7; // r14
  int32_t result; // eax
  char v9[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:890 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:890 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 56 14 _tc_guard_:889";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removePlayerBlacklist;
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
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removePlayerBlacklist",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
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
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removePlayerBlacklist",
      890);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBlacklistRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removePlayerBlacklist",
        890);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 416), target_uid);
      v7 = common::midb::RedisMgr::cmdSRem(v6, 7u, (const std::string *)(v2 + 288), (const std::string *)(v2 + 416)) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removePlayerBlacklist",
          894);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdSRem  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 904: range 000000000D44AE50-000000000D44B6BE
int32_t __cdecl RedisOpSocialData::getPlayerBlacklistCount(uint32_t uid, uint32_t *count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 17 redis_mgr_ptr:906 96 32 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 13 redis_key:906 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_:905";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerBlacklistCount;
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
    "getPlayerBlacklistCount",
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
      "src/redis_op_social_data.cpp",
      "getPlayerBlacklistCount",
      906);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBlacklistRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerBlacklistCount",
        906);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSCard(v6, 7u, (const std::string *)(v2 + 288), count) )
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
          "src/redis_op_social_data.cpp",
          "getPlayerBlacklistCount",
          910);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[32])"redis_mgr_ptr->cmdSCard  failed");
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

// Line 918: range 000000000D44B6C0-000000000D44BD86
int32_t __cdecl RedisOpSocialData::parseChatRedisData(
        proto::ChatRedisData *redis_data,
        const std::string *redis_data_str)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  int v8; // r15d
  google::protobuf::uint32 v9; // edx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  proto::ChatMixRedisData::ContentCase v12; // eax
  const std::string *v13; // rdx
  google::protobuf::uint32 v14; // edx
  proto::ChatRedisData_SystemHint *v15; // r15
  const proto::ChatMixRedisData_SystemHint *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // edx
  bool v19; // dl
  int32_t result; // eax
  char v21[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 56 12 mix_data:926";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::parseChatRedisData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(redis_data, redis_data_str) != 1 )
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
      "src/redis_op_social_data.cpp",
      "parseChatRedisData",
      921);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)(v3 + 32),
           (const char (*)[38])"ChatRedisData ParseFromString failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, redis_data_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    v2 = -1;
  }
  else
  {
    if ( proto::ChatRedisData::uid(redis_data) )
      goto LABEL_27;
    proto::ChatMixRedisData::ChatMixRedisData((proto::ChatMixRedisData *const)(v3 + 224));
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 224, redis_data_str) != 1 )
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
        "src/redis_op_social_data.cpp",
        "parseChatRedisData",
        929);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[25])"ParseFromString failed: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, redis_data_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else if ( proto::ChatMixRedisData::uid((const proto::ChatMixRedisData *const)(v3 + 224)) )
    {
      v9 = proto::ChatMixRedisData::time((const proto::ChatMixRedisData *const)(v3 + 224));
      proto::ChatRedisData::set_time(redis_data, v9);
      v10 = proto::ChatMixRedisData::uid((const proto::ChatMixRedisData *const)(v3 + 224));
      proto::ChatRedisData::set_uid(redis_data, v10);
      v11 = proto::ChatMixRedisData::sequence((const proto::ChatMixRedisData *const)(v3 + 224));
      proto::ChatRedisData::set_sequence(redis_data, v11);
      v12 = proto::ChatMixRedisData::content_case((const proto::ChatMixRedisData *const)(v3 + 224));
      if ( v12 == kText_0 )
      {
        v13 = proto::ChatMixRedisData::text[abi:cxx11]((const proto::ChatMixRedisData *const)(v3 + 224));
        proto::ChatRedisData::set_text(redis_data, v13);
      }
      else if ( v12 <= kText_0 )
      {
        if ( v12 == kIcon_0 )
        {
          v14 = proto::ChatMixRedisData::icon((const proto::ChatMixRedisData *const)(v3 + 224));
          proto::ChatRedisData::set_icon(redis_data, v14);
        }
        else if ( v12 == kSystemHint_0 )
        {
          v15 = proto::ChatRedisData::mutable_system_hint(redis_data);
          v16 = proto::ChatMixRedisData::system_hint((const proto::ChatMixRedisData *const)(v3 + 224));
          v17 = proto::ChatMixRedisData_SystemHint::type(v16);
          proto::ChatRedisData_SystemHint::set_type(v15, v17);
        }
      }
      v18 = proto::ChatMixRedisData::to_uid((const proto::ChatMixRedisData *const)(v3 + 224));
      proto::ChatRedisData::set_to_uid(redis_data, v18);
      v19 = proto::ChatMixRedisData::is_read((const proto::ChatMixRedisData *const)(v3 + 224));
      proto::ChatRedisData::set_is_read(redis_data, v19);
      v8 = 1;
    }
    else
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
        "src/redis_op_social_data.cpp",
        "parseChatRedisData",
        934);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)(v3 + 160),
        (const char (*)[18])"mix_data.uid is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    proto::ChatMixRedisData::~ChatMixRedisData((proto::ChatMixRedisData *const)(v3 + 224));
    if ( v8 == 1 )
LABEL_27:
      v2 = 0;
  }
  result = v2;
  if ( v21 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 961: range 000000000D44BD88-000000000D44D926
__int64 __fastcall RedisOpSocialData::appendPrivateChat(
        uint32_t uid,
        uint32_t target_uid,
        const proto::ChatRedisData *redis_data,
        uint32_t *count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const unsigned int *v7; // r14
  const unsigned int *v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rcx
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rsi
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  __int64 v43; // rsi
  char v47[1616]; // [rsp+20h] [rbp-650h] BYREF

  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1568LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "28 48 1 9 <unknown> 64 1 9 <unknown> 80 4 14 tmp_count:1003 96 4 7 uid:960 112 4 14 target_uid:9"
                        "60 128 8 12 uid_pair:962 160 16 17 redis_mgr_ptr:964 192 32 9 <unknown> 256 32 9 <unknown> 320 3"
                        "2 9 <unknown> 384 32 18 pair_redis_key:970 448 32 9 <unknown> 512 32 12 chat_str:977 576 32 9 <u"
                        "nknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 13 redis_key:997 896 32 "
                        "9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 21 target_redis_key:1017 1152 32 9 <u"
                        "nknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 56 "
                        "14 _tc_guard_:963";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::appendPrivateChat;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
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
  v6[536862753] = -218959118;
  v6[536862755] = -218959118;
  v6[536862757] = -218959118;
  v6[536862759] = -218959118;
  v6[536862761] = -218959118;
  v6[536862763] = -218959118;
  v6[536862765] = -218959118;
  v6[536862767] = -218103808;
  v6[536862768] = -202116109;
  *(_DWORD *)(v4 + 96) = uid;
  *(_DWORD *)(v4 + 112) = target_uid;
  v7 = std::min<unsigned int>((const unsigned int *)(v4 + 96), (const unsigned int *)(v4 + 112));
  v8 = std::max<unsigned int>((const unsigned int *)(v4 + 96), (const unsigned int *)(v4 + 112));
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::pair<unsigned int,unsigned int> *)(v4 + 128) = std::make_pair<unsigned int const&,unsigned int const&>(v8, v7);
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 256),
    "appendPrivateChat",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 192),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 1472),
    (const std::string *)(v4 + 192),
    (const std::string *)(v4 + 256));
  std::string::~string((void *)(v4 + 192));
  *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 256));
  *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 160)) )
  {
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "appendPrivateChat",
      967);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 320), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 384);
    if ( RedisOpBase::getUidPairRedisKey<proto::PlayerPrivateChatRedisData>(
           (const std::pair<unsigned int,unsigned int> *)(v4 + 128),
           (std::string *)(v4 + 384)) )
    {
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "appendPrivateChat",
        973);
      if ( *(_BYTE *)(((v4 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 124) & 7) + 3) >= *(_BYTE *)(((v4 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 132);
      }
      v10 = *(unsigned int *)(v4 + 132);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 128);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 448),
        "get key for uid pair<%u, %u> failed",
        *(unsigned int *)(v4 + 128),
        v10);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v9 = -1;
    }
    else
    {
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 512);
      if ( !google::protobuf::MessageLite::SerializeToString(redis_data, (std::string *)(v4 + 512)) )
      {
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "appendPrivateChat",
          980);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)(v4 + 576),
                (const char (*)[26])"SerializeToString failed ");
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
        v12 = (__int64)redis_data;
        if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
        {
          v12 = 32LL;
          __asan_report_store_n(v4 + 640, 32LL);
        }
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)(v4 + 640),
          (google::protobuf::Message *)v12);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v4 + 640));
        std::string::~string((void *)(v4 + 640));
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -117901064;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v9 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdRPush(
               v13,
               8u,
               (const std::string *)(v4 + 384),
               (const std::string *)(v4 + 512),
               count) )
        {
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "appendPrivateChat",
            986);
          v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v4 + 704),
                  (const char (*)[33])"redis_mgr_ptr->cmdRPush failed: ");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v4 + 96));
          v16 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v15, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v9 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdLTrim(v17, 8u, (const std::string *)(v4 + 384), -100, -1) )
          {
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
              3u,
              "src/redis_op_social_data.cpp",
              "appendPrivateChat",
              994);
            v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v4 + 768),
                    (const char (*)[33])"redis_mgr_ptr->cmdLTrim failed: ");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v4 + 96));
            v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])", ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              (const unsigned int *)(v4 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
            *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -117901064;
          }
          *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
          std::string::basic_string(v4 + 832);
          if ( RedisOpBase::getUidRedisKey<proto::PlayerRecentChatRedisData>(
                 *(_DWORD *)(v4 + 96),
                 (std::string *)(v4 + 832)) )
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
              "src/redis_op_social_data.cpp",
              "appendPrivateChat",
              1000);
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)(v4 + 896),
              "get key for uid=%u failed",
              *(unsigned int *)(v4 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 896));
            *(_DWORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v9 = -1;
          }
          else
          {
            *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v4 + 80);
            *(_DWORD *)(v4 + 80) = 0;
            v21 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
            if ( common::midb::RedisMgr::cmdRPush(
                   v21,
                   9u,
                   (const std::string *)(v4 + 832),
                   (const std::string *)(v4 + 512),
                   (uint32_t *)(v4 + 80)) )
            {
              *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "appendPrivateChat",
                1006);
              v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      (common::milog::MiLogStream *const)(v4 + 960),
                      (const char (*)[33])"redis_mgr_ptr->cmdRPush failed: ");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v4 + 96));
              v24 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v23, (const char (*)[3])", ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v4 + 112));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 960));
              *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = -117901064;
              v9 = -1;
            }
            else
            {
              v25 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
              if ( common::midb::RedisMgr::cmdLTrim(v25, 9u, (const std::string *)(v4 + 832), -100, -1) )
              {
                *(_DWORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 1024) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 1024, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 1024),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/redis_op_social_data.cpp",
                  "appendPrivateChat",
                  1014);
                v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)(v4 + 1024),
                        (const char (*)[33])"redis_mgr_ptr->cmdLTrim failed: ");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v4 + 96));
                v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])", ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v4 + 112));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1024));
                *(_DWORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              }
              *(_DWORD *)(((v4 + 1088) >> 3) + 0x7FFF8000) = 0;
              std::string::basic_string(v4 + 1088);
              if ( RedisOpBase::getUidRedisKey<proto::PlayerRecentChatRedisData>(
                     *(_DWORD *)(v4 + 112),
                     (std::string *)(v4 + 1088)) )
              {
                *(_DWORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 1152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 1152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 1152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/redis_op_social_data.cpp",
                  "appendPrivateChat",
                  1020);
                common::milog::MiLogStream::operator()(
                  (common::milog::MiLogStream *const)(v4 + 1152),
                  "get key for uid=%u failed",
                  *(unsigned int *)(v4 + 112));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1152));
                *(_DWORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                v9 = -1;
              }
              else
              {
                v29 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
                if ( common::midb::RedisMgr::cmdRPush(
                       v29,
                       9u,
                       (const std::string *)(v4 + 1088),
                       (const std::string *)(v4 + 512),
                       (uint32_t *)(v4 + 80)) )
                {
                  *(_DWORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v4 + 1216) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) != 0
                    && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v4 + 1216, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v4 + 1216),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "src/redis_op_social_data.cpp",
                    "appendPrivateChat",
                    1025);
                  v30 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v4 + 1216),
                          (const char (*)[33])"redis_mgr_ptr->cmdRPush failed: ");
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          (const unsigned int *)(v4 + 112));
                  v32 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v31, (const char (*)[3])", ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v4 + 96));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1216));
                  *(_DWORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                  v9 = -1;
                }
                else
                {
                  v33 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
                  if ( common::midb::RedisMgr::cmdLTrim(v33, 9u, (const std::string *)(v4 + 1088), -100, -1) )
                  {
                    *(_DWORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v4 + 1280) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) != 0
                      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v4 + 1280, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v4 + 1280),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/redis_op_social_data.cpp",
                      "appendPrivateChat",
                      1033);
                    v34 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            (common::milog::MiLogStream *const)(v4 + 1280),
                            (const char (*)[33])"redis_mgr_ptr->cmdLTrim failed: ");
                    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v34,
                            (const unsigned int *)(v4 + 96));
                    v36 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v35, (const char (*)[3])", ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      (const unsigned int *)(v4 + 112));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1280));
                    *(_DWORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  }
                  *(_DWORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v4 + 1344) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) != 0
                    && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v4 + 1344, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v4 + 1344),
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "src/redis_op_social_data.cpp",
                    "appendPrivateChat",
                    1037);
                  v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          (common::milog::MiLogStream *const)(v4 + 1344),
                          (const std::string *)(v4 + 832));
                  v38 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v37, (const char (*)[3])", ");
                  v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v38,
                          (const std::string *)(v4 + 384));
                  v40 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v39, (const char (*)[3])", ");
                  v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v40,
                          (const std::string *)(v4 + 1088));
                  v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v41,
                          (const char (*)[12])" chatinfo: ");
                  *(_DWORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) = 0;
                  v43 = (__int64)redis_data;
                  if ( *(char *)(((v4 + 1408) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) != 0
                    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) )
                  {
                    v43 = 32LL;
                    __asan_report_store_n(v4 + 1408, 32LL);
                  }
                  google::protobuf::Message::ShortDebugString[abi:cxx11](
                    (std::string *)(v4 + 1408),
                    (google::protobuf::Message *)v43);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v42,
                    (const std::string *)(v4 + 1408));
                  std::string::~string((void *)(v4 + 1408));
                  *(_DWORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1344));
                  *(_DWORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  v9 = 0;
                }
              }
              std::string::~string((void *)(v4 + 1088));
            }
          }
          std::string::~string((void *)(v4 + 832));
        }
      }
      std::string::~string((void *)(v4 + 512));
    }
    std::string::~string((void *)(v4 + 384));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 1472));
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80BC) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1568LL, v47);
  }
  return v9;
};

// Line 1045: range 000000000D44D928-000000000D44E920
__int64 __fastcall RedisOpSocialData::getLastNPrivateChatWithTarget(
        uint32_t uid,
        uint32_t target_uid,
        int32_t num,
        std::vector<proto::ChatRedisData> *redis_data_vec)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const unsigned int *v8; // r15
  const unsigned int *v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r15
  std::vector<std::string>::size_type v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<std::string>::size_type v18; // rax
  bool v19; // al
  std::vector<proto::ChatRedisData>::size_type v20; // rax
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  __int64 result; // rax
  size_t index; // [rsp+20h] [rbp-3E0h]
  std::vector<proto::ChatRedisData>::reference redis_data; // [rsp+28h] [rbp-3D8h]
  char v34[976]; // [rsp+30h] [rbp-3D0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(928LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1044 80 4 15 target_uid:1044 96 8 13 uid_pair:10"
                        "46 128 8 9 <unknown> 160 8 9 iter:1074 192 8 9 <unknown> 224 16 18 redis_mgr_ptr:1048 256 24 13 "
                        "data_vec:1061 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 14 redis_key:1054 "
                        "576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 56 15 _tc_guard_:1047";
  *(_QWORD *)(v5 + 16) = RedisOpSocialData::getLastNPrivateChatWithTarget;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753535;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -219021312;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -218959118;
  v7[536862739] = -218959118;
  v7[536862741] = -218959118;
  v7[536862743] = -218959118;
  v7[536862745] = -218959118;
  v7[536862747] = -218103808;
  v7[536862748] = -202116109;
  *(_DWORD *)(v5 + 64) = uid;
  *(_DWORD *)(v5 + 80) = target_uid;
  v8 = std::min<unsigned int>((const unsigned int *)(v5 + 64), (const unsigned int *)(v5 + 80));
  v9 = std::max<unsigned int>((const unsigned int *)(v5 + 64), (const unsigned int *)(v5 + 80));
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(v9, v8);
  std::allocator<char>::allocator(v5 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 384),
    "getLastNPrivateChatWithTarget",
    (const std::allocator<char> *)(v5 + 48));
  std::allocator<char>::allocator(v5 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v5 + 320),
    "REDIS",
    (const std::allocator<char> *)(v5 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v5 + 832),
    (const std::string *)(v5 + 320),
    (const std::string *)(v5 + 384));
  std::string::~string((void *)(v5 + 320));
  *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 32);
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v5 + 384));
  *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v5 + 48);
  *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 224),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v5 + 224)) )
  {
    *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 63) & 7) >= *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getLastNPrivateChatWithTarget",
      1051);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v5 + 448), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
    *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v5 + 512);
    if ( RedisOpBase::getUidPairRedisKey<proto::PlayerPrivateChatRedisData>(
           (const std::pair<unsigned int,unsigned int> *)(v5 + 96),
           (std::string *)(v5 + 512)) )
    {
      *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getLastNPrivateChatWithTarget",
        1057);
      if ( *(_BYTE *)(((v5 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v5 + 100) & 7) + 3) >= *(_BYTE *)(((v5 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5 + 100);
      }
      v10 = *(unsigned int *)(v5 + 100);
      if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 96);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v5 + 576),
        "get key for uid pair<%u, %u> failed",
        *(unsigned int *)(v5 + 96),
        v10);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 576));
      *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      v11 = ((v5 + 256) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 256));
      v12 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdLRange(
             v12,
             8u,
             (const std::string *)(v5 + 512),
             -num,
             -1,
             (std::vector<std::string> *)(v5 + 256)) )
      {
        *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getLastNPrivateChatWithTarget",
          1064);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v5 + 640),
                (const char (*)[34])"redis_mgr_ptr->cmdLRange failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 640));
        *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 63) & 7) >= *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/redis_op_social_data.cpp",
          "getLastNPrivateChatWithTarget",
          1069);
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                (common::milog::MiLogStream *const)(v5 + 704),
                (const std::string *)(v5 + 512));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])": data_vec[");
        *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
        v16 = std::vector<std::string>::size((const std::vector<std::string> *const)(v5 + 256));
        if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8();
        *(_QWORD *)(v5 + 128) = v16;
        v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v15,
                (const unsigned __int64 *)(v5 + 128));
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"]");
        *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 704));
        *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = -117901064;
        v18 = std::vector<std::string>::size((const std::vector<std::string> *const)(v5 + 256));
        std::vector<proto::ChatRedisData>::resize(redis_data_vec, v18);
        index = 0LL;
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v5 + 160) = std::vector<std::string>::begin((std::vector<std::string> *const)(v5 + 256));
        while ( 1 )
        {
          *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::string>::iterator *)(v5 + 192) = std::vector<std::string>::end((std::vector<std::string> *const)(v5 + 256));
          v19 = __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 160),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 192));
          *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( !v19 || index >= std::vector<proto::ChatRedisData>::size(redis_data_vec) )
          {
            v28 = 1;
            goto LABEL_39;
          }
          v20 = index++;
          redis_data = std::vector<proto::ChatRedisData>::operator[](redis_data_vec, v20);
          v21 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 160));
          if ( RedisOpSocialData::parseChatRedisData(redis_data, v21) )
            break;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 160));
        }
        *(_DWORD *)(((v5 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 127) & 7) >= *(_BYTE *)(((v5 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getLastNPrivateChatWithTarget",
          1084);
        v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v5 + 768),
                (const char (*)[25])"parseChatRedisData fail:");
        v23 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 160));
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v5 + 64));
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" target_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 768));
        *(_DWORD *)(((v5 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v28 = 0;
LABEL_39:
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v28 == 1 )
          v4 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 256));
    }
    std::string::~string((void *)(v5 + 512));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v5 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v5 + 832));
  result = v4;
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8070) = -168430091;
  }
  return result;
};

// Line 1094: range 000000000D44E922-000000000D44F7E5
__int64 __fastcall RedisOpSocialData::getLastNRecentChat(
        uint32_t uid,
        int32_t num,
        std::vector<proto::ChatRedisData> *redis_data_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r15
  std::vector<std::string>::size_type v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<std::string>::size_type v14; // rax
  bool v15; // al
  std::vector<proto::ChatRedisData>::size_type v16; // rax
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  __int64 result; // rax
  size_t index; // [rsp+20h] [rbp-3C0h]
  std::vector<proto::ChatRedisData>::reference redis_data; // [rsp+28h] [rbp-3B8h]
  char v27[944]; // [rsp+30h] [rbp-3B0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(896LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 8 uid:1093 96 8 9 <unknown> 128 8 9 iter:1111 160 8 9 "
                        "<unknown> 192 16 18 redis_mgr_ptr:1096 224 24 13 data_vec:1098 288 32 9 <unknown> 352 32 9 <unkn"
                        "own> 416 32 9 <unknown> 480 32 14 redis_key:1096 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 "
                        "<unknown> 736 32 9 <unknown> 800 56 15 _tc_guard_:1095";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::getLastNRecentChat;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218103808;
  v6[536862747] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "getLastNRecentChat",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 800),
    (const std::string *)(v4 + 288),
    (const std::string *)(v4 + 352));
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 192),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 192)) )
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
      "src/redis_op_social_data.cpp",
      "getLastNRecentChat",
      1096);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 416), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 480);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerRecentChatRedisData>(*(_DWORD *)(v4 + 80), (std::string *)(v4 + 480)) )
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
        "src/redis_op_social_data.cpp",
        "getLastNRecentChat",
        1096);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 544),
        "get key for uid=%u failed",
        *(unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
      *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
    else
    {
      v7 = ((v4 + 224) >> 3) + 2147450880;
      *(_WORD *)v7 = 0;
      *(_BYTE *)(v7 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 224));
      v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdLRange(
             v8,
             9u,
             (const std::string *)(v4 + 480),
             -num,
             -1,
             (std::vector<std::string> *)(v4 + 224)) )
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
          "src/redis_op_social_data.cpp",
          "getLastNRecentChat",
          1101);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               (common::milog::MiLogStream *const)(v4 + 608),
               (const char (*)[34])"redis_mgr_ptr->cmdLRange failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
      }
      else
      {
        *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/redis_op_social_data.cpp",
          "getLastNRecentChat",
          1106);
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                (common::milog::MiLogStream *const)(v4 + 672),
                (const std::string *)(v4 + 480));
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])": data_vec[");
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
        v12 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 224));
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
          v12 = __asan_report_store8();
        *(_QWORD *)(v4 + 96) = v12;
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v11,
                (const unsigned __int64 *)(v4 + 96));
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])"]");
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
        *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v14 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 224));
        std::vector<proto::ChatRedisData>::resize(redis_data_vec, v14);
        index = 0LL;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v4 + 128) = std::vector<std::string>::begin((std::vector<std::string> *const)(v4 + 224));
        while ( 1 )
        {
          *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::string>::iterator *)(v4 + 160) = std::vector<std::string>::end((std::vector<std::string> *const)(v4 + 224));
          v15 = __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v4 + 128),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v4 + 160));
          *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( !v15 || index >= std::vector<proto::ChatRedisData>::size(redis_data_vec) )
          {
            v22 = 1;
            goto LABEL_33;
          }
          v16 = index++;
          redis_data = std::vector<proto::ChatRedisData>::operator[](redis_data_vec, v16);
          v17 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v4 + 128));
          if ( RedisOpSocialData::parseChatRedisData(redis_data, v17) )
            break;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v4 + 128));
        }
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getLastNRecentChat",
          1120);
        v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v4 + 736),
                (const char (*)[28])"parseChatRedisData failed: ");
        v19 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v4 + 128));
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v22 = 0;
LABEL_33:
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v22 == 1 )
          v3 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 224));
    }
    std::string::~string((void *)(v4 + 480));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 800));
  result = v3;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0LL;
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
  }
  return result;
};

// Line 1129: range 000000000D44F7E6-000000000D4505B7
__int64 __fastcall RedisOpSocialData::getPrivateChatUnreadUidSet(uint32_t uid, std::set<unsigned int> *unread_uid_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::set<std::string> *__for_range; // [rsp+18h] [rbp-3B8h]
  char v17[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 unread_uid:1142 96 4 8 uid:1128 112 8 16 __for_begi"
                        "n:1140 144 8 14 __for_end:1140 176 16 18 redis_mgr_ptr:1131 208 32 9 <unknown> 272 32 9 <unknown"
                        "> 336 32 9 <unknown> 400 32 14 redis_key:1131 464 32 9 <unknown> 528 32 9 <unknown> 592 32 19 un"
                        "read_uid_str:1140 656 32 9 <unknown> 720 48 23 unread_uid_str_set:1133 800 56 15 _tc_guard_:1130";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPrivateChatUnreadUidSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
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
  v4[536862744] = -218959118;
  v4[536862746] = -218103808;
  v4[536862747] = -202116109;
  *(_DWORD *)(v2 + 96) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "getPrivateChatUnreadUidSet",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 208),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 800),
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
  *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 176),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 176)) )
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
      "src/redis_op_social_data.cpp",
      "getPrivateChatUnreadUidSet",
      1131);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 336), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 400);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPrivateChatUnreadRedisData>(
           *(_DWORD *)(v2 + 96),
           (std::string *)(v2 + 400)) )
    {
      *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPrivateChatUnreadUidSet",
        1131);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 464),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
      *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 720) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 720));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v7,
             0xAu,
             (const std::string *)(v2 + 400),
             (std::set<std::string> *)(v2 + 720)) )
      {
        *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPrivateChatUnreadUidSet",
          1136);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               (common::milog::MiLogStream *const)(v2 + 528),
               (const char (*)[42])"redis_mgr_ptr->cmdSMembers  failed. uid: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 96));
        v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v9,
                (const char (*)[18])" unread uid set: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v10, unread_uid_set);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
        *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v2 + 720);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 144) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 144)) )
        {
          *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
          v11 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 112));
          std::string::basic_string(v2 + 592, v11);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 80);
          *(_DWORD *)(v2 + 80) = 0;
          if ( common::tools::StringUtils::strToNum<unsigned int>(
                 (const std::string *)(v2 + 592),
                 (unsigned int *)(v2 + 80),
                 0) )
          {
            *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 656, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 656),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "getPrivateChatUnreadUidSet",
              1145);
            v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)(v2 + 656),
                    (const char (*)[34])"strToNum failed. unread_uid_str: ");
            v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v12,
                    (const std::string *)(v2 + 592));
            v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
            *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
          }
          else
          {
            std::set<unsigned int>::insert(unread_uid_set, (const std::set<unsigned int>::value_type *)(v2 + 80));
          }
          std::string::~string((void *)(v2 + 592));
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 112));
        }
        *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 720));
    }
    std::string::~string((void *)(v2 + 400));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 176));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 800));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
  return v5;
};

// Line 1156: range 000000000D4505B8-000000000D451235
__int64 __fastcall RedisOpSocialData::removePrivateChatUnreadUidSet(
        uint32_t uid,
        const std::set<unsigned int> *target_uid_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  unsigned int target_uid; // [rsp+14h] [rbp-35Ch]
  char v15[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1155 80 8 16 __for_begin:1161 112 8 14 __for_end"
                        ":1161 144 16 18 redis_mgr_ptr:1158 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 "
                        "32 14 redis_key:1158 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 16 uid_str_"
                        "set:1160 704 56 15 _tc_guard_:1157";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removePrivateChatUnreadUidSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  *(_DWORD *)(v2 + 64) = uid;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "removePrivateChatUnreadUidSet",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 176),
    (const std::string *)(v2 + 240));
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removePrivateChatUnreadUidSet",
      1158);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPrivateChatUnreadRedisData>(
           *(_DWORD *)(v2 + 64),
           (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "removePrivateChatUnreadUidSet",
        1158);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v2 + 80) = std::set<unsigned int>::begin(target_uid_set);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v2 + 112) = std::set<unsigned int>::end(target_uid_set);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 80),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 112)) )
      {
        v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 80));
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        target_uid = *v8;
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 496), target_uid);
        std::set<std::string>::insert(
          (std::set<std::string> *const)(v2 + 624),
          (std::set<std::string>::value_type *)(v2 + 496));
        std::string::~string((void *)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 80));
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSRem(
             v9,
             0xAu,
             (const std::string *)(v2 + 368),
             (std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removePrivateChatUnreadUidSet",
          1168);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v2 + 560),
                (const char (*)[36])"redis_mgr_ptr->cmdSRem  failed uid ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" target_id: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v12, target_uid_set);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
  result = v5;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 1177: range 000000000D451236-000000000D451C16
__int64 __fastcall RedisOpSocialData::addPrivateChatUnreadUid(uint32_t uid, uint32_t target_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned int v7; // esi
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  char v13[720]; // [rsp+10h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1176 80 4 14 target_id:1176 96 16 18 redis_mgr_p"
                        "tr:1179 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 14 redis_key:1179 384 32"
                        " 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 56 15 _tc_guard_:1178";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::addPrivateChatUnreadUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218103808;
  v4[536862740] = -202116109;
  *(_DWORD *)(v2 + 64) = uid;
  *(_DWORD *)(v2 + 80) = target_id;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "addPrivateChatUnreadUid",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 576),
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
      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "addPrivateChatUnreadUid",
      1179);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPrivateChatUnreadRedisData>(
           *(_DWORD *)(v2 + 64),
           (std::string *)(v2 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "addPrivateChatUnreadUid",
        1179);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 384),
        "get key for uid=%u failed",
        *(unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      v7 = *(_DWORD *)(v2 + 80);
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        v7 = 32;
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 448), v7);
      v8 = common::midb::RedisMgr::cmdSAdd(v6, 0xAu, (const std::string *)(v2 + 320), (const std::string *)(v2 + 448)) != 0;
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "addPrivateChatUnreadUid",
          1183);
        v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               (common::milog::MiLogStream *const)(v2 + 512),
               (const char (*)[37])"redis_mgr_ptr->cmdSAdd  failed. uid ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" target_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 576));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 1192: range 000000000D451C18-000000000D452DFB
int32_t __cdecl RedisOpSocialData::getPlayerActivitySocialDataBatch(
        const std::vector<unsigned int> *uid_vec,
        std::map<unsigned int,proto::PlayerActivitySocialRedisData> *player_activity_social_data_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  const char (*v11)[1]; // r8
  common::milog::MiLogStream *v12; // rax
  std::string *v13; // r8
  int v14; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  bool v19; // al
  common::milog::MiLogStream *v20; // rax
  int v21; // eax
  std::string *p_second; // rdx
  bool v23; // al
  common::milog::MiLogStream *v24; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v25; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v26; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v27; // rax
  int v29; // [rsp+8h] [rbp-488h]
  std::map<unsigned int,proto::PlayerActivitySocialRedisData>::mapped_type *v30; // [rsp+8h] [rbp-488h]
  uint32_t i; // [rsp+2Ch] [rbp-464h]
  char v32[1104]; // [rsp+40h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1196 80 4 8 uid:1216 96 8 16 __for_begin:1196 12"
                        "8 8 14 __for_end:1196 160 8 9 iter:1217 192 8 9 <unknown> 224 8 16 result_iter:1223 256 8 9 <unk"
                        "nown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 12 key_str:1198 480 32 9 <unknown> 544 32 9 <"
                        "unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 48 24 redis_key_value_map:"
                        "1194 880 48 22 uid_redis_key_map:1195 960 56 15 _tc_guard_:1193";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::getPlayerActivitySocialDataBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862749] = -218959118;
  v5[536862751] = -218103808;
  v5[536862752] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    "getPlayerActivitySocialDataBatch",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 960),
    (const std::string *)(v3 + 288),
    (const std::string *)(v3 + 352));
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 800) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 800));
  v7 = ((v3 + 880) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  std::map<unsigned int,std::string>::map((std::map<unsigned int,std::string> *const)(v3 + 880));
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
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64);
    *(_DWORD *)(v3 + 64) = v10;
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 416);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerActivitySocialRedisData>(
           *(_DWORD *)(v3 + 64),
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
        "src/redis_op_social_data.cpp",
        "getPlayerActivitySocialDataBatch",
        1201);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[23])"getUidRedisKey failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v29 = 0;
    }
    else
    {
      std::map<std::string,std::string>::emplace<std::string&,char const(&)[1]>(
        (std::map<std::string,std::string> *const)(v3 + 800),
        (std::string *)(v3 + 416),
        (const char (*)[1])byte_1A7F42E0,
        (std::string *)(v3 + 416),
        v11);
      std::map<unsigned int,std::string>::emplace<unsigned int &,std::string&>(
        (std::map<unsigned int,std::string> *const)(v3 + 880),
        (unsigned int *)(v3 + 64),
        (std::string *)(v3 + 416),
        (unsigned int *)(v3 + 64),
        v13);
      v29 = 1;
    }
    std::string::~string((void *)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    if ( v29 != 1 )
    {
      v14 = 0;
      goto LABEL_25;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
  }
  v14 = 1;
LABEL_25:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    v15 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(v15, 0xBu, (std::map<std::string,std::string> *)(v3 + 800)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerActivitySocialDataBatch",
        1210);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 544),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      for ( i = 0; i < std::vector<unsigned int>::size(uid_vec); ++i )
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    uid_vec,
                                                                                                    i);
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = *v17;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80);
        *(_DWORD *)(v3 + 80) = v18;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<unsigned int,std::string>::iterator *)(v3 + 160) = std::map<unsigned int,std::string>::find(
                                                                        (std::map<unsigned int,std::string> *const)(v3 + 880),
                                                                        (const std::map<unsigned int,std::string>::key_type *)(v3 + 80));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<unsigned int,std::string>::iterator *)(v3 + 192) = std::map<unsigned int,std::string>::end((std::map<unsigned int,std::string> *const)(v3 + 880));
        v19 = std::operator==(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 160),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 192));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v19 )
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
            "src/redis_op_social_data.cpp",
            "getPlayerActivitySocialDataBatch",
            1220);
          v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[21])"uid not in key map, ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v21 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 160))->second;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::map<std::string,std::string>::iterator *)(v3 + 224) = std::map<std::string,std::string>::find(
                                                                         (std::map<std::string,std::string> *const)(v3 + 800),
                                                                         p_second);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::map<std::string,std::string>::iterator *)(v3 + 256) = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 800));
          v23 = std::operator==(
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 224),
                  (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 256));
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v23 )
          {
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "getPlayerActivitySocialDataBatch",
              1226);
            v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[27])"redis key not in key map, ");
            v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 160));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &v25->second);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v21 = 0;
          }
          else
          {
            v26 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 224));
            if ( (unsigned __int8)std::string::empty(&v26->second) != 1
              && (v30 = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::operator[](
                          player_activity_social_data_map,
                          (const std::map<unsigned int,proto::PlayerActivitySocialRedisData>::key_type *)(v3 + 80)),
                  v27 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 224)),
                  (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v30, &v27->second) ^ 1) )
            {
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 736, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 736),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "getPlayerActivitySocialDataBatch",
                1237);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[23])"ParseFromString failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v21 = 0;
            }
            else
            {
              v21 = 1;
            }
          }
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v21 != 1 )
          goto LABEL_61;
      }
      v2 = 0;
    }
  }
LABEL_61:
  std::map<unsigned int,std::string>::~map((std::map<unsigned int,std::string> *const)(v3 + 880));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 800));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 960));
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v32);
  }
  return v2;
};

// Line 1247: range 000000000D452DFC-000000000D453996
__int64 __fastcall RedisOpSocialData::updatePlayerActivitySocialData(uint32_t uid, __int64 redis_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  char v10[848]; // [rsp+10h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 8 uid:1246 96 16 18 redis_mgr_ptr:1249 128 32 9 <unkno"
                        "wn> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 14 redis_key:1249 384 32 9 <unknown> 448 32 13 "
                        "data_str:1251 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 56 15 _tc_guard_:1248";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::updatePlayerActivitySocialData;
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
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "updatePlayerActivitySocialData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "REDIS",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
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
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "updatePlayerActivitySocialData",
      1249);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 256), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerActivitySocialRedisData>(
           *(_DWORD *)(v2 + 80),
           (std::string *)(v2 + 320)) )
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
        "src/redis_op_social_data.cpp",
        "updatePlayerActivitySocialData",
        1249);
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
      if ( !google::protobuf::MessageLite::SerializeToString(
              (const google::protobuf::MessageLite *const)redis_data,
              (std::string *)(v2 + 448)) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "updatePlayerActivitySocialData",
          1254);
        v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               (common::milog::MiLogStream *const)(v2 + 512),
               (const char (*)[27])"SerializeToString failed: ");
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          redis_data = 32LL;
          __asan_report_store_n(v2 + 576, 32LL);
        }
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)(v2 + 576),
          (google::protobuf::Message *)redis_data);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSet(v7, 0xBu, (const std::string *)(v2 + 320), (const std::string *)(v2 + 448)) )
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "updatePlayerActivitySocialData",
            1260);
          v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 (common::milog::MiLogStream *const)(v2 + 640),
                 (const char (*)[24])"cmdSetWithTran failed: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 1267: range 000000000D453998-000000000D454347
__int64 __fastcall RedisOpSocialData::getPlayerShowAvatarInfo(
        uint32_t uid,
        uint32_t avatar_id,
        proto::PlayerShowAvatarRedisData *avatar_info,
        unsigned __int64 is_exist)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  char v18[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1266 80 4 14 avatar_id:1266 96 32 9 <unknown> 16"
                        "0 32 9 <unknown> 224 32 12 key_str:1269 288 32 9 <unknown> 352 32 14 value_str:1275 416 32 9 <un"
                        "known> 480 32 9 <unknown> 544 56 15 _tc_guard_:1268";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::getPlayerShowAvatarInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234556924;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218103808;
  v6[536862739] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  *(_DWORD *)(v4 + 80) = avatar_id;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "getPlayerShowAvatarInfo",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 544),
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
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v4 + 224);
  if ( (unsigned int)RedisOpBase::getPlayerShowAvatarRedisKey<proto::PlayerShowAvatarRedisData>(
                       *(_DWORD *)(v4 + 64),
                       *(_DWORD *)(v4 + 80),
                       (std::string *)(v4 + 224)) )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getPlayerShowAvatarInfo",
      1272);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           (common::milog::MiLogStream *const)(v4 + 288),
           (const char (*)[41])"getPlayerShowAvatarRedisKey failed, uid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"  avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v10 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 352);
    v11 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdGet(v11, 6u, (const std::string *)(v4 + 224), (std::string *)(v4 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerShowAvatarInfo",
        1278);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v4 + 416),
              (const char (*)[20])"cmdGet failed, uid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v10 = -1;
    }
    else if ( (unsigned __int8)std::string::empty(v4 + 352) )
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 0;
      v10 = 0;
    }
    else if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(avatar_info, v4 + 352) != 1 )
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
        "src/redis_op_social_data.cpp",
        "getPlayerShowAvatarInfo",
        1288);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        (common::milog::MiLogStream *const)(v4 + 480),
        (const char (*)[23])"ParseFromString failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 1;
      v10 = 0;
    }
    std::string::~string((void *)(v4 + 352));
  }
  std::string::~string((void *)(v4 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 544));
  result = v10;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 1298: range 000000000D454348-000000000D45529A
__int64 __fastcall RedisOpSocialData::updatePlayerShowAvatarInfo(
        uint32_t uid,
        const std::vector<proto::PlayerShowAvatarRedisData> *avatar_info_vec)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const proto::ShowAvatarInfo *v7; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const proto::ShowAvatarInfo *v12; // rax
  google::protobuf::uint32 v13; // edx
  _BOOL4 v14; // r15d
  int v15; // r15d
  __int64 v16; // rdx
  std::string *v17; // r15
  std::string *v18; // rax
  std::string *v19; // r8
  int v20; // edx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::vector<proto::PlayerShowAvatarRedisData>::size_type v24; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  __gnu_cxx::__normal_iterator<const proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> >::reference avatar_info; // [rsp+28h] [rbp-3D8h]
  char v28[976]; // [rsp+30h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 8 uid:1297 112 8 15 total_size:1301 1"
                        "44 8 16 __for_begin:1302 176 8 14 __for_end:1302 208 8 9 <unknown> 240 32 9 <unknown> 304 32 9 <"
                        "unknown> 368 32 12 key_str:1304 432 32 9 <unknown> 496 32 14 value_str:1310 560 32 9 <unknown> 6"
                        "24 32 9 <unknown> 688 32 9 <unknown> 752 48 22 key_value_str_map:1300 832 56 15 _tc_guard_:1299";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::updatePlayerShowAvatarInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
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
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862745] = -218959118;
  v5[536862747] = -218103808;
  v5[536862748] = -202116109;
  *(_DWORD *)(v3 + 96) = uid;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 304),
    "updatePlayerShowAvatarInfo",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 240),
    "REDIS",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 832),
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
  v6 = ((v3 + 752) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 752));
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<proto::PlayerShowAvatarRedisData>::const_iterator *)(v3 + 144) = std::vector<proto::PlayerShowAvatarRedisData>::begin(avatar_info_vec);
  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<proto::PlayerShowAvatarRedisData>::const_iterator *)(v3 + 176) = std::vector<proto::PlayerShowAvatarRedisData>::end(avatar_info_vec);
  while ( __gnu_cxx::operator!=<proto::PlayerShowAvatarRedisData const*,std::vector<proto::PlayerShowAvatarRedisData>>(
            (const __gnu_cxx::__normal_iterator<const proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *)(v3 + 144),
            (const __gnu_cxx::__normal_iterator<const proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *)(v3 + 176)) )
  {
    avatar_info = __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData const*,std::vector<proto::PlayerShowAvatarRedisData>>::operator*((const __gnu_cxx::__normal_iterator<const proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *const)(v3 + 144));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 368);
    v7 = proto::PlayerShowAvatarRedisData::show_avatar_info(avatar_info);
    v8 = proto::ShowAvatarInfo::avatar_id(v7);
    if ( (unsigned int)RedisOpBase::getPlayerShowAvatarRedisKey<proto::PlayerShowAvatarRedisData>(
                         *(_DWORD *)(v3 + 96),
                         v8,
                         (std::string *)(v3 + 368)) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "updatePlayerShowAvatarInfo",
        1307);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             (common::milog::MiLogStream *const)(v3 + 432),
             (const char (*)[41])"getPlayerShowAvatarRedisKey failed, uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 96));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])"  avatar_id:");
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v12 = proto::PlayerShowAvatarRedisData::show_avatar_info(avatar_info);
      v13 = proto::ShowAvatarInfo::avatar_id(v12);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = v13;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    else
    {
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 496);
      if ( !google::protobuf::MessageLite::SerializeToString(avatar_info, (std::string *)(v3 + 496)) )
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
          "src/redis_op_social_data.cpp",
          "updatePlayerShowAvatarInfo",
          1313);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(v3 + 560),
          (const char (*)[25])"SerializeToString failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v16 = std::string::size(v3 + 496);
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 112, v3 + 496);
        *(_QWORD *)(v3 + 112) += v16;
        v17 = std::move<std::string &>((std::string *)(v3 + 496));
        v18 = std::move<std::string &>((std::string *)(v3 + 368));
        std::map<std::string,std::string>::emplace<std::string,std::string>(
          (std::map<std::string,std::string> *const)(v3 + 752),
          v18,
          v17,
          v18,
          v19);
        v15 = 1;
      }
      std::string::~string((void *)(v3 + 496));
      v14 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 368));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v14 )
    {
      v20 = 0;
      goto LABEL_30;
    }
    __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData const*,std::vector<proto::PlayerShowAvatarRedisData>>::operator++((__gnu_cxx::__normal_iterator<const proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *const)(v3 + 144));
  }
  v20 = 1;
LABEL_30:
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( v20 == 1 )
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
      2u,
      "src/redis_op_social_data.cpp",
      "updatePlayerShowAvatarInfo",
      1319);
    v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v3 + 624),
            (const char (*)[40])"[SOCIAL] player avatar_info total_size:");
    v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v21,
            (const unsigned __int64 *)(v3 + 112));
    v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" avatar_num:");
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    v24 = std::vector<proto::PlayerShowAvatarRedisData>::size(avatar_info_vec);
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)(v3 + 208) = v24;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)(v3 + 208));
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
    *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
    if ( std::map<std::string,std::string>::empty((const std::map<std::string,std::string> *const)(v3 + 752)) )
    {
      v2 = 0;
    }
    else
    {
      v25 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdMset(v25, 6u, (const std::map<std::string,std::string> *)(v3 + 752)) )
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
          "src/redis_op_social_data.cpp",
          "updatePlayerShowAvatarInfo",
          1326);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
          (common::milog::MiLogStream *const)(v3 + 688),
          (const char (*)[15])"cmdMset failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        v2 = 0;
      }
    }
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 752));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 832));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
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

// Line 1333: range 000000000D45529C-000000000D45632E
__int64 __fastcall RedisOpSocialData::getPlayerShowAvatarInfoBatch(
        uint32_t uid,
        const std::vector<unsigned int> *avatar_id_vec,
        std::vector<proto::PlayerShowAvatarRedisData> *avatar_info_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  std::string *v15; // rax
  int v16; // edx
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<std::string>::size_type v21; // r14
  common::milog::MiLogStream *v22; // r14
  std::vector<std::string>::size_type v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::vector<std::string>::size_type v26; // rax
  std::vector<std::string>::size_type v27; // rax
  std::vector<proto::PlayerShowAvatarRedisData>::reference v28; // r14
  std::vector<std::string>::reference v29; // rax
  uint32_t i; // [rsp+2Ch] [rbp-404h]
  char v33[1008]; // [rsp+40h] [rbp-3F0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(960LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 14 avatar_id:1336 80 4 8 uid:1332 96 8 16 __for_begin:"
                        "1336 128 8 14 __for_end:1336 160 8 9 <unknown> 192 8 9 <unknown> 224 24 12 key_vec:1335 288 24 1"
                        "4 value_vec:1348 352 32 9 <unknown> 416 32 9 <unknown> 480 32 12 key_str:1338 544 32 9 <unknown>"
                        " 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 56 15 _tc_guard_:1334";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::getPlayerShowAvatarInfoBatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
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
  *(_DWORD *)(v4 + 80) = uid;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 416),
    "getPlayerShowAvatarInfoBatch",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "REDIS",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 864),
    (const std::string *)(v4 + 352),
    (const std::string *)(v4 + 416));
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 416));
  *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v7 = ((v4 + 224) >> 3) + 2147450880;
  *(_WORD *)v7 = 0;
  *(_BYTE *)(v7 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 224));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v4 + 96) = std::vector<unsigned int>::begin(avatar_id_vec);
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v4 + 128) = std::vector<unsigned int>::end(avatar_id_vec);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128)) )
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 64);
    *(_DWORD *)(v4 + 64) = v10;
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 480);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 64);
    if ( (unsigned int)RedisOpBase::getPlayerShowAvatarRedisKey<proto::PlayerShowAvatarRedisData>(
                         *(_DWORD *)(v4 + 80),
                         *(_DWORD *)(v4 + 64),
                         (std::string *)(v4 + 480)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerShowAvatarInfoBatch",
        1341);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)(v4 + 544),
              (const char (*)[41])"getPlayerShowAvatarRedisKey failed, uid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])"  avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
      *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v14 = 0;
    }
    else
    {
      v15 = std::move<std::string &>((std::string *)(v4 + 480));
      std::vector<std::string>::emplace_back<std::string>((std::vector<std::string> *const)(v4 + 224), v15, v15);
      v14 = 1;
    }
    std::string::~string((void *)(v4 + 480));
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
    if ( v14 != 1 )
    {
      v16 = 0;
      goto LABEL_25;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96));
  }
  v16 = 1;
LABEL_25:
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
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
      1u,
      "src/redis_op_social_data.cpp",
      "getPlayerShowAvatarInfoBatch",
      1346);
    v17 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            (common::milog::MiLogStream *const)(v4 + 608),
            (const char (*)[48])"[SOCIAL] getPlayerShowAvatarInfoBatch, key_vec:");
    common::milog::MiLogStream::operator<<<std::string>(v17, (const std::vector<std::string> *)(v4 + 224));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
    *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v4 + 288) >> 3) + 2147450880;
    *(_WORD *)v18 = 0;
    *(_BYTE *)(v18 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 288));
    v19 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(
           v19,
           6u,
           (const std::vector<std::string> *)(v4 + 224),
           (std::vector<std::string> *)(v4 + 288)) )
    {
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "getPlayerShowAvatarInfoBatch",
        1351);
      v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v4 + 672),
              (const char (*)[20])"cmdGet failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
    else
    {
      v21 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 288));
      if ( v21 != std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 224)) )
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
          1u,
          "src/redis_op_social_data.cpp",
          "getPlayerShowAvatarInfoBatch",
          1357);
        v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                (common::milog::MiLogStream *const)(v4 + 736),
                (const char (*)[14])"key_vec size:");
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
        v23 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 224));
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
          v23 = __asan_report_store8();
        *(_QWORD *)(v4 + 160) = v23;
        v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v22,
                (const unsigned __int64 *)(v4 + 160));
        v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v24,
                (const char (*)[31])" not equals to value_vec size:");
        *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
        v26 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 288));
        if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)(v4 + 192) = v26;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v25,
          (const unsigned __int64 *)(v4 + 192));
        *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
      }
      v27 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 288));
      std::vector<proto::PlayerShowAvatarRedisData>::resize(avatar_info_vec, v27);
      for ( i = 0; ; ++i )
      {
        if ( i >= std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 288)) )
        {
          v3 = 0;
          goto LABEL_48;
        }
        v28 = std::vector<proto::PlayerShowAvatarRedisData>::operator[](avatar_info_vec, i);
        v29 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 288), i);
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v28, v29) != 1 )
          break;
      }
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
        "src/redis_op_social_data.cpp",
        "getPlayerShowAvatarInfoBatch",
        1368);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        (common::milog::MiLogStream *const)(v4 + 800),
        (const char (*)[23])"ParseFromString failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
LABEL_48:
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 288));
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 864));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
  return v3;
};

// Line 1376: range 000000000D456330-000000000D456F70
int32_t __cdecl RedisOpSocialData::getPlayerPSNFriendSet(uint32_t uid, std::set<unsigned int> *uid_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v8; // rax
  int32_t result; // eax
  std::set<std::string> *__for_range; // [rsp+18h] [rbp-358h]
  char v11[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 15 friend_uid:1389 80 8 16 __for_begin:1387 112 8 14 _"
                        "_for_end:1387 144 16 18 redis_mgr_ptr:1378 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unkno"
                        "wn> 368 32 14 redis_key:1378 432 32 9 <unknown> 496 32 9 <unknown> 560 32 19 friend_uid_str:1387"
                        " 624 48 19 raw_friend_set:1380 704 56 15 _tc_guard_:1377";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerPSNFriendSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "getPlayerPSNFriendSet",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 176),
    (const std::string *)(v2 + 240));
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getPlayerPSNFriendSet",
      1378);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNFriendListRedisData>(uid, (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerPSNFriendSet",
        1378);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v7,
             0x11u,
             (const std::string *)(v2 + 368),
             (std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPlayerPSNFriendSet",
          1383);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 496),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v2 + 624);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 80) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112)) )
        {
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
          v8 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
          std::string::basic_string(v2 + 560, v8);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 64);
          *(_DWORD *)(v2 + 64) = 0;
          if ( !common::tools::StringUtils::strToNum<unsigned int>(
                  (const std::string *)(v2 + 560),
                  (unsigned int *)(v2 + 64),
                  1) )
            std::set<unsigned int>::insert(uid_set, (const std::set<unsigned int>::value_type *)(v2 + 64));
          std::string::~string((void *)(v2 + 560));
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
        }
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 1401: range 000000000D456F72-000000000D45841C
int32_t __cdecl RedisOpSocialData::replacePlayerPSNFriendSet(
        uint32_t uid,
        const std::set<unsigned int> *new_set,
        std::set<unsigned int> *add_set,
        std::set<unsigned int> *del_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *v15; // r15
  std::set<unsigned int>::iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // r8
  unsigned __int64 v18; // rax
  std::set<std::string>::iterator v19; // rax
  std::insert_iterator<std::set<std::string> > v20; // rax
  std::set<std::string> *v21; // r14
  const std::_Rb_tree_node_base *v22; // r15
  std::set<unsigned int>::iterator v23; // rax
  std::insert_iterator<std::set<std::string> > v24; // rdx
  RedisOpSocialData::replacePlayerPSNFriendSet::<lambda(auto:1&&)> v25; // r8
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v30; // rdx
  std::insert_iterator<std::set<unsigned int> > v31; // rax
  std::set<unsigned int> *v32; // r14
  const std::_Rb_tree_node_base *v33; // r15
  std::set<unsigned int>::iterator v34; // rax
  std::insert_iterator<std::set<unsigned int> > v35; // r8
  unsigned __int64 v36; // rax
  std::set<std::string>::iterator v37; // rax
  std::insert_iterator<std::set<std::string> > v38; // rax
  std::set<std::string> *v39; // r14
  const std::_Rb_tree_node_base *v40; // r15
  std::set<unsigned int>::iterator v41; // rax
  std::insert_iterator<std::set<std::string> > v42; // rdx
  RedisOpSocialData::replacePlayerPSNFriendSet::<lambda(auto:2&&)> v43; // r8
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+0h] [rbp-5A0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2a; // [rsp+0h] [rbp-5A0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+8h] [rbp-598h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2a; // [rsp+8h] [rbp-598h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1a; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1b; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1c; // [rsp+10h] [rbp-590h]
  std::set<std::string> *__for_range; // [rsp+48h] [rbp-558h]
  char v60[1360]; // [rsp+50h] [rbp-550h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1312LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 friend_uid:1417 96 8 16 __for_begin:1415 128 8 14 _"
                        "_for_end:1415 160 16 18 redis_mgr_ptr:1405 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unkno"
                        "wn> 384 32 14 redis_key:1405 448 32 9 <unknown> 512 32 9 <unknown> 576 32 19 friend_uid_str:1415"
                        " 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 48 19 raw_frien"
                        "d_set:1407 976 48 12 old_set:1414 1056 48 16 del_str_set:1423 1136 48 16 add_str_set:1434 1216 5"
                        "6 15 _tc_guard_:1404";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::replacePlayerPSNFriendSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
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
  v6[536862749] = -219021312;
  v6[536862750] = 62194;
  v6[536862752] = -218959118;
  v6[536862754] = -219021312;
  v6[536862755] = 62194;
  v6[536862757] = -218959118;
  v6[536862759] = -218103808;
  v6[536862760] = -202116109;
  std::set<unsigned int>::clear(add_set);
  std::set<unsigned int>::clear(del_set);
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 256),
    "replacePlayerPSNFriendSet",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 192),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 1216),
    (const std::string *)(v4 + 192),
    (const std::string *)(v4 + 256));
  std::string::~string((void *)(v4 + 192));
  *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 256));
  *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 160)) )
  {
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "replacePlayerPSNFriendSet",
      1405);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 320), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 384);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNFriendListRedisData>(uid, (std::string *)(v4 + 384)) )
    {
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "replacePlayerPSNFriendSet",
        1405);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 448),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v8 = ((v4 + 896) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_WORD *)(v8 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v4 + 896));
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v9,
             0x11u,
             (const std::string *)(v4 + 384),
             (std::set<std::string> *)(v4 + 896)) )
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
          "src/redis_op_social_data.cpp",
          "replacePlayerPSNFriendSet",
          1410);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v4 + 512),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v10 = ((v4 + 976) >> 3) + 2147450880;
        *(_DWORD *)v10 = 0;
        *(_WORD *)(v10 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 976));
        __for_range = (std::set<std::string> *)(v4 + 896);
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v4 + 96) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v4 + 128) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v4 + 96),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v4 + 128)) )
        {
          *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
          v11 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v4 + 96));
          std::string::basic_string(v4 + 576, v11);
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v4 + 80);
          *(_DWORD *)(v4 + 80) = 0;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v4 + 576),
            (unsigned int *)(v4 + 80),
            1);
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v4 + 976),
            (const std::set<unsigned int>::value_type *)(v4 + 80));
          std::string::~string((void *)(v4 + 576));
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v4 + 96));
        }
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        M_node = std::set<unsigned int>::begin(del_set)._M_node;
        v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                del_set,
                (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        container = v13.container;
        v15 = v13.iter._M_node;
        __last2 = std::set<unsigned int>::end(new_set)._M_node;
        __first2 = std::set<unsigned int>::begin(new_set)._M_node;
        __last1 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 976))._M_node;
        v16._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 976))._M_node;
        v17.container = container;
        v17.iter._M_node = v15;
        std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
          v16,
          (std::_Rb_tree_const_iterator<unsigned int>)__last1,
          (std::_Rb_tree_const_iterator<unsigned int>)__first2,
          (std::_Rb_tree_const_iterator<unsigned int>)__last2,
          v17);
        v18 = ((v4 + 1056) >> 3) + 2147450880;
        *(_DWORD *)v18 = 0;
        *(_WORD *)(v18 + 4) = 0;
        std::set<std::string>::set((std::set<std::string> *const)(v4 + 1056));
        v19._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v4 + 1056))._M_node;
        v20 = std::inserter<std::set<std::string>,std::_Rb_tree_const_iterator<std::string>>(
                (std::set<std::string> *)(v4 + 1056),
                v19);
        v21 = v20.container;
        v22 = v20.iter._M_node;
        __last1a = std::set<unsigned int>::end(del_set)._M_node;
        v23._M_node = std::set<unsigned int>::begin(del_set)._M_node;
        v24.container = v21;
        v24.iter._M_node = v22;
        std::transform<std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<std::string>>,RedisOpSocialData::replacePlayerPSNFriendSet(unsigned int,std::set const&<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>,std::less<unsigned int>&,std::less<unsigned int>&)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &&)#1}>(
          v23,
          (std::_Rb_tree_const_iterator<unsigned int>)__last1a,
          v24,
          v25);
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
          1u,
          "src/redis_op_social_data.cpp",
          "replacePlayerPSNFriendSet",
          1425);
        v26 = common::milog::MiLogStream::operator<<<unsigned int>(
                (common::milog::MiLogStream *const)(v4 + 640),
                del_set);
        v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string>(v27, (const std::set<std::string> *)(v4 + 1056));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v28 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSRem(
               v28,
               0x11u,
               (const std::string *)(v4 + 384),
               (std::set<std::string> *)(v4 + 1056)) )
        {
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "replacePlayerPSNFriendSet",
            1429);
          v29 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)(v4 + 704),
                  (const char (*)[32])"redis_mgr_ptr->cmdSRem  failed:");
          common::milog::MiLogStream::operator<<<std::string>(v29, (const std::set<std::string> *)(v4 + 1056));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v30 = std::set<unsigned int>::begin(add_set)._M_node;
          v31 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                  add_set,
                  (std::_Rb_tree_const_iterator<unsigned int>)v30);
          v32 = v31.container;
          v33 = v31.iter._M_node;
          __last2a = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 976))._M_node;
          __first2a = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 976))._M_node;
          __last1b = std::set<unsigned int>::end(new_set)._M_node;
          v34._M_node = std::set<unsigned int>::begin(new_set)._M_node;
          v35.container = v32;
          v35.iter._M_node = v33;
          std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
            v34,
            (std::_Rb_tree_const_iterator<unsigned int>)__last1b,
            (std::_Rb_tree_const_iterator<unsigned int>)__first2a,
            (std::_Rb_tree_const_iterator<unsigned int>)__last2a,
            v35);
          v36 = ((v4 + 1136) >> 3) + 2147450880;
          *(_DWORD *)v36 = 0;
          *(_WORD *)(v36 + 4) = 0;
          std::set<std::string>::set((std::set<std::string> *const)(v4 + 1136));
          v37._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v4 + 1136))._M_node;
          v38 = std::inserter<std::set<std::string>,std::_Rb_tree_const_iterator<std::string>>(
                  (std::set<std::string> *)(v4 + 1136),
                  v37);
          v39 = v38.container;
          v40 = v38.iter._M_node;
          __last1c = std::set<unsigned int>::end(add_set)._M_node;
          v41._M_node = std::set<unsigned int>::begin(add_set)._M_node;
          v42.container = v39;
          v42.iter._M_node = v40;
          std::transform<std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<std::string>>,RedisOpSocialData::replacePlayerPSNFriendSet(unsigned int,std::set const&<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>,std::less<unsigned int>&,std::less<unsigned int>&)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &&)#2}>(
            v41,
            (std::_Rb_tree_const_iterator<unsigned int>)__last1c,
            v42,
            v43);
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
            "src/redis_op_social_data.cpp",
            "replacePlayerPSNFriendSet",
            1436);
          v44 = common::milog::MiLogStream::operator<<<unsigned int>(
                  (common::milog::MiLogStream *const)(v4 + 768),
                  add_set);
          v45 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v44, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<std::string>(v45, (const std::set<std::string> *)(v4 + 1136));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
          *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v46 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdSAdd(
                 v46,
                 0x11u,
                 (const std::string *)(v4 + 384),
                 (std::set<std::string> *)(v4 + 1136)) )
          {
            *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "replacePlayerPSNFriendSet",
              1440);
            v47 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)(v4 + 832),
                    (const char (*)[32])"redis_mgr_ptr->cmdSAdd  failed:");
            common::milog::MiLogStream::operator<<<std::string>(v47, (const std::set<std::string> *)(v4 + 1136));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 832));
            *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v7 = 0;
          }
          std::set<std::string>::~set((std::set<std::string> *const)(v4 + 1136));
        }
        std::set<std::string>::~set((std::set<std::string> *const)(v4 + 1056));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 976));
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v4 + 896));
    }
    std::string::~string((void *)(v4 + 384));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 1216));
  if ( v60 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1312LL, v60);
  }
  return v7;
};

// Line 1424: range 000000000D45E942-000000000D45EA0A
std::string *__cdecl RedisOpSocialData::replacePlayerPSNFriendSet::_lambda_auto_1____::operator()_unsigned_int_const__(
        std::string *retstr,
        const RedisOpSocialData::replacePlayerPSNFriendSet::<lambda(auto:1&&)> *const __closure,
        const unsigned int *val)
{
  unsigned int v3; // esi

  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  v3 = *val;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v3 = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::to_string(retstr, v3);
  return retstr;
};

// Line 1435: range 000000000D45EA0C-000000000D45EAD4
std::string *__cdecl RedisOpSocialData::replacePlayerPSNFriendSet::_lambda_auto_2____::operator()_unsigned_int_const__(
        std::string *retstr,
        const RedisOpSocialData::replacePlayerPSNFriendSet::<lambda(auto:2&&)> *const __closure,
        const unsigned int *val)
{
  unsigned int v3; // esi

  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  v3 = *val;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v3 = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::to_string(retstr, v3);
  return retstr;
};

// Line 1449: range 000000000D45841E-000000000D458C8C
int32_t __cdecl RedisOpSocialData::getPSNFriendCount(uint32_t uid, uint32_t *count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 18 redis_mgr_ptr:1451 96 32 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown> 288 32 14 redis_key:1451 352 32 9 <unknown> 416 32 9 <unknown> 480 56 1"
                        "5 _tc_guard_:1450";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPSNFriendCount;
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
    "getPSNFriendCount",
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
      "src/redis_op_social_data.cpp",
      "getPSNFriendCount",
      1451);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "getPSNFriendCount",
        1451);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSCard(v6, 0x11u, (const std::string *)(v2 + 288), count) )
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
          "src/redis_op_social_data.cpp",
          "getPSNFriendCount",
          1455);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[32])"redis_mgr_ptr->cmdSCard  failed");
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

// Line 1462: range 000000000D458C8E-000000000D459605
int32_t __cdecl RedisOpSocialData::removePSNFriend(uint32_t uid, uint32_t target_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  bool v7; // r14
  int32_t result; // eax
  char v9[688]; // [rsp+10h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 18 redis_mgr_ptr:1464 96 32 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown> 288 32 14 redis_key:1464 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 56 15 _tc_guard_:1463";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::removePSNFriend;
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
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "removePSNFriend",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
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
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "removePSNFriend",
      1464);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNFriendListRedisData>(uid, (std::string *)(v2 + 288)) )
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
        "src/redis_op_social_data.cpp",
        "removePSNFriend",
        1464);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 416), target_id);
      v7 = common::midb::RedisMgr::cmdSRem(v6, 0x11u, (const std::string *)(v2 + 288), (const std::string *)(v2 + 416)) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "removePSNFriend",
          1468);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[31])"redis_mgr_ptr->cmdSRem  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 1476: range 000000000D459606-000000000D45AAB0
int32_t __cdecl RedisOpSocialData::replacePlayerPSNBlackListSet(
        uint32_t uid,
        const std::set<unsigned int> *new_set,
        std::set<unsigned int> *add_set,
        std::set<unsigned int> *del_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *v15; // r15
  std::set<unsigned int>::iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // r8
  unsigned __int64 v18; // rax
  std::set<std::string>::iterator v19; // rax
  std::insert_iterator<std::set<std::string> > v20; // rax
  std::set<std::string> *v21; // r14
  const std::_Rb_tree_node_base *v22; // r15
  std::set<unsigned int>::iterator v23; // rax
  std::insert_iterator<std::set<std::string> > v24; // rdx
  RedisOpSocialData::replacePlayerPSNBlackListSet::<lambda(auto:3&&)> v25; // r8
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v30; // rdx
  std::insert_iterator<std::set<unsigned int> > v31; // rax
  std::set<unsigned int> *v32; // r14
  const std::_Rb_tree_node_base *v33; // r15
  std::set<unsigned int>::iterator v34; // rax
  std::insert_iterator<std::set<unsigned int> > v35; // r8
  unsigned __int64 v36; // rax
  std::set<std::string>::iterator v37; // rax
  std::insert_iterator<std::set<std::string> > v38; // rax
  std::set<std::string> *v39; // r14
  const std::_Rb_tree_node_base *v40; // r15
  std::set<unsigned int>::iterator v41; // rax
  std::insert_iterator<std::set<std::string> > v42; // rdx
  RedisOpSocialData::replacePlayerPSNBlackListSet::<lambda(auto:4&&)> v43; // r8
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+0h] [rbp-5A0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2a; // [rsp+0h] [rbp-5A0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+8h] [rbp-598h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2a; // [rsp+8h] [rbp-598h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1a; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1b; // [rsp+10h] [rbp-590h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1c; // [rsp+10h] [rbp-590h]
  std::set<std::string> *__for_range; // [rsp+48h] [rbp-558h]
  char v60[1360]; // [rsp+50h] [rbp-550h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1312LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 4 14 black_uid:1492 96 8 16 __for_begin:1490 128 8 14 __"
                        "for_end:1490 160 16 18 redis_mgr_ptr:1480 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknow"
                        "n> 384 32 14 redis_key:1480 448 32 9 <unknown> 512 32 9 <unknown> 576 32 12 uid_str:1490 640 32 "
                        "9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 48 12 raw_set:1482 976 "
                        "48 12 old_set:1489 1056 48 16 del_str_set:1498 1136 48 16 add_str_set:1509 1216 56 15 _tc_guard_:1479";
  *(_QWORD *)(v4 + 16) = RedisOpSocialData::replacePlayerPSNBlackListSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
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
  v6[536862749] = -219021312;
  v6[536862750] = 62194;
  v6[536862752] = -218959118;
  v6[536862754] = -219021312;
  v6[536862755] = 62194;
  v6[536862757] = -218959118;
  v6[536862759] = -218103808;
  v6[536862760] = -202116109;
  std::set<unsigned int>::clear(add_set);
  std::set<unsigned int>::clear(del_set);
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 256),
    "replacePlayerPSNBlackListSet",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 192),
    "REDIS",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 1216),
    (const std::string *)(v4 + 192),
    (const std::string *)(v4 + 256));
  std::string::~string((void *)(v4 + 192));
  *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 256));
  *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v4 + 160)) )
  {
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "replacePlayerPSNBlackListSet",
      1480);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 320), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 384);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNBlacklistRedisData>(uid, (std::string *)(v4 + 384)) )
    {
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "replacePlayerPSNBlackListSet",
        1480);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 448),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v8 = ((v4 + 896) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_WORD *)(v8 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v4 + 896));
      v9 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v9,
             0x12u,
             (const std::string *)(v4 + 384),
             (std::set<std::string> *)(v4 + 896)) )
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
          "src/redis_op_social_data.cpp",
          "replacePlayerPSNBlackListSet",
          1485);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v4 + 512),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v10 = ((v4 + 976) >> 3) + 2147450880;
        *(_DWORD *)v10 = 0;
        *(_WORD *)(v10 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 976));
        __for_range = (std::set<std::string> *)(v4 + 896);
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v4 + 96) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v4 + 128) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v4 + 96),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v4 + 128)) )
        {
          *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
          v11 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v4 + 96));
          std::string::basic_string(v4 + 576, v11);
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v4 + 80);
          *(_DWORD *)(v4 + 80) = 0;
          common::tools::StringUtils::strToNum<unsigned int>(
            (const std::string *)(v4 + 576),
            (unsigned int *)(v4 + 80),
            1);
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v4 + 976),
            (const std::set<unsigned int>::value_type *)(v4 + 80));
          std::string::~string((void *)(v4 + 576));
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v4 + 96));
        }
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        M_node = std::set<unsigned int>::begin(del_set)._M_node;
        v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                del_set,
                (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        container = v13.container;
        v15 = v13.iter._M_node;
        __last2 = std::set<unsigned int>::end(new_set)._M_node;
        __first2 = std::set<unsigned int>::begin(new_set)._M_node;
        __last1 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 976))._M_node;
        v16._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 976))._M_node;
        v17.container = container;
        v17.iter._M_node = v15;
        std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
          v16,
          (std::_Rb_tree_const_iterator<unsigned int>)__last1,
          (std::_Rb_tree_const_iterator<unsigned int>)__first2,
          (std::_Rb_tree_const_iterator<unsigned int>)__last2,
          v17);
        v18 = ((v4 + 1056) >> 3) + 2147450880;
        *(_DWORD *)v18 = 0;
        *(_WORD *)(v18 + 4) = 0;
        std::set<std::string>::set((std::set<std::string> *const)(v4 + 1056));
        v19._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v4 + 1056))._M_node;
        v20 = std::inserter<std::set<std::string>,std::_Rb_tree_const_iterator<std::string>>(
                (std::set<std::string> *)(v4 + 1056),
                v19);
        v21 = v20.container;
        v22 = v20.iter._M_node;
        __last1a = std::set<unsigned int>::end(del_set)._M_node;
        v23._M_node = std::set<unsigned int>::begin(del_set)._M_node;
        v24.container = v21;
        v24.iter._M_node = v22;
        std::transform<std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<std::string>>,RedisOpSocialData::replacePlayerPSNBlackListSet(unsigned int,std::set const&<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>,std::less<unsigned int>&,std::less<unsigned int>&)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &&)#1}>(
          v23,
          (std::_Rb_tree_const_iterator<unsigned int>)__last1a,
          v24,
          v25);
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
          1u,
          "src/redis_op_social_data.cpp",
          "replacePlayerPSNBlackListSet",
          1500);
        v26 = common::milog::MiLogStream::operator<<<unsigned int>(
                (common::milog::MiLogStream *const)(v4 + 640),
                del_set);
        v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string>(v27, (const std::set<std::string> *)(v4 + 1056));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v28 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
        if ( common::midb::RedisMgr::cmdSRem(
               v28,
               0x12u,
               (const std::string *)(v4 + 384),
               (std::set<std::string> *)(v4 + 1056)) )
        {
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_op_social_data.cpp",
            "replacePlayerPSNBlackListSet",
            1504);
          v29 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)(v4 + 704),
                  (const char (*)[32])"redis_mgr_ptr->cmdSRem  failed:");
          common::milog::MiLogStream::operator<<<std::string>(v29, (const std::set<std::string> *)(v4 + 1056));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v30 = std::set<unsigned int>::begin(add_set)._M_node;
          v31 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                  add_set,
                  (std::_Rb_tree_const_iterator<unsigned int>)v30);
          v32 = v31.container;
          v33 = v31.iter._M_node;
          __last2a = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 976))._M_node;
          __first2a = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 976))._M_node;
          __last1b = std::set<unsigned int>::end(new_set)._M_node;
          v34._M_node = std::set<unsigned int>::begin(new_set)._M_node;
          v35.container = v32;
          v35.iter._M_node = v33;
          std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
            v34,
            (std::_Rb_tree_const_iterator<unsigned int>)__last1b,
            (std::_Rb_tree_const_iterator<unsigned int>)__first2a,
            (std::_Rb_tree_const_iterator<unsigned int>)__last2a,
            v35);
          v36 = ((v4 + 1136) >> 3) + 2147450880;
          *(_DWORD *)v36 = 0;
          *(_WORD *)(v36 + 4) = 0;
          std::set<std::string>::set((std::set<std::string> *const)(v4 + 1136));
          v37._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v4 + 1136))._M_node;
          v38 = std::inserter<std::set<std::string>,std::_Rb_tree_const_iterator<std::string>>(
                  (std::set<std::string> *)(v4 + 1136),
                  v37);
          v39 = v38.container;
          v40 = v38.iter._M_node;
          __last1c = std::set<unsigned int>::end(add_set)._M_node;
          v41._M_node = std::set<unsigned int>::begin(add_set)._M_node;
          v42.container = v39;
          v42.iter._M_node = v40;
          std::transform<std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<std::string>>,RedisOpSocialData::replacePlayerPSNBlackListSet(unsigned int,std::set const&<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>,std::less<unsigned int>&,std::less<unsigned int>&)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &&)#2}>(
            v41,
            (std::_Rb_tree_const_iterator<unsigned int>)__last1c,
            v42,
            v43);
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
            "src/redis_op_social_data.cpp",
            "replacePlayerPSNBlackListSet",
            1511);
          v44 = common::milog::MiLogStream::operator<<<unsigned int>(
                  (common::milog::MiLogStream *const)(v4 + 768),
                  add_set);
          v45 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v44, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<std::string>(v45, (const std::set<std::string> *)(v4 + 1136));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
          *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v46 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
          if ( common::midb::RedisMgr::cmdSAdd(
                 v46,
                 0x12u,
                 (const std::string *)(v4 + 384),
                 (std::set<std::string> *)(v4 + 1136)) )
          {
            *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_op_social_data.cpp",
              "replacePlayerPSNBlackListSet",
              1515);
            v47 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)(v4 + 832),
                    (const char (*)[32])"redis_mgr_ptr->cmdSAdd  failed:");
            common::milog::MiLogStream::operator<<<std::string>(v47, (const std::set<std::string> *)(v4 + 1136));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 832));
            *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v7 = 0;
          }
          std::set<std::string>::~set((std::set<std::string> *const)(v4 + 1136));
        }
        std::set<std::string>::~set((std::set<std::string> *const)(v4 + 1056));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 976));
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v4 + 896));
    }
    std::string::~string((void *)(v4 + 384));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v4 + 160));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 1216));
  if ( v60 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1312LL, v60);
  }
  return v7;
};

// Line 1499: range 000000000D45EAD6-000000000D45EB9E
std::string *__cdecl RedisOpSocialData::replacePlayerPSNBlackListSet::_lambda_auto_3____::operator()_unsigned_int_const__(
        std::string *retstr,
        const RedisOpSocialData::replacePlayerPSNBlackListSet::<lambda(auto:3&&)> *const __closure,
        const unsigned int *val)
{
  unsigned int v3; // esi

  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  v3 = *val;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v3 = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::to_string(retstr, v3);
  return retstr;
};

// Line 1510: range 000000000D45EBA0-000000000D45EC68
std::string *__cdecl RedisOpSocialData::replacePlayerPSNBlackListSet::_lambda_auto_4____::operator()_unsigned_int_const__(
        std::string *retstr,
        const RedisOpSocialData::replacePlayerPSNBlackListSet::<lambda(auto:4&&)> *const __closure,
        const unsigned int *val)
{
  unsigned int v3; // esi

  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  v3 = *val;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v3 = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::to_string(retstr, v3);
  return retstr;
};

// Line 1523: range 000000000D45AAB2-000000000D45B6F2
int32_t __cdecl RedisOpSocialData::getPlayerPSNBlacklistSet(uint32_t uid, std::set<unsigned int> *blacklist_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v8; // rax
  int32_t result; // eax
  std::set<std::string> *__for_range; // [rsp+18h] [rbp-358h]
  char v11[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 18 blacklist_uid:1536 80 8 16 __for_begin:1534 112 8 1"
                        "4 __for_end:1534 144 16 18 redis_mgr_ptr:1525 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <un"
                        "known> 368 32 14 redis_key:1525 432 32 9 <unknown> 496 32 9 <unknown> 560 32 12 uid_str:1534 624"
                        " 48 16 raw_uid_set:1527 704 56 15 _tc_guard_:1524";
  *(_QWORD *)(v2 + 16) = RedisOpSocialData::getPlayerPSNBlacklistSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 240),
    "getPlayerPSNBlacklistSet",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 176),
    "REDIS",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 176),
    (const std::string *)(v2 + 240));
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v2 + 144)) )
  {
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "getPlayerPSNBlacklistSet",
      1525);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 304), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 368);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNBlacklistRedisData>(uid, (std::string *)(v2 + 368)) )
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
        "src/redis_op_social_data.cpp",
        "getPlayerPSNBlacklistSet",
        1525);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 432),
        "get key for uid=%u failed",
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      v6 = ((v2 + 624) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      std::set<std::string>::set((std::set<std::string> *const)(v2 + 624));
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      if ( common::midb::RedisMgr::cmdSMembers(
             v7,
             0x12u,
             (const std::string *)(v2 + 368),
             (std::set<std::string> *)(v2 + 624)) )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_op_social_data.cpp",
          "getPlayerPSNBlacklistSet",
          1530);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 496),
          (const char (*)[35])"redis_mgr_ptr->cmdSMembers  failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        __for_range = (std::set<std::string> *)(v2 + 624);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 80) = std::set<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::end(__for_range);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 80),
                  (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112)) )
        {
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
          v8 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
          std::string::basic_string(v2 + 560, v8);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 64);
          *(_DWORD *)(v2 + 64) = 0;
          if ( !common::tools::StringUtils::strToNum<unsigned int>(
                  (const std::string *)(v2 + 560),
                  (unsigned int *)(v2 + 64),
                  1) )
            std::set<unsigned int>::insert(blacklist_set, (const std::set<unsigned int>::value_type *)(v2 + 64));
          std::string::~string((void *)(v2 + 560));
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 80));
        }
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      std::set<std::string>::~set((std::set<std::string> *const)(v2 + 624));
    }
    std::string::~string((void *)(v2 + 368));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v2 + 144));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 1549: range 000000000D45B6F4-000000000D45C168
__int64 __fastcall RedisOpSocialData::isInPlayerGameBlacklist(uint32_t uid, uint32_t target_uid, bool *is_in)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned int v8; // esi
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  __int64 result; // rax
  char v13[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1548 80 4 15 target_uid:1548 96 8 9 <unknown> 12"
                        "8 16 18 redis_mgr_ptr:1551 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 14 re"
                        "dis_key:1551 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 56 15 _tc_guard_:1550";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::isInPlayerGameBlacklist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 80) = target_uid;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "isInPlayerGameBlacklist",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 608),
    (const std::string *)(v3 + 160),
    (const std::string *)(v3 + 224));
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 128),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 128)) )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "isInPlayerGameBlacklist",
      1551);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBlacklistRedisData>(*(_DWORD *)(v3 + 64), (std::string *)(v3 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "isInPlayerGameBlacklist",
        1551);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      v8 = *(_DWORD *)(v3 + 80);
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        v8 = 32;
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 480), v8);
      v9 = common::midb::RedisMgr::cmdSIsMember(
             v7,
             7u,
             (const std::string *)(v3 + 352),
             (const std::string *)(v3 + 480),
             is_in) != 0;
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
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
          "src/redis_op_social_data.cpp",
          "isInPlayerGameBlacklist",
          1555);
        v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[22])"cmdSIsMember failed: ");
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                               (unsigned int *)(v3 + 64),
                                                               (unsigned int *)(v3 + 80));
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v10,
          (const std::pair<unsigned int,unsigned int> *)(v3 + 96));
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 1564: range 000000000D45C16A-000000000D45CBDE
__int64 __fastcall RedisOpSocialData::isInPlayerPSNBlacklist(uint32_t uid, uint32_t target_uid, bool *is_in)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned int v8; // esi
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  __int64 result; // rax
  char v13[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1563 80 4 15 target_uid:1563 96 8 9 <unknown> 12"
                        "8 16 18 redis_mgr_ptr:1566 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 14 re"
                        "dis_key:1566 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 56 15 _tc_guard_:1565";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::isInPlayerPSNBlacklist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 80) = target_uid;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "isInPlayerPSNBlacklist",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 608),
    (const std::string *)(v3 + 160),
    (const std::string *)(v3 + 224));
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(
    (std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 128),
    &ResourceBox::redis_mgr_ptr);
  if ( std::operator==<common::midb::RedisMgr>(0LL, (const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 128)) )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_op_social_data.cpp",
      "isInPlayerPSNBlacklist",
      1566);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 288), "redis_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 352);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerPSNBlacklistRedisData>(
           *(_DWORD *)(v3 + 64),
           (std::string *)(v3 + 352)) )
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
        "src/redis_op_social_data.cpp",
        "isInPlayerPSNBlacklist",
        1566);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 416),
        "get key for uid=%u failed",
        *(unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      v8 = *(_DWORD *)(v3 + 80);
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        v8 = 32;
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 480), v8);
      v9 = common::midb::RedisMgr::cmdSIsMember(
             v7,
             0x12u,
             (const std::string *)(v3 + 352),
             (const std::string *)(v3 + 480),
             is_in) != 0;
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( v9 )
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
          "src/redis_op_social_data.cpp",
          "isInPlayerPSNBlacklist",
          1570);
        v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[22])"cmdSIsMember failed: ");
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                               (unsigned int *)(v3 + 64),
                                                               (unsigned int *)(v3 + 80));
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v10,
          (const std::pair<unsigned int,unsigned int> *)(v3 + 96));
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::string::~string((void *)(v3 + 352));
  }
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  result = v6;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 1580: range 000000000D45CBE0-000000000D45CCBF
int32_t __cdecl RedisOpSocialData::isInPlayerAnyBlacklist(uint32_t uid, uint32_t target_uid, bool *is_in)
{
  if ( *(_BYTE *)(((unsigned __int64)is_in >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_in & 7) >= *(_BYTE *)(((unsigned __int64)is_in >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(is_in);
  }
  *is_in = 0;
  if ( (unsigned int)RedisOpSocialData::isInPlayerGameBlacklist(uid, target_uid, is_in) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)is_in >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_in & 7) >= *(_BYTE *)(((unsigned __int64)is_in >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(is_in);
  }
  if ( *is_in )
    return 0;
  if ( (unsigned int)RedisOpSocialData::isInPlayerPSNBlacklist(uid, target_uid, is_in) )
    return -1;
  return 0;
};

// Line 1601: range 000000000D45CCC0-000000000D45DDBC
int32_t __cdecl RedisOpSocialData::filterNonexistPlayer(
        const std::vector<unsigned int> *input_uid_vec,
        std::vector<unsigned int> *output_uid_vec)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  common::milog::MiLogStream *v12; // rax
  std::map<std::string,std::string>::mapped_type *v13; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  int v16; // edx
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::pointer v19; // rax
  bool v20; // al
  common::milog::MiLogStream *v21; // rdx
  unsigned int *p_second; // rdx
  int v24; // [rsp+Ch] [rbp-484h]
  int v25; // [rsp+Ch] [rbp-484h]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-460h]
  std::string *redis_key; // [rsp+38h] [rbp-458h]
  char v28[1104]; // [rsp+40h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 1 9 <unknown> 48 1 9 <unknown> 64 4 8 uid:1607 80 8 16 __for_begin:1607 112 8 14 __for_end"
                        ":1607 144 8 16 __for_begin:1624 176 8 14 __for_end:1624 208 8 21 redis_value_iter:1626 240 8 9 <"
                        "unknown> 272 8 13 uid_iter:1635 304 8 9 <unknown> 336 24 18 redis_key_vec:1606 400 32 9 <unknown"
                        "> 464 32 9 <unknown> 528 32 12 key_str:1609 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unkn"
                        "own> 784 48 17 redis_kv_map:1604 864 56 15 _tc_guard_:1603 960 56 22 redis_key_uid_map:1605";
  *(_QWORD *)(v3 + 16) = RedisOpSocialData::filterNonexistPlayer;
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
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862746] = -218959118;
  v5[536862748] = -234881024;
  v5[536862749] = -218959118;
  v5[536862751] = -218103808;
  v5[536862752] = -202116109;
  std::vector<unsigned int>::clear(output_uid_vec);
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 464),
    "filterNonexistPlayer",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 400),
    "REDIS",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 864),
    (const std::string *)(v3 + 400),
    (const std::string *)(v3 + 464));
  std::string::~string((void *)(v3 + 400));
  *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 464));
  *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 784) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 784));
  v7 = ((v3 + 960) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 960));
  v8 = ((v3 + 336) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 336));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 80) = std::vector<unsigned int>::begin(input_uid_vec);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::end(input_uid_vec);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112)) )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
    v10 = (int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64);
    *(_DWORD *)(v3 + 64) = v11;
    *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 528);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    if ( RedisOpBase::getUidRedisKey<proto::PlayerBriefDataRedisData>(*(_DWORD *)(v3 + 64), (std::string *)(v3 + 528)) )
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
        "src/redis_op_social_data.cpp",
        "filterNonexistPlayer",
        1612);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v3 + 592),
              (const char (*)[26])"getPlayerRedisKey failed ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
      *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v24 = 0;
    }
    else
    {
      v13 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v3 + 784),
              (const std::map<std::string,std::string>::key_type *)(v3 + 528));
      std::string::operator=(v13, byte_1A7F42E0);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      v25 = *(_DWORD *)(v3 + 64);
      v14 = std::unordered_map<std::string,unsigned int>::operator[](
              (std::unordered_map<std::string,unsigned int> *const)(v3 + 960),
              (const std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 528));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v14);
      }
      *v15 = v25;
      std::vector<std::string>::push_back(
        (std::vector<std::string> *const)(v3 + 336),
        (const std::vector<std::string>::value_type *)(v3 + 528));
      v24 = 1;
    }
    std::string::~string((void *)(v3 + 528));
    *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
    if ( v24 != 1 )
    {
      v16 = 0;
      goto LABEL_29;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
  }
  v16 = 1;
LABEL_29:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    v17 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::redis_mgr_ptr);
    if ( common::midb::RedisMgr::cmdMget(v17, 6u, (std::map<std::string,std::string> *)(v3 + 784)) )
    {
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_op_social_data.cpp",
        "filterNonexistPlayer",
        1621);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v3 + 656),
        (const char (*)[30])"redis_mgr_ptr->cmdMget failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      __for_range_0 = (std::vector<std::string> *)(v3 + 336);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 144) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 176) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 144),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 176)) )
      {
        redis_key = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 144));
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 208) = std::map<std::string,std::string>::find(
                                                                       (std::map<std::string,std::string> *const)(v3 + 784),
                                                                       redis_key);
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<std::string,std::string>::iterator *)(v3 + 240) = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v3 + 784));
        v18 = std::operator==(
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 240),
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 208));
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( !v18 )
        {
          v19 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 208));
          if ( !(unsigned __int8)std::string::empty(&v19->second) )
          {
            *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 272) = std::unordered_map<std::string,unsigned int>::find(
                                                                                      (std::unordered_map<std::string,unsigned int> *const)(v3 + 960),
                                                                                      redis_key);
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_map<std::string,unsigned int>::iterator *)(v3 + 304) = std::unordered_map<std::string,unsigned int>::end((std::unordered_map<std::string,unsigned int> *const)(v3 + 960));
            v20 = std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 272),
                    (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v3 + 304));
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
            if ( v20 )
            {
              *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 720, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 720),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_op_social_data.cpp",
                "filterNonexistPlayer",
                1638);
              v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v3 + 720),
                      (const char (*)[30])"key_str not found, redis_key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, redis_key);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
              *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
            }
            else
            {
              p_second = &std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v3 + 272))->second;
              std::vector<unsigned int>::push_back(output_uid_vec, p_second);
            }
          }
        }
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 144));
      }
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      v2 = 0;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 336));
  std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v3 + 960));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 784));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 864));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v28);
  }
  return v2;
};

// Line 1644: range 000000000D45EE0A-000000000D45EE1E
void __cdecl GLOBAL__sub_I_redis_op_social_data_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1644: range 000000000D45EC69-000000000D45EE09
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
    __asan_before_dynamic_init("src/redis_op_social_data.cpp");
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
