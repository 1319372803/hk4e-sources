// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/descriptor.h

// Line 1874: range 000000000E88EB14-000000000E88EB5B
int __cdecl google::protobuf::EnumValueDescriptor::number(const google::protobuf::EnumValueDescriptor *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->number_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->number_);
  }
  return this->number_;
};
