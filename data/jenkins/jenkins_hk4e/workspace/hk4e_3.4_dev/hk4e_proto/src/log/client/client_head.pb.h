// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/log/client/client_head.pb.h

// Line 87: range 0000000018E4CD3E-0000000018E4CD4A
const proto_log::ClientLogHead *__cdecl proto_log::ClientLogHead::internal_default_instance()
{
  return (const proto_log::ClientLogHead *)&proto_log::_ClientLogHead_default_instance_;
};

// Line 101: range 0000000018E4CD4C-0000000018E4CD6A
proto_log::ClientLogHead *__cdecl proto_log::ClientLogHead::New(const proto_log::ClientLogHead *const this)
{
  return proto_log::ClientLogHead::New(this, 0LL);
};

// Line 118: range 0000000018E4CD6C-0000000018E4CDBB
int __cdecl proto_log::ClientLogHead::GetCachedSize(const proto_log::ClientLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 364: range 0000000018E4CDBC-0000000018E4CDD9
const std::string *__cdecl proto_log::ClientLogHead::event_time[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->event_time_);
};

// Line 393: range 0000000018E4CDDA-0000000018E4CE05
std::string *__cdecl proto_log::ClientLogHead::mutable_event_time[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->event_time_, v1);
};

// Line 417: range 0000000018E4CE06-0000000018E4CE23
const std::string *__cdecl proto_log::ClientLogHead::log_serial_number[abi:cxx11](
        const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->log_serial_number_);
};

// Line 446: range 0000000018E4CE24-0000000018E4CE4F
std::string *__cdecl proto_log::ClientLogHead::mutable_log_serial_number[abi:cxx11](
        proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->log_serial_number_, v1);
};

// Line 470: range 0000000018E4CE50-0000000018E4CE97
google::protobuf::uint32 __cdecl proto_log::ClientLogHead::action_id(const proto_log::ClientLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 474: range 0000000018E4CE98-0000000018E4CEE6
void __cdecl proto_log::ClientLogHead::set_action_id(
        proto_log::ClientLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 484: range 0000000018E4CEE8-0000000018E4CF05
const std::string *__cdecl proto_log::ClientLogHead::action_name[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 513: range 0000000018E4CF06-0000000018E4CF31
std::string *__cdecl proto_log::ClientLogHead::mutable_action_name[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 537: range 0000000018E4CF32-0000000018E4CF4F
const std::string *__cdecl proto_log::ClientLogHead::upload_ip[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->upload_ip_);
};

// Line 566: range 0000000018E4CF50-0000000018E4CF7B
std::string *__cdecl proto_log::ClientLogHead::mutable_upload_ip[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->upload_ip_, v1);
};

// Line 590: range 0000000018E4CF7C-0000000018E4CF99
const std::string *__cdecl proto_log::ClientLogHead::product_id[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->product_id_);
};

// Line 619: range 0000000018E4CF9A-0000000018E4CFC5
std::string *__cdecl proto_log::ClientLogHead::mutable_product_id[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->product_id_, v1);
};

// Line 643: range 0000000018E4CFC6-0000000018E4CFE3
const std::string *__cdecl proto_log::ClientLogHead::channel_id[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->channel_id_);
};

// Line 672: range 0000000018E4CFE4-0000000018E4D00F
std::string *__cdecl proto_log::ClientLogHead::mutable_channel_id[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->channel_id_, v1);
};

// Line 696: range 0000000018E4D010-0000000018E4D02D
const std::string *__cdecl proto_log::ClientLogHead::region_name[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->region_name_);
};

// Line 725: range 0000000018E4D02E-0000000018E4D059
std::string *__cdecl proto_log::ClientLogHead::mutable_region_name[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->region_name_, v1);
};

// Line 749: range 0000000018E4D05A-0000000018E4D077
const std::string *__cdecl proto_log::ClientLogHead::game_version[abi:cxx11](
        const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->game_version_);
};

// Line 778: range 0000000018E4D078-0000000018E4D0A3
std::string *__cdecl proto_log::ClientLogHead::mutable_game_version[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->game_version_, v1);
};

// Line 802: range 0000000018E4D0A4-0000000018E4D0C1
const std::string *__cdecl proto_log::ClientLogHead::device_type[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_type_);
};

// Line 831: range 0000000018E4D0C2-0000000018E4D0ED
std::string *__cdecl proto_log::ClientLogHead::mutable_device_type[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_type_, v1);
};

// Line 855: range 0000000018E4D0EE-0000000018E4D10B
const std::string *__cdecl proto_log::ClientLogHead::device_uuid[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_uuid_);
};

// Line 884: range 0000000018E4D10C-0000000018E4D137
std::string *__cdecl proto_log::ClientLogHead::mutable_device_uuid[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_uuid_, v1);
};

// Line 908: range 0000000018E4D138-0000000018E4D155
const std::string *__cdecl proto_log::ClientLogHead::mac_addr[abi:cxx11](const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->mac_addr_);
};

// Line 937: range 0000000018E4D156-0000000018E4D181
std::string *__cdecl proto_log::ClientLogHead::mutable_mac_addr[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->mac_addr_, v1);
};

// Line 961: range 0000000018E4D182-0000000018E4D19F
const std::string *__cdecl proto_log::ClientLogHead::account_name[abi:cxx11](
        const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->account_name_);
};

// Line 990: range 0000000018E4D1A0-0000000018E4D1CB
std::string *__cdecl proto_log::ClientLogHead::mutable_account_name[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->account_name_, v1);
};

// Line 1014: range 0000000018E4D1CC-0000000018E4D1E9
const std::string *__cdecl proto_log::ClientLogHead::account_uuid[abi:cxx11](
        const proto_log::ClientLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->account_uuid_);
};

// Line 1043: range 0000000018E4D1EA-0000000018E4D215
std::string *__cdecl proto_log::ClientLogHead::mutable_account_uuid[abi:cxx11](proto_log::ClientLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->account_uuid_, v1);
};
