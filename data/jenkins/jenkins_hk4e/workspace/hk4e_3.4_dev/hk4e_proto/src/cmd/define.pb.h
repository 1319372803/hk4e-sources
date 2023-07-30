// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/hk4e_proto/src/define.pb.h

// Line 401: range 000000000C6154F2-000000000C615513
const std::string *__cdecl proto::ProtEntityType_Name[abi:cxx11](proto::ProtEntityType value)
{
  const google::protobuf::EnumDescriptor *v1; // rax

  v1 = proto::ProtEntityType_descriptor();
  return (const std::string *)google::protobuf::internal::NameOfEnum[abi:cxx11](v1, (unsigned int)value);
};

// Line 1457: range 00000000121EC140-00000000121EC161
const std::string *__cdecl proto::MovingPlatformType_Name[abi:cxx11](proto::MovingPlatformType value)
{
  const google::protobuf::EnumDescriptor *v1; // rax

  v1 = proto::MovingPlatformType_descriptor();
  return (const std::string *)google::protobuf::internal::NameOfEnum[abi:cxx11](v1, (unsigned int)value);
};

// Line 1555: range 00000000121EC162-00000000121EC18E
bool __cdecl proto::ChangHpReason_Parse(const std::string *name, proto::ChangHpReason *value)
{
  const google::protobuf::EnumDescriptor *v2; // rcx

  v2 = proto::ChangHpReason_descriptor();
  return google::protobuf::internal::ParseNamedEnum<proto::ChangHpReason>(v2, name, value);
};

// Line 1763: range 000000000C615514-000000000C615535
const std::string *__cdecl proto::MathExpressionType_Name[abi:cxx11](proto::MathExpressionType value)
{
  const google::protobuf::EnumDescriptor *v1; // rax

  v1 = proto::MathExpressionType_descriptor();
  return (const std::string *)google::protobuf::internal::NameOfEnum[abi:cxx11](v1, (unsigned int)value);
};

// Line 1853: range 000000000C615536-000000000C615557
const std::string *__cdecl proto::PlatformType_Name[abi:cxx11](proto::PlatformType value)
{
  const google::protobuf::EnumDescriptor *v1; // rax

  v1 = proto::PlatformType_descriptor();
  return (const std::string *)google::protobuf::internal::NameOfEnum[abi:cxx11](v1, (unsigned int)value);
};

// Line 1858: range 000000000C615558-000000000C615584
bool __cdecl proto::PlatformType_Parse(const std::string *name, proto::PlatformType *value)
{
  const google::protobuf::EnumDescriptor *v2; // rcx

  v2 = proto::PlatformType_descriptor();
  return google::protobuf::internal::ParseNamedEnum<proto::PlatformType>(v2, name, value);
};

// Line 3785: range 000000000BEE44E8-000000000BEE4510
proto::ResVersionConfig *__cdecl proto::ResVersionConfig::operator=(
        proto::ResVersionConfig *const this,
        const proto::ResVersionConfig *from)
{
  proto::ResVersionConfig::CopyFrom(this, from);
  return this;
};

// Line 3790: range 000000000C615586-000000000C6155C2
void __cdecl proto::ResVersionConfig::ResVersionConfig(
        proto::ResVersionConfig *const this,
        proto::ResVersionConfig *from)
{
  proto::ResVersionConfig *v2; // rdx

  proto::ResVersionConfig::ResVersionConfig(this);
  v2 = std::move<proto::ResVersionConfig &>(from);
  proto::ResVersionConfig::operator=(this, v2);
};

// Line 3795: range 000000000C6155C4-000000000C615636
proto::ResVersionConfig *__cdecl proto::ResVersionConfig::operator=(
        proto::ResVersionConfig *const this,
        proto::ResVersionConfig *from)
{
  google::protobuf::Arena *ArenaNoVirtual; // rbx

  ArenaNoVirtual = proto::ResVersionConfig::GetArenaNoVirtual(this);
  if ( ArenaNoVirtual == proto::ResVersionConfig::GetArenaNoVirtual(from) )
  {
    if ( this != from )
      proto::ResVersionConfig::InternalSwap(this, from);
  }
  else
  {
    proto::ResVersionConfig::CopyFrom(this, from);
  }
  return this;
};

// Line 3845: range 000000000C615638-000000000C615646
google::protobuf::Arena *__cdecl proto::ResVersionConfig::GetArenaNoVirtual(const proto::ResVersionConfig *const this)
{
  return 0LL;
};

// Line 6281: range 000000000C615648-000000000C615684
void __cdecl proto::EquipParamList::EquipParamList(proto::EquipParamList *const this, proto::EquipParamList *from)
{
  proto::EquipParamList *v2; // rdx

  proto::EquipParamList::EquipParamList(this);
  v2 = std::move<proto::EquipParamList &>(from);
  proto::EquipParamList::operator=(this, v2);
};

// Line 6286: range 000000000C615686-000000000C6156F8
proto::EquipParamList *__cdecl proto::EquipParamList::operator=(
        proto::EquipParamList *const this,
        proto::EquipParamList *from)
{
  google::protobuf::Arena *ArenaNoVirtual; // rbx

  ArenaNoVirtual = proto::EquipParamList::GetArenaNoVirtual(this);
  if ( ArenaNoVirtual == proto::EquipParamList::GetArenaNoVirtual(from) )
  {
    if ( this != from )
      proto::EquipParamList::InternalSwap(this, from);
  }
  else
  {
    proto::EquipParamList::CopyFrom(this, from);
  }
  return this;
};

// Line 6336: range 000000000C6156FA-000000000C615708
google::protobuf::Arena *__cdecl proto::EquipParamList::GetArenaNoVirtual(const proto::EquipParamList *const this)
{
  return 0LL;
};

// Line 8248: range 000000000E88EE8E-000000000E88EF00
proto::Vector *__cdecl proto::Vector::operator=(proto::Vector *const this, proto::Vector *from)
{
  google::protobuf::Arena *ArenaNoVirtual; // rbx

  ArenaNoVirtual = proto::Vector::GetArenaNoVirtual(this);
  if ( ArenaNoVirtual == proto::Vector::GetArenaNoVirtual(from) )
  {
    if ( this != from )
      proto::Vector::InternalSwap(this, from);
  }
  else
  {
    proto::Vector::CopyFrom(this, from);
  }
  return this;
};

// Line 8298: range 000000000E88EF02-000000000E88EF10
google::protobuf::Arena *__cdecl proto::Vector::GetArenaNoVirtual(const proto::Vector *const this)
{
  return 0LL;
};

// Line 26334: range 000000000BEE4512-000000000BEE454C
void __cdecl proto::RegionSimpleInfo::set_name(proto::RegionSimpleInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->name_, v2, value);
};

// Line 26387: range 000000000BEE454E-000000000BEE4588
void __cdecl proto::RegionSimpleInfo::set_title(proto::RegionSimpleInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->title_, v2, value);
};

// Line 26440: range 000000000BEE458A-000000000BEE45C4
void __cdecl proto::RegionSimpleInfo::set_type(proto::RegionSimpleInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->type_, v2, value);
};

// Line 26493: range 000000000BEE45C6-000000000BEE4600
void __cdecl proto::RegionSimpleInfo::set_dispatch_url(proto::RegionSimpleInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->dispatch_url_, v2, value);
};

// Line 26546: range 000000000BEE4602-000000000BEE4649
google::protobuf::int32 __cdecl proto::QueryRegionListHttpRsp::retcode(const proto::QueryRegionListHttpRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->retcode_);
  }
  return this->retcode_;
};

// Line 26550: range 000000000BEE464A-000000000BEE4698
void __cdecl proto::QueryRegionListHttpRsp::set_retcode(
        proto::QueryRegionListHttpRsp *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->retcode_);
  }
  this->retcode_ = value;
};

// Line 26557: range 000000000BEE469A-000000000BEE46B7
int __cdecl proto::QueryRegionListHttpRsp::region_list_size(const proto::QueryRegionListHttpRsp *const this)
{
  return google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::size(&this->region_list_);
};

// Line 26571: range 000000000BEE46B8-000000000BEE46D5
proto::RegionSimpleInfo *__cdecl proto::QueryRegionListHttpRsp::add_region_list(
        proto::QueryRegionListHttpRsp *const this)
{
  return google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::Add(&this->region_list_);
};

// Line 26574: range 000000000BEE46D6-000000000BEE4710
void __cdecl proto::QueryRegionListHttpRsp::set_client_secret_key(
        proto::QueryRegionListHttpRsp *const this,
        const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_secret_key_, v2, value);
};

// Line 26647: range 000000000BEE4712-000000000BEE474C
void __cdecl proto::QueryRegionListHttpRsp::set_client_custom_config_encrypted(
        proto::QueryRegionListHttpRsp *const this,
        const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_custom_config_encrypted_, v2, value);
};

// Line 26700: range 000000000BEE474E-000000000BEE47A4
void __cdecl proto::QueryRegionListHttpRsp::set_enable_login_pc(proto::QueryRegionListHttpRsp *const this, bool value)
{
  __int64 v2; // rsi

  v2 = ((_BYTE)this + 60) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_login_pc_ >> 3) + 0x7FFF8000) != 0
    && (char)v2 >= *(_BYTE *)(((unsigned __int64)&this->enable_login_pc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->enable_login_pc_, v2);
  }
  this->enable_login_pc_ = value;
};

// Line 26714: range 000000000BEE47A6-000000000BEE47C3
const std::string *__cdecl proto::ForceUpdateInfo::force_update_url[abi:cxx11](
        const proto::ForceUpdateInfo *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->force_update_url_);
};

// Line 26717: range 000000000BEE47C4-000000000BEE47FE
void __cdecl proto::ForceUpdateInfo::set_force_update_url(proto::ForceUpdateInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->force_update_url_, v2, value);
};

// Line 26775: range 000000000BEE4800-000000000BEE484E
void __cdecl proto::StopServerInfo::set_stop_begin_time(
        proto::StopServerInfo *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_begin_time_);
  }
  this->stop_begin_time_ = value;
};

// Line 26789: range 000000000BEE4850-000000000BEE48A6
void __cdecl proto::StopServerInfo::set_stop_end_time(
        proto::StopServerInfo *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_end_time_);
  }
  this->stop_end_time_ = value;
};

// Line 26803: range 000000000BEE48A8-000000000BEE48E2
void __cdecl proto::StopServerInfo::set_url(proto::StopServerInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->url_, v2, value);
};

// Line 26856: range 000000000BEE48E4-000000000BEE491E
void __cdecl proto::StopServerInfo::set_content_msg(proto::StopServerInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->content_msg_, v2, value);
};

// Line 26909: range 000000000C61570A-000000000C615751
google::protobuf::uint32 __cdecl proto::ResVersionConfig::version(const proto::ResVersionConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->version_);
  }
  return this->version_;
};

// Line 26923: range 000000000C615752-000000000C61579F
bool __cdecl proto::ResVersionConfig::relogin(const proto::ResVersionConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->relogin_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->relogin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->relogin_);
  }
  return this->relogin_;
};

// Line 27043: range 000000000C6157A0-000000000C6157BD
const std::string *__cdecl proto::ResVersionConfig::version_suffix[abi:cxx11](
        const proto::ResVersionConfig *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->version_suffix_);
};

// Line 27096: range 000000000BEE4920-000000000BEE493D
const std::string *__cdecl proto::ResVersionConfig::branch[abi:cxx11](const proto::ResVersionConfig *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->branch_);
};

// Line 27099: range 000000000BEE493E-000000000BEE4978
void __cdecl proto::RegionInfo::set_gateserver_ip(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->gateserver_ip_, v2, value);
};

// Line 27263: range 000000000BEE497A-000000000BEE49CD
void __cdecl proto::RegionInfo::set_gateserver_port(proto::RegionInfo *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gateserver_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gateserver_port_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gateserver_port_);
  }
  this->gateserver_port_ = value;
};

// Line 27267: range 000000000BEE49CE-000000000BEE4A08
void __cdecl proto::RegionInfo::set_pay_callback_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->pay_callback_url_, v2, value);
};

// Line 27330: range 000000000BEE4A0A-000000000BEE4A44
void __cdecl proto::RegionInfo::set_area_type(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->area_type_, v2, value);
};

// Line 27383: range 000000000BEE4A46-000000000BEE4A80
void __cdecl proto::RegionInfo::set_resource_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->resource_url_, v2, value);
};

// Line 27389: range 000000000BEE4A82-000000000BEE4AC8
void __cdecl proto::RegionInfo::set_resource_url(proto::RegionInfo *const this, std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->resource_url_, v3, v2);
};

// Line 27436: range 000000000BEE4ACA-000000000BEE4B04
void __cdecl proto::RegionInfo::set_data_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->data_url_, v2, value);
};

// Line 27489: range 000000000BEE4B06-000000000BEE4B40
void __cdecl proto::RegionInfo::set_feedback_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->feedback_url_, v2, value);
};

// Line 27542: range 000000000BEE4B42-000000000BEE4B7C
void __cdecl proto::RegionInfo::set_bulletin_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->bulletin_url_, v2, value);
};

// Line 27595: range 000000000BEE4B7E-000000000BEE4BB8
void __cdecl proto::RegionInfo::set_resource_url_bak(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->resource_url_bak_, v2, value);
};

// Line 27601: range 000000000BEE4BBA-000000000BEE4C00
void __cdecl proto::RegionInfo::set_resource_url_bak(proto::RegionInfo *const this, std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->resource_url_bak_, v3, v2);
};

// Line 27648: range 000000000BEE4C02-000000000BEE4C3C
void __cdecl proto::RegionInfo::set_data_url_bak(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->data_url_bak_, v2, value);
};

// Line 27701: range 000000000BEE4C3E-000000000BEE4C99
void __cdecl proto::RegionInfo::set_client_data_version(proto::RegionInfo *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_data_version_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_data_version_);
  }
  this->client_data_version_ = value;
};

// Line 27705: range 000000000BEE4C9A-000000000BEE4CD4
void __cdecl proto::RegionInfo::set_handbook_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->handbook_url_, v2, value);
};

// Line 27768: range 000000000BEE4CD6-000000000BEE4D29
void __cdecl proto::RegionInfo::set_client_silence_data_version(
        proto::RegionInfo *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_silence_data_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_silence_data_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_silence_data_version_);
  }
  this->client_silence_data_version_ = value;
};

// Line 27772: range 000000000BEE4D2A-000000000BEE4D64
void __cdecl proto::RegionInfo::set_client_data_md5(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_data_md5_, v2, value);
};

// Line 27835: range 000000000BEE4D66-000000000BEE4DA0
void __cdecl proto::RegionInfo::set_client_silence_data_md5(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_silence_data_md5_, v2, value);
};

// Line 27894: range 000000000BEE4DA2-000000000BEE4E8B
proto::ResVersionConfig *__cdecl proto::RegionInfo::mutable_res_version_config(proto::RegionInfo *const this)
{
  proto::ResVersionConfig *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->res_version_config_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->res_version_config_);
  if ( !this->res_version_config_ )
  {
    v1 = (proto::ResVersionConfig *)operator new(0x48uLL);
    proto::ResVersionConfig::ResVersionConfig(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->res_version_config_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->res_version_config_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->res_version_config_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->res_version_config_);
  return this->res_version_config_;
};

// Line 27901: range 000000000BEE4E8C-000000000BEE4EB8
void __cdecl proto::RegionInfo::clear_secret_key(proto::RegionInfo *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->secret_key_, v1);
};

// Line 27928: range 000000000BEE4EBA-000000000BEE4EF4
void __cdecl proto::RegionInfo::set_secret_key(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->secret_key_, v2, value);
};

// Line 27981: range 000000000BEE4EF6-000000000BEE4F30
void __cdecl proto::RegionInfo::set_official_community_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->official_community_url_, v2, value);
};

// Line 28040: range 000000000BEE4F32-000000000BEE4F7B
void __cdecl proto::RegionInfo::set_client_version_suffix(proto::RegionInfo *const this, std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_version_suffix_, v3, v2);
};

// Line 28093: range 000000000BEE4F7C-000000000BEE4FC5
void __cdecl proto::RegionInfo::set_client_silence_version_suffix(proto::RegionInfo *const this, std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_silence_version_suffix_, v3, v2);
};

// Line 28140: range 000000000BEE4FC6-000000000BEE5021
void __cdecl proto::RegionInfo::set_use_gateserver_domain_name(proto::RegionInfo *const this, bool value)
{
  __int64 v2; // rsi

  v2 = ((_BYTE)this - 28) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_gateserver_domain_name_ >> 3) + 0x7FFF8000) != 0
    && (char)v2 >= *(_BYTE *)(((unsigned __int64)&this->use_gateserver_domain_name_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->use_gateserver_domain_name_, v2);
  }
  this->use_gateserver_domain_name_ = value;
};

// Line 28144: range 000000000BEE5022-000000000BEE505F
void __cdecl proto::RegionInfo::set_gateserver_domain_name(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->gateserver_domain_name_, v2, value);
};

// Line 28207: range 000000000BEE5060-000000000BEE509D
void __cdecl proto::RegionInfo::set_user_center_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->user_center_url_, v2, value);
};

// Line 28260: range 000000000BEE509E-000000000BEE50DB
void __cdecl proto::RegionInfo::set_account_bind_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->account_bind_url_, v2, value);
};

// Line 28313: range 000000000BEE50DC-000000000BEE5119
void __cdecl proto::RegionInfo::set_cdkey_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->cdkey_url_, v2, value);
};

// Line 28366: range 000000000BEE511A-000000000BEE5157
void __cdecl proto::RegionInfo::set_privacy_policy_url(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->privacy_policy_url_, v2, value);
};

// Line 28425: range 000000000BEE5158-000000000BEE51A1
void __cdecl proto::RegionInfo::set_next_resource_url(proto::RegionInfo *const this, std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->next_resource_url_, v3, v2);
};

// Line 28478: range 000000000BEE51A2-000000000BEE528B
proto::ResVersionConfig *__cdecl proto::RegionInfo::mutable_next_res_version_config(proto::RegionInfo *const this)
{
  proto::ResVersionConfig *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->next_res_version_config_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->next_res_version_config_);
  if ( !this->next_res_version_config_ )
  {
    v1 = (proto::ResVersionConfig *)operator new(0x48uLL);
    proto::ResVersionConfig::ResVersionConfig(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->next_res_version_config_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->next_res_version_config_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->next_res_version_config_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->next_res_version_config_);
  return this->next_res_version_config_;
};

// Line 28485: range 000000000BEE528C-000000000BEE52C9
void __cdecl proto::RegionInfo::set_game_biz(proto::RegionInfo *const this, const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->game_biz_, v2, value);
};

// Line 28565: range 000000000BEE52CA-000000000BEE5311
google::protobuf::int32 __cdecl proto::QueryCurrRegionHttpRsp::retcode(const proto::QueryCurrRegionHttpRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->retcode_);
  }
  return this->retcode_;
};

// Line 28569: range 000000000BEE5312-000000000BEE5360
void __cdecl proto::QueryCurrRegionHttpRsp::set_retcode(
        proto::QueryCurrRegionHttpRsp *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->retcode_);
  }
  this->retcode_ = value;
};

// Line 28583: range 000000000BEE5362-000000000BEE539C
void __cdecl proto::QueryCurrRegionHttpRsp::set_msg(
        proto::QueryCurrRegionHttpRsp *const this,
        const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->msg_, v2, value);
};

// Line 28596: range 000000000BEE539E-000000000BEE54DA
void __cdecl proto::QueryCurrRegionHttpRsp::set_msg(proto::QueryCurrRegionHttpRsp *const this, const char *value)
{
  char v2; // bl
  google::protobuf::internal::LogMessage_0 *v3; // rax
  const std::string *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+1Fh] [rbp-71h] BYREF
  std::string v6; // [rsp+20h] [rbp-70h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+40h] [rbp-50h] BYREF

  v2 = 0;
  if ( !value )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_FATAL_0, "../hk4e_proto/src/define.pb.h", 28597);
    v2 = 1;
    v3 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: value != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v3);
  }
  if ( v2 )
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  std::allocator<char>::allocator(&v5);
  std::string::basic_string<std::allocator<char>>(&v6, value, (const std::allocator<char> *)&v5);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->msg_, v4, &v6);
  std::string::~string(&v6);
  std::allocator<char>::~allocator(&v5);
};

// Line 28642: range 000000000BEE54DC-000000000BEE55B6
proto::RegionInfo *__cdecl proto::QueryCurrRegionHttpRsp::mutable_region_info(
        proto::QueryCurrRegionHttpRsp *const this)
{
  proto::RegionInfo *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->region_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->region_info_);
  if ( !this->region_info_ )
  {
    v1 = (proto::RegionInfo *)operator new(0xF0uLL);
    proto::RegionInfo::RegionInfo(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->region_info_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->region_info_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->region_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->region_info_);
  return this->region_info_;
};

// Line 28669: range 000000000BEE55B8-000000000BEE55D7
bool __cdecl proto::QueryCurrRegionHttpRsp::has_force_udpate(const proto::QueryCurrRegionHttpRsp *const this)
{
  return proto::QueryCurrRegionHttpRsp::detail_case(this) == kForceUdpate;
};

// Line 28672: range 000000000BEE55D8-000000000BEE562C
void __cdecl proto::QueryCurrRegionHttpRsp::set_has_force_udpate(proto::QueryCurrRegionHttpRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->_oneof_case_);
  }
  this->_oneof_case_[0] = 4;
};

// Line 28687: range 000000000BEE562E-000000000BEE5701
proto::ForceUpdateInfo *__cdecl proto::QueryCurrRegionHttpRsp::mutable_force_udpate(
        proto::QueryCurrRegionHttpRsp *const this)
{
  proto::ForceUpdateInfo *v1; // rbx

  if ( !proto::QueryCurrRegionHttpRsp::has_force_udpate(this) )
  {
    proto::QueryCurrRegionHttpRsp::clear_detail(this);
    proto::QueryCurrRegionHttpRsp::set_has_force_udpate(this);
    v1 = (proto::ForceUpdateInfo *)operator new(0x20uLL);
    proto::ForceUpdateInfo::ForceUpdateInfo(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->detail_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->detail_.force_udpate_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->detail_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->detail_);
  return this->detail_.force_udpate_;
};

// Line 28717: range 000000000BEE5702-000000000BEE5721
bool __cdecl proto::QueryCurrRegionHttpRsp::has_stop_server(const proto::QueryCurrRegionHttpRsp *const this)
{
  return proto::QueryCurrRegionHttpRsp::detail_case(this) == kStopServer;
};

// Line 28720: range 000000000BEE5722-000000000BEE5776
void __cdecl proto::QueryCurrRegionHttpRsp::set_has_stop_server(proto::QueryCurrRegionHttpRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->_oneof_case_);
  }
  this->_oneof_case_[0] = 5;
};

// Line 28735: range 000000000BEE5778-000000000BEE584B
proto::StopServerInfo *__cdecl proto::QueryCurrRegionHttpRsp::mutable_stop_server(
        proto::QueryCurrRegionHttpRsp *const this)
{
  proto::StopServerInfo *v1; // rbx

  if ( !proto::QueryCurrRegionHttpRsp::has_stop_server(this) )
  {
    proto::QueryCurrRegionHttpRsp::clear_detail(this);
    proto::QueryCurrRegionHttpRsp::set_has_stop_server(this);
    v1 = (proto::StopServerInfo *)operator new(0x30uLL);
    proto::StopServerInfo::StopServerInfo(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->detail_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->detail_.force_udpate_ = (proto::ForceUpdateInfo *)v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->detail_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->detail_);
  return this->detail_.stop_server_;
};

// Line 28743: range 000000000BEE584C-000000000BEE5886
void __cdecl proto::QueryCurrRegionHttpRsp::set_client_secret_key(
        proto::QueryCurrRegionHttpRsp *const this,
        const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_secret_key_, v2, value);
};

// Line 28825: range 000000000BEE5888-000000000BEE58C2
void __cdecl proto::QueryCurrRegionHttpRsp::set_region_custom_config_encrypted(
        proto::QueryCurrRegionHttpRsp *const this,
        const std::string *value)
{
  const std::string *v2; // rcx

  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->region_custom_config_encrypted_, v2, value);
};

// Line 28884: range 000000000BEE58C4-000000000BEE590A
void __cdecl proto::QueryCurrRegionHttpRsp::set_client_region_custom_config_encrypted(
        proto::QueryCurrRegionHttpRsp *const this,
        std::string *value)
{
  std::string *v2; // r12
  const std::string *v3; // rax

  v2 = std::move<std::string &>(value);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::SetNoArena(&this->client_region_custom_config_encrypted_, v3, v2);
};

// Line 28929: range 000000000BEE590C-000000000BEE595B
proto::QueryCurrRegionHttpRsp::DetailCase __cdecl proto::QueryCurrRegionHttpRsp::detail_case(
        const proto::QueryCurrRegionHttpRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->_oneof_case_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->_oneof_case_);
  }
  return this->_oneof_case_[0];
};

// Line 29809: range 000000000C6157BE-000000000C615805
google::protobuf::uint32 __cdecl proto::EquipParam::item_id(const proto::EquipParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id_);
  }
  return this->item_id_;
};

// Line 29823: range 000000000C615806-000000000C615855
google::protobuf::uint32 __cdecl proto::EquipParam::item_num(const proto::EquipParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_num_);
  }
  return this->item_num_;
};

// Line 29837: range 000000000C615856-000000000C61589D
google::protobuf::uint32 __cdecl proto::EquipParam::item_level(const proto::EquipParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_level_);
  }
  return this->item_level_;
};

// Line 29851: range 000000000C61589E-000000000C6158ED
google::protobuf::uint32 __cdecl proto::EquipParam::promote_level(const proto::EquipParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  return this->promote_level_;
};

// Line 29854: range 000000000C6158EE-000000000C6158FF
const google::protobuf::RepeatedPtrField<proto::EquipParam> *__cdecl proto::EquipParamList::item_list(
        const proto::EquipParamList *const this)
{
  return &this->item_list_;
};

// Line 31430: range 000000000C615900-000000000C615954
void __cdecl proto::Vector::set_x(proto::Vector *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->x_);
  }
  this->x_ = value;
};

// Line 31444: range 000000000C615956-000000000C6159B2
void __cdecl proto::Vector::set_y(proto::Vector *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y_);
  }
  this->y_ = value;
};

// Line 31458: range 000000000C6159B4-000000000C615A08
void __cdecl proto::Vector::set_z(proto::Vector *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->z_);
  }
  this->z_ = value;
};

// Line 33649: range 000000000C615A0A-000000000C615A5E
void __cdecl proto::MathQuaternion::set_x(proto::MathQuaternion *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->x_);
  }
  this->x_ = value;
};

// Line 33663: range 000000000C615A60-000000000C615ABC
void __cdecl proto::MathQuaternion::set_y(proto::MathQuaternion *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y_);
  }
  this->y_ = value;
};

// Line 33677: range 000000000C615ABE-000000000C615B12
void __cdecl proto::MathQuaternion::set_z(proto::MathQuaternion *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->z_);
  }
  this->z_ = value;
};

// Line 33691: range 000000000C615B14-000000000C615B70
void __cdecl proto::MathQuaternion::set_w(proto::MathQuaternion *const this, float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->w_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w_);
  }
  this->w_ = value;
};

// Line 35824: range 000000000F1ABB18-000000000F1ABB5F
google::protobuf::int32 __cdecl proto::CustomCommonNodeInfo::parent_index(
        const proto::CustomCommonNodeInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->parent_index_);
  }
  return this->parent_index_;
};

// Line 35838: range 000000000F1ABB60-000000000F1ABBAF
google::protobuf::uint32 __cdecl proto::CustomCommonNodeInfo::config_id(const proto::CustomCommonNodeInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  return this->config_id_;
};

// Line 35852: range 000000000F1ABBB0-000000000F1ABBCD
const std::string *__cdecl proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](
        const proto::CustomCommonNodeInfo *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->slot_identifier_);
};

// Line 35930: range 0000000012748F04-0000000012748F15
const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__cdecl proto::CustomGadgetTreeInfo::node_list(
        const proto::CustomGadgetTreeInfo *const this)
{
  return &this->node_list_;
};
