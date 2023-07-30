// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_entry_lite.h

// Line 160: range 000000000C0C9944-000000000C0C9948
const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::KeyMapEntryAccessorType *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::key(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  return &this->key_;
};

// Line 162: range 000000000C0CA068-000000000C0CA11B
const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueMapEntryAccessorType *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::value(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogFinisher v3; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v4; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->default_instance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_5;
  }
  if ( !this->default_instance_ )
  {
LABEL_5:
    google::protobuf::internal::LogMessage::LogMessage(
      &v4,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "map_entry_lite.h",
      163);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v4, "CHECK failed: default_instance_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v3, v2);
    google::protobuf::internal::LogMessage::~LogMessage(&v4);
  }
  return &this->value_;
};

// Line 180: range 000000000C0CCCB4-000000000C0CD0B5
std::string *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::GetTypeName[abi:cxx11](
        std::string *retstr,
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  std::forward_iterator_tag v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    return google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::GetTypeName[abi:cxx11](
             retstr,
             (const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)this);
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char const*>(retstr, byte_18EB7660, byte_18EB7660, v2);
    return retstr;
  }
};

// Line 186: range 000000000C0CB002-000000000C0CB555
bool __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergePartialFromCodedStream(
        google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::KeyOnMemory *p_key; // r12
  google::protobuf::io::CodedInputStream *v4; // rbx
  unsigned __int64 buffer; // rax
  google::protobuf::uint32 *has_bits; // rdi
  char v7; // al
  const google::protobuf::uint8 *v8; // rax
  char v9; // dl
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::uint32 *v11; // rdi
  char v12; // cl
  bool result; // al
  char v14; // al
  unsigned __int64 v15; // rax
  char v16; // dl
  google::protobuf::io::CodedInputStream *p_buffer_end; // rdi
  char v18; // dl
  char v19; // al
  google::protobuf::uint32 *v20; // rdi
  char v21; // al
  const google::protobuf::uint8 *v22; // rax
  char v23; // dl
  google::protobuf::int64 v24; // rax
  google::protobuf::uint32 *p_buffer_size_after_limit; // rdi
  char v26; // cl
  char v27; // dl
  char v28; // cl
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  char v33; // al

  v4 = input;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        p_buffer_end = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_3:
          __asan_report_load8();
LABEL_4:
          buffer = __asan_report_load1(p_buffer_end);
LABEL_5:
          v4->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
          goto LABEL_34;
        }
        buffer = (unsigned __int64)v4->buffer_;
        p_buffer_end = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_3;
        if ( (const google::protobuf::uint8 *)buffer >= v4->buffer_end_ )
        {
          LODWORD(input) = 0;
        }
        else
        {
          p_buffer_end = (google::protobuf::io::CodedInputStream *)v4->buffer_;
          v18 = *(_BYTE *)((buffer >> 3) + 0x7FFF8000);
          if ( v18 <= ((__int64)v4->buffer_ & 7) && v18 )
            goto LABEL_4;
          input = (google::protobuf::io::CodedInputStream *)*(unsigned __int8 *)buffer;
          if ( *(char *)buffer >= 0 )
            goto LABEL_5;
        }
        input = (google::protobuf::io::CodedInputStream *)google::protobuf::io::CodedInputStream::ReadTagFallback(
                                                            v4,
                                                            (google::protobuf::uint32)input);
LABEL_34:
        if ( (_DWORD)input != 8 )
          break;
        has_bits = this->_has_bits_;
        v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
        if ( v7 && v7 <= 3 )
        {
          __asan_report_load4(has_bits);
LABEL_41:
          __asan_report_load8();
LABEL_42:
          __asan_report_load8();
          goto LABEL_43;
        }
        this->_has_bits_[0] |= 1u;
        p_key = &this->key_;
        has_bits = (google::protobuf::uint32 *)v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_41;
        v8 = v4->buffer_;
        has_bits = (google::protobuf::uint32 *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_42;
        if ( v8 < v4->buffer_end_ )
        {
          has_bits = (google::protobuf::uint32 *)v4->buffer_;
          v9 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
          if ( v9 > ((__int64)v4->buffer_ & 7) || !v9 )
          {
            input = (google::protobuf::io::CodedInputStream *)*v8;
            if ( *(char *)v8 < 0 )
              goto LABEL_15;
            goto LABEL_44;
          }
LABEL_43:
          __asan_report_load1(has_bits);
LABEL_44:
          v19 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_key & 7) + 3) < v19 || !v19 )
          {
            this->key_ = (unsigned int)input;
            ++v4->buffer_;
            result = 1;
            goto LABEL_18;
          }
          __asan_report_store4(p_key);
        }
        input = 0LL;
LABEL_15:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                             v4,
                             (google::protobuf::uint32)input);
        v11 = p_key;
        v12 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_key & 7) + 3) >= v12 && v12 )
        {
          __asan_report_store4(p_key);
LABEL_50:
          __asan_report_load4(v11);
LABEL_51:
          __asan_report_load8();
LABEL_52:
          __asan_report_load8();
LABEL_53:
          v15 = __asan_report_load1(v11);
LABEL_54:
          v4->buffer_ = (const google::protobuf::uint8 *)(v15 + 1);
          goto LABEL_55;
        }
        this->key_ = Varint32Fallback;
        result = Varint32Fallback >= 0;
LABEL_18:
        if ( !result )
          return result;
        v11 = this->_has_bits_;
        v14 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
        if ( v14 && v14 <= 3 )
          goto LABEL_50;
        this->_has_bits_[0] |= 1u;
        v11 = (google::protobuf::uint32 *)v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        v15 = (unsigned __int64)v4->buffer_;
        v11 = (google::protobuf::uint32 *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_52;
        if ( (const google::protobuf::uint8 *)v15 < v4->buffer_end_ )
        {
          v11 = (google::protobuf::uint32 *)v4->buffer_;
          v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
          if ( v16 <= ((__int64)v4->buffer_ & 7) && v16 )
            goto LABEL_53;
          if ( *(_BYTE *)v15 == 16 )
            goto LABEL_54;
        }
      }
      if ( (_DWORD)input != 16 )
        break;
LABEL_55:
      v20 = this->_has_bits_;
      v21 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
      if ( v21 && v21 <= 3 )
      {
        __asan_report_load4(v20);
LABEL_87:
        __asan_report_load8();
LABEL_88:
        __asan_report_load8();
        goto LABEL_89;
      }
      this->_has_bits_[0] |= 2u;
      p_key = &this->value_;
      v20 = (google::protobuf::uint32 *)v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        goto LABEL_87;
      v22 = v4->buffer_;
      v20 = (google::protobuf::uint32 *)&v4->buffer_end_;
      if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
        goto LABEL_88;
      if ( v22 < v4->buffer_end_ )
      {
        v20 = (google::protobuf::uint32 *)v4->buffer_;
        v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        if ( v23 > ((__int64)v4->buffer_ & 7) || !v23 )
        {
          input = (google::protobuf::io::CodedInputStream *)*v22;
          if ( *(char *)v22 < 0 )
            goto LABEL_63;
          goto LABEL_90;
        }
LABEL_89:
        __asan_report_load1(v20);
LABEL_90:
        v33 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_key & 7) + 3) < v33 || !v33 )
        {
          this->value_ = (unsigned int)input;
          ++v4->buffer_;
          result = 1;
          goto LABEL_66;
        }
        __asan_report_store4(p_key);
      }
      input = 0LL;
LABEL_63:
      v24 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v4, (google::protobuf::uint32)input);
      p_buffer_size_after_limit = p_key;
      v26 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_key & 7) + 3) >= v26 && v26 )
      {
        __asan_report_store4(p_key);
LABEL_96:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_97:
        __asan_report_load8();
LABEL_98:
        __asan_report_load8();
LABEL_99:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_100:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_101:
        __asan_report_load4(p_buffer_size_after_limit);
        goto LABEL_102;
      }
      this->value_ = v24;
      result = v24 >= 0;
LABEL_66:
      if ( !result )
        return result;
      p_buffer_size_after_limit = this->_has_bits_;
      v27 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
      if ( v27 && v27 <= 3 )
        goto LABEL_96;
      this->_has_bits_[0] |= 2u;
      p_buffer_size_after_limit = (google::protobuf::uint32 *)v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        goto LABEL_97;
      p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->buffer_end_;
      if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
        goto LABEL_98;
      if ( v4->buffer_ == v4->buffer_end_ )
      {
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->buffer_size_after_limit_;
        v28 = *(_BYTE *)(((unsigned __int64)&v4->buffer_size_after_limit_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v4 + 44) & 7) + 3) >= v28 && v28 )
          goto LABEL_99;
        if ( v4->buffer_size_after_limit_ )
          goto LABEL_80;
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->total_bytes_read_;
        v29 = *(_BYTE *)(((unsigned __int64)&v4->total_bytes_read_ >> 3) + 0x7FFF8000);
        if ( v29 && v29 <= 3 )
          goto LABEL_100;
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->current_limit_;
        v30 = *(_BYTE *)(((unsigned __int64)&v4->current_limit_ >> 3) + 0x7FFF8000);
        if ( v30 && v30 <= 3 )
          goto LABEL_101;
        if ( v4->total_bytes_read_ == v4->current_limit_ )
        {
LABEL_80:
          p_buffer_size_after_limit = &v4->last_tag_;
          v31 = *(_BYTE *)(((unsigned __int64)&v4->last_tag_ >> 3) + 0x7FFF8000);
          if ( !v31 || v31 > 3 )
          {
            v4->last_tag_ = 0;
            p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->legitimate_message_end_;
            v32 = *(_BYTE *)(((unsigned __int64)&v4->legitimate_message_end_ >> 3) + 0x7FFF8000);
            if ( v32 > (((unsigned __int8)v4 + 36) & 7) || !v32 )
            {
              v4->legitimate_message_end_ = 1;
              return result;
            }
            goto LABEL_103;
          }
LABEL_102:
          __asan_report_store4(p_buffer_size_after_limit);
LABEL_103:
          __asan_report_store1(p_buffer_size_after_limit, input);
          return 1;
        }
      }
    }
    if ( !(_DWORD)input )
      return 1;
    if ( ((unsigned __int8)input & 7) == 4 )
      return 1;
    result = google::protobuf::internal::WireFormatLite::SkipField(v4, (google::protobuf::uint32)input);
    if ( !result )
      return result;
  }
};

// Line 186: range 000000000C0CB55A-000000000C0CBAAD
bool __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergePartialFromCodedStream(
        google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::KeyOnMemory *p_key; // r12
  google::protobuf::io::CodedInputStream *v4; // rbx
  unsigned __int64 buffer; // rax
  google::protobuf::uint32 *has_bits; // rdi
  char v7; // al
  const google::protobuf::uint8 *v8; // rax
  char v9; // dl
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::uint32 *v11; // rdi
  char v12; // cl
  bool result; // al
  char v14; // al
  unsigned __int64 v15; // rax
  char v16; // dl
  google::protobuf::io::CodedInputStream *p_buffer_end; // rdi
  char v18; // dl
  char v19; // al
  google::protobuf::uint32 *v20; // rdi
  char v21; // al
  const google::protobuf::uint8 *v22; // rax
  char v23; // dl
  google::protobuf::int64 v24; // rax
  google::protobuf::uint32 *p_buffer_size_after_limit; // rdi
  char v26; // cl
  char v27; // dl
  char v28; // cl
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  char v33; // al

  v4 = input;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        p_buffer_end = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_3:
          __asan_report_load8();
LABEL_4:
          buffer = __asan_report_load1(p_buffer_end);
LABEL_5:
          v4->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
          goto LABEL_34;
        }
        buffer = (unsigned __int64)v4->buffer_;
        p_buffer_end = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_3;
        if ( (const google::protobuf::uint8 *)buffer >= v4->buffer_end_ )
        {
          LODWORD(input) = 0;
        }
        else
        {
          p_buffer_end = (google::protobuf::io::CodedInputStream *)v4->buffer_;
          v18 = *(_BYTE *)((buffer >> 3) + 0x7FFF8000);
          if ( v18 <= ((__int64)v4->buffer_ & 7) && v18 )
            goto LABEL_4;
          input = (google::protobuf::io::CodedInputStream *)*(unsigned __int8 *)buffer;
          if ( *(char *)buffer >= 0 )
            goto LABEL_5;
        }
        input = (google::protobuf::io::CodedInputStream *)google::protobuf::io::CodedInputStream::ReadTagFallback(
                                                            v4,
                                                            (google::protobuf::uint32)input);
LABEL_34:
        if ( (_DWORD)input != 8 )
          break;
        has_bits = this->_has_bits_;
        v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
        if ( v7 && v7 <= 3 )
        {
          __asan_report_load4(has_bits);
LABEL_41:
          __asan_report_load8();
LABEL_42:
          __asan_report_load8();
          goto LABEL_43;
        }
        this->_has_bits_[0] |= 1u;
        p_key = &this->key_;
        has_bits = (google::protobuf::uint32 *)v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_41;
        v8 = v4->buffer_;
        has_bits = (google::protobuf::uint32 *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_42;
        if ( v8 < v4->buffer_end_ )
        {
          has_bits = (google::protobuf::uint32 *)v4->buffer_;
          v9 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
          if ( v9 > ((__int64)v4->buffer_ & 7) || !v9 )
          {
            input = (google::protobuf::io::CodedInputStream *)*v8;
            if ( *(char *)v8 < 0 )
              goto LABEL_15;
            goto LABEL_44;
          }
LABEL_43:
          __asan_report_load1(has_bits);
LABEL_44:
          v19 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_key & 7) + 3) < v19 || !v19 )
          {
            this->key_ = (unsigned int)input;
            ++v4->buffer_;
            result = 1;
            goto LABEL_18;
          }
          __asan_report_store4(p_key);
        }
        input = 0LL;
LABEL_15:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                             v4,
                             (google::protobuf::uint32)input);
        v11 = p_key;
        v12 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_key & 7) + 3) >= v12 && v12 )
        {
          __asan_report_store4(p_key);
LABEL_50:
          __asan_report_load4(v11);
LABEL_51:
          __asan_report_load8();
LABEL_52:
          __asan_report_load8();
LABEL_53:
          v15 = __asan_report_load1(v11);
LABEL_54:
          v4->buffer_ = (const google::protobuf::uint8 *)(v15 + 1);
          goto LABEL_55;
        }
        this->key_ = Varint32Fallback;
        result = Varint32Fallback >= 0;
LABEL_18:
        if ( !result )
          return result;
        v11 = this->_has_bits_;
        v14 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
        if ( v14 && v14 <= 3 )
          goto LABEL_50;
        this->_has_bits_[0] |= 1u;
        v11 = (google::protobuf::uint32 *)v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        v15 = (unsigned __int64)v4->buffer_;
        v11 = (google::protobuf::uint32 *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_52;
        if ( (const google::protobuf::uint8 *)v15 < v4->buffer_end_ )
        {
          v11 = (google::protobuf::uint32 *)v4->buffer_;
          v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
          if ( v16 <= ((__int64)v4->buffer_ & 7) && v16 )
            goto LABEL_53;
          if ( *(_BYTE *)v15 == 16 )
            goto LABEL_54;
        }
      }
      if ( (_DWORD)input != 16 )
        break;
LABEL_55:
      v20 = this->_has_bits_;
      v21 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
      if ( v21 && v21 <= 3 )
      {
        __asan_report_load4(v20);
LABEL_87:
        __asan_report_load8();
LABEL_88:
        __asan_report_load8();
        goto LABEL_89;
      }
      this->_has_bits_[0] |= 2u;
      p_key = &this->value_;
      v20 = (google::protobuf::uint32 *)v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        goto LABEL_87;
      v22 = v4->buffer_;
      v20 = (google::protobuf::uint32 *)&v4->buffer_end_;
      if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
        goto LABEL_88;
      if ( v22 < v4->buffer_end_ )
      {
        v20 = (google::protobuf::uint32 *)v4->buffer_;
        v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        if ( v23 > ((__int64)v4->buffer_ & 7) || !v23 )
        {
          input = (google::protobuf::io::CodedInputStream *)*v22;
          if ( *(char *)v22 < 0 )
            goto LABEL_63;
          goto LABEL_90;
        }
LABEL_89:
        __asan_report_load1(v20);
LABEL_90:
        v33 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_key & 7) + 3) < v33 || !v33 )
        {
          this->value_ = (unsigned int)input;
          ++v4->buffer_;
          result = 1;
          goto LABEL_66;
        }
        __asan_report_store4(p_key);
      }
      input = 0LL;
LABEL_63:
      v24 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v4, (google::protobuf::uint32)input);
      p_buffer_size_after_limit = p_key;
      v26 = *(_BYTE *)(((unsigned __int64)p_key >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_key & 7) + 3) >= v26 && v26 )
      {
        __asan_report_store4(p_key);
LABEL_96:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_97:
        __asan_report_load8();
LABEL_98:
        __asan_report_load8();
LABEL_99:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_100:
        __asan_report_load4(p_buffer_size_after_limit);
LABEL_101:
        __asan_report_load4(p_buffer_size_after_limit);
        goto LABEL_102;
      }
      this->value_ = v24;
      result = v24 >= 0;
LABEL_66:
      if ( !result )
        return result;
      p_buffer_size_after_limit = this->_has_bits_;
      v27 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
      if ( v27 && v27 <= 3 )
        goto LABEL_96;
      this->_has_bits_[0] |= 2u;
      p_buffer_size_after_limit = (google::protobuf::uint32 *)v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        goto LABEL_97;
      p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->buffer_end_;
      if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
        goto LABEL_98;
      if ( v4->buffer_ == v4->buffer_end_ )
      {
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->buffer_size_after_limit_;
        v28 = *(_BYTE *)(((unsigned __int64)&v4->buffer_size_after_limit_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v4 + 44) & 7) + 3) >= v28 && v28 )
          goto LABEL_99;
        if ( v4->buffer_size_after_limit_ )
          goto LABEL_80;
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->total_bytes_read_;
        v29 = *(_BYTE *)(((unsigned __int64)&v4->total_bytes_read_ >> 3) + 0x7FFF8000);
        if ( v29 && v29 <= 3 )
          goto LABEL_100;
        p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->current_limit_;
        v30 = *(_BYTE *)(((unsigned __int64)&v4->current_limit_ >> 3) + 0x7FFF8000);
        if ( v30 && v30 <= 3 )
          goto LABEL_101;
        if ( v4->total_bytes_read_ == v4->current_limit_ )
        {
LABEL_80:
          p_buffer_size_after_limit = &v4->last_tag_;
          v31 = *(_BYTE *)(((unsigned __int64)&v4->last_tag_ >> 3) + 0x7FFF8000);
          if ( !v31 || v31 > 3 )
          {
            v4->last_tag_ = 0;
            p_buffer_size_after_limit = (google::protobuf::uint32 *)&v4->legitimate_message_end_;
            v32 = *(_BYTE *)(((unsigned __int64)&v4->legitimate_message_end_ >> 3) + 0x7FFF8000);
            if ( v32 > (((unsigned __int8)v4 + 36) & 7) || !v32 )
            {
              v4->legitimate_message_end_ = 1;
              return result;
            }
            goto LABEL_103;
          }
LABEL_102:
          __asan_report_store4(p_buffer_size_after_limit);
LABEL_103:
          __asan_report_store1(p_buffer_size_after_limit, input);
          return 1;
        }
      }
    }
    if ( !(_DWORD)input )
      return 1;
    if ( ((unsigned __int8)input & 7) == 4 )
      return 1;
    result = google::protobuf::internal::WireFormatLite::SkipField(v4, (google::protobuf::uint32)input);
    if ( !result )
      return result;
  }
};

// Line 228: range 000000000C0CA53A-000000000C0CA6BF
size_t __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ByteSizeLong(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::uint32 *has_bits; // rdi
  char v3; // al
  unsigned __int64 v4; // rax
  char v5; // cl
  __int64 v6; // rbp
  char v7; // al
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rax

  has_bits = this->_has_bits_;
  v3 = *(_BYTE *)(((unsigned __int64)has_bits >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    __asan_report_load4(has_bits);
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( (this->_has_bits_[0] & 1) == 0 )
  {
LABEL_22:
    v6 = 0LL;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
LABEL_21:
    __asan_report_load4(v4);
    goto LABEL_22;
  }
  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 25))(this);
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( (char)((v4 & 7) + 3) >= v5 && v5 )
    goto LABEL_21;
  _BitScanReverse((unsigned int *)&v4, *(_DWORD *)v4 | 1);
  v6 = ((unsigned int)(9 * v4 + 73) >> 6) + 1LL;
LABEL_9:
  v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(this->_has_bits_);
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  if ( (this->_has_bits_[0] & 2) == 0 )
  {
LABEL_27:
    v10 = 0LL;
    return v6 + v10;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load4(v8);
    goto LABEL_27;
  }
  v8 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 26))(this);
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v9 && v9 )
    goto LABEL_26;
  _BitScanReverse((unsigned int *)&v8, *(_DWORD *)v8 | 1);
  v10 = ((unsigned int)(9 * v8 + 73) >> 6) + 1LL;
  return v6 + v10;
};

// Line 228: range 000000000C0CA6C2-000000000C0CA847
size_t __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ByteSizeLong(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::uint32 *has_bits; // rdi
  char v3; // al
  unsigned __int64 v4; // rax
  char v5; // cl
  __int64 v6; // rbp
  char v7; // al
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rax

  has_bits = this->_has_bits_;
  v3 = *(_BYTE *)(((unsigned __int64)has_bits >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    __asan_report_load4(has_bits);
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( (this->_has_bits_[0] & 1) == 0 )
  {
LABEL_22:
    v6 = 0LL;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
LABEL_21:
    __asan_report_load4(v4);
    goto LABEL_22;
  }
  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 25))(this);
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( (char)((v4 & 7) + 3) >= v5 && v5 )
    goto LABEL_21;
  _BitScanReverse((unsigned int *)&v4, *(_DWORD *)v4 | 1);
  v6 = ((unsigned int)(9 * v4 + 73) >> 6) + 1LL;
LABEL_9:
  v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(this->_has_bits_);
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  if ( (this->_has_bits_[0] & 2) == 0 )
  {
LABEL_27:
    v10 = 0LL;
    return v6 + v10;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load4(v8);
    goto LABEL_27;
  }
  v8 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 26))(this);
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v9 && v9 )
    goto LABEL_26;
  _BitScanReverse((unsigned int *)&v8, *(_DWORD *)v8 | 1);
  v10 = ((unsigned int)(9 * v8 + 73) >> 6) + 1LL;
  return v6 + v10;
};

// Line 237: range 000000000C0CA84A-000000000C0CAF28
void __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SerializeWithCachedSizes(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rbp
  unsigned __int64 v3; // rax
  char v4; // cl
  google::protobuf::io::CodedOutputStream *v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // cl
  const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v8; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_11;
  }
  v2 = output;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
LABEL_12:
    __asan_report_load4(v3);
    goto LABEL_13;
  }
  v3 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 25))(this);
  v4 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
  if ( (char)((v3 & 7) + 3) >= v4 && v4 )
    goto LABEL_12;
  v5 = output;
  output = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)v3;
  google::protobuf::internal::WireFormatLite::WriteUInt32(1, (google::protobuf::uint32)output, v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  v6 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 26))(this);
  v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( (char)((v6 & 7) + 3) < v7 || !v7 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, *(_DWORD *)v6, v2);
    return;
  }
LABEL_15:
  v8 = (const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)v6;
  __asan_report_load4(v6);
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SerializeWithCachedSizes(
    v8,
    output);
};

// Line 242: range 000000000C0C994A-000000000C0C9E3B
// local variable allocation has failed, the output may be wrong!
google::protobuf::uint8 *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        bool deterministic,
        google::protobuf::uint8 *output)
{
  google::protobuf::uint8 *v3; // rbx
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned int v6; // eax
  char v7; // dl
  google::protobuf::uint8 v8; // cl
  char v9; // dl
  char v10; // dl
  unsigned __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // eax
  google::protobuf::uint8 *v14; // rdi
  char v15; // dl
  google::protobuf::uint8 v16; // cl
  char v17; // dl
  char v18; // dl
  google::protobuf::uint8 *v20; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_9;
  }
  v3 = output;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8();
LABEL_10:
    __asan_report_load4(v4);
LABEL_11:
    v6 = __asan_report_store1(v3, deterministic);
    goto LABEL_12;
  }
  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const, bool))this->_vptr_MessageLite
        + 25))(
         this,
         deterministic);
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( (char)((v4 & 7) + 3) >= v5 && v5 )
    goto LABEL_10;
  v6 = *(_DWORD *)v4;
  v7 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( v7 <= ((unsigned __int8)v3 & 7) && v7 )
    goto LABEL_11;
  *v3++ = 8;
  while ( v6 > 0x7F )
  {
    v8 = v6 | 0x80;
    v9 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    *(_QWORD *)&deterministic = (unsigned __int8)v3 & 7;
    if ( v9 <= deterministic && v9 )
    {
      LOBYTE(v6) = __asan_report_store1(v3, deterministic);
      break;
    }
LABEL_12:
    *v3 = v8;
    v6 >>= 7;
    ++v3;
  }
  v10 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( v10 <= ((unsigned __int8)v3 & 7) && v10 )
  {
    __asan_report_store1(v3, deterministic);
    goto LABEL_27;
  }
  *v3 = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8();
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
LABEL_29:
    v14 = (google::protobuf::uint8 *)v11;
    __asan_report_load4(v11);
LABEL_30:
    v13 = __asan_report_store1(v14, deterministic);
    goto LABEL_31;
  }
  v11 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
         + 26))(this);
  v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
  if ( (char)((v11 & 7) + 3) >= v12 && v12 )
    goto LABEL_29;
  v13 = *(_DWORD *)v11;
  v14 = v3 + 1;
  v15 = *(_BYTE *)(((unsigned __int64)(v3 + 1) >> 3) + 0x7FFF8000);
  if ( v15 <= (((unsigned __int8)v3 + 1) & 7) && v15 )
    goto LABEL_30;
  v3[1] = 16;
  v3 += 2;
  while ( v13 > 0x7F )
  {
    v16 = v13 | 0x80;
    v17 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    *(_QWORD *)&deterministic = (unsigned __int8)v3 & 7;
    if ( v17 <= deterministic && v17 )
    {
      LOBYTE(v13) = __asan_report_store1(v3, deterministic);
      break;
    }
LABEL_31:
    *v3 = v16;
    v13 >>= 7;
    ++v3;
  }
  v18 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( v18 <= ((unsigned __int8)v3 & 7) && v18 )
  {
    __asan_report_store1(v3, deterministic);
    return google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InternalSerializeWithCachedSizesToArray(
             (const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)v3,
             deterministic,
             v20);
  }
  else
  {
    *v3 = v13;
    return v3 + 1;
  }
};

// Line 253: range 000000000C0CA23A-000000000C0CA3B7
int __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::GetCachedSize(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::uint32 *has_bits; // rdi
  char v3; // al
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned int v6; // ebp
  char v7; // al
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned int v10; // eax

  has_bits = this->_has_bits_;
  v3 = *(_BYTE *)(((unsigned __int64)has_bits >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    __asan_report_load4(has_bits);
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( (this->_has_bits_[0] & 1) == 0 )
  {
LABEL_22:
    v6 = 0;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
LABEL_21:
    __asan_report_load4(v4);
    goto LABEL_22;
  }
  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 25))(this);
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( (char)((v4 & 7) + 3) >= v5 && v5 )
    goto LABEL_21;
  _BitScanReverse((unsigned int *)&v4, *(_DWORD *)v4 | 1);
  v6 = ((unsigned int)(9 * v4 + 73) >> 6) + 1;
LABEL_9:
  v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(this->_has_bits_);
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  if ( (this->_has_bits_[0] & 2) == 0 )
  {
LABEL_27:
    v10 = 0;
    return v6 + v10;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load4(v8);
    goto LABEL_27;
  }
  v8 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 26))(this);
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v9 && v9 )
    goto LABEL_26;
  _BitScanReverse((unsigned int *)&v8, *(_DWORD *)v8 | 1);
  v10 = ((unsigned int)(9 * v8 + 73) >> 6) + 1;
  return v6 + v10;
};

// Line 253: range 000000000C0CA3BA-000000000C0CA537
int __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::GetCachedSize(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::uint32 *has_bits; // rdi
  char v3; // al
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned int v6; // ebp
  char v7; // al
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned int v10; // eax

  has_bits = this->_has_bits_;
  v3 = *(_BYTE *)(((unsigned __int64)has_bits >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    __asan_report_load4(has_bits);
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( (this->_has_bits_[0] & 1) == 0 )
  {
LABEL_22:
    v6 = 0;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 25) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
LABEL_21:
    __asan_report_load4(v4);
    goto LABEL_22;
  }
  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 25))(this);
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( (char)((v4 & 7) + 3) >= v5 && v5 )
    goto LABEL_21;
  _BitScanReverse((unsigned int *)&v4, *(_DWORD *)v4 | 1);
  v6 = ((unsigned int)(9 * v4 + 73) >> 6) + 1;
LABEL_9:
  v7 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(this->_has_bits_);
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  if ( (this->_has_bits_[0] & 2) == 0 )
  {
LABEL_27:
    v10 = 0;
    return v6 + v10;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MessageLite + 26) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load4(v8);
    goto LABEL_27;
  }
  v8 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MessageLite
        + 26))(this);
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v9 && v9 )
    goto LABEL_26;
  _BitScanReverse((unsigned int *)&v8, *(_DWORD *)v8 | 1);
  v10 = ((unsigned int)(9 * v8 + 73) >> 6) + 1;
  return v6 + v10;
};

// Line 266: range 000000000C0CC2CC-000000000C0CC346
google::protobuf::Message *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::New(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v1; // rbx
  struct _Unwind_Exception *v3; // rbp

  v1 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)operator new(0x30uLL);
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_instance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_5:
    v3 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(v1, 0x30uLL);
    __asan_handle_no_return(v1);
    _Unwind_Resume(v3);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v1->default_instance_ >> 3) + 0x7FFF8000) )
    goto LABEL_5;
  v1->default_instance_ = this->default_instance_;
  return v1;
};

// Line 272: range 000000000C0CC1EA-000000000C0CC2C6
google::protobuf::Message *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::New(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::Arena *arena)
{
  proto::PacketHead::PacketHead_ExtMapEntry *Aligned; // rbx
  struct _Unwind_Exception *v4; // rbp

  if ( arena )
  {
    if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( !arena->hooks_cookie_ )
    {
LABEL_4:
      Aligned = (proto::PacketHead::PacketHead_ExtMapEntry *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                               &arena->impl_,
                                                               0x30uLL);
      proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(Aligned, arena);
      goto LABEL_5;
    }
    google::protobuf::Arena::OnArenaAllocation(
      arena,
      (const std::type_info *)&`typeinfo for'proto::PacketHead::PacketHead_ExtMapEntry,
      0x30uLL);
    goto LABEL_4;
  }
  Aligned = (proto::PacketHead::PacketHead_ExtMapEntry *)operator new(0x30uLL);
  proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(Aligned);
LABEL_5:
  if ( *(_BYTE *)(((unsigned __int64)&this->default_instance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_12:
    v4 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(Aligned, 0x30uLL);
    __asan_handle_no_return(Aligned);
    _Unwind_Resume(v4);
  }
  if ( *(_BYTE *)(((unsigned __int64)&Aligned->default_instance_ >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  Aligned->default_instance_ = this->default_instance_;
  return Aligned;
};

// Line 272: range 000000000C0CC34C-000000000C0CC428
google::protobuf::Message *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::New(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::Arena *arena)
{
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *Aligned; // rbx
  struct _Unwind_Exception *v4; // rbp

  if ( arena )
  {
    if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( !arena->hooks_cookie_ )
    {
LABEL_4:
      Aligned = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                        &arena->impl_,
                                                                        0x30uLL);
      proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(Aligned, arena);
      goto LABEL_5;
    }
    google::protobuf::Arena::OnArenaAllocation(
      arena,
      (const std::type_info *)&`typeinfo for'proto::PacketHead::PacketHead_ServiceAppIdMapEntry,
      0x30uLL);
    goto LABEL_4;
  }
  Aligned = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)operator new(0x30uLL);
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(Aligned);
LABEL_5:
  if ( *(_BYTE *)(((unsigned __int64)&this->default_instance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_12:
    v4 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(Aligned, 0x30uLL);
    __asan_handle_no_return(Aligned);
    _Unwind_Resume(v4);
  }
  if ( *(_BYTE *)(((unsigned __int64)&Aligned->default_instance_ >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  Aligned->default_instance_ = this->default_instance_;
  return Aligned;
};

// Line 283: range 000000000C0C9F2C-000000000C0C9F31
size_t __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedLong(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  return 48LL;
};

// Line 283: range 000000000C0C9E3C-000000000C0C9E41
size_t __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedLong(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  return 48LL;
};

// Line 335: range 000000000C0CC8E3-000000000C0CCAC6
proto::PacketHead::PacketHead_ExtMapEntry *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
        const unsigned int *key,
        const unsigned int *value,
        google::protobuf::Arena *arena)
{
  google::protobuf::Arena *v3; // rbp
  unsigned __int64 Aligned; // rbx
  proto::PacketHead::PacketHead_ExtMapEntry *v6; // rdi
  char v7; // al
  proto::PacketHead::PacketHead_ExtMapEntry *v9; // rdi
  char v10; // al
  struct _Unwind_Exception *v11; // rax
  struct _Unwind_Exception *v12; // rbp

  if ( !arena )
  {
    Aligned = operator new(0x40uLL);
    proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(
      (proto::PacketHead::PacketHead_ExtMapEntry *const)Aligned,
      0LL);
    if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
    {
      v9 = (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
      __asan_report_store8();
    }
    else
    {
      *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                         + 2;
      v9 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 48);
      if ( !*(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(Aligned + 48) = key;
        v9 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 56);
        if ( !*(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(Aligned + 56) = value;
          v9 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 32);
          v10 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
          if ( !v10 || v10 > 3 )
          {
            *(_DWORD *)(Aligned + 32) |= 3u;
            return (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
          }
          goto LABEL_20;
        }
LABEL_19:
        __asan_report_store8();
LABEL_20:
        __asan_report_load4(v9);
        goto LABEL_21;
      }
    }
    __asan_report_store8();
    goto LABEL_19;
  }
  v3 = arena;
  if ( !*(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
    if ( !arena->hooks_cookie_ )
      goto LABEL_4;
    goto LABEL_22;
  }
LABEL_21:
  __asan_report_load8();
LABEL_22:
  google::protobuf::Arena::OnArenaAllocation(
    v3,
    (const std::type_info *)&`typeinfo for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper,
    0x40uLL);
LABEL_4:
  Aligned = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(&v3->impl_, 0x40uLL);
  proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(
    (proto::PacketHead::PacketHead_ExtMapEntry *const)Aligned,
    v3);
  if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
  {
    v6 = (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                     + 2;
  v6 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 48);
  if ( *(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(Aligned + 48) = key;
  v6 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 56);
  if ( *(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)(Aligned + 56) = value;
  v6 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 32);
  v7 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
LABEL_26:
    __asan_report_load4(v6);
    v12 = v11;
    operator delete((void *)Aligned, 0x40uLL);
    __asan_handle_no_return(Aligned);
    _Unwind_Resume(v12);
  }
  *(_DWORD *)(Aligned + 32) |= 3u;
  return (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
};

// Line 335: range 000000000C0CCACB-000000000C0CCCAE
proto::PacketHead::PacketHead_ServiceAppIdMapEntry *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
        const unsigned int *key,
        const unsigned int *value,
        google::protobuf::Arena *arena)
{
  google::protobuf::Arena *v3; // rbp
  unsigned __int64 Aligned; // rbx
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v6; // rdi
  char v7; // al
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v9; // rdi
  char v10; // al
  struct _Unwind_Exception *v11; // rax
  struct _Unwind_Exception *v12; // rbp

  if ( !arena )
  {
    Aligned = operator new(0x40uLL);
    proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(
      (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const)Aligned,
      0LL);
    if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
    {
      v9 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)Aligned;
      __asan_report_store8();
    }
    else
    {
      *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                         + 2;
      v9 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 48);
      if ( !*(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(Aligned + 48) = key;
        v9 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 56);
        if ( !*(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(Aligned + 56) = value;
          v9 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 32);
          v10 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
          if ( !v10 || v10 > 3 )
          {
            *(_DWORD *)(Aligned + 32) |= 3u;
            return (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)Aligned;
          }
          goto LABEL_20;
        }
LABEL_19:
        __asan_report_store8();
LABEL_20:
        __asan_report_load4(v9);
        goto LABEL_21;
      }
    }
    __asan_report_store8();
    goto LABEL_19;
  }
  v3 = arena;
  if ( !*(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
    if ( !arena->hooks_cookie_ )
      goto LABEL_4;
    goto LABEL_22;
  }
LABEL_21:
  __asan_report_load8();
LABEL_22:
  google::protobuf::Arena::OnArenaAllocation(
    v3,
    (const std::type_info *)&`typeinfo for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper,
    0x40uLL);
LABEL_4:
  Aligned = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(&v3->impl_, 0x40uLL);
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(
    (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const)Aligned,
    v3);
  if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
  {
    v6 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)Aligned;
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                     + 2;
  v6 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 48);
  if ( *(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(Aligned + 48) = key;
  v6 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 56);
  if ( *(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)(Aligned + 56) = value;
  v6 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(Aligned + 32);
  v7 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
LABEL_26:
    __asan_report_load4(v6);
    v12 = v11;
    operator delete((void *)Aligned, 0x40uLL);
    __asan_handle_no_return(Aligned);
    _Unwind_Resume(v12);
  }
  *(_DWORD *)(Aligned + 32) |= 3u;
  return (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)Aligned;
};

// Line 413: range 000000000C0D7C5C-000000000C0DA5E1
bool __fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int>>::ReadBeyondKeyValuePair(
        google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int> > *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::io::CodedInputStream *v2; // r13
  google::protobuf::Arena *arena; // r12
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *Aligned; // rbp
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *ptr; // rdi
  unsigned __int64 v7; // rdx
  google::protobuf::internal::scoped_ptr<google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> > *p_entry; // rdi
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v9; // rax
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory *has_bits; // rdi
  char v11; // dl
  char v12; // cl
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory v13; // esi
  char v14; // cl
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v15; // rax
  unsigned __int64 p_key; // rdi
  char v17; // dl
  char v18; // cl
  char v19; // cl
  google::protobuf::io::CodedInputStream *value; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  google::protobuf::internal::scoped_ptr<google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> > *v23; // rdi
  struct _Unwind_Exception *v25; // rax
  struct _Unwind_Exception *v26; // rbx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  char v29; // cl
  unsigned int v30; // edx
  unsigned __int64 p_map; // rdi
  char v32; // al
  unsigned __int64 v33; // rax
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v34; // rdx
  google::protobuf::uint32 *p_value; // rdi
  char v36; // cl
  char v37; // si
  char v38; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_46;
  }
  v2 = input;
  if ( *(_BYTE *)(((unsigned __int64)&this->mf_->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8();
    goto LABEL_47;
  }
  arena = this->mf_->impl_.arena_;
  if ( arena )
  {
    if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( !arena->hooks_cookie_ )
    {
LABEL_6:
      Aligned = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                        &arena->impl_,
                                                                        0x30uLL);
      proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(Aligned, arena);
      goto LABEL_7;
    }
    google::protobuf::Arena::OnArenaAllocation(
      arena,
      (const std::type_info *)&`typeinfo for'proto::PacketHead::PacketHead_ServiceAppIdMapEntry,
      0x30uLL);
    goto LABEL_6;
  }
LABEL_47:
  Aligned = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)operator new(0x30uLL);
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(Aligned);
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    v26 = v25;
    operator delete(Aligned, 0x30uLL);
    __asan_handle_no_return(Aligned);
    _Unwind_Resume(v26);
  }
  ptr = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)this->entry_.ptr_;
  if ( ptr != Aligned )
  {
    if ( !ptr )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v7 = (unsigned __int64)(ptr->_vptr_MessageLite + 1);
      if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))ptr->_vptr_MessageLite + 1))();
LABEL_13:
        p_entry = &this->entry_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
        {
          this->entry_.ptr_ = Aligned;
          goto LABEL_15;
        }
LABEL_53:
        __asan_report_store8();
        goto LABEL_54;
      }
    }
    p_entry = (google::protobuf::internal::scoped_ptr<google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> > *)v7;
    __asan_report_load8();
    goto LABEL_53;
  }
LABEL_15:
  p_entry = &this->entry_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8();
LABEL_55:
    __asan_handle_no_return(p_entry);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v9 = this->entry_.ptr_;
  if ( !v9 )
    goto LABEL_55;
  has_bits = v9->_has_bits_;
  v11 = *(_BYTE *)(((unsigned __int64)v9->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    __asan_report_load4(has_bits);
    goto LABEL_57;
  }
  v9->_has_bits_[0] |= 2u;
  has_bits = (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory *)&this->value_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8();
LABEL_58:
    __asan_report_load4(has_bits);
LABEL_59:
    __asan_report_store4(has_bits);
    goto LABEL_60;
  }
  has_bits = this->value_ptr_;
  v12 = *(_BYTE *)(((unsigned __int64)has_bits >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)has_bits & 7) + 3) >= v12 && v12 )
    goto LABEL_58;
  v13 = *has_bits;
  has_bits = &v9->value_;
  v14 = *(_BYTE *)(((unsigned __int64)&v9->value_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v9 + 20) & 7) + 3) >= v14 && v14 )
    goto LABEL_59;
  v9->value_ = v13;
  has_bits = (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory *)&this->map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8();
    goto LABEL_61;
  }
  google::protobuf::Map<unsigned int,unsigned int>::erase(this->map_, &this->key_);
  has_bits = (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory *)&this->entry_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8();
LABEL_62:
    __asan_handle_no_return(has_bits);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v15 = this->entry_.ptr_;
  if ( !v15 )
    goto LABEL_62;
  p_key = (unsigned __int64)v15->_has_bits_;
  v17 = *(_BYTE *)(((unsigned __int64)v15->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
  {
    __asan_report_load4(p_key);
LABEL_64:
    __asan_report_load4(p_key);
LABEL_65:
    __asan_report_store4(p_key);
LABEL_66:
    __asan_handle_no_return(p_key);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v15->_has_bits_[0] |= 1u;
  p_key = (unsigned __int64)&this->key_;
  v18 = *(_BYTE *)(((unsigned __int64)&this->key_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 16) & 7) + 3) >= v18 && v18 )
    goto LABEL_64;
  p_key = (unsigned __int64)&v15->key_;
  v19 = *(_BYTE *)(((unsigned __int64)&v15->key_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 16) & 7) + 3) >= v19 && v19 )
    goto LABEL_65;
  v15->key_ = this->key_;
  p_key = (unsigned __int64)this->entry_.ptr_;
  if ( !p_key )
    goto LABEL_66;
  if ( *(_BYTE *)((p_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_68;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_key + 88LL) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8();
    goto LABEL_69;
  }
  value = v2;
  LOBYTE(Aligned) = (*(__int64 (__fastcall **)(unsigned __int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)p_key + 88LL))(
                      p_key,
                      v2);
  if ( !(_BYTE)Aligned )
    goto LABEL_37;
LABEL_69:
  v27 = (unsigned __int64)&this->entry_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_89:
    __asan_handle_no_return(v27);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v27 = (unsigned __int64)this->entry_.ptr_;
  if ( !v27 )
    goto LABEL_89;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v27 + 200LL) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8();
LABEL_92:
    p_map = v28;
    __asan_report_load4(v28);
LABEL_93:
    __asan_report_store4(p_map);
    goto LABEL_94;
  }
  v28 = (*(__int64 (**)(void))(*(_QWORD *)v27 + 200LL))();
  v29 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
  if ( (char)((v28 & 7) + 3) >= v29 && v29 )
    goto LABEL_92;
  v30 = *(_DWORD *)v28;
  p_map = (unsigned __int64)&this->key_;
  v32 = *(_BYTE *)(((unsigned __int64)&this->key_ >> 3) + 0x7FFF8000);
  if ( v32 && v32 <= 3 )
    goto LABEL_93;
  this->key_ = v30;
  p_map = (unsigned __int64)&this->map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8();
    goto LABEL_95;
  }
  v33 = (unsigned __int64)google::protobuf::Map<unsigned int,unsigned int>::operator[](this->map_, &this->key_);
  p_map = (unsigned __int64)&this->value_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_store8();
    goto LABEL_96;
  }
  this->value_ptr_ = (unsigned int *)v33;
  p_map = (unsigned __int64)&this->entry_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8();
LABEL_97:
    __asan_handle_no_return(p_map);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v34 = this->entry_.ptr_;
  if ( !v34 )
    goto LABEL_97;
  p_value = v34->_has_bits_;
  v36 = *(_BYTE *)(((unsigned __int64)v34->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v36 && v36 <= 3 )
  {
    __asan_report_load4(p_value);
LABEL_99:
    __asan_report_load4(p_value);
LABEL_100:
    v21 = v33;
    __asan_report_store4(v33);
    goto LABEL_101;
  }
  v34->_has_bits_[0] |= 2u;
  p_value = &v34->value_;
  v37 = *(_BYTE *)(((unsigned __int64)&v34->value_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v34 + 20) & 7) + 3) >= v37 && v37 )
    goto LABEL_99;
  value = (google::protobuf::io::CodedInputStream *)v34->value_;
  v38 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
  if ( (char)((v33 & 7) + 3) >= v38 && v38 )
    goto LABEL_100;
  *(_DWORD *)v33 = (_DWORD)value;
LABEL_37:
  v21 = (unsigned __int64)&this->entry_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8();
LABEL_102:
    __asan_handle_no_return(v21);
    __assert_fail(
      "ptr_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0x5Fu,
      "C* google::protobuf::internal::scoped_ptr<C>::operator->() const [with C = google::protobuf::internal::MapEntryImp"
      "l<proto::PacketHead::PacketHead_ServiceAppIdMapEntry, google::protobuf::Message, unsigned int, unsigned int, googl"
      "e::protobuf::internal::WireFormatLite::TYPE_UINT32, google::protobuf::internal::WireFormatLite::TYPE_UINT32, 0>]");
  }
  v21 = (unsigned __int64)this->entry_.ptr_;
  if ( !v21 )
    goto LABEL_102;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_104;
  }
  v22 = *(_QWORD *)v21 + 40LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    v23 = (google::protobuf::internal::scoped_ptr<google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> > *)v22;
    __asan_report_load8();
    goto LABEL_105;
  }
  if ( !(*(__int64 (**)(void))(*(_QWORD *)v21 + 40LL))() )
    return (char)Aligned;
  v23 = &this->entry_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->entry_ >> 3) + 0x7FFF8000) )
  {
    this->entry_.ptr_ = 0LL;
    return (char)Aligned;
  }
LABEL_105:
  __asan_report_store8();
  return google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int>>::MergePartialFromCodedStream(
           (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int> > *const)v23,
           value);
};

// Line 475: range 000000000C0C9F32-000000000C0CA065
const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::KeyMapEntryAccessorType *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::key(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper *const this)
{
  if ( !*(_BYTE *)(((unsigned __int64)&this->key_ >> 3) + 0x7FFF8000) )
    return this->key_;
  __asan_report_load8();
  return google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::value((const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper *const)&this->key_);
};

// Line 475: range 000000000C0C9E42-000000000C0C9F2B
const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::KeyMapEntryAccessorType *__fastcall google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::key(
        const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper *const this)
{
  if ( !*(_BYTE *)(((unsigned __int64)&this->key_ >> 3) + 0x7FFF8000) )
    return this->key_;
  __asan_report_load8();
  return google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper::value((const google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper *const)&this->key_);
};
