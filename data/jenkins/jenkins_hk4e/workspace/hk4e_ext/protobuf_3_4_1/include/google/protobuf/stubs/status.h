// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/status.h

// Line 77: range 000000000BEFC93E-000000000BEFC95C
void __cdecl google::protobuf::util::Status::~Status(google::protobuf::util::Status *const this)
{
  std::string::~string(&this->error_message_);
};

// Line 85: range 000000000BEFC95E-000000000BEFC9A5
bool __cdecl google::protobuf::util::Status::ok(const google::protobuf::util::Status *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->error_code_ == OK;
};
