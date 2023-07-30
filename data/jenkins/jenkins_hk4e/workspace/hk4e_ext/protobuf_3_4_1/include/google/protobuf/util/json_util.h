// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/util/json_util.h

// Line 52: range 000000000C6454C2-000000000C64550B
void __cdecl google::protobuf::util::JsonParseOptions::JsonParseOptions(
        google::protobuf::util::JsonParseOptions *const this)
{
  __int64 v1; // rsi

  v1 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v1);
  }
  this->ignore_unknown_fields = 0;
};

// Line 87: range 000000000BEFC9A6-000000000BEFCAAF
void __cdecl google::protobuf::util::JsonPrintOptions::JsonPrintOptions(
        google::protobuf::util::JsonPrintOptions *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  v1 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v1);
  }
  this->add_whitespace = 0;
  v2 = ((_BYTE)this + 1) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->always_print_primitive_fields >> 3) + 0x7FFF8000) != 0
    && (char)v2 >= *(_BYTE *)(((unsigned __int64)&this->always_print_primitive_fields >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->always_print_primitive_fields, v2);
  }
  this->always_print_primitive_fields = 0;
  v3 = ((_BYTE)this + 2) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->always_print_enums_as_ints >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->always_print_enums_as_ints >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->always_print_enums_as_ints, v3);
  }
  this->always_print_enums_as_ints = 0;
  v4 = ((_BYTE)this + 3) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->preserve_proto_field_names >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->preserve_proto_field_names >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->preserve_proto_field_names, v4);
  }
  this->preserve_proto_field_names = 0;
};

// Line 88: range 000000000BEFCAB0-000000000BEFCB51
google::protobuf::util::Status *__cdecl google::protobuf::util::MessageToJsonString(
        google::protobuf::util::Status *retstr,
        const google::protobuf::Message *message,
        std::string *output)
{
  int v4; // [rsp+0h] [rbp-30h]
  google::protobuf::util::Status *v6; // [rsp+18h] [rbp-18h]
  int v7; // [rsp+20h] [rbp-10h]
  void *v8; // [rsp+28h] [rbp-8h] BYREF

  google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)&v8 + 1);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->error_message_._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->error_message_._anon_0._M_allocated_capacity
                                                          + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 40LL);
  }
  google::protobuf::util::MessageToJsonString(
    retstr,
    (google::protobuf::Message *)message,
    v4,
    output,
    (int)message,
    (char)retstr,
    v7,
    v8);
  return v6;
};
