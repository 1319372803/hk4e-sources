// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/match/match_body.pb.h

// Line 101: range 00000000178BB9C0-00000000178BB9DE
proto_log::MatchLogBodyJoinTeam *__cdecl proto_log::MatchLogBodyJoinTeam::New(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  return proto_log::MatchLogBodyJoinTeam::New(this, 0LL);
};

// Line 118: range 00000000178BB9E0-00000000178BBA27
int __cdecl proto_log::MatchLogBodyJoinTeam::GetCachedSize(const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 211: range 00000000178BBA28-00000000178BBA77
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::host_uid(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->host_uid_);
  }
  return this->host_uid_;
};

// Line 215: range 00000000178BBA78-00000000178BBACE
void __cdecl proto_log::MatchLogBodyJoinTeam::set_host_uid(
        proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->host_uid_);
  }
  this->host_uid_ = value;
};

// Line 225: range 00000000178BBAD0-00000000178BBB17
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::guest_uid(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->guest_uid_);
  }
  return this->guest_uid_;
};

// Line 229: range 00000000178BBB18-00000000178BBB66
void __cdecl proto_log::MatchLogBodyJoinTeam::set_guest_uid(
        proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guest_uid_);
  }
  this->guest_uid_ = value;
};

// Line 239: range 00000000178BBB68-00000000178BBBB7
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::cost_time(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cost_time_);
  }
  return this->cost_time_;
};

// Line 243: range 00000000178BBBB8-00000000178BBC0E
void __cdecl proto_log::MatchLogBodyJoinTeam::set_cost_time(
        proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_time_);
  }
  this->cost_time_ = value;
};

// Line 250: range 00000000178BBC10-00000000178BBC2D
int __cdecl proto_log::MatchLogBodyJoinTeam::uid_list_size(const proto_log::MatchLogBodyJoinTeam *const this)
{
  return google::protobuf::RepeatedField<unsigned int>::size(&this->uid_list_);
};

// Line 256: range 00000000178BBC2E-00000000178BBC8F
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::uid_list(
        const proto_log::MatchLogBodyJoinTeam *const this,
        int index)
{
  google::protobuf::uint32 *v2; // rax
  google::protobuf::uint32 *v3; // rdx

  v2 = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::Get(&this->uid_list_, index);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 274: range 00000000178BBC90-00000000178BBCA1
google::protobuf::RepeatedField<unsigned int> *__cdecl proto_log::MatchLogBodyJoinTeam::mutable_uid_list(
        proto_log::MatchLogBodyJoinTeam *const this)
{
  return &this->uid_list_;
};

// Line 283: range 00000000178BBCA2-00000000178BBCE9
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::match_type(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_type_);
  }
  return this->match_type_;
};

// Line 287: range 00000000178BBCEA-00000000178BBD38
void __cdecl proto_log::MatchLogBodyJoinTeam::set_match_type(
        proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type_);
  }
  this->match_type_ = value;
};

// Line 297: range 00000000178BBD3A-00000000178BBD89
google::protobuf::uint32 __cdecl proto_log::MatchLogBodyJoinTeam::match_target(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_target_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_target_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_target_);
  }
  return this->match_target_;
};

// Line 301: range 00000000178BBD8A-00000000178BBDE0
void __cdecl proto_log::MatchLogBodyJoinTeam::set_match_target(
        proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_target_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_target_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_target_);
  }
  this->match_target_ = value;
};

// Line 1912: range 00000000178BB9B3-00000000178BB9BF
const proto_log::MatchLogBodyJoinTeam *__cdecl proto_log::MatchLogBodyJoinTeam::internal_default_instance()
{
  return (const proto_log::MatchLogBodyJoinTeam *)&proto_log::_MatchLogBodyJoinTeam_default_instance_;
};
