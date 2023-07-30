// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/log/client/client_head.pb.cc

// Line 81: range 0000000018219635-00000000182197FE
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
{
  unsigned __int64 v0; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int v3; // [rsp+0h] [rbp-B0h]
  int v4; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::internal::LogMessage_0 v5[2]; // [rsp+18h] [rbp-98h]

  v0 = (unsigned __int64)&v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "log/client/client_head.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::schemas,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::file_default_instances,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    0LL,
    0LL,
    v3,
    0,
    v4,
    v5[0]);
  std::string::~string((void *)(v0 + 64));
  *(_DWORD *)(((v0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v0 + 48);
  if ( &v4 == (int *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 89: range 00000000182197FF-0000000018219818
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 95: range 0000000018219819-000000001821983D
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 101: range 000000001821983E-000000001821987D
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/log/client/client_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::ClientLogHead>::DefaultConstruct(&proto_log::_ClientLogHead_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_ClientLogHead_default_instance_,
    (const void *)0x2DD660);
};

// Line 109: range 000000001821987E-000000001821989A
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 114: range 000000001821989B-00000000182198CA
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 134: range 00000000182198CB-00000000182198E4
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 140: range 0000000018E4D216-0000000018E4D229
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::AddDescriptors();
};

// Line 167: range 00000000182198E6-00000000182199A5
void __cdecl proto_log::ClientLogHead::ClientLogHead(proto_log::ClientLogHead *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::ClientLogHead::internal_default_instance() )
    proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::InitDefaults();
  proto_log::ClientLogHead::SharedCtor(this);
};

// Line 175: range 00000000182199A6-000000001821A264
void __cdecl proto_log::ClientLogHead::ClientLogHead(
        proto_log::ClientLogHead *const this,
        const proto_log::ClientLogHead *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rcx
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rcx
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rcx
  const std::string *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rcx
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rcx
  const std::string *v25; // rax
  const std::string *v26; // rax
  const std::string *v27; // rcx
  const std::string *v28; // rax
  const std::string *v29; // rax
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  const std::string *v33; // rcx
  const std::string *v34; // rax
  const std::string *v35; // rax
  const std::string *v36; // rcx
  const std::string *v37; // rax
  const std::string *v38; // rax
  const std::string *v39; // rcx
  const std::string *v40; // rax
  const std::string *v41; // rax
  const std::string *v42; // rcx
  google::protobuf::uint32 action_id; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::ClientLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->event_time_, v4);
  v5 = proto_log::ClientLogHead::event_time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->event_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->event_time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->event_time_, v6, from->event_time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->log_serial_number_, v7);
  v8 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->log_serial_number_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->log_serial_number_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->log_serial_number_,
      v9,
      from->log_serial_number_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v10);
  v11 = proto_log::ClientLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v12, from->action_name_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->upload_ip_, v13);
  v14 = proto_log::ClientLogHead::upload_ip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->upload_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->upload_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->upload_ip_, v15, from->upload_ip_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_id_, v16);
  v17 = proto_log::ClientLogHead::product_id[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_id_, v18, from->product_id_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_id_, v19);
  v20 = proto_log::ClientLogHead::channel_id[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->channel_id_, v21, from->channel_id_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v22);
  v23 = proto_log::ClientLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v24, from->region_name_);
  }
  v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v25);
  v26 = proto_log::ClientLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v27, from->game_version_);
  }
  v28 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_type_, v28);
  v29 = proto_log::ClientLogHead::device_type[abi:cxx11](from);
  if ( std::string::size(v29) )
  {
    v30 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_type_, v30, from->device_type_);
  }
  v31 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v31);
  v32 = proto_log::ClientLogHead::device_uuid[abi:cxx11](from);
  if ( std::string::size(v32) )
  {
    v33 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v33, from->device_uuid_);
  }
  v34 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->mac_addr_, v34);
  v35 = proto_log::ClientLogHead::mac_addr[abi:cxx11](from);
  if ( std::string::size(v35) )
  {
    v36 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->mac_addr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->mac_addr_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->mac_addr_, v36, from->mac_addr_);
  }
  v37 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_name_, v37);
  v38 = proto_log::ClientLogHead::account_name[abi:cxx11](from);
  if ( std::string::size(v38) )
  {
    v39 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_name_, v39, from->account_name_);
  }
  v40 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uuid_, v40);
  v41 = proto_log::ClientLogHead::account_uuid[abi:cxx11](from);
  if ( std::string::size(v41) )
  {
    v42 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uuid_, v42, from->account_uuid_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->action_id_);
  }
  action_id = from->action_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = action_id;
};

// Line 236: range 000000001821A266-000000001821A436
void __cdecl proto_log::ClientLogHead::SharedCtor(proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->event_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->log_serial_number_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->upload_ip_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_id_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_id_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_type_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->mac_addr_, v11);
  v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_name_, v12);
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uuid_, v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 254: range 000000001821A438-000000001821A4A1
void __cdecl proto_log::ClientLogHead::~ClientLogHead(proto_log::ClientLogHead *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::ClientLogHead::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 254: range 000000001821A4A2-000000001821A4CC
void __cdecl proto_log::ClientLogHead::~ClientLogHead(proto_log::ClientLogHead *const this)
{
  proto_log::ClientLogHead::~ClientLogHead(this);
  operator delete(this, 0x80uLL);
};

// Line 259: range 000000001821A4CE-000000001821A61A
void __cdecl proto_log::ClientLogHead::SharedDtor(proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->event_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->log_serial_number_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->upload_ip_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->product_id_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->channel_id_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->region_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->game_version_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_type_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_uuid_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->mac_addr_, v11);
  v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->account_name_, v12);
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->account_uuid_, v13);
};

// Line 275: range 000000001821A61C-000000001821A672
void __cdecl proto_log::ClientLogHead::SetCachedSize(const proto_log::ClientLogHead *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 280: range 000000001821A674-000000001821A685
const google::protobuf::Descriptor *__cdecl proto_log::ClientLogHead::descriptor()
{
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 285: range 000000001821A686-000000001821A695
const proto_log::ClientLogHead *__cdecl proto_log::ClientLogHead::default_instance()
{
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::InitDefaults();
  return proto_log::ClientLogHead::internal_default_instance();
};

// Line 290: range 000000001821A696-000000001821A70A
proto_log::ClientLogHead *__cdecl proto_log::ClientLogHead::New(
        const proto_log::ClientLogHead *const this,
        google::protobuf::Arena *arena)
{
  proto_log::ClientLogHead *v2; // rbx

  v2 = (proto_log::ClientLogHead *)operator new(0x80uLL);
  proto_log::ClientLogHead::ClientLogHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::ClientLogHead>(arena, v2);
  return v2;
};

// Line 298: range 000000001821A70C-000000001821A8FB
void __cdecl proto_log::ClientLogHead::Clear(proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->event_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->log_serial_number_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->upload_ip_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->product_id_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->channel_id_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->region_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->game_version_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_type_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_uuid_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->mac_addr_, v11);
  v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->account_name_, v12);
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->account_uuid_, v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 322: range 000000001821A8FC-000000001821BADD
bool __cdecl proto_log::ClientLogHead::MergePartialFromCodedStream(
        proto_log::ClientLogHead *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  std::string *v13; // rdx
  const std::string *v14; // rax
  unsigned int v15; // r14d
  const std::string *v16; // rax
  google::protobuf::internal::WireFormatLite *v17; // rax
  const char *v18; // r8
  std::string *v19; // rdx
  const std::string *v20; // rax
  unsigned int v21; // r14d
  const std::string *v22; // rax
  google::protobuf::internal::WireFormatLite *v23; // rax
  const char *v24; // r8
  std::string *v25; // rdx
  const std::string *v26; // rax
  unsigned int v27; // r14d
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  std::string *v31; // rdx
  const std::string *v32; // rax
  unsigned int v33; // r14d
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  std::string *v37; // rdx
  const std::string *v38; // rax
  unsigned int v39; // r14d
  const std::string *v40; // rax
  google::protobuf::internal::WireFormatLite *v41; // rax
  const char *v42; // r8
  std::string *v43; // rdx
  const std::string *v44; // rax
  unsigned int v45; // r14d
  const std::string *v46; // rax
  google::protobuf::internal::WireFormatLite *v47; // rax
  const char *v48; // r8
  std::string *v49; // rdx
  const std::string *v50; // rax
  unsigned int v51; // r14d
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  std::string *v55; // rdx
  const std::string *v56; // rax
  unsigned int v57; // r14d
  const std::string *v58; // rax
  google::protobuf::internal::WireFormatLite *v59; // rax
  const char *v60; // r8
  std::string *v61; // rdx
  const std::string *v62; // rax
  unsigned int v63; // r14d
  const std::string *v64; // rax
  google::protobuf::internal::WireFormatLite *v65; // rax
  const char *v66; // r8
  std::string *v67; // rdx
  const std::string *v68; // rax
  unsigned int v69; // r14d
  const std::string *v70; // rax
  google::protobuf::internal::WireFormatLite *v71; // rax
  const char *v72; // r8
  std::string *v73; // rdx
  const std::string *v74; // rax
  unsigned int v75; // r14d
  const std::string *v76; // rax
  google::protobuf::internal::WireFormatLite *v77; // rax
  const char *v78; // r8
  std::string *v79; // rdx
  const std::string *v80; // rax
  unsigned int v81; // r14d
  const std::string *v82; // rax
  google::protobuf::internal::WireFormatLite *v83; // rax
  const char *v84; // r8
  std::string *v85; // rdx
  const std::string *v86; // rax
  unsigned int v87; // r14d
  const std::string *v88; // rax
  google::protobuf::internal::WireFormatLite *v89; // rax
  const char *v90; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v91; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v96[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:327";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogHead::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 2 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) == 1 )
      {
        switch ( google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag) )
        {
          case 1:
            if ( (_BYTE)tag != 10 )
              break;
            v13 = proto_log::ClientLogHead::mutable_event_time[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.event_time",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v19 = proto_log::ClientLogHead::mutable_log_serial_number[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.log_serial_number",
                                     v24) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->action_id_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::ClientLogHead::mutable_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.action_name",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v31 = proto_log::ClientLogHead::mutable_upload_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.upload_ip",
                                     v36) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v37 = proto_log::ClientLogHead::mutable_product_id[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.product_id",
                                     v42) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v43 = proto_log::ClientLogHead::mutable_channel_id[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.channel_id",
                                     v48) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 66 )
              goto handle_unusual;
            v49 = proto_log::ClientLogHead::mutable_region_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v49) )
              goto failure;
            v50 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
            v51 = std::string::length(v50);
            v52 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
            v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v53,
                                     (const char *)v51,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.region_name",
                                     v54) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v55 = proto_log::ClientLogHead::mutable_game_version[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v55) )
              goto failure;
            v56 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
            v57 = std::string::length(v56);
            v58 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
            v59 = (google::protobuf::internal::WireFormatLite *)std::string::data(v58);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v59,
                                     (const char *)v57,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.game_version",
                                     v60) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v61 = proto_log::ClientLogHead::mutable_device_type[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v61) )
              goto failure;
            v62 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
            v63 = std::string::length(v62);
            v64 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
            v65 = (google::protobuf::internal::WireFormatLite *)std::string::data(v64);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v65,
                                     (const char *)v63,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_type",
                                     v66) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 90 )
              goto handle_unusual;
            v67 = proto_log::ClientLogHead::mutable_device_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v67) )
              goto failure;
            v68 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
            v69 = std::string::length(v68);
            v70 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
            v71 = (google::protobuf::internal::WireFormatLite *)std::string::data(v70);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v71,
                                     (const char *)v69,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_uuid",
                                     v72) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 98 )
              goto handle_unusual;
            v73 = proto_log::ClientLogHead::mutable_mac_addr[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v73) )
              goto failure;
            v74 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
            v75 = std::string::length(v74);
            v76 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
            v77 = (google::protobuf::internal::WireFormatLite *)std::string::data(v76);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v77,
                                     (const char *)v75,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.mac_addr",
                                     v78) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 106 )
              goto handle_unusual;
            v79 = proto_log::ClientLogHead::mutable_account_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v79) )
              goto failure;
            v80 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
            v81 = std::string::length(v80);
            v82 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
            v83 = (google::protobuf::internal::WireFormatLite *)std::string::data(v82);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v83,
                                     (const char *)v81,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_name",
                                     v84) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 114 )
              goto handle_unusual;
            v85 = proto_log::ClientLogHead::mutable_account_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v85) )
              goto failure;
            v86 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
            v87 = std::string::length(v86);
            v88 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
            v89 = (google::protobuf::internal::WireFormatLite *)std::string::data(v88);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v89,
                                     (const char *)v87,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_uuid",
                                     v90) )
              goto failure;
            continue;
          default:
            goto handle_unusual;
        }
      }
      break;
    }
handle_unusual:
    if ( !tag )
    {
      result = 1;
      goto LABEL_108;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v91 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v91 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v91->unknown_fields) );
failure:
  result = 0;
LABEL_108:
  if ( v96 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 574: range 000000001821BADE-000000001821C2B2
void __cdecl proto_log::ClientLogHead::SerializeWithCachedSizes(
        const proto_log::ClientLogHead *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const std::string *v2; // rax
  const std::string *v3; // rax
  unsigned int v4; // ebx
  const std::string *v5; // rax
  google::protobuf::internal::WireFormatLite *v6; // rax
  const char *v7; // r8
  const std::string *v8; // rcx
  const std::string *v9; // rax
  const std::string *v10; // rax
  unsigned int v11; // ebx
  const std::string *v12; // rax
  google::protobuf::internal::WireFormatLite *v13; // rax
  const char *v14; // r8
  const std::string *v15; // rcx
  google::protobuf::uint32 v16; // ecx
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rax
  unsigned int v26; // ebx
  const std::string *v27; // rax
  google::protobuf::internal::WireFormatLite *v28; // rax
  const char *v29; // r8
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  const std::string *v38; // rax
  const std::string *v39; // rax
  unsigned int v40; // ebx
  const std::string *v41; // rax
  google::protobuf::internal::WireFormatLite *v42; // rax
  const char *v43; // r8
  const std::string *v44; // rcx
  const std::string *v45; // rax
  const std::string *v46; // rax
  unsigned int v47; // ebx
  const std::string *v48; // rax
  google::protobuf::internal::WireFormatLite *v49; // rax
  const char *v50; // r8
  const std::string *v51; // rcx
  const std::string *v52; // rax
  const std::string *v53; // rax
  unsigned int v54; // ebx
  const std::string *v55; // rax
  google::protobuf::internal::WireFormatLite *v56; // rax
  const char *v57; // r8
  const std::string *v58; // rcx
  const std::string *v59; // rax
  const std::string *v60; // rax
  unsigned int v61; // ebx
  const std::string *v62; // rax
  google::protobuf::internal::WireFormatLite *v63; // rax
  const char *v64; // r8
  const std::string *v65; // rcx
  const std::string *v66; // rax
  const std::string *v67; // rax
  unsigned int v68; // ebx
  const std::string *v69; // rax
  google::protobuf::internal::WireFormatLite *v70; // rax
  const char *v71; // r8
  const std::string *v72; // rcx
  const std::string *v73; // rax
  const std::string *v74; // rax
  unsigned int v75; // ebx
  const std::string *v76; // rax
  google::protobuf::internal::WireFormatLite *v77; // rax
  const char *v78; // r8
  const std::string *v79; // rcx
  const std::string *v80; // rax
  const std::string *v81; // rax
  unsigned int v82; // ebx
  const std::string *v83; // rax
  google::protobuf::internal::WireFormatLite *v84; // rax
  const char *v85; // r8
  const std::string *v86; // rcx
  const std::string *v87; // rax
  const std::string *v88; // rax
  unsigned int v89; // ebx
  const std::string *v90; // rax
  google::protobuf::internal::WireFormatLite *v91; // rax
  const char *v92; // r8
  const std::string *v93; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v95; // rax

  v2 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.event_time",
      v7);
    v8 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  v9 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    v11 = std::string::length(v10);
    v12 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    v13 = (google::protobuf::internal::WireFormatLite *)std::string::data(v12);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v13,
      (const char *)v11,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.log_serial_number",
      v14);
    v15 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v15, output);
  }
  if ( proto_log::ClientLogHead::action_id(this) )
  {
    v16 = proto_log::ClientLogHead::action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v16, output);
  }
  v17 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.action_name",
      v22);
    v23 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  v24 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
  if ( std::string::size(v24) )
  {
    v25 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    v26 = std::string::length(v25);
    v27 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    v28 = (google::protobuf::internal::WireFormatLite *)std::string::data(v27);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v28,
      (const char *)v26,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.upload_ip",
      v29);
    v30 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v30, output);
  }
  v31 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
  if ( std::string::size(v31) )
  {
    v32 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    v33 = std::string::length(v32);
    v34 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.product_id",
      v36);
    v37 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v37, output);
  }
  v38 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
  if ( std::string::size(v38) )
  {
    v39 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    v40 = std::string::length(v39);
    v41 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    v42 = (google::protobuf::internal::WireFormatLite *)std::string::data(v41);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v42,
      (const char *)v40,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.channel_id",
      v43);
    v44 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v44, output);
  }
  v45 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v45) )
  {
    v46 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    v47 = std::string::length(v46);
    v48 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    v49 = (google::protobuf::internal::WireFormatLite *)std::string::data(v48);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v49,
      (const char *)v47,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.region_name",
      v50);
    v51 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(8LL, v51, output);
  }
  v52 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v52) )
  {
    v53 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    v54 = std::string::length(v53);
    v55 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    v56 = (google::protobuf::internal::WireFormatLite *)std::string::data(v55);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v56,
      (const char *)v54,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.game_version",
      v57);
    v58 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(9LL, v58, output);
  }
  v59 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
  if ( std::string::size(v59) )
  {
    v60 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    v61 = std::string::length(v60);
    v62 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    v63 = (google::protobuf::internal::WireFormatLite *)std::string::data(v62);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v63,
      (const char *)v61,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_type",
      v64);
    v65 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, v65, output);
  }
  v66 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
  if ( std::string::size(v66) )
  {
    v67 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    v68 = std::string::length(v67);
    v69 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    v70 = (google::protobuf::internal::WireFormatLite *)std::string::data(v69);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v70,
      (const char *)v68,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_uuid",
      v71);
    v72 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, v72, output);
  }
  v73 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
  if ( std::string::size(v73) )
  {
    v74 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    v75 = std::string::length(v74);
    v76 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    v77 = (google::protobuf::internal::WireFormatLite *)std::string::data(v76);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v77,
      (const char *)v75,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.mac_addr",
      v78);
    v79 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(12LL, v79, output);
  }
  v80 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
  if ( std::string::size(v80) )
  {
    v81 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    v82 = std::string::length(v81);
    v83 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    v84 = (google::protobuf::internal::WireFormatLite *)std::string::data(v83);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v84,
      (const char *)v82,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_name",
      v85);
    v86 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(13LL, v86, output);
  }
  v87 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
  if ( std::string::size(v87) )
  {
    v88 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    v89 = std::string::length(v88);
    v90 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    v91 = (google::protobuf::internal::WireFormatLite *)std::string::data(v90);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v91,
      (const char *)v89,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_uuid",
      v92);
    v93 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(14LL, v93, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v95 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_41:
      v95 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v95->unknown_fields, output);
  }
};

// Line 722: range 000000001821C2B4-000000001821CACC
google::protobuf::uint8 *__cdecl proto_log::ClientLogHead::InternalSerializeWithCachedSizesToArray(
        const proto_log::ClientLogHead *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  unsigned int v5; // ebx
  const std::string *v6; // rax
  google::protobuf::internal::WireFormatLite *v7; // rax
  const char *v8; // r8
  const std::string *v9; // rcx
  const std::string *v10; // rax
  const std::string *v11; // rax
  unsigned int v12; // ebx
  const std::string *v13; // rax
  google::protobuf::internal::WireFormatLite *v14; // rax
  const char *v15; // r8
  const std::string *v16; // rcx
  google::protobuf::uint32 v17; // ecx
  const std::string *v18; // rax
  const std::string *v19; // rax
  unsigned int v20; // ebx
  const std::string *v21; // rax
  google::protobuf::internal::WireFormatLite *v22; // rax
  const char *v23; // r8
  const std::string *v24; // rcx
  const std::string *v25; // rax
  const std::string *v26; // rax
  unsigned int v27; // ebx
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  const std::string *v31; // rcx
  const std::string *v32; // rax
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  const std::string *v39; // rax
  const std::string *v40; // rax
  unsigned int v41; // ebx
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  const std::string *v45; // rcx
  const std::string *v46; // rax
  const std::string *v47; // rax
  unsigned int v48; // ebx
  const std::string *v49; // rax
  google::protobuf::internal::WireFormatLite *v50; // rax
  const char *v51; // r8
  const std::string *v52; // rcx
  const std::string *v53; // rax
  const std::string *v54; // rax
  unsigned int v55; // ebx
  const std::string *v56; // rax
  google::protobuf::internal::WireFormatLite *v57; // rax
  const char *v58; // r8
  const std::string *v59; // rcx
  const std::string *v60; // rax
  const std::string *v61; // rax
  unsigned int v62; // ebx
  const std::string *v63; // rax
  google::protobuf::internal::WireFormatLite *v64; // rax
  const char *v65; // r8
  const std::string *v66; // rcx
  const std::string *v67; // rax
  const std::string *v68; // rax
  unsigned int v69; // ebx
  const std::string *v70; // rax
  google::protobuf::internal::WireFormatLite *v71; // rax
  const char *v72; // r8
  const std::string *v73; // rcx
  const std::string *v74; // rax
  const std::string *v75; // rax
  unsigned int v76; // ebx
  const std::string *v77; // rax
  google::protobuf::internal::WireFormatLite *v78; // rax
  const char *v79; // r8
  const std::string *v80; // rcx
  const std::string *v81; // rax
  const std::string *v82; // rax
  unsigned int v83; // ebx
  const std::string *v84; // rax
  google::protobuf::internal::WireFormatLite *v85; // rax
  const char *v86; // r8
  const std::string *v87; // rcx
  const std::string *v88; // rax
  const std::string *v89; // rax
  unsigned int v90; // ebx
  const std::string *v91; // rax
  google::protobuf::internal::WireFormatLite *v92; // rax
  const char *v93; // r8
  const std::string *v94; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v96; // rax

  v3 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.event_time",
      v8);
    v9 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  v10 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.log_serial_number",
      v15);
    v16 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v16, target);
  }
  if ( proto_log::ClientLogHead::action_id(this) )
  {
    v17 = proto_log::ClientLogHead::action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v17, target);
  }
  v18 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.action_name",
      v23);
    v24 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  v25 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.upload_ip",
      v30);
    v31 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v31, target);
  }
  v32 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.product_id",
      v37);
    v38 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v38, target);
  }
  v39 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
  if ( std::string::size(v39) )
  {
    v40 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    v41 = std::string::length(v40);
    v42 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v43,
      (const char *)v41,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.channel_id",
      v44);
    v45 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v45, target);
  }
  v46 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v46) )
  {
    v47 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    v48 = std::string::length(v47);
    v49 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    v50 = (google::protobuf::internal::WireFormatLite *)std::string::data(v49);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v50,
      (const char *)v48,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.region_name",
      v51);
    v52 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(8, v52, target);
  }
  v53 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v53) )
  {
    v54 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    v55 = std::string::length(v54);
    v56 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    v57 = (google::protobuf::internal::WireFormatLite *)std::string::data(v56);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v57,
      (const char *)v55,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.game_version",
      v58);
    v59 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(9, v59, target);
  }
  v60 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
  if ( std::string::size(v60) )
  {
    v61 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    v62 = std::string::length(v61);
    v63 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    v64 = (google::protobuf::internal::WireFormatLite *)std::string::data(v63);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v64,
      (const char *)v62,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_type",
      v65);
    v66 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(10, v66, target);
  }
  v67 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
  if ( std::string::size(v67) )
  {
    v68 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    v69 = std::string::length(v68);
    v70 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    v71 = (google::protobuf::internal::WireFormatLite *)std::string::data(v70);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v71,
      (const char *)v69,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.device_uuid",
      v72);
    v73 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(11, v73, target);
  }
  v74 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
  if ( std::string::size(v74) )
  {
    v75 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    v76 = std::string::length(v75);
    v77 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    v78 = (google::protobuf::internal::WireFormatLite *)std::string::data(v77);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v78,
      (const char *)v76,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.mac_addr",
      v79);
    v80 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(12, v80, target);
  }
  v81 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
  if ( std::string::size(v81) )
  {
    v82 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    v83 = std::string::length(v82);
    v84 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    v85 = (google::protobuf::internal::WireFormatLite *)std::string::data(v84);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v85,
      (const char *)v83,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_name",
      v86);
    v87 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(13, v87, target);
  }
  v88 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
  if ( std::string::size(v88) )
  {
    v89 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    v90 = std::string::length(v89);
    v91 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    v92 = (google::protobuf::internal::WireFormatLite *)std::string::data(v91);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v92,
      (const char *)v90,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogHead.account_uuid",
      v93);
    v94 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(14, v94, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v96 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_41:
      v96 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v96->unknown_fields, target);
  }
  return target;
};

// Line 884: range 000000001821CACE-000000001821CF4C
size_t __cdecl proto_log::ClientLogHead::ByteSizeLong(const proto_log::ClientLogHead *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rax
  const std::string *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rax
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rax
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rax
  const std::string *v25; // rax
  const std::string *v26; // rax
  const std::string *v27; // rax
  const std::string *v28; // rax
  google::protobuf::uint32 v29; // eax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  v3 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogHead::event_time[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::ClientLogHead::action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::ClientLogHead::upload_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::ClientLogHead::product_id[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::ClientLogHead::channel_id[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::ClientLogHead::region_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  v17 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::ClientLogHead::game_version[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v18) + 1;
  }
  v19 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::ClientLogHead::device_type[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v20) + 1;
  }
  v21 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
  if ( std::string::size(v21) )
  {
    v22 = proto_log::ClientLogHead::device_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v22) + 1;
  }
  v23 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
  if ( std::string::size(v23) )
  {
    v24 = proto_log::ClientLogHead::mac_addr[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v24) + 1;
  }
  v25 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::ClientLogHead::account_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v26) + 1;
  }
  v27 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
  if ( std::string::size(v27) )
  {
    v28 = proto_log::ClientLogHead::account_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v28) + 1;
  }
  if ( proto_log::ClientLogHead::action_id(this) )
  {
    v29 = proto_log::ClientLogHead::action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v29) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 998: range 000000001821CF4E-000000001821D1D7
void __cdecl proto_log::ClientLogHead::MergeFrom(
        proto_log::ClientLogHead *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::ClientLogHead *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogHead::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/log/client/client_head.pb.cc",
      1000);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::ClientLogHead const>(from);
  if ( source )
    proto_log::ClientLogHead::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1013: range 000000001821D1D8-000000001821DB60
void __cdecl proto_log::ClientLogHead::MergeFrom(
        proto_log::ClientLogHead *const this,
        const proto_log::ClientLogHead *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  const std::string *v10; // rax
  const std::string *v11; // rcx
  const std::string *v12; // rax
  const std::string *v13; // rcx
  const std::string *v14; // rax
  const std::string *v15; // rcx
  const std::string *v16; // rax
  const std::string *v17; // rcx
  const std::string *v18; // rax
  const std::string *v19; // rcx
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rcx
  const std::string *v26; // rax
  const std::string *v27; // rcx
  const std::string *v28; // rax
  const std::string *v29; // rcx
  const std::string *v30; // rax
  const std::string *v31; // rcx
  const std::string *v32; // rax
  const std::string *v33; // rcx
  const std::string *v34; // rax
  const std::string *v35; // rcx
  google::protobuf::uint32 v36; // edx
  char v37; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v39[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogHead::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/log/client/client_head.pb.cc",
      1015);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v37 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v37 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  v10 = proto_log::ClientLogHead::event_time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->event_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->event_time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->event_time_, v11, from->event_time_);
  }
  v12 = proto_log::ClientLogHead::log_serial_number[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->log_serial_number_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->log_serial_number_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->log_serial_number_,
      v13,
      from->log_serial_number_);
  }
  v14 = proto_log::ClientLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v15, from->action_name_);
  }
  v16 = proto_log::ClientLogHead::upload_ip[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->upload_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->upload_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->upload_ip_, v17, from->upload_ip_);
  }
  v18 = proto_log::ClientLogHead::product_id[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_id_, v19, from->product_id_);
  }
  v20 = proto_log::ClientLogHead::channel_id[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->channel_id_, v21, from->channel_id_);
  }
  v22 = proto_log::ClientLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v23, from->region_name_);
  }
  v24 = proto_log::ClientLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v24) )
  {
    v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v25, from->game_version_);
  }
  v26 = proto_log::ClientLogHead::device_type[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_type_, v27, from->device_type_);
  }
  v28 = proto_log::ClientLogHead::device_uuid[abi:cxx11](from);
  if ( std::string::size(v28) )
  {
    v29 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v29, from->device_uuid_);
  }
  v30 = proto_log::ClientLogHead::mac_addr[abi:cxx11](from);
  if ( std::string::size(v30) )
  {
    v31 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->mac_addr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->mac_addr_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->mac_addr_, v31, from->mac_addr_);
  }
  v32 = proto_log::ClientLogHead::account_name[abi:cxx11](from);
  if ( std::string::size(v32) )
  {
    v33 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_name_, v33, from->account_name_);
  }
  v34 = proto_log::ClientLogHead::account_uuid[abi:cxx11](from);
  if ( std::string::size(v34) )
  {
    v35 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uuid_, v35, from->account_uuid_);
  }
  if ( proto_log::ClientLogHead::action_id(from) )
  {
    v36 = proto_log::ClientLogHead::action_id(from);
    proto_log::ClientLogHead::set_action_id(this, v36);
  }
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1077: range 000000001821DB62-000000001821DB9C
void __cdecl proto_log::ClientLogHead::CopyFrom(
        proto_log::ClientLogHead *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::ClientLogHead::Clear(this);
    proto_log::ClientLogHead::MergeFrom(this, from);
  }
};

// Line 1084: range 000000001821DB9E-000000001821DBD8
void __cdecl proto_log::ClientLogHead::CopyFrom(
        proto_log::ClientLogHead *const this,
        const proto_log::ClientLogHead *from)
{
  if ( from != this )
  {
    proto_log::ClientLogHead::Clear(this);
    proto_log::ClientLogHead::MergeFrom(this, from);
  }
};

// Line 1091: range 000000001821DBDA-000000001821DBE8
bool __cdecl proto_log::ClientLogHead::IsInitialized(const proto_log::ClientLogHead *const this)
{
  return 1;
};

// Line 1095: range 000000001821DBEA-000000001821DC18
void __cdecl proto_log::ClientLogHead::Swap(proto_log::ClientLogHead *const this, proto_log::ClientLogHead *other)
{
  if ( other != this )
    proto_log::ClientLogHead::InternalSwap(this, other);
};

// Line 1099: range 000000001821DC1A-000000001821E0CA
void __cdecl proto_log::ClientLogHead::InternalSwap(
        proto_log::ClientLogHead *const this,
        proto_log::ClientLogHead *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-110h]

  std::swap<std::string *>(&this->event_time_.ptr_, &other->event_time_.ptr_);
  std::swap<std::string *>(&this->log_serial_number_.ptr_, &other->log_serial_number_.ptr_);
  std::swap<std::string *>(&this->action_name_.ptr_, &other->action_name_.ptr_);
  std::swap<std::string *>(&this->upload_ip_.ptr_, &other->upload_ip_.ptr_);
  std::swap<std::string *>(&this->product_id_.ptr_, &other->product_id_.ptr_);
  std::swap<std::string *>(&this->channel_id_.ptr_, &other->channel_id_.ptr_);
  std::swap<std::string *>(&this->region_name_.ptr_, &other->region_name_.ptr_);
  std::swap<std::string *>(&this->game_version_.ptr_, &other->game_version_.ptr_);
  std::swap<std::string *>(&this->device_type_.ptr_, &other->device_type_.ptr_);
  std::swap<std::string *>(&this->device_uuid_.ptr_, &other->device_uuid_.ptr_);
  std::swap<std::string *>(&this->mac_addr_.ptr_, &other->mac_addr_.ptr_);
  std::swap<std::string *>(&this->account_name_.ptr_, &other->account_name_.ptr_);
  std::swap<std::string *>(&this->account_uuid_.ptr_, &other->account_uuid_.ptr_);
  std::swap<unsigned int>(&this->action_id_, &other->action_id_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 1119: range 000000001821E0CC-000000001821E0EC
google::protobuf::Metadata __cdecl proto_log::ClientLogHead::GetMetadata(const proto_log::ClientLogHead *const this)
{
  proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};
