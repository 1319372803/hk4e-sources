// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/arenastring.h

// Line 204: range 000000000BEE03F6-000000000BEE0486
void __cdecl google::protobuf::internal::ArenaStringPtr::SetNoArena(
        google::protobuf::internal::ArenaStringPtr *const this,
        const std::string *default_value,
        const std::string *value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( default_value == this->ptr_ )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(this, value);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::string::operator=(this->ptr_, value);
  }
};

// Line 214: range 000000000BEE0488-000000000BEE0552
void __cdecl google::protobuf::internal::ArenaStringPtr::SetNoArena(
        google::protobuf::internal::ArenaStringPtr *const this,
        const std::string *default_value,
        std::string *value)
{
  std::remove_reference<std::string&>::type *v3; // r12
  std::string *v4; // rbx
  std::remove_reference<std::string&>::type *v5; // rcx

  if ( google::protobuf::internal::ArenaStringPtr::IsDefault(this, default_value) )
  {
    v3 = std::move<std::string &>(value);
    v4 = (std::string *)operator new(0x20uLL);
    std::string::basic_string(v4, v3);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->ptr_ = v4;
  }
  else
  {
    v5 = std::move<std::string &>(value);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::string::operator=(this->ptr_, v5);
  }
};

// Line 225: range 000000000BEE0554-000000000BEE0589
const std::string *__cdecl google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](
        const google::protobuf::internal::ArenaStringPtr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->ptr_;
};

// Line 262: range 000000000BEE058A-000000000BEE05D9
void __cdecl google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(
        google::protobuf::internal::ArenaStringPtr *const this,
        const std::string *default_value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( default_value != this->ptr_ )
    std::string::clear(this->ptr_);
};

// Line 268: range 000000000BEE05DA-000000000BEE061A
bool __cdecl google::protobuf::internal::ArenaStringPtr::IsDefault(
        const google::protobuf::internal::ArenaStringPtr *const this,
        const std::string *default_value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return default_value == this->ptr_;
};

// Line 302: range 000000000BEE061C-000000000BEE0723
void __cdecl google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        google::protobuf::internal::ArenaStringPtr *const this,
        const std::string *initial_value)
{
  char v2; // bl
  google::protobuf::internal::LogMessage_0 *v3; // rax
  std::string *v4; // rbx
  google::protobuf::internal::LogFinisher v5; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+20h] [rbp-50h] BYREF

  v2 = 0;
  if ( !initial_value )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arenastring.h",
      303);
    v2 = 1;
    v3 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: initial_value != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v3);
  }
  if ( v2 )
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  v4 = (std::string *)operator new(0x20uLL);
  std::string::basic_string(v4, initial_value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = v4;
};
