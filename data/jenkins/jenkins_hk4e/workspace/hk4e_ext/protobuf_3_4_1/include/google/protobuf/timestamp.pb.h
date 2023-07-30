// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/timestamp.pb.h

// Line 194: range 000000000BEE71C0-000000000BEE71FA
google::protobuf::int64 __cdecl google::protobuf::Timestamp::seconds(const google::protobuf::Timestamp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->seconds_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->seconds_;
};
