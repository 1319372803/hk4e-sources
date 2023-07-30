// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/mail/mail_action_type.pb.cc

// Line 50: range 000000001501AC1B-000000001501ADFB
// local variable allocation has failed, the output may be wrong!
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(p_filename + 16) = proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(p_filename >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::AddDescriptors();
  *(_QWORD *)&factory.level_ = 0LL;
  v3 = (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::file_default_instances;
  v4 = (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::schemas;
  std::allocator<char>::allocator(p_filename + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(p_filename + 64),
    "server_only/log/mail/mail_action_type.proto",
    (const std::allocator<char> *)(p_filename + 48));
  google::protobuf::internal::AssignDescriptors(
    p_filename + 64,
    v4,
    v3,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::TableStruct::offsets,
    0,
    0,
    (__int64)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors,
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

// Line 58: range 000000001501ADFC-000000001501AE15
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 64: range 000000001501AE16-000000001501AE29
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
};

// Line 69: range 000000001501AE2A-000000001501AE4B
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/mail/mail_action_type.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
};

// Line 75: range 000000001501AE4C-000000001501AE68
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 80: range 000000001501AE69-000000001501AE98
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 95: range 000000001501AE99-000000001501AEB2
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 101: range 00000000160E0684-00000000160E0697
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::AddDescriptors();
};

// Line 108: range 000000001501AEB3-000000001501AEC4
const google::protobuf::EnumDescriptor *__cdecl proto_log::MailActionType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5faction_5ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 112: range 000000001501AEC5-000000001501AEE1
bool __cdecl proto_log::MailActionType_IsValid(int value)
{
  return (unsigned int)value <= 1;
};
