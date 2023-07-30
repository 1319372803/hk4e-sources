// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/hk4e_proto/src/server_only/redis_data.pb.h

// Line 5781: range 000000000F1AD112-000000000F1AD13A
proto::CustomDungeonBriefRedisData *__cdecl proto::CustomDungeonBriefRedisData::operator=(
        proto::CustomDungeonBriefRedisData *const this,
        const proto::CustomDungeonBriefRedisData *from)
{
  proto::CustomDungeonBriefRedisData::CopyFrom(this, from);
  return this;
};

// Line 10347: range 000000000F1AD13C-000000000F1AD17F
void __cdecl proto::CustomDungeonBriefRedisData::set_dungeon_guid(
        proto::CustomDungeonBriefRedisData *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->dungeon_guid_ = value;
};

// Line 10461: range 000000000F1AD180-000000000F1AD25A
proto::CustomDungeonSocialRedisData *__cdecl proto::CustomDungeonBriefRedisData::mutable_social(
        proto::CustomDungeonBriefRedisData *const this)
{
  proto::CustomDungeonSocialRedisData *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->social_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->social_);
  if ( !this->social_ )
  {
    v1 = (proto::CustomDungeonSocialRedisData *)operator new(0x28uLL);
    proto::CustomDungeonSocialRedisData::CustomDungeonSocialRedisData(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->social_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->social_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->social_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->social_);
  return this->social_;
};
