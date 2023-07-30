// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_head.pb.h

// Line 87: range 0000000017925F02-0000000017925F0E
const proto_log::PlayerLogHead *__cdecl proto_log::PlayerLogHead::internal_default_instance()
{
  return (const proto_log::PlayerLogHead *)&proto_log::_PlayerLogHead_default_instance_;
};

// Line 101: range 0000000017925F10-0000000017925F2E
proto_log::PlayerLogHead *__cdecl proto_log::PlayerLogHead::New(const proto_log::PlayerLogHead *const this)
{
  return proto_log::PlayerLogHead::New(this, 0LL);
};

// Line 118: range 0000000017925F30-0000000017925F7C
int __cdecl proto_log::PlayerLogHead::GetCachedSize(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 344: range 0000000017925F7E-0000000017925F9B
const std::string *__cdecl proto_log::PlayerLogHead::time[abi:cxx11](const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 373: range 0000000017925F9C-0000000017925FC7
std::string *__cdecl proto_log::PlayerLogHead::mutable_time[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 397: range 0000000017925FC8-000000001792600F
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::action_id(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 401: range 0000000017926010-000000001792605E
void __cdecl proto_log::PlayerLogHead::set_action_id(
        proto_log::PlayerLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 411: range 0000000017926060-000000001792607D
const std::string *__cdecl proto_log::PlayerLogHead::action_name[abi:cxx11](const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 440: range 000000001792607E-00000000179260A9
std::string *__cdecl proto_log::PlayerLogHead::mutable_action_name[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 464: range 00000000179260AA-00000000179260F9
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::sub_action_id(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_action_id_);
  }
  return this->sub_action_id_;
};

// Line 468: range 00000000179260FA-0000000017926150
void __cdecl proto_log::PlayerLogHead::set_sub_action_id(
        proto_log::PlayerLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_action_id_);
  }
  this->sub_action_id_ = value;
};

// Line 478: range 0000000017926152-000000001792616F
const std::string *__cdecl proto_log::PlayerLogHead::sub_action_name[abi:cxx11](
        const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sub_action_name_);
};

// Line 507: range 0000000017926170-000000001792619B
std::string *__cdecl proto_log::PlayerLogHead::mutable_sub_action_name[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sub_action_name_, v1);
};

// Line 531: range 000000001792619C-00000000179261B9
const std::string *__cdecl proto_log::PlayerLogHead::region_name[abi:cxx11](const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->region_name_);
};

// Line 560: range 00000000179261BA-00000000179261E5
std::string *__cdecl proto_log::PlayerLogHead::mutable_region_name[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->region_name_, v1);
};

// Line 584: range 00000000179261E6-0000000017926203
const std::string *__cdecl proto_log::PlayerLogHead::game_version[abi:cxx11](
        const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->game_version_);
};

// Line 613: range 0000000017926204-000000001792622F
std::string *__cdecl proto_log::PlayerLogHead::mutable_game_version[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->game_version_, v1);
};

// Line 637: range 0000000017926230-0000000017926277
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::uid(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 641: range 0000000017926278-00000000179262C6
void __cdecl proto_log::PlayerLogHead::set_uid(proto_log::PlayerLogHead *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 651: range 00000000179262C8-0000000017926317
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::level(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 655: range 0000000017926318-000000001792636E
void __cdecl proto_log::PlayerLogHead::set_level(proto_log::PlayerLogHead *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = value;
};

// Line 665: range 0000000017926370-00000000179263AA
google::protobuf::uint64 __cdecl proto_log::PlayerLogHead::vip_point(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->vip_point_);
  return this->vip_point_;
};

// Line 669: range 00000000179263AC-00000000179263EF
void __cdecl proto_log::PlayerLogHead::set_vip_point(
        proto_log::PlayerLogHead *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->vip_point_ = value;
};

// Line 679: range 00000000179263F0-0000000017926437
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::vip_level(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->vip_level_);
  }
  return this->vip_level_;
};

// Line 683: range 0000000017926438-0000000017926486
void __cdecl proto_log::PlayerLogHead::set_vip_level(
        proto_log::PlayerLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_level_);
  }
  this->vip_level_ = value;
};

// Line 693: range 0000000017926488-00000000179264D7
google::protobuf::uint32 __cdecl proto_log::PlayerLogHead::account_type(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->account_type_);
  }
  return this->account_type_;
};

// Line 697: range 00000000179264D8-000000001792652E
void __cdecl proto_log::PlayerLogHead::set_account_type(
        proto_log::PlayerLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->account_type_);
  }
  this->account_type_ = value;
};

// Line 707: range 0000000017926530-000000001792656A
google::protobuf::uint64 __cdecl proto_log::PlayerLogHead::tag(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->tag_);
  return this->tag_;
};

// Line 711: range 000000001792656C-00000000179265AF
void __cdecl proto_log::PlayerLogHead::set_tag(proto_log::PlayerLogHead *const this, google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->tag_ = value;
};

// Line 721: range 00000000179265B0-00000000179265CD
const std::string *__cdecl proto_log::PlayerLogHead::trans_no[abi:cxx11](const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->trans_no_);
};

// Line 750: range 00000000179265CE-00000000179265F9
std::string *__cdecl proto_log::PlayerLogHead::mutable_trans_no[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->trans_no_, v1);
};

// Line 774: range 00000000179265FA-0000000017926634
google::protobuf::int64 __cdecl proto_log::PlayerLogHead::coin_1(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_1_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->coin_1_);
  return this->coin_1_;
};

// Line 778: range 0000000017926636-0000000017926679
void __cdecl proto_log::PlayerLogHead::set_coin_1(proto_log::PlayerLogHead *const this, google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_1_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->coin_1_ = value;
};

// Line 788: range 000000001792667A-00000000179266B4
google::protobuf::int64 __cdecl proto_log::PlayerLogHead::coin_2(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_2_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->coin_2_);
  return this->coin_2_;
};

// Line 792: range 00000000179266B6-00000000179266F9
void __cdecl proto_log::PlayerLogHead::set_coin_2(proto_log::PlayerLogHead *const this, google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_2_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->coin_2_ = value;
};

// Line 802: range 00000000179266FA-0000000017926737
google::protobuf::int64 __cdecl proto_log::PlayerLogHead::coin_3(const proto_log::PlayerLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->coin_3_);
  return this->coin_3_;
};

// Line 806: range 0000000017926738-000000001792677E
void __cdecl proto_log::PlayerLogHead::set_coin_3(proto_log::PlayerLogHead *const this, google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->coin_3_ = value;
};

// Line 816: range 0000000017926780-000000001792679D
const std::string *__cdecl proto_log::PlayerLogHead::uuid[abi:cxx11](const proto_log::PlayerLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->uuid_);
};

// Line 845: range 000000001792679E-00000000179267C9
std::string *__cdecl proto_log::PlayerLogHead::mutable_uuid[abi:cxx11](proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->uuid_, v1);
};
