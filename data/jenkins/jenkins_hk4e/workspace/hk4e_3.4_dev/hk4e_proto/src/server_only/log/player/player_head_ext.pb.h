// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_head_ext.pb.h

// Line 87: range 00000000179267DE-00000000179267EA
const proto_log::PlayerLogHeadExt *__cdecl proto_log::PlayerLogHeadExt::internal_default_instance()
{
  return (const proto_log::PlayerLogHeadExt *)&proto_log::_PlayerLogHeadExt_default_instance_;
};

// Line 101: range 00000000179267EC-000000001792680A
proto_log::PlayerLogHeadExt *__cdecl proto_log::PlayerLogHeadExt::New(const proto_log::PlayerLogHeadExt *const this)
{
  return proto_log::PlayerLogHeadExt::New(this, 0LL);
};

// Line 118: range 000000001792680C-0000000017926860
int __cdecl proto_log::PlayerLogHeadExt::GetCachedSize(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 382: range 0000000017926862-00000000179268A9
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::avatar_id(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 386: range 00000000179268AA-00000000179268F8
void __cdecl proto_log::PlayerLogHeadExt::set_avatar_id(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 396: range 00000000179268FA-0000000017926949
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::scene_id(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_id_);
  }
  return this->scene_id_;
};

// Line 400: range 000000001792694A-00000000179269A0
void __cdecl proto_log::PlayerLogHeadExt::set_scene_id(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id_);
  }
  this->scene_id_ = value;
};

// Line 410: range 00000000179269A2-00000000179269E9
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::world_owner_uid(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->world_owner_uid_);
  }
  return this->world_owner_uid_;
};

// Line 414: range 00000000179269EA-0000000017926A38
void __cdecl proto_log::PlayerLogHeadExt::set_world_owner_uid(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_owner_uid_);
  }
  this->world_owner_uid_ = value;
};

// Line 424: range 0000000017926A3A-0000000017926A89
google::protobuf::int32 __cdecl proto_log::PlayerLogHeadExt::x_coordinate(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->x_coordinate_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->x_coordinate_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->x_coordinate_);
  }
  return this->x_coordinate_;
};

// Line 428: range 0000000017926A8A-0000000017926AE0
void __cdecl proto_log::PlayerLogHeadExt::set_x_coordinate(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->x_coordinate_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->x_coordinate_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->x_coordinate_);
  }
  this->x_coordinate_ = value;
};

// Line 438: range 0000000017926AE2-0000000017926B29
google::protobuf::int32 __cdecl proto_log::PlayerLogHeadExt::y_coordinate(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_coordinate_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->y_coordinate_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->y_coordinate_);
  }
  return this->y_coordinate_;
};

// Line 442: range 0000000017926B2A-0000000017926B78
void __cdecl proto_log::PlayerLogHeadExt::set_y_coordinate(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_coordinate_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->y_coordinate_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->y_coordinate_);
  }
  this->y_coordinate_ = value;
};

// Line 452: range 0000000017926B7A-0000000017926BC9
google::protobuf::int32 __cdecl proto_log::PlayerLogHeadExt::z_coordinate(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->z_coordinate_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z_coordinate_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z_coordinate_);
  }
  return this->z_coordinate_;
};

// Line 456: range 0000000017926BCA-0000000017926C20
void __cdecl proto_log::PlayerLogHeadExt::set_z_coordinate(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->z_coordinate_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z_coordinate_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z_coordinate_);
  }
  this->z_coordinate_ = value;
};

// Line 466: range 0000000017926C22-0000000017926C69
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::player_time(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->player_time_);
  }
  return this->player_time_;
};

// Line 470: range 0000000017926C6A-0000000017926CB8
void __cdecl proto_log::PlayerLogHeadExt::set_player_time(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_time_);
  }
  this->player_time_ = value;
};

// Line 480: range 0000000017926CBA-0000000017926D09
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::login_time(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->login_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->login_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->login_time_);
  }
  return this->login_time_;
};

// Line 484: range 0000000017926D0A-0000000017926D60
void __cdecl proto_log::PlayerLogHeadExt::set_login_time(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->login_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->login_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->login_time_);
  }
  this->login_time_ = value;
};

// Line 494: range 0000000017926D62-0000000017926DA9
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::platform_type(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->platform_type_);
  }
  return this->platform_type_;
};

// Line 498: range 0000000017926DAA-0000000017926DF8
void __cdecl proto_log::PlayerLogHeadExt::set_platform_type(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type_);
  }
  this->platform_type_ = value;
};

// Line 508: range 0000000017926DFA-0000000017926E49
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::weather(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weather_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->weather_);
  }
  return this->weather_;
};

// Line 512: range 0000000017926E4A-0000000017926EA0
void __cdecl proto_log::PlayerLogHeadExt::set_weather(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weather_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weather_);
  }
  this->weather_ = value;
};

// Line 519: range 0000000017926EA2-0000000017926EBF
int __cdecl proto_log::PlayerLogHeadExt::sub_action_list_size(const proto_log::PlayerLogHeadExt *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::size(&this->sub_action_list_);
};

// Line 525: range 0000000017926EC0-0000000017926EE5
const std::string *__cdecl proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](
        const proto_log::PlayerLogHeadExt *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<std::string>::Get(&this->sub_action_list_, index);
};

// Line 553: range 0000000017926EE6-0000000017926F03
std::string *__cdecl proto_log::PlayerLogHeadExt::add_sub_action_list[abi:cxx11](
        proto_log::PlayerLogHeadExt *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::Add(&this->sub_action_list_);
};

// Line 591: range 0000000017926F04-0000000017926F4B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::unpaused_time(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unpaused_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unpaused_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->unpaused_time_);
  }
  return this->unpaused_time_;
};

// Line 595: range 0000000017926F4C-0000000017926F9A
void __cdecl proto_log::PlayerLogHeadExt::set_unpaused_time(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unpaused_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unpaused_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unpaused_time_);
  }
  this->unpaused_time_ = value;
};

// Line 605: range 0000000017926F9C-0000000017926FEB
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::is_in_mp(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_in_mp_);
  }
  return this->is_in_mp_;
};

// Line 609: range 0000000017926FEC-0000000017927042
void __cdecl proto_log::PlayerLogHeadExt::set_is_in_mp(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_in_mp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_in_mp_);
  }
  this->is_in_mp_ = value;
};

// Line 619: range 0000000017927044-000000001792708B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::level1_area_id(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level1_area_id_);
  }
  return this->level1_area_id_;
};

// Line 623: range 000000001792708C-00000000179270DA
void __cdecl proto_log::PlayerLogHeadExt::set_level1_area_id(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level1_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level1_area_id_);
  }
  this->level1_area_id_ = value;
};

// Line 633: range 00000000179270DC-000000001792712B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::level2_area_id(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level2_area_id_);
  }
  return this->level2_area_id_;
};

// Line 637: range 000000001792712C-0000000017927182
void __cdecl proto_log::PlayerLogHeadExt::set_level2_area_id(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level2_area_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level2_area_id_);
  }
  this->level2_area_id_ = value;
};

// Line 647: range 0000000017927184-00000000179271CB
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::wait_sub_hcoin(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wait_sub_hcoin_);
  }
  return this->wait_sub_hcoin_;
};

// Line 651: range 00000000179271CC-000000001792721A
void __cdecl proto_log::PlayerLogHeadExt::set_wait_sub_hcoin(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_sub_hcoin_);
  }
  this->wait_sub_hcoin_ = value;
};

// Line 661: range 000000001792721C-000000001792726B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::wait_sub_scoin(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wait_sub_scoin_);
  }
  return this->wait_sub_scoin_;
};

// Line 665: range 000000001792726C-00000000179272C2
void __cdecl proto_log::PlayerLogHeadExt::set_wait_sub_scoin(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wait_sub_scoin_);
  }
  this->wait_sub_scoin_ = value;
};

// Line 675: range 00000000179272C4-000000001792730B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::gm_uid(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gm_uid_);
  }
  return this->gm_uid_;
};

// Line 679: range 000000001792730C-000000001792735A
void __cdecl proto_log::PlayerLogHeadExt::set_gm_uid(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_uid_);
  }
  this->gm_uid_ = value;
};

// Line 689: range 000000001792735C-00000000179273AB
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::wait_sub_mcoin(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wait_sub_mcoin_);
  }
  return this->wait_sub_mcoin_;
};

// Line 693: range 00000000179273AC-0000000017927402
void __cdecl proto_log::PlayerLogHeadExt::set_wait_sub_mcoin(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wait_sub_mcoin_);
  }
  this->wait_sub_mcoin_ = value;
};

// Line 703: range 0000000017927404-000000001792744B
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::world_level(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->world_level_);
  }
  return this->world_level_;
};

// Line 707: range 000000001792744C-000000001792749A
void __cdecl proto_log::PlayerLogHeadExt::set_world_level(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_level_);
  }
  this->world_level_ = value;
};

// Line 717: range 000000001792749C-00000000179274EB
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::cur_world_level(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_world_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_world_level_);
  }
  return this->cur_world_level_;
};

// Line 721: range 00000000179274EC-0000000017927542
void __cdecl proto_log::PlayerLogHeadExt::set_cur_world_level(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_world_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_world_level_);
  }
  this->cur_world_level_ = value;
};

// Line 731: range 0000000017927544-0000000017927561
const std::string *__cdecl proto_log::PlayerLogHeadExt::country_code[abi:cxx11](
        const proto_log::PlayerLogHeadExt *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->country_code_);
};

// Line 760: range 0000000017927562-000000001792758D
std::string *__cdecl proto_log::PlayerLogHeadExt::mutable_country_code[abi:cxx11](
        proto_log::PlayerLogHeadExt *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->country_code_, v1);
};

// Line 784: range 000000001792758E-00000000179275DA
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::world_level_limit(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->world_level_limit_);
  }
  return this->world_level_limit_;
};

// Line 788: range 00000000179275DC-000000001792762F
void __cdecl proto_log::PlayerLogHeadExt::set_world_level_limit(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_level_limit_);
  }
  this->world_level_limit_ = value;
};

// Line 798: range 0000000017927630-000000001792766D
google::protobuf::int64 __cdecl proto_log::PlayerLogHeadExt::pcm_coin_3(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcm_coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pcm_coin_3_);
  return this->pcm_coin_3_;
};

// Line 802: range 000000001792766E-00000000179276B4
void __cdecl proto_log::PlayerLogHeadExt::set_pcm_coin_3(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcm_coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pcm_coin_3_ = value;
};

// Line 812: range 00000000179276B6-00000000179276F5
google::protobuf::int64 __cdecl proto_log::PlayerLogHeadExt::psn_coin_3(const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->psn_coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->psn_coin_3_);
  return this->psn_coin_3_;
};

// Line 816: range 00000000179276F6-000000001792773E
void __cdecl proto_log::PlayerLogHeadExt::set_psn_coin_3(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->psn_coin_3_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->psn_coin_3_ = value;
};

// Line 826: range 0000000017927740-0000000017927794
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcm_wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pcm_wait_sub_mcoin_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pcm_wait_sub_mcoin_);
  }
  return this->pcm_wait_sub_mcoin_;
};

// Line 830: range 0000000017927796-00000000179277F1
void __cdecl proto_log::PlayerLogHeadExt::set_pcm_wait_sub_mcoin(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcm_wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pcm_wait_sub_mcoin_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pcm_wait_sub_mcoin_);
  }
  this->pcm_wait_sub_mcoin_ = value;
};

// Line 840: range 00000000179277F2-000000001792783E
google::protobuf::uint32 __cdecl proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->psn_wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->psn_wait_sub_mcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->psn_wait_sub_mcoin_);
  }
  return this->psn_wait_sub_mcoin_;
};

// Line 844: range 0000000017927840-0000000017927893
void __cdecl proto_log::PlayerLogHeadExt::set_psn_wait_sub_mcoin(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->psn_wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->psn_wait_sub_mcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->psn_wait_sub_mcoin_);
  }
  this->psn_wait_sub_mcoin_ = value;
};

// Line 854: range 0000000017927894-00000000179278D3
google::protobuf::uint64 __cdecl proto_log::PlayerLogHeadExt::player_stat_id(
        const proto_log::PlayerLogHeadExt *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_stat_id_);
  return this->player_stat_id_;
};

// Line 858: range 00000000179278D4-000000001792791C
void __cdecl proto_log::PlayerLogHeadExt::set_player_stat_id(
        proto_log::PlayerLogHeadExt *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->player_stat_id_ = value;
};
