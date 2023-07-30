// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/log/client/client_body_common.pb.h

// Line 90: range 0000000018E4C5E4-0000000018E4C5F0
const proto_log::ClientLogBodyLogin *__cdecl proto_log::ClientLogBodyLogin::internal_default_instance()
{
  return (const proto_log::ClientLogBodyLogin *)&proto_log::_ClientLogBodyLogin_default_instance_;
};

// Line 104: range 0000000018E4C5F2-0000000018E4C610
proto_log::ClientLogBodyLogin *__cdecl proto_log::ClientLogBodyLogin::New(
        const proto_log::ClientLogBodyLogin *const this)
{
  return proto_log::ClientLogBodyLogin::New(this, 0LL);
};

// Line 121: range 0000000018E4C612-0000000018E4C659
int __cdecl proto_log::ClientLogBodyLogin::GetCachedSize(const proto_log::ClientLogBodyLogin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 254: range 0000000018E4C65A-0000000018E4C666
const proto_log::ClientLogBodyPing *__cdecl proto_log::ClientLogBodyPing::internal_default_instance()
{
  return (const proto_log::ClientLogBodyPing *)&proto_log::_ClientLogBodyPing_default_instance_;
};

// Line 268: range 0000000018E4C668-0000000018E4C686
proto_log::ClientLogBodyPing *__cdecl proto_log::ClientLogBodyPing::New(const proto_log::ClientLogBodyPing *const this)
{
  return proto_log::ClientLogBodyPing::New(this, 0LL);
};

// Line 285: range 0000000018E4C688-0000000018E4C6CF
int __cdecl proto_log::ClientLogBodyPing::GetCachedSize(const proto_log::ClientLogBodyPing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 432: range 0000000018E4C6D0-0000000018E4C6ED
const std::string *__cdecl proto_log::ClientLogBodyLogin::action_type[abi:cxx11](
        const proto_log::ClientLogBodyLogin *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_type_);
};

// Line 461: range 0000000018E4C6EE-0000000018E4C719
std::string *__cdecl proto_log::ClientLogBodyLogin::mutable_action_type[abi:cxx11](
        proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_type_, v1);
};

// Line 485: range 0000000018E4C71A-0000000018E4C737
const std::string *__cdecl proto_log::ClientLogBodyLogin::action_result[abi:cxx11](
        const proto_log::ClientLogBodyLogin *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->action_result_);
};

// Line 514: range 0000000018E4C738-0000000018E4C763
std::string *__cdecl proto_log::ClientLogBodyLogin::mutable_action_result[abi:cxx11](
        proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->action_result_, v1);
};

// Line 538: range 0000000018E4C764-0000000018E4C7AB
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyLogin::action_time(
        const proto_log::ClientLogBodyLogin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_time_);
  }
  return this->action_time_;
};

// Line 542: range 0000000018E4C7AC-0000000018E4C7FA
void __cdecl proto_log::ClientLogBodyLogin::set_action_time(
        proto_log::ClientLogBodyLogin *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->action_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_time_);
  }
  this->action_time_ = value;
};

// Line 552: range 0000000018E4C7FC-0000000018E4C819
const std::string *__cdecl proto_log::ClientLogBodyLogin::xg[abi:cxx11](
        const proto_log::ClientLogBodyLogin *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->xg_);
};

// Line 581: range 0000000018E4C81A-0000000018E4C845
std::string *__cdecl proto_log::ClientLogBodyLogin::mutable_xg[abi:cxx11](proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->xg_, v1);
};

// Line 605: range 0000000018E4C846-0000000018E4C895
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyLogin::signal_level(
        const proto_log::ClientLogBodyLogin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->signal_level_);
  }
  return this->signal_level_;
};

// Line 609: range 0000000018E4C896-0000000018E4C8EC
void __cdecl proto_log::ClientLogBodyLogin::set_signal_level(
        proto_log::ClientLogBodyLogin *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->signal_level_);
  }
  this->signal_level_ = value;
};

// Line 619: range 0000000018E4C8EE-0000000018E4C90B
const std::string *__cdecl proto_log::ClientLogBodyLogin::dns[abi:cxx11](
        const proto_log::ClientLogBodyLogin *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->dns_);
};

// Line 648: range 0000000018E4C90C-0000000018E4C937
std::string *__cdecl proto_log::ClientLogBodyLogin::mutable_dns[abi:cxx11](proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->dns_, v1);
};

// Line 676: range 0000000018E4C938-0000000018E4C955
const std::string *__cdecl proto_log::ClientLogBodyPing::xg[abi:cxx11](const proto_log::ClientLogBodyPing *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->xg_);
};

// Line 705: range 0000000018E4C956-0000000018E4C981
std::string *__cdecl proto_log::ClientLogBodyPing::mutable_xg[abi:cxx11](proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->xg_, v1);
};

// Line 729: range 0000000018E4C982-0000000018E4C9C9
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyPing::signal_level(
        const proto_log::ClientLogBodyPing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->signal_level_);
  }
  return this->signal_level_;
};

// Line 733: range 0000000018E4C9CA-0000000018E4CA18
void __cdecl proto_log::ClientLogBodyPing::set_signal_level(
        proto_log::ClientLogBodyPing *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signal_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->signal_level_);
  }
  this->signal_level_ = value;
};

// Line 743: range 0000000018E4CA1A-0000000018E4CA69
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyPing::ping(const proto_log::ClientLogBodyPing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ping_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ping_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ping_);
  }
  return this->ping_;
};

// Line 747: range 0000000018E4CA6A-0000000018E4CAC0
void __cdecl proto_log::ClientLogBodyPing::set_ping(
        proto_log::ClientLogBodyPing *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ping_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ping_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ping_);
  }
  this->ping_ = value;
};

// Line 757: range 0000000018E4CAC2-0000000018E4CADF
const std::string *__cdecl proto_log::ClientLogBodyPing::servertype[abi:cxx11](
        const proto_log::ClientLogBodyPing *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->servertype_);
};

// Line 786: range 0000000018E4CAE0-0000000018E4CB0B
std::string *__cdecl proto_log::ClientLogBodyPing::mutable_servertype[abi:cxx11](
        proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->servertype_, v1);
};

// Line 810: range 0000000018E4CB0C-0000000018E4CB29
const std::string *__cdecl proto_log::ClientLogBodyPing::serverip[abi:cxx11](
        const proto_log::ClientLogBodyPing *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->serverip_);
};

// Line 839: range 0000000018E4CB2A-0000000018E4CB55
std::string *__cdecl proto_log::ClientLogBodyPing::mutable_serverip[abi:cxx11](
        proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->serverip_, v1);
};

// Line 863: range 0000000018E4CB56-0000000018E4CB73
const std::string *__cdecl proto_log::ClientLogBodyPing::serverport[abi:cxx11](
        const proto_log::ClientLogBodyPing *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->serverport_);
};

// Line 892: range 0000000018E4CB74-0000000018E4CB9F
std::string *__cdecl proto_log::ClientLogBodyPing::mutable_serverport[abi:cxx11](
        proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->serverport_, v1);
};

// Line 916: range 0000000018E4CBA0-0000000018E4CBE7
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyPing::pcount(const proto_log::ClientLogBodyPing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcount_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pcount_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pcount_);
  }
  return this->pcount_;
};

// Line 920: range 0000000018E4CBE8-0000000018E4CC36
void __cdecl proto_log::ClientLogBodyPing::set_pcount(
        proto_log::ClientLogBodyPing *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pcount_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pcount_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pcount_);
  }
  this->pcount_ = value;
};

// Line 930: range 0000000018E4CC38-0000000018E4CC87
google::protobuf::uint32 __cdecl proto_log::ClientLogBodyPing::plost(const proto_log::ClientLogBodyPing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->plost_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->plost_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->plost_);
  }
  return this->plost_;
};

// Line 934: range 0000000018E4CC88-0000000018E4CCDE
void __cdecl proto_log::ClientLogBodyPing::set_plost(
        proto_log::ClientLogBodyPing *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->plost_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->plost_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->plost_);
  }
  this->plost_ = value;
};

// Line 944: range 0000000018E4CCE0-0000000018E4CCFD
const std::string *__cdecl proto_log::ClientLogBodyPing::dns[abi:cxx11](const proto_log::ClientLogBodyPing *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->dns_);
};

// Line 973: range 0000000018E4CCFE-0000000018E4CD29
std::string *__cdecl proto_log::ClientLogBodyPing::mutable_dns[abi:cxx11](proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->dns_, v1);
};
