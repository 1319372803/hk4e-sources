// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/order/order_head.pb.h

// Line 87: range 00000000178BCA8A-00000000178BCA96
const proto_log::OrderLogHead *__cdecl proto_log::OrderLogHead::internal_default_instance()
{
  return (const proto_log::OrderLogHead *)&proto_log::_OrderLogHead_default_instance_;
};

// Line 101: range 00000000178BCA98-00000000178BCAB6
proto_log::OrderLogHead *__cdecl proto_log::OrderLogHead::New(const proto_log::OrderLogHead *const this)
{
  return proto_log::OrderLogHead::New(this, 0LL);
};

// Line 118: range 00000000178BCAB8-00000000178BCAFF
int __cdecl proto_log::OrderLogHead::GetCachedSize(const proto_log::OrderLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 221: range 00000000178BCB00-00000000178BCB1D
const std::string *__cdecl proto_log::OrderLogHead::time[abi:cxx11](const proto_log::OrderLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 250: range 00000000178BCB1E-00000000178BCB49
std::string *__cdecl proto_log::OrderLogHead::mutable_time[abi:cxx11](proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 274: range 00000000178BCB4A-00000000178BCB91
google::protobuf::uint32 __cdecl proto_log::OrderLogHead::action_id(const proto_log::OrderLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 278: range 00000000178BCB92-00000000178BCBE0
void __cdecl proto_log::OrderLogHead::set_action_id(
        proto_log::OrderLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 288: range 00000000178BCBE2-00000000178BCBFF
const std::string *__cdecl proto_log::OrderLogHead::action_name[abi:cxx11](const proto_log::OrderLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 317: range 00000000178BCC00-00000000178BCC2B
std::string *__cdecl proto_log::OrderLogHead::mutable_action_name[abi:cxx11](proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 341: range 00000000178BCC2C-00000000178BCC7B
google::protobuf::uint32 __cdecl proto_log::OrderLogHead::sub_action_id(const proto_log::OrderLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_action_id_);
  }
  return this->sub_action_id_;
};

// Line 345: range 00000000178BCC7C-00000000178BCCD2
void __cdecl proto_log::OrderLogHead::set_sub_action_id(
        proto_log::OrderLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_action_id_);
  }
  this->sub_action_id_ = value;
};

// Line 355: range 00000000178BCCD4-00000000178BCCF1
const std::string *__cdecl proto_log::OrderLogHead::sub_action_name[abi:cxx11](
        const proto_log::OrderLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sub_action_name_);
};

// Line 384: range 00000000178BCCF2-00000000178BCD1D
std::string *__cdecl proto_log::OrderLogHead::mutable_sub_action_name[abi:cxx11](proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sub_action_name_, v1);
};
