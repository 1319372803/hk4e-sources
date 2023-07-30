// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/match/match_head.pb.h

// Line 87: range 00000000178BBDF6-00000000178BBE02
const proto_log::MatchLogHead *__cdecl proto_log::MatchLogHead::internal_default_instance()
{
  return (const proto_log::MatchLogHead *)&proto_log::_MatchLogHead_default_instance_;
};

// Line 101: range 00000000178BBE04-00000000178BBE22
proto_log::MatchLogHead *__cdecl proto_log::MatchLogHead::New(const proto_log::MatchLogHead *const this)
{
  return proto_log::MatchLogHead::New(this, 0LL);
};

// Line 118: range 00000000178BBE24-00000000178BBE6B
int __cdecl proto_log::MatchLogHead::GetCachedSize(const proto_log::MatchLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 221: range 00000000178BBE6C-00000000178BBE89
const std::string *__cdecl proto_log::MatchLogHead::time[abi:cxx11](const proto_log::MatchLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 250: range 00000000178BBE8A-00000000178BBEB5
std::string *__cdecl proto_log::MatchLogHead::mutable_time[abi:cxx11](proto_log::MatchLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 274: range 00000000178BBEB6-00000000178BBEFD
google::protobuf::uint32 __cdecl proto_log::MatchLogHead::action_id(const proto_log::MatchLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 278: range 00000000178BBEFE-00000000178BBF4C
void __cdecl proto_log::MatchLogHead::set_action_id(
        proto_log::MatchLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 288: range 00000000178BBF4E-00000000178BBF6B
const std::string *__cdecl proto_log::MatchLogHead::action_name[abi:cxx11](const proto_log::MatchLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 317: range 00000000178BBF6C-00000000178BBF97
std::string *__cdecl proto_log::MatchLogHead::mutable_action_name[abi:cxx11](proto_log::MatchLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 341: range 00000000178BBF98-00000000178BBFE7
google::protobuf::uint32 __cdecl proto_log::MatchLogHead::sub_action_id(const proto_log::MatchLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_action_id_);
  }
  return this->sub_action_id_;
};

// Line 345: range 00000000178BBFE8-00000000178BC03E
void __cdecl proto_log::MatchLogHead::set_sub_action_id(
        proto_log::MatchLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_action_id_);
  }
  this->sub_action_id_ = value;
};

// Line 355: range 00000000178BC040-00000000178BC05D
const std::string *__cdecl proto_log::MatchLogHead::sub_action_name[abi:cxx11](
        const proto_log::MatchLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sub_action_name_);
};

// Line 384: range 00000000178BC05E-00000000178BC089
std::string *__cdecl proto_log::MatchLogHead::mutable_sub_action_name[abi:cxx11](proto_log::MatchLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sub_action_name_, v1);
};
