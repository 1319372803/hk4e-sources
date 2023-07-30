// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/db/redis_op_base.h

// Line 70: range 000000000CE052DA-000000000CE059A1
int32_t __cdecl RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>(const uint32_t uid, std::string *key)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  const char *v6; // r14
  __int64 v7; // rdx
  char v8; // al
  const char *v9; // rax
  size_t v10; // r14
  __int64 v11; // rcx
  const google::protobuf::Descriptor *des_ptr; // [rsp+18h] [rbp-188h]
  const std::string *msg_name; // [rsp+20h] [rbp-180h]
  size_t msg_name_len; // [rsp+28h] [rbp-178h]
  char v15[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 7 lock:82 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 11 uid_buf:102";
  *(_QWORD *)(v2 + 16) = RedisOpBase::getUidRedisKey<proto::PlayerStatusRedisData>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( uid )
  {
    std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &RedisOpBase::mutex_);
    des_ptr = proto::PlayerStatusRedisData::descriptor();
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( des_ptr )
    {
      msg_name = google::protobuf::Descriptor::name[abi:cxx11](des_ptr);
      msg_name_len = std::string::length(msg_name);
      if ( *(_BYTE *)(((unsigned __int64)&RedisOpBase::proto_msg_name_suffix_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(&RedisOpBase::proto_msg_name_suffix_length);
      if ( msg_name_len <= RedisOpBase::proto_msg_name_suffix_length )
        goto LABEL_18;
      v6 = (const char *)std::string::c_str(&RedisOpBase::proto_msg_name_suffix[abi:cxx11]);
      v7 = std::string::c_str(msg_name);
      if ( *(_BYTE *)(((unsigned __int64)&RedisOpBase::proto_msg_name_suffix_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(&RedisOpBase::proto_msg_name_suffix_length);
      if ( !strcmp((const char *)(v7 + msg_name_len - RedisOpBase::proto_msg_name_suffix_length), v6) )
        v8 = 0;
      else
LABEL_18:
        v8 = 1;
      if ( v8 )
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
          "../framework/gamecore/src/db/redis_op_base.h",
          "getUidRedisKey",
          97);
        v9 = (const char *)std::string::c_str(msg_name);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 192),
          "%s is not a valid RedisData message",
          v9);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        snprintf((char *)(v2 + 256), 0x20uLL, "%u", uid);
        if ( *(_BYTE *)(((unsigned __int64)&RedisOpBase::proto_msg_name_suffix_length >> 3) + 0x7FFF8000) )
          __asan_report_load8(&RedisOpBase::proto_msg_name_suffix_length);
        v10 = msg_name_len - RedisOpBase::proto_msg_name_suffix_length;
        v11 = std::string::c_str(msg_name);
        std::string::assign(key, v11, v10);
        std::string::push_back(key, 58LL);
        std::string::push_back(key, 123LL);
        std::string::append(key, v2 + 256);
        std::string::push_back(key, 125LL);
        result = 0;
      }
    }
    else
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
        "../framework/gamecore/src/db/redis_op_base.h",
        "getUidRedisKey",
        88);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), "des_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = -1;
    }
  }
  else
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
      "../framework/gamecore/src/db/redis_op_base.h",
      "getUidRedisKey",
      75);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
