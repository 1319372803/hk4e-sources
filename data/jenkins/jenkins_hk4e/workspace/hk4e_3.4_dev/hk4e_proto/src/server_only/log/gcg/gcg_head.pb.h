// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/gcg/gcg_head.pb.h

// Line 87: range 00000000160E0392-00000000160E039E
const proto_log::GCGLogHead *__cdecl proto_log::GCGLogHead::internal_default_instance()
{
  return (const proto_log::GCGLogHead *)&proto_log::_GCGLogHead_default_instance_;
};

// Line 101: range 00000000160E03A0-00000000160E03BE
proto_log::GCGLogHead *__cdecl proto_log::GCGLogHead::New(const proto_log::GCGLogHead *const this)
{
  return proto_log::GCGLogHead::New(this, 0LL);
};

// Line 118: range 00000000160E03C0-00000000160E0407
int __cdecl proto_log::GCGLogHead::GetCachedSize(const proto_log::GCGLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 236: range 00000000160E0408-00000000160E0425
const std::string *__cdecl proto_log::GCGLogHead::time[abi:cxx11](const proto_log::GCGLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 265: range 00000000160E0426-00000000160E0451
std::string *__cdecl proto_log::GCGLogHead::mutable_time[abi:cxx11](proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 289: range 00000000160E0452-00000000160E046F
const std::string *__cdecl proto_log::GCGLogHead::trans_no[abi:cxx11](const proto_log::GCGLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->trans_no_);
};

// Line 318: range 00000000160E0470-00000000160E049B
std::string *__cdecl proto_log::GCGLogHead::mutable_trans_no[abi:cxx11](proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->trans_no_, v1);
};

// Line 342: range 00000000160E049C-00000000160E04E3
google::protobuf::uint32 __cdecl proto_log::GCGLogHead::action_id(const proto_log::GCGLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 346: range 00000000160E04E4-00000000160E0532
void __cdecl proto_log::GCGLogHead::set_action_id(proto_log::GCGLogHead *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 356: range 00000000160E0534-00000000160E0551
const std::string *__cdecl proto_log::GCGLogHead::action_name[abi:cxx11](const proto_log::GCGLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 385: range 00000000160E0552-00000000160E057D
std::string *__cdecl proto_log::GCGLogHead::mutable_action_name[abi:cxx11](proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 409: range 00000000160E057E-00000000160E05CD
google::protobuf::uint32 __cdecl proto_log::GCGLogHead::sub_action_id(const proto_log::GCGLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_action_id_);
  }
  return this->sub_action_id_;
};

// Line 413: range 00000000160E05CE-00000000160E0624
void __cdecl proto_log::GCGLogHead::set_sub_action_id(
        proto_log::GCGLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_action_id_);
  }
  this->sub_action_id_ = value;
};

// Line 423: range 00000000160E0626-00000000160E0643
const std::string *__cdecl proto_log::GCGLogHead::sub_action_name[abi:cxx11](const proto_log::GCGLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sub_action_name_);
};

// Line 452: range 00000000160E0644-00000000160E066F
std::string *__cdecl proto_log::GCGLogHead::mutable_sub_action_name[abi:cxx11](proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sub_action_name_, v1);
};
