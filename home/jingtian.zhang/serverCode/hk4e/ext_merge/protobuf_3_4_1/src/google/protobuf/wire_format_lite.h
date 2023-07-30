// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/wire_format_lite.h

// Line 740: range 000000000C8F1B30-000000000C8F1B40
void __fastcall google::protobuf::internal::FieldSkipper::~FieldSkipper(
        google::protobuf::internal::FieldSkipper *const this)
{
  ;
};

// Line 740: range 000000000C8F1B60-000000000C8F1B65
void __fastcall google::protobuf::internal::FieldSkipper::~FieldSkipper(
        google::protobuf::internal::FieldSkipper *const this)
{
  operator delete(this, 8uLL);
};

// Line 761: range 000000000C8F1B50-000000000C8F1B55
void __fastcall google::protobuf::internal::CodedOutputStreamFieldSkipper::~CodedOutputStreamFieldSkipper(
        google::protobuf::internal::CodedOutputStreamFieldSkipper *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 777: range 000000000C8EA750-000000000C8EA7D6
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::GetSize(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogFinisher v3; // [rsp+1h] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v4; // [rsp+2h] [rbp-48h] BYREF

  switch ( this->type )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x14u:
      result = *(unsigned int *)this->_anon_0.int64_value;
      break;
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
      result = *(unsigned int *)(this->_anon_0.int64_value + 8);
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(
        &v4,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set.cc",
        1703);
      v2 = google::protobuf::internal::LogMessage::operator<<(&v4, (const char *)&stru_1A17003B.lowercase_name_ + 3);
      google::protobuf::internal::LogFinisher::operator=(&v3, v2);
      google::protobuf::internal::LogMessage::~LogMessage(&v4);
      result = 0LL;
      break;
  }
  return result;
};

// Line 785: range 000000000C8EF750-000000000C8EF902
bool __fastcall google::protobuf::internal::WireFormatLite::SkipField(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag)
{
  __int64 v2; // rbp
  const google::protobuf::uint8 *v3; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  __int64 v5; // rsi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *buffer; // rax
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  bool v10; // sf
  int recursion_budget; // eax
  const google::protobuf::uint8 *v12; // rax
  int v13; // edx
  google::protobuf::uint64 value[3]; // [rsp+Ch] [rbp-20h] BYREF
  __int64 v15; // [rsp+24h] [rbp-8h]

  v15 = v2;
  switch ( tag & 7 )
  {
    case 0u:
      buffer = input->buffer_;
      if ( input->buffer_ < input->buffer_end_ && *(char *)buffer >= 0 )
      {
        input->buffer_ = buffer + 1;
        return 1;
      }
      else
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
        return Varint64Fallback.second;
      }
    case 1u:
      if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 7 )
        return google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, value);
      input->buffer_ += 8;
      return 1;
    case 2u:
      v3 = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ >= buffer_end )
      {
        LODWORD(v5) = 0;
      }
      else
      {
        v5 = *v3;
        if ( *(char *)v3 >= 0 )
        {
          v12 = v3 + 1;
          input->buffer_ = v12;
          goto LABEL_20;
        }
      }
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5);
      if ( Varint32Fallback < 0 )
        return 0;
      v5 = (int)Varint32Fallback;
      if ( (int)Varint32Fallback < 0 )
        return 0;
      v12 = input->buffer_;
      buffer_end = input->buffer_end_;
LABEL_20:
      v13 = (_DWORD)buffer_end - (_DWORD)v12;
      if ( (int)v5 > v13 )
        return google::protobuf::io::CodedInputStream::SkipFallback(input, v5, v13);
      input->buffer_ = &v12[v5];
      return 1;
    case 3u:
      v10 = --input->recursion_budget_ < 0;
      if ( v10 || !google::protobuf::internal::WireFormatLite::SkipMessage(input) )
        return 0;
      recursion_budget = input->recursion_budget_;
      if ( input->recursion_limit_ > recursion_budget )
        input->recursion_budget_ = recursion_budget + 1;
      return (tag & 0xFFFFFFF8 | 4) == input->last_tag_;
    case 4u:
      return 0;
    case 5u:
      if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 3 )
        return google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                 input,
                 (google::protobuf::uint32 *)value);
      input->buffer_ += 4;
      return 1;
    default:
      return 0;
  }
};
