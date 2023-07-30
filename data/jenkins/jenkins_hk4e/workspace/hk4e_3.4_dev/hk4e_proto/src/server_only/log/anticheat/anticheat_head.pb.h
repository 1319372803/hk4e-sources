// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/anticheat/anticheat_head.pb.h

// Line 48: range 00000000160DE747-00000000160DE753
const proto_log::AntiCheatLogHead *__cdecl proto_log::AntiCheatLogHead::internal_default_instance()
{
  return (const proto_log::AntiCheatLogHead *)&proto_log::_AntiCheatLogHead_default_instance_;
};

// Line 101: range 00000000160DE754-00000000160DE772
proto_log::AntiCheatLogHead *__cdecl proto_log::AntiCheatLogHead::New(const proto_log::AntiCheatLogHead *const this)
{
  return proto_log::AntiCheatLogHead::New(this, 0LL);
};

// Line 118: range 00000000160DE774-00000000160DE7C3
int __cdecl proto_log::AntiCheatLogHead::GetCachedSize(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 277: range 00000000160DE7C4-00000000160DE7E1
const std::string *__cdecl proto_log::AntiCheatLogHead::time[abi:cxx11](const proto_log::AntiCheatLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 306: range 00000000160DE7E2-00000000160DE80D
std::string *__cdecl proto_log::AntiCheatLogHead::mutable_time[abi:cxx11](proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 330: range 00000000160DE80E-00000000160DE855
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::action_id(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 334: range 00000000160DE856-00000000160DE8A4
void __cdecl proto_log::AntiCheatLogHead::set_action_id(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 344: range 00000000160DE8A6-00000000160DE8C3
const std::string *__cdecl proto_log::AntiCheatLogHead::region_name[abi:cxx11](
        const proto_log::AntiCheatLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->region_name_);
};

// Line 373: range 00000000160DE8C4-00000000160DE8EF
std::string *__cdecl proto_log::AntiCheatLogHead::mutable_region_name[abi:cxx11](
        proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->region_name_, v1);
};

// Line 397: range 00000000160DE8F0-00000000160DE90D
const std::string *__cdecl proto_log::AntiCheatLogHead::game_version[abi:cxx11](
        const proto_log::AntiCheatLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->game_version_);
};

// Line 426: range 00000000160DE90E-00000000160DE939
std::string *__cdecl proto_log::AntiCheatLogHead::mutable_game_version[abi:cxx11](
        proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->game_version_, v1);
};

// Line 450: range 00000000160DE93A-00000000160DE989
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::uid(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 454: range 00000000160DE98A-00000000160DE9E0
void __cdecl proto_log::AntiCheatLogHead::set_uid(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 464: range 00000000160DE9E2-00000000160DEA29
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::level(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 468: range 00000000160DEA2A-00000000160DEA78
void __cdecl proto_log::AntiCheatLogHead::set_level(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = value;
};

// Line 478: range 00000000160DEA7A-00000000160DEAB4
google::protobuf::uint64 __cdecl proto_log::AntiCheatLogHead::vip_point(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->vip_point_);
  return this->vip_point_;
};

// Line 482: range 00000000160DEAB6-00000000160DEAF9
void __cdecl proto_log::AntiCheatLogHead::set_vip_point(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->vip_point_ = value;
};

// Line 492: range 00000000160DEAFA-00000000160DEB49
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::vip_level(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vip_level_);
  }
  return this->vip_level_;
};

// Line 496: range 00000000160DEB4A-00000000160DEBA0
void __cdecl proto_log::AntiCheatLogHead::set_vip_level(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vip_level_);
  }
  this->vip_level_ = value;
};

// Line 506: range 00000000160DEBA2-00000000160DEBEA
bool __cdecl proto_log::AntiCheatLogHead::is_in_mp(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_);
  return this->is_in_mp_;
};

// Line 510: range 00000000160DEBEC-00000000160DEC3D
void __cdecl proto_log::AntiCheatLogHead::set_is_in_mp(proto_log::AntiCheatLogHead *const this, bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_mp_);
  this->is_in_mp_ = value;
};

// Line 517: range 00000000160DEC3E-00000000160DEC5B
int __cdecl proto_log::AntiCheatLogHead::mp_teammate_list_size(const proto_log::AntiCheatLogHead *const this)
{
  return google::protobuf::RepeatedField<unsigned int>::size(&this->mp_teammate_list_);
};

// Line 523: range 00000000160DEC5C-00000000160DECBD
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::mp_teammate_list(
        const proto_log::AntiCheatLogHead *const this,
        int index)
{
  google::protobuf::uint32 *v2; // rax
  google::protobuf::uint32 *v3; // rdx

  v2 = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::Get(&this->mp_teammate_list_, index);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 541: range 00000000160DECBE-00000000160DECCF
google::protobuf::RepeatedField<unsigned int> *__cdecl proto_log::AntiCheatLogHead::mutable_mp_teammate_list(
        proto_log::AntiCheatLogHead *const this)
{
  return &this->mp_teammate_list_;
};

// Line 550: range 00000000160DECD0-00000000160DED1F
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::scene_id(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_id_);
  }
  return this->scene_id_;
};

// Line 554: range 00000000160DED20-00000000160DED76
void __cdecl proto_log::AntiCheatLogHead::set_scene_id(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id_);
  }
  this->scene_id_ = value;
};

// Line 564: range 00000000160DED78-00000000160DEDBF
google::protobuf::uint32 __cdecl proto_log::AntiCheatLogHead::tag(const proto_log::AntiCheatLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tag_);
  }
  return this->tag_;
};

// Line 568: range 00000000160DEDC0-00000000160DEE0E
void __cdecl proto_log::AntiCheatLogHead::set_tag(
        proto_log::AntiCheatLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag_);
  }
  this->tag_ = value;
};
