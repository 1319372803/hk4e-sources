// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/anticheat/anticheat_action_type.pb.cc

// Line 50: range 0000000014F977AC-0000000014F9798C
// local variable allocation has failed, the output may be wrong!
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
{
  unsigned __int64 p_filename; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int v3; // r15d
  int v4; // r14d
  int v5; // [rsp+0h] [rbp-D0h]
  const char **v6; // [rsp+8h] [rbp-C8h]
  int v7; // [rsp+10h] [rbp-C0h]
  google::protobuf::internal::LogMessage_0 factory; // [rsp+18h] [rbp-B8h] OVERLAPPED BYREF

  p_filename = (unsigned __int64)&factory.filename_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      p_filename = v1;
  }
  *(_QWORD *)p_filename = 1102416563LL;
  *(_QWORD *)(p_filename + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(p_filename + 16) = proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(p_filename >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::AddDescriptors();
  *(_QWORD *)&factory.level_ = 0LL;
  v3 = (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::file_default_instances;
  v4 = (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::schemas;
  std::allocator<char>::allocator(p_filename + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(p_filename + 64),
    "server_only/log/anticheat/anticheat_action_type.proto",
    (const std::allocator<char> *)(p_filename + 48));
  google::protobuf::internal::AssignDescriptors(
    p_filename + 64,
    v4,
    v3,
    (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::TableStruct::offsets,
    0,
    0,
    (__int64)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors,
    0LL,
    v5,
    (int)&factory.filename_,
    v7,
    factory);
  std::string::~string((void *)(p_filename + 64));
  *(_DWORD *)(((p_filename + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(p_filename + 48);
  if ( v6 == (const char **)p_filename )
  {
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_filename = 1172321806LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 58: range 0000000014F9798D-0000000014F979A6
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 64: range 0000000014F979A7-0000000014F979BA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
};

// Line 69: range 0000000014F979BC-0000000014F979DD
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/anticheat/anticheat_action_type.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
};

// Line 75: range 0000000014F979DE-0000000014F979FA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 80: range 0000000014F979FB-0000000014F97A2A
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 141: range 0000000014F97A2B-0000000014F97A44
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 147: range 00000000160D1DB2-00000000160D1DC5
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::AddDescriptors();
};

// Line 154: range 0000000014F97A45-0000000014F97A56
const google::protobuf::EnumDescriptor *__cdecl proto_log::AntiCheatActionType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 158: range 0000000014F97A57-0000000014F97A84
bool __cdecl proto_log::AntiCheatActionType_IsValid(int value)
{
  if ( value <= 18 )
    return value >= 0;
  return (unsigned int)(value - 20) <= 0x16;
};
