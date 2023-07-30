// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/statusor.cc

// Line 38: range 000000000C96E810-000000000C96E89D
void __fastcall google::protobuf::util::internal::StatusOrHelper::Crash(
        google::protobuf::util::internal::StatusOrHelper *this,
        const google::protobuf::util::Status *a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rbp
  __int64 v3; // rdx
  std::forward_iterator_tag v4; // cl
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-79h] BYREF
  std::string value; // [rsp+10h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+30h] [rbp-58h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_FATAL_0, "google/protobuf/stubs/statusor.cc", 39);
  v2 = google::protobuf::internal::LogMessage::operator<<(&v8, "Attempting to fetch value instead of handling error ");
  google::protobuf::util::Status::ToString[abi:cxx11]((__int64)&value, (__int64)this, v3, v4);
  v5 = google::protobuf::internal::LogMessage::operator<<(v2, &value);
  google::protobuf::internal::LogFinisher::operator=(&v6, v5);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  google::protobuf::internal::LogMessage::~LogMessage(&v8);
};

// Line 46: range 000000000C7472F0-000000000C747311
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util8internal14StatusOrHelper5CrashERKNS1_6StatusE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
