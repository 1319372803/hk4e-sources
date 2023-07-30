// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/mail/mail_head.pb.h

// Line 87: range 00000000160E15B6-00000000160E15C2
const proto_log::MailLogHead *__cdecl proto_log::MailLogHead::internal_default_instance()
{
  return (const proto_log::MailLogHead *)&proto_log::_MailLogHead_default_instance_;
};

// Line 101: range 00000000160E15C4-00000000160E15E2
proto_log::MailLogHead *__cdecl proto_log::MailLogHead::New(const proto_log::MailLogHead *const this)
{
  return proto_log::MailLogHead::New(this, 0LL);
};

// Line 118: range 00000000160E15E4-00000000160E162B
int __cdecl proto_log::MailLogHead::GetCachedSize(const proto_log::MailLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 221: range 00000000160E162C-00000000160E1649
const std::string *__cdecl proto_log::MailLogHead::time[abi:cxx11](const proto_log::MailLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->time_);
};

// Line 250: range 00000000160E164A-00000000160E1675
std::string *__cdecl proto_log::MailLogHead::mutable_time[abi:cxx11](proto_log::MailLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->time_, v1);
};

// Line 274: range 00000000160E1676-00000000160E16BD
google::protobuf::uint32 __cdecl proto_log::MailLogHead::action_id(const proto_log::MailLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_id_);
  }
  return this->action_id_;
};

// Line 278: range 00000000160E16BE-00000000160E170C
void __cdecl proto_log::MailLogHead::set_action_id(proto_log::MailLogHead *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_id_);
  }
  this->action_id_ = value;
};

// Line 288: range 00000000160E170E-00000000160E172B
const std::string *__cdecl proto_log::MailLogHead::action_name[abi:cxx11](const proto_log::MailLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_name_);
};

// Line 317: range 00000000160E172C-00000000160E1757
std::string *__cdecl proto_log::MailLogHead::mutable_action_name[abi:cxx11](proto_log::MailLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_name_, v1);
};

// Line 341: range 00000000160E1758-00000000160E17A7
google::protobuf::uint32 __cdecl proto_log::MailLogHead::sub_action_id(const proto_log::MailLogHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sub_action_id_);
  }
  return this->sub_action_id_;
};

// Line 345: range 00000000160E17A8-00000000160E17FE
void __cdecl proto_log::MailLogHead::set_sub_action_id(
        proto_log::MailLogHead *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_action_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_action_id_);
  }
  this->sub_action_id_ = value;
};

// Line 355: range 00000000160E1800-00000000160E181D
const std::string *__cdecl proto_log::MailLogHead::sub_action_name[abi:cxx11](const proto_log::MailLogHead *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sub_action_name_);
};

// Line 384: range 00000000160E181E-00000000160E1849
std::string *__cdecl proto_log::MailLogHead::mutable_sub_action_name[abi:cxx11](proto_log::MailLogHead *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sub_action_name_, v1);
};
