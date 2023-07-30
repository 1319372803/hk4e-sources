// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/order/order_body.pb.cc

// Line 99: range 000000001742AC98-000000001742AE61
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/order/order_body.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 107: range 000000001742AE62-000000001742AE7B
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 113: range 000000001742AE7C-000000001742AEA0
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    2);
};

// Line 119: range 000000001742AEA2-000000001742AEFF
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/order/order_body.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::OrderLogBodyAdd>::DefaultConstruct(&proto_log::_OrderLogBodyAdd_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_OrderLogBodyAdd_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::OrderLogBodyFinish>::DefaultConstruct(&proto_log::_OrderLogBodyFinish_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_OrderLogBodyFinish_default_instance_,
    (const void *)0x2DD660);
};

// Line 129: range 000000001742AF00-000000001742AF1C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 134: range 000000001742AF1D-000000001742AF4C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 157: range 000000001742AF4D-000000001742AF66
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 163: range 00000000178BCA76-00000000178BCA89
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::AddDescriptors();
};

// Line 191: range 000000001742AF68-000000001742B027
void __cdecl proto_log::OrderLogBodyAdd::OrderLogBodyAdd(proto_log::OrderLogBodyAdd *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyAdd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::OrderLogBodyAdd::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults();
  proto_log::OrderLogBodyAdd::SharedCtor(this);
};

// Line 199: range 000000001742B028-000000001742B685
void __cdecl proto_log::OrderLogBodyAdd::OrderLogBodyAdd(
        proto_log::OrderLogBodyAdd *const this,
        const proto_log::OrderLogBodyAdd *from)
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
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyAdd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_id_, v4);
  v5 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_id_, v6, from->product_id_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_name_, v7);
  v8 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_name_, v9, from->product_name_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->total_fee_, v10);
  v11 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->total_fee_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->total_fee_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->total_fee_, v12, from->total_fee_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->currency_, v13);
  v14 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->currency_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->currency_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->currency_, v15, from->currency_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->price_tier_, v16);
  v17 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->price_tier_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->price_tier_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->price_tier_, v18, from->price_tier_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trade_no_, v19);
  v20 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trade_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trade_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trade_no_, v21, from->trade_no_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_order_no_, v22);
  v23 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_order_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_order_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->channel_order_no_,
      v24,
      from->channel_order_no_);
  }
  v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_plat_, v25);
  v26 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_plat_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_plat_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_plat_, v27, from->pay_plat_);
  }
  v28 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->extend_, v28);
  v29 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](from);
  if ( std::string::size(v29) )
  {
    v30 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->extend_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->extend_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->extend_, v30, from->extend_);
  }
  memcpy(&this->order_id_, &from->order_id_, 0x18uLL);
};

// Line 246: range 000000001742B686-000000001742B7CA
void __cdecl proto_log::OrderLogBodyAdd::SharedCtor(proto_log::OrderLogBodyAdd *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_id_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->total_fee_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->currency_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->price_tier_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trade_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_order_no_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_plat_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->extend_, v9);
  memset(&this->order_id_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 262: range 000000001742B7CC-000000001742B835
void __cdecl proto_log::OrderLogBodyAdd::~OrderLogBodyAdd(proto_log::OrderLogBodyAdd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyAdd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::OrderLogBodyAdd::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 262: range 000000001742B836-000000001742B860
void __cdecl proto_log::OrderLogBodyAdd::~OrderLogBodyAdd(proto_log::OrderLogBodyAdd *const this)
{
  proto_log::OrderLogBodyAdd::~OrderLogBodyAdd(this);
  operator delete(this, 0x78uLL);
};

// Line 267: range 000000001742B862-000000001742B94E
void __cdecl proto_log::OrderLogBodyAdd::SharedDtor(proto_log::OrderLogBodyAdd *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->product_id_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->product_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->total_fee_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->currency_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->price_tier_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->trade_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->channel_order_no_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->pay_plat_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->extend_, v9);
};

// Line 279: range 000000001742B950-000000001742B99E
void __cdecl proto_log::OrderLogBodyAdd::SetCachedSize(const proto_log::OrderLogBodyAdd *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 284: range 000000001742B9A0-000000001742B9B1
const google::protobuf::Descriptor *__cdecl proto_log::OrderLogBodyAdd::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 289: range 000000001742B9B2-000000001742B9C1
const proto_log::OrderLogBodyAdd *__cdecl proto_log::OrderLogBodyAdd::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults();
  return proto_log::OrderLogBodyAdd::internal_default_instance();
};

// Line 294: range 000000001742B9C2-000000001742BA36
proto_log::OrderLogBodyAdd *__cdecl proto_log::OrderLogBodyAdd::New(
        const proto_log::OrderLogBodyAdd *const this,
        google::protobuf::Arena *arena)
{
  proto_log::OrderLogBodyAdd *v2; // rbx

  v2 = (proto_log::OrderLogBodyAdd *)operator new(0x78uLL);
  proto_log::OrderLogBodyAdd::OrderLogBodyAdd(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::OrderLogBodyAdd>(arena, v2);
  return v2;
};

// Line 302: range 000000001742BA38-000000001742BBA3
void __cdecl proto_log::OrderLogBodyAdd::Clear(proto_log::OrderLogBodyAdd *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->product_id_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->product_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->total_fee_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->currency_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->price_tier_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->trade_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->channel_order_no_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->pay_plat_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->extend_, v9);
  memset(&this->order_id_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 324: range 000000001742BBA4-000000001742CC42
bool __cdecl proto_log::OrderLogBodyAdd::MergePartialFromCodedStream(
        proto_log::OrderLogBodyAdd *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v67; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v72[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:329";
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyAdd::MergePartialFromCodedStream;
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
            if ( (_BYTE)tag != 8 )
              break;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->order_id_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->uid_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v13 = proto_log::OrderLogBodyAdd::mutable_product_id[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_id",
                                     v18) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v19 = proto_log::OrderLogBodyAdd::mutable_product_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_name",
                                     v24) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->product_num_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->coin_num_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v25 = proto_log::OrderLogBodyAdd::mutable_total_fee[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.total_fee",
                                     v30) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 66 )
              goto handle_unusual;
            v31 = proto_log::OrderLogBodyAdd::mutable_currency[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.currency",
                                     v36) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v37 = proto_log::OrderLogBodyAdd::mutable_price_tier[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.price_tier",
                                     v42) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v43 = proto_log::OrderLogBodyAdd::mutable_trade_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.trade_no",
                                     v48) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->trade_time_) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->channel_id_) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 106 )
              goto handle_unusual;
            v49 = proto_log::OrderLogBodyAdd::mutable_channel_order_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v49) )
              goto failure;
            v50 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
            v51 = std::string::length(v50);
            v52 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
            v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v53,
                                     (const char *)v51,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.channel_order_no",
                                     v54) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 114 )
              goto handle_unusual;
            v55 = proto_log::OrderLogBodyAdd::mutable_pay_plat[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v55) )
              goto failure;
            v56 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
            v57 = std::string::length(v56);
            v58 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
            v59 = (google::protobuf::internal::WireFormatLite *)std::string::data(v58);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v59,
                                     (const char *)v57,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.pay_plat",
                                     v60) )
              goto failure;
            continue;
          case 15:
            if ( (_BYTE)tag != 122 )
              goto handle_unusual;
            v61 = proto_log::OrderLogBodyAdd::mutable_extend[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v61) )
              goto failure;
            v62 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
            v63 = std::string::length(v62);
            v64 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
            v65 = (google::protobuf::internal::WireFormatLite *)std::string::data(v64);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v65,
                                     (const char *)v63,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.extend",
                                     v66) )
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
      v67 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v67 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v67->unknown_fields) );
failure:
  result = 0;
LABEL_108:
  if ( v72 == (char *)v2 )
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

// Line 582: range 000000001742CC44-000000001742D322
void __cdecl proto_log::OrderLogBodyAdd::SerializeWithCachedSizes(
        const proto_log::OrderLogBodyAdd *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  const std::string *v4; // rax
  const std::string *v5; // rax
  unsigned int v6; // ebx
  const std::string *v7; // rax
  google::protobuf::internal::WireFormatLite *v8; // rax
  const char *v9; // r8
  const std::string *v10; // rcx
  const std::string *v11; // rax
  const std::string *v12; // rax
  unsigned int v13; // ebx
  const std::string *v14; // rax
  google::protobuf::internal::WireFormatLite *v15; // rax
  const char *v16; // r8
  const std::string *v17; // rcx
  google::protobuf::uint32 v18; // ecx
  google::protobuf::uint32 v19; // ecx
  const std::string *v20; // rax
  const std::string *v21; // rax
  unsigned int v22; // ebx
  const std::string *v23; // rax
  google::protobuf::internal::WireFormatLite *v24; // rax
  const char *v25; // r8
  const std::string *v26; // rcx
  const std::string *v27; // rax
  const std::string *v28; // rax
  unsigned int v29; // ebx
  const std::string *v30; // rax
  google::protobuf::internal::WireFormatLite *v31; // rax
  const char *v32; // r8
  const std::string *v33; // rcx
  const std::string *v34; // rax
  const std::string *v35; // rax
  unsigned int v36; // ebx
  const std::string *v37; // rax
  google::protobuf::internal::WireFormatLite *v38; // rax
  const char *v39; // r8
  const std::string *v40; // rcx
  const std::string *v41; // rax
  const std::string *v42; // rax
  unsigned int v43; // ebx
  const std::string *v44; // rax
  google::protobuf::internal::WireFormatLite *v45; // rax
  const char *v46; // r8
  const std::string *v47; // rcx
  google::protobuf::uint32 v48; // ecx
  google::protobuf::uint32 v49; // ecx
  const std::string *v50; // rax
  const std::string *v51; // rax
  unsigned int v52; // ebx
  const std::string *v53; // rax
  google::protobuf::internal::WireFormatLite *v54; // rax
  const char *v55; // r8
  const std::string *v56; // rcx
  const std::string *v57; // rax
  const std::string *v58; // rax
  unsigned int v59; // ebx
  const std::string *v60; // rax
  google::protobuf::internal::WireFormatLite *v61; // rax
  const char *v62; // r8
  const std::string *v63; // rcx
  const std::string *v64; // rax
  const std::string *v65; // rax
  unsigned int v66; // ebx
  const std::string *v67; // rax
  google::protobuf::internal::WireFormatLite *v68; // rax
  const char *v69; // r8
  const std::string *v70; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v72; // rax

  if ( proto_log::OrderLogBodyAdd::order_id(this) )
  {
    v2 = proto_log::OrderLogBodyAdd::order_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::OrderLogBodyAdd::uid(this) )
  {
    v3 = proto_log::OrderLogBodyAdd::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  v4 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_id",
      v9);
    v10 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v10, output);
  }
  v11 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_name",
      v16);
    v17 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v17, output);
  }
  if ( proto_log::OrderLogBodyAdd::product_num(this) )
  {
    v18 = proto_log::OrderLogBodyAdd::product_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v18, output);
  }
  if ( proto_log::OrderLogBodyAdd::coin_num(this) )
  {
    v19 = proto_log::OrderLogBodyAdd::coin_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(6, v19, output);
  }
  v20 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
  if ( std::string::size(v20) )
  {
    v21 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    v22 = std::string::length(v21);
    v23 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    v24 = (google::protobuf::internal::WireFormatLite *)std::string::data(v23);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v24,
      (const char *)v22,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.total_fee",
      v25);
    v26 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v26, output);
  }
  v27 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
  if ( std::string::size(v27) )
  {
    v28 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    v29 = std::string::length(v28);
    v30 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    v31 = (google::protobuf::internal::WireFormatLite *)std::string::data(v30);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v31,
      (const char *)v29,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.currency",
      v32);
    v33 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(8LL, v33, output);
  }
  v34 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
  if ( std::string::size(v34) )
  {
    v35 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    v36 = std::string::length(v35);
    v37 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    v38 = (google::protobuf::internal::WireFormatLite *)std::string::data(v37);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v38,
      (const char *)v36,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.price_tier",
      v39);
    v40 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(9LL, v40, output);
  }
  v41 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
  if ( std::string::size(v41) )
  {
    v42 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    v43 = std::string::length(v42);
    v44 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    v45 = (google::protobuf::internal::WireFormatLite *)std::string::data(v44);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v45,
      (const char *)v43,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.trade_no",
      v46);
    v47 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, v47, output);
  }
  if ( proto_log::OrderLogBodyAdd::trade_time(this) )
  {
    v48 = proto_log::OrderLogBodyAdd::trade_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, v48, output);
  }
  if ( proto_log::OrderLogBodyAdd::channel_id(this) )
  {
    v49 = proto_log::OrderLogBodyAdd::channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v49, output);
  }
  v50 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v50) )
  {
    v51 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    v52 = std::string::length(v51);
    v53 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    v54 = (google::protobuf::internal::WireFormatLite *)std::string::data(v53);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v54,
      (const char *)v52,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.channel_order_no",
      v55);
    v56 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(13LL, v56, output);
  }
  v57 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
  if ( std::string::size(v57) )
  {
    v58 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    v59 = std::string::length(v58);
    v60 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    v61 = (google::protobuf::internal::WireFormatLite *)std::string::data(v60);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v61,
      (const char *)v59,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.pay_plat",
      v62);
    v63 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(14LL, v63, output);
  }
  v64 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
  if ( std::string::size(v64) )
  {
    v65 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    v66 = std::string::length(v65);
    v67 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    v68 = (google::protobuf::internal::WireFormatLite *)std::string::data(v67);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v68,
      (const char *)v66,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.extend",
      v69);
    v70 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(15LL, v70, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_43;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v72 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_43:
      v72 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v72->unknown_fields, output);
  }
};

// Line 715: range 000000001742D324-000000001742DA4A
google::protobuf::uint8 *__cdecl proto_log::OrderLogBodyAdd::InternalSerializeWithCachedSizesToArray(
        const proto_log::OrderLogBodyAdd *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  const std::string *v5; // rax
  const std::string *v6; // rax
  unsigned int v7; // ebx
  const std::string *v8; // rax
  google::protobuf::internal::WireFormatLite *v9; // rax
  const char *v10; // r8
  const std::string *v11; // rcx
  const std::string *v12; // rax
  const std::string *v13; // rax
  unsigned int v14; // ebx
  const std::string *v15; // rax
  google::protobuf::internal::WireFormatLite *v16; // rax
  const char *v17; // r8
  const std::string *v18; // rcx
  google::protobuf::uint32 v19; // ecx
  google::protobuf::uint32 v20; // ecx
  const std::string *v21; // rax
  const std::string *v22; // rax
  unsigned int v23; // ebx
  const std::string *v24; // rax
  google::protobuf::internal::WireFormatLite *v25; // rax
  const char *v26; // r8
  const std::string *v27; // rcx
  const std::string *v28; // rax
  const std::string *v29; // rax
  unsigned int v30; // ebx
  const std::string *v31; // rax
  google::protobuf::internal::WireFormatLite *v32; // rax
  const char *v33; // r8
  const std::string *v34; // rcx
  const std::string *v35; // rax
  const std::string *v36; // rax
  unsigned int v37; // ebx
  const std::string *v38; // rax
  google::protobuf::internal::WireFormatLite *v39; // rax
  const char *v40; // r8
  const std::string *v41; // rcx
  const std::string *v42; // rax
  const std::string *v43; // rax
  unsigned int v44; // ebx
  const std::string *v45; // rax
  google::protobuf::internal::WireFormatLite *v46; // rax
  const char *v47; // r8
  const std::string *v48; // rcx
  google::protobuf::uint32 v49; // ecx
  google::protobuf::uint32 v50; // ecx
  const std::string *v51; // rax
  const std::string *v52; // rax
  unsigned int v53; // ebx
  const std::string *v54; // rax
  google::protobuf::internal::WireFormatLite *v55; // rax
  const char *v56; // r8
  const std::string *v57; // rcx
  const std::string *v58; // rax
  const std::string *v59; // rax
  unsigned int v60; // ebx
  const std::string *v61; // rax
  google::protobuf::internal::WireFormatLite *v62; // rax
  const char *v63; // r8
  const std::string *v64; // rcx
  const std::string *v65; // rax
  const std::string *v66; // rax
  unsigned int v67; // ebx
  const std::string *v68; // rax
  google::protobuf::internal::WireFormatLite *v69; // rax
  const char *v70; // r8
  const std::string *v71; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v73; // rax

  if ( proto_log::OrderLogBodyAdd::order_id(this) )
  {
    v3 = proto_log::OrderLogBodyAdd::order_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::OrderLogBodyAdd::uid(this) )
  {
    v4 = proto_log::OrderLogBodyAdd::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  v5 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    v7 = std::string::length(v6);
    v8 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    v9 = (google::protobuf::internal::WireFormatLite *)std::string::data(v8);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v9,
      (const char *)v7,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_id",
      v10);
    v11 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v11, target);
  }
  v12 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
  if ( std::string::size(v12) )
  {
    v13 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    v14 = std::string::length(v13);
    v15 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    v16 = (google::protobuf::internal::WireFormatLite *)std::string::data(v15);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v16,
      (const char *)v14,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.product_name",
      v17);
    v18 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v18, target);
  }
  if ( proto_log::OrderLogBodyAdd::product_num(this) )
  {
    v19 = proto_log::OrderLogBodyAdd::product_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v19, target);
  }
  if ( proto_log::OrderLogBodyAdd::coin_num(this) )
  {
    v20 = proto_log::OrderLogBodyAdd::coin_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, v20, target);
  }
  v21 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
  if ( std::string::size(v21) )
  {
    v22 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    v23 = std::string::length(v22);
    v24 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    v25 = (google::protobuf::internal::WireFormatLite *)std::string::data(v24);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v25,
      (const char *)v23,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.total_fee",
      v26);
    v27 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v27, target);
  }
  v28 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
  if ( std::string::size(v28) )
  {
    v29 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    v30 = std::string::length(v29);
    v31 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    v32 = (google::protobuf::internal::WireFormatLite *)std::string::data(v31);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v32,
      (const char *)v30,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.currency",
      v33);
    v34 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(8, v34, target);
  }
  v35 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
  if ( std::string::size(v35) )
  {
    v36 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    v37 = std::string::length(v36);
    v38 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    v39 = (google::protobuf::internal::WireFormatLite *)std::string::data(v38);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v39,
      (const char *)v37,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.price_tier",
      v40);
    v41 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(9, v41, target);
  }
  v42 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
  if ( std::string::size(v42) )
  {
    v43 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    v44 = std::string::length(v43);
    v45 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    v46 = (google::protobuf::internal::WireFormatLite *)std::string::data(v45);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v46,
      (const char *)v44,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.trade_no",
      v47);
    v48 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(10, v48, target);
  }
  if ( proto_log::OrderLogBodyAdd::trade_time(this) )
  {
    v49 = proto_log::OrderLogBodyAdd::trade_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, v49, target);
  }
  if ( proto_log::OrderLogBodyAdd::channel_id(this) )
  {
    v50 = proto_log::OrderLogBodyAdd::channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v50, target);
  }
  v51 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v51) )
  {
    v52 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    v53 = std::string::length(v52);
    v54 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    v55 = (google::protobuf::internal::WireFormatLite *)std::string::data(v54);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v55,
      (const char *)v53,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.channel_order_no",
      v56);
    v57 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(13, v57, target);
  }
  v58 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
  if ( std::string::size(v58) )
  {
    v59 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    v60 = std::string::length(v59);
    v61 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    v62 = (google::protobuf::internal::WireFormatLite *)std::string::data(v61);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v62,
      (const char *)v60,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.pay_plat",
      v63);
    v64 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(14, v64, target);
  }
  v65 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
  if ( std::string::size(v65) )
  {
    v66 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    v67 = std::string::length(v66);
    v68 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    v69 = (google::protobuf::internal::WireFormatLite *)std::string::data(v68);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v69,
      (const char *)v67,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogBodyAdd.extend",
      v70);
    v71 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(15, v71, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_43;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v73 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_43:
      v73 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v73->unknown_fields, target);
  }
  return target;
};

// Line 858: range 000000001742DA4C-000000001742DECA
size_t __cdecl proto_log::OrderLogBodyAdd::ByteSizeLong(const proto_log::OrderLogBodyAdd *const this)
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
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint32 v22; // eax
  google::protobuf::uint32 v23; // eax
  google::protobuf::uint32 v24; // eax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
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
  v3 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  v17 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v18) + 1;
  }
  v19 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v20) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::order_id(this) )
  {
    v21 = proto_log::OrderLogBodyAdd::order_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::uid(this) )
  {
    v22 = proto_log::OrderLogBodyAdd::uid(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::product_num(this) )
  {
    v23 = proto_log::OrderLogBodyAdd::product_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v23) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::coin_num(this) )
  {
    v24 = proto_log::OrderLogBodyAdd::coin_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v24) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::trade_time(this) )
  {
    v25 = proto_log::OrderLogBodyAdd::trade_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v25) + 1;
  }
  if ( proto_log::OrderLogBodyAdd::channel_id(this) )
  {
    v26 = proto_log::OrderLogBodyAdd::channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v26) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 979: range 000000001742DECC-000000001742E155
void __cdecl proto_log::OrderLogBodyAdd::MergeFrom(
        proto_log::OrderLogBodyAdd *const this,
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
  const proto_log::OrderLogBodyAdd *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyAdd::MergeFrom;
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
      "./src/server_only/log/order/order_body.pb.cc",
      981);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::OrderLogBodyAdd const>(from);
  if ( source )
    proto_log::OrderLogBodyAdd::MergeFrom(this, source);
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

// Line 994: range 000000001742E156-000000001742EA2C
void __cdecl proto_log::OrderLogBodyAdd::MergeFrom(
        proto_log::OrderLogBodyAdd *const this,
        const proto_log::OrderLogBodyAdd *from)
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
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint32 v31; // edx
  google::protobuf::uint32 v32; // edx
  google::protobuf::uint32 v33; // edx
  char v34; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v36[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyAdd::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v34 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/order/order_body.pb.cc",
      996);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v34 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v34 )
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
  v10 = proto_log::OrderLogBodyAdd::product_id[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_id_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_id_, v11, from->product_id_);
  }
  v12 = proto_log::OrderLogBodyAdd::product_name[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_name_, v13, from->product_name_);
  }
  v14 = proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->total_fee_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->total_fee_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->total_fee_, v15, from->total_fee_);
  }
  v16 = proto_log::OrderLogBodyAdd::currency[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->currency_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->currency_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->currency_, v17, from->currency_);
  }
  v18 = proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->price_tier_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->price_tier_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->price_tier_, v19, from->price_tier_);
  }
  v20 = proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trade_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trade_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trade_no_, v21, from->trade_no_);
  }
  v22 = proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_order_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_order_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->channel_order_no_,
      v23,
      from->channel_order_no_);
  }
  v24 = proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](from);
  if ( std::string::size(v24) )
  {
    v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_plat_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_plat_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_plat_, v25, from->pay_plat_);
  }
  v26 = proto_log::OrderLogBodyAdd::extend[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->extend_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->extend_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->extend_, v27, from->extend_);
  }
  if ( proto_log::OrderLogBodyAdd::order_id(from) )
  {
    v28 = proto_log::OrderLogBodyAdd::order_id(from);
    proto_log::OrderLogBodyAdd::set_order_id(this, v28);
  }
  if ( proto_log::OrderLogBodyAdd::uid(from) )
  {
    v29 = proto_log::OrderLogBodyAdd::uid(from);
    proto_log::OrderLogBodyAdd::set_uid(this, v29);
  }
  if ( proto_log::OrderLogBodyAdd::product_num(from) )
  {
    v30 = proto_log::OrderLogBodyAdd::product_num(from);
    proto_log::OrderLogBodyAdd::set_product_num(this, v30);
  }
  if ( proto_log::OrderLogBodyAdd::coin_num(from) )
  {
    v31 = proto_log::OrderLogBodyAdd::coin_num(from);
    proto_log::OrderLogBodyAdd::set_coin_num(this, v31);
  }
  if ( proto_log::OrderLogBodyAdd::trade_time(from) )
  {
    v32 = proto_log::OrderLogBodyAdd::trade_time(from);
    proto_log::OrderLogBodyAdd::set_trade_time(this, v32);
  }
  if ( proto_log::OrderLogBodyAdd::channel_id(from) )
  {
    v33 = proto_log::OrderLogBodyAdd::channel_id(from);
    proto_log::OrderLogBodyAdd::set_channel_id(this, v33);
  }
  if ( v36 == (char *)v2 )
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

// Line 1057: range 000000001742EA2E-000000001742EA6B
void __cdecl proto_log::OrderLogBodyAdd::CopyFrom(
        proto_log::OrderLogBodyAdd *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::OrderLogBodyAdd::Clear(this);
    proto_log::OrderLogBodyAdd::MergeFrom(this, from);
  }
};

// Line 1064: range 000000001742EA6C-000000001742EAA9
void __cdecl proto_log::OrderLogBodyAdd::CopyFrom(
        proto_log::OrderLogBodyAdd *const this,
        const proto_log::OrderLogBodyAdd *from)
{
  if ( from != this )
  {
    proto_log::OrderLogBodyAdd::Clear(this);
    proto_log::OrderLogBodyAdd::MergeFrom(this, from);
  }
};

// Line 1071: range 000000001742EAAA-000000001742EAB8
bool __cdecl proto_log::OrderLogBodyAdd::IsInitialized(const proto_log::OrderLogBodyAdd *const this)
{
  return 1;
};

// Line 1075: range 000000001742EABA-000000001742EAEB
void __cdecl proto_log::OrderLogBodyAdd::Swap(
        proto_log::OrderLogBodyAdd *const this,
        proto_log::OrderLogBodyAdd *other)
{
  if ( other != this )
    proto_log::OrderLogBodyAdd::InternalSwap(this, other);
};

// Line 1079: range 000000001742EAEC-000000001742EF49
void __cdecl proto_log::OrderLogBodyAdd::InternalSwap(
        proto_log::OrderLogBodyAdd *const this,
        proto_log::OrderLogBodyAdd *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-D0h]

  std::swap<std::string *>(&this->product_id_.ptr_, &other->product_id_.ptr_);
  std::swap<std::string *>(&this->product_name_.ptr_, &other->product_name_.ptr_);
  std::swap<std::string *>(&this->total_fee_.ptr_, &other->total_fee_.ptr_);
  std::swap<std::string *>(&this->currency_.ptr_, &other->currency_.ptr_);
  std::swap<std::string *>(&this->price_tier_.ptr_, &other->price_tier_.ptr_);
  std::swap<std::string *>(&this->trade_no_.ptr_, &other->trade_no_.ptr_);
  std::swap<std::string *>(&this->channel_order_no_.ptr_, &other->channel_order_no_.ptr_);
  std::swap<std::string *>(&this->pay_plat_.ptr_, &other->pay_plat_.ptr_);
  std::swap<std::string *>(&this->extend_.ptr_, &other->extend_.ptr_);
  std::swap<unsigned int>(&this->order_id_, &other->order_id_);
  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned int>(&this->product_num_, &other->product_num_);
  std::swap<unsigned int>(&this->coin_num_, &other->coin_num_);
  std::swap<unsigned int>(&this->trade_time_, &other->trade_time_);
  std::swap<unsigned int>(&this->channel_id_, &other->channel_id_);
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

// Line 1100: range 000000001742EF4A-000000001742EF6A
google::protobuf::Metadata __cdecl proto_log::OrderLogBodyAdd::GetMetadata(
        const proto_log::OrderLogBodyAdd *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 1680: range 000000001742EF6C-000000001742F02B
void __cdecl proto_log::OrderLogBodyFinish::OrderLogBodyFinish(proto_log::OrderLogBodyFinish *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::OrderLogBodyFinish::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults();
  proto_log::OrderLogBodyFinish::SharedCtor(this);
};

// Line 1688: range 000000001742F02C-000000001742F200
void __cdecl proto_log::OrderLogBodyFinish::OrderLogBodyFinish(
        proto_log::OrderLogBodyFinish *const this,
        const proto_log::OrderLogBodyFinish *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
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
  memcpy(&this->order_id_, &from->order_id_, 0xDuLL);
};

// Line 1699: range 000000001742F202-000000001742F268
void __cdecl proto_log::OrderLogBodyFinish::SharedCtor(proto_log::OrderLogBodyFinish *const this)
{
  memset(&this->order_id_, 0, 0xDuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1706: range 000000001742F26A-000000001742F2D3
void __cdecl proto_log::OrderLogBodyFinish::~OrderLogBodyFinish(proto_log::OrderLogBodyFinish *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogBodyFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::OrderLogBodyFinish::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1706: range 000000001742F2D4-000000001742F2FE
void __cdecl proto_log::OrderLogBodyFinish::~OrderLogBodyFinish(proto_log::OrderLogBodyFinish *const this)
{
  proto_log::OrderLogBodyFinish::~OrderLogBodyFinish(this);
  operator delete(this, 0x28uLL);
};

// Line 1711: range 000000001742F300-000000001742F30A
void __cdecl proto_log::OrderLogBodyFinish::SharedDtor(proto_log::OrderLogBodyFinish *const this)
{
  ;
};

// Line 1714: range 000000001742F30C-000000001742F35A
void __cdecl proto_log::OrderLogBodyFinish::SetCachedSize(const proto_log::OrderLogBodyFinish *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1719: range 000000001742F35C-000000001742F36D
const google::protobuf::Descriptor *__cdecl proto_log::OrderLogBodyFinish::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 1724: range 000000001742F36E-000000001742F37D
const proto_log::OrderLogBodyFinish *__cdecl proto_log::OrderLogBodyFinish::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::InitDefaults();
  return proto_log::OrderLogBodyFinish::internal_default_instance();
};

// Line 1729: range 000000001742F37E-000000001742F3F2
proto_log::OrderLogBodyFinish *__cdecl proto_log::OrderLogBodyFinish::New(
        const proto_log::OrderLogBodyFinish *const this,
        google::protobuf::Arena *arena)
{
  proto_log::OrderLogBodyFinish *v2; // rbx

  v2 = (proto_log::OrderLogBodyFinish *)operator new(0x28uLL);
  proto_log::OrderLogBodyFinish::OrderLogBodyFinish(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::OrderLogBodyFinish>(arena, v2);
  return v2;
};

// Line 1737: range 000000001742F3F4-000000001742F481
void __cdecl proto_log::OrderLogBodyFinish::Clear(proto_log::OrderLogBodyFinish *const this)
{
  memset(&this->order_id_, 0, 0xDuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1750: range 000000001742F482-000000001742FE73
bool __cdecl proto_log::OrderLogBodyFinish::MergePartialFromCodedStream(
        proto_log::OrderLogBodyFinish *const this,
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
  int TagFieldNumber; // eax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1755";
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyFinish::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
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
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 4 )
      {
        if ( (_BYTE)tag != 32 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                input,
                &this->is_retry_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 4 )
          break;
        if ( TagFieldNumber == 3 )
        {
          if ( (_BYTE)tag != 24 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->finish_time_) )
            goto failure;
        }
        else if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->order_id_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->uid_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_60;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_60:
  if ( v19 == (char *)v2 )
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

// Line 1836: range 000000001742FE74-0000000017430058
void __cdecl proto_log::OrderLogBodyFinish::SerializeWithCachedSizes(
        const proto_log::OrderLogBodyFinish *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  bool is_retry; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::OrderLogBodyFinish::order_id(this) )
  {
    v2 = proto_log::OrderLogBodyFinish::order_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::OrderLogBodyFinish::uid(this) )
  {
    v3 = proto_log::OrderLogBodyFinish::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::OrderLogBodyFinish::finish_time(this) )
  {
    v4 = proto_log::OrderLogBodyFinish::finish_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::OrderLogBodyFinish::is_retry(this) )
  {
    is_retry = proto_log::OrderLogBodyFinish::is_retry(this);
    google::protobuf::internal::WireFormatLite::WriteBool(4, is_retry, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_21:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v7->unknown_fields, output);
  }
};

// Line 1869: range 000000001743005A-000000001743025A
google::protobuf::uint8 *__cdecl proto_log::OrderLogBodyFinish::InternalSerializeWithCachedSizesToArray(
        const proto_log::OrderLogBodyFinish *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  bool is_retry; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::OrderLogBodyFinish::order_id(this) )
  {
    v3 = proto_log::OrderLogBodyFinish::order_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::OrderLogBodyFinish::uid(this) )
  {
    v4 = proto_log::OrderLogBodyFinish::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::OrderLogBodyFinish::finish_time(this) )
  {
    v5 = proto_log::OrderLogBodyFinish::finish_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::OrderLogBodyFinish::is_retry(this) )
  {
    is_retry = proto_log::OrderLogBodyFinish::is_retry(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, is_retry, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_21:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v8->unknown_fields, target);
  }
  return target;
};

// Line 1903: range 000000001743025C-000000001743045D
size_t __cdecl proto_log::OrderLogBodyFinish::ByteSizeLong(const proto_log::OrderLogBodyFinish *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
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
  if ( proto_log::OrderLogBodyFinish::order_id(this) )
  {
    v3 = proto_log::OrderLogBodyFinish::order_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::OrderLogBodyFinish::uid(this) )
  {
    v4 = proto_log::OrderLogBodyFinish::uid(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::OrderLogBodyFinish::finish_time(this) )
  {
    v5 = proto_log::OrderLogBodyFinish::finish_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::OrderLogBodyFinish::is_retry(this) )
    total_size += 2LL;
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 1945: range 000000001743045E-00000000174306E7
void __cdecl proto_log::OrderLogBodyFinish::MergeFrom(
        proto_log::OrderLogBodyFinish *const this,
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
  const proto_log::OrderLogBodyFinish *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyFinish::MergeFrom;
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
      "./src/server_only/log/order/order_body.pb.cc",
      1947);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::OrderLogBodyFinish const>(from);
  if ( source )
    proto_log::OrderLogBodyFinish::MergeFrom(this, source);
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

// Line 1960: range 00000000174306E8-0000000017430B31
void __cdecl proto_log::OrderLogBodyFinish::MergeFrom(
        proto_log::OrderLogBodyFinish *const this,
        const proto_log::OrderLogBodyFinish *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx
  bool is_retry; // dl
  char v14; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v16[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogBodyFinish::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v14 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/order/order_body.pb.cc",
      1962);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v14 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v14 )
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
  if ( proto_log::OrderLogBodyFinish::order_id(from) )
  {
    v10 = proto_log::OrderLogBodyFinish::order_id(from);
    proto_log::OrderLogBodyFinish::set_order_id(this, v10);
  }
  if ( proto_log::OrderLogBodyFinish::uid(from) )
  {
    v11 = proto_log::OrderLogBodyFinish::uid(from);
    proto_log::OrderLogBodyFinish::set_uid(this, v11);
  }
  if ( proto_log::OrderLogBodyFinish::finish_time(from) )
  {
    v12 = proto_log::OrderLogBodyFinish::finish_time(from);
    proto_log::OrderLogBodyFinish::set_finish_time(this, v12);
  }
  if ( proto_log::OrderLogBodyFinish::is_retry(from) )
  {
    is_retry = proto_log::OrderLogBodyFinish::is_retry(from);
    proto_log::OrderLogBodyFinish::set_is_retry(this, is_retry);
  }
  if ( v16 == (char *)v2 )
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

// Line 1981: range 0000000017430B32-0000000017430B6F
void __cdecl proto_log::OrderLogBodyFinish::CopyFrom(
        proto_log::OrderLogBodyFinish *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::OrderLogBodyFinish::Clear(this);
    proto_log::OrderLogBodyFinish::MergeFrom(this, from);
  }
};

// Line 1988: range 0000000017430B70-0000000017430BAD
void __cdecl proto_log::OrderLogBodyFinish::CopyFrom(
        proto_log::OrderLogBodyFinish *const this,
        const proto_log::OrderLogBodyFinish *from)
{
  if ( from != this )
  {
    proto_log::OrderLogBodyFinish::Clear(this);
    proto_log::OrderLogBodyFinish::MergeFrom(this, from);
  }
};

// Line 1995: range 0000000017430BAE-0000000017430BBC
bool __cdecl proto_log::OrderLogBodyFinish::IsInitialized(const proto_log::OrderLogBodyFinish *const this)
{
  return 1;
};

// Line 1999: range 0000000017430BBE-0000000017430BEF
void __cdecl proto_log::OrderLogBodyFinish::Swap(
        proto_log::OrderLogBodyFinish *const this,
        proto_log::OrderLogBodyFinish *other)
{
  if ( other != this )
    proto_log::OrderLogBodyFinish::InternalSwap(this, other);
};

// Line 2003: range 0000000017430BF0-0000000017430DC5
void __cdecl proto_log::OrderLogBodyFinish::InternalSwap(
        proto_log::OrderLogBodyFinish *const this,
        proto_log::OrderLogBodyFinish *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->order_id_, &other->order_id_);
  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned int>(&this->finish_time_, &other->finish_time_);
  std::swap<bool>(&this->is_retry_, &other->is_retry_);
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

// Line 2013: range 0000000017430DC6-0000000017430DE6
google::protobuf::Metadata __cdecl proto_log::OrderLogBodyFinish::GetMetadata(
        const proto_log::OrderLogBodyFinish *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1];
};
