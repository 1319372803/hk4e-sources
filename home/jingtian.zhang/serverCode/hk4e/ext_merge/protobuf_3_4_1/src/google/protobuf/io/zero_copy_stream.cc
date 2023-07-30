// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/zero_copy_stream.cc

// Line 46: range 000000000C8F1B70-000000000C8F1BBF
__int64 __fastcall google::protobuf::io::ZeroCopyOutputStream::WriteAliasedRaw(
        google::protobuf::io::ZeroCopyOutputStream *this,
        const void *a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    &v5,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream.cc",
    47);
  v2 = google::protobuf::internal::LogMessage::operator<<(
         &v5,
         "This ZeroCopyOutputStream doesn't support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug.");
  google::protobuf::internal::LogFinisher::operator=(&v4, v2);
  google::protobuf::internal::LogMessage::~LogMessage(&v5);
  return 0LL;
};

// Line 47: range 000000000C72D0DC-000000000C72D0E9
void __fastcall __noreturn google::protobuf::io::ZeroCopyOutputStream::WriteAliasedRaw(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 55: range 000000000C746E20-000000000C746E41
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io20ZeroCopyOutputStream15WriteAliasedRawEPKvi()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
