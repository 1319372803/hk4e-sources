// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/wire_format_lite.cc

// Line 127: range 000000000C8EF930-000000000C8EF94A
bool __fastcall google::protobuf::internal::FieldSkipper::SkipField(
        google::protobuf::internal::FieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag)
{
  return tag >> 3 && google::protobuf::internal::WireFormatLite::SkipField(input, tag);
};

// Line 127: range 000000000C8EF910-000000000C8EF922
bool __fastcall google::protobuf::internal::WireFormatLite::SkipField(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag)
{
  return tag >> 3 && google::protobuf::internal::WireFormatLite::SkipField(input, tag);
};

// Line 172: range 000000000C8EFA40-000000000C8EFF3B
__int64 __fastcall google::protobuf::internal::WireFormatLite::SkipField(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::uint32 value,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  unsigned int v4; // r14d
  google::protobuf::uint32 v5; // ebp
  unsigned __int8 *v7; // rdx
  unsigned __int64 first; // r14
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  __int64 result; // rax
  int *v11; // rax
  int v12; // edx
  const google::protobuf::uint8 *v13; // rcx
  google::protobuf::uint8 *v14; // rax
  char v15; // dl
  int v16; // eax
  char *v17; // rax
  google::protobuf::uint32 v18; // r14d
  google::protobuf::uint32 v19; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v21; // rcx
  google::protobuf::uint8 *j; // rax
  char v23; // dl
  int v24; // eax
  int v25; // esi
  int v26; // eax
  const google::protobuf::uint8 *v27; // rsi
  unsigned int v28; // eax
  google::protobuf::uint8 *k; // rdx
  char v30; // cl
  int v31; // edx
  unsigned int v32; // eax
  std::string *M_p; // rdi
  char **v34; // rax
  char *v35; // rdx
  const google::protobuf::uint8 *v36; // rcx
  google::protobuf::uint8 *v37; // rax
  char v38; // dl
  int v39; // eax
  const google::protobuf::uint8 *v40; // rsi
  unsigned int v41; // eax
  google::protobuf::uint8 *m; // rdx
  char v43; // cl
  int v44; // edx
  bool v45; // sf
  int v46; // eax
  const google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *v48; // rax
  char v49; // dl
  int v50; // eax
  int v51; // edi
  int buffer_size; // eax
  const google::protobuf::uint8 *v53; // rcx
  google::protobuf::uint8 *i; // rax
  char v55; // dl
  int v56; // eax
  google::protobuf::uint64 v57; // rsi
  unsigned int v58; // eax
  unsigned int v59; // eax
  std::string valuea[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( value >> 3 )
  {
    v5 = value;
    switch ( value & 7 )
    {
      case 0u:
        v7 = *(unsigned __int8 **)this->gap0;
        if ( *(_QWORD *)this->gap0 < *(_QWORD *)this[8].gap0 && (first = *v7, (first & 0x80u) == 0LL) )
        {
          *(_QWORD *)this->gap0 = v7 + 1;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback((google::protobuf::io::CodedInputStream *const)this);
          first = Varint64Fallback.first;
          if ( !Varint64Fallback.second )
            return 0;
        }
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, value);
          buffer_size = a3->buffer_size_;
        }
        else
        {
          buffer = a3->buffer_;
          v48 = (google::protobuf::uint8 *)buffer;
          if ( value > 0x7F )
          {
            do
            {
              v49 = v5;
              v5 >>= 7;
              *v48++ = v49 | 0x80;
            }
            while ( v5 > 0x7F );
          }
          *v48 = v5;
          v50 = (_DWORD)v48 + 1 - (_DWORD)buffer;
          v51 = a3->buffer_size_ - v50;
          a3->buffer_ += v50;
          a3->buffer_size_ = v51;
          buffer_size = v51;
        }
        if ( buffer_size <= 9 )
        {
          v57 = first;
          v4 = 1;
          google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v57);
        }
        else
        {
          v53 = a3->buffer_;
          for ( i = (google::protobuf::uint8 *)v53; first > 0x7F; *(i - 1) = v55 | 0x80 )
          {
            v55 = first;
            first >>= 7;
            ++i;
          }
          *i = first;
          v4 = 1;
          v56 = (_DWORD)i + 1 - (_DWORD)v53;
          a3->buffer_size_ -= v56;
          a3->buffer_ += v56;
        }
        return v4;
      case 1u:
        v34 = *(char ***)this->gap0;
        if ( *(_DWORD *)this[8].gap0 - *(_DWORD *)this->gap0 <= 7 )
        {
          LOBYTE(v58) = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                          (google::protobuf::io::CodedInputStream *const)this,
                          (google::protobuf::uint64 *)valuea);
          v4 = v58;
          if ( !(_BYTE)v58 )
            return v4;
        }
        else
        {
          v35 = *v34;
          *(_QWORD *)this->gap0 = v34 + 1;
          valuea[0]._M_dataplus._M_p = v35;
        }
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, value);
        }
        else
        {
          v36 = a3->buffer_;
          v37 = (google::protobuf::uint8 *)v36;
          if ( value > 0x7F )
          {
            do
            {
              v38 = v5;
              v5 >>= 7;
              *v37++ = v38 | 0x80;
            }
            while ( v5 > 0x7F );
          }
          *v37 = v5;
          v39 = (_DWORD)v37 + 1 - (_DWORD)v36;
          a3->buffer_size_ -= v39;
          a3->buffer_ += v39;
        }
        google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
          a3,
          (google::protobuf::uint64)valuea[0]._M_dataplus._M_p);
        return 1LL;
      case 2u:
        v17 = *(char **)this->gap0;
        if ( *(_QWORD *)this->gap0 >= *(_QWORD *)this[8].gap0 )
        {
          v18 = 0;
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          if ( *v17 >= 0 )
          {
            *(_QWORD *)this->gap0 = v17 + 1;
            goto LABEL_19;
          }
        }
        v19 = v18;
        v4 = 0;
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                             (google::protobuf::io::CodedInputStream *const)this,
                             v19);
        if ( Varint32Fallback < 0 )
          return v4;
        v18 = Varint32Fallback;
LABEL_19:
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v5);
          v26 = a3->buffer_size_;
        }
        else
        {
          v21 = a3->buffer_;
          for ( j = (google::protobuf::uint8 *)v21; v5 > 0x7F; *(j - 1) = v23 | 0x80 )
          {
            v23 = v5;
            v5 >>= 7;
            ++j;
          }
          *j = v5;
          v24 = (_DWORD)j + 1 - (_DWORD)v21;
          v25 = a3->buffer_size_ - v24;
          a3->buffer_ += v24;
          a3->buffer_size_ = v25;
          v26 = v25;
        }
        if ( v26 <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v18);
        }
        else
        {
          v27 = a3->buffer_;
          v28 = v18;
          for ( k = (google::protobuf::uint8 *)v27; v28 > 0x7F; *(k - 1) = v30 | 0x80 )
          {
            v30 = v28;
            v28 >>= 7;
            ++k;
          }
          *k = v28;
          v31 = (_DWORD)k + 1 - (_DWORD)v27;
          a3->buffer_size_ -= v31;
          a3->buffer_ += v31;
        }
        valuea[0]._M_dataplus._M_p = valuea[0]._anon_0._M_local_buf;
        valuea[0]._M_string_length = 0LL;
        valuea[0]._anon_0._M_local_buf[0] = 0;
        LOBYTE(v32) = google::protobuf::io::CodedInputStream::ReadString(
                        (google::protobuf::io::CodedInputStream *const)this,
                        valuea,
                        v18);
        M_p = (std::string *)valuea[0]._M_dataplus._M_p;
        v4 = v32;
        if ( (_BYTE)v32 )
        {
          google::protobuf::io::CodedOutputStream::WriteRaw(a3, valuea[0]._M_dataplus._M_p, valuea[0]._M_string_length);
          M_p = (std::string *)valuea[0]._M_dataplus._M_p;
        }
        if ( M_p != (std::string *)&valuea[0]._anon_0 )
          operator delete(M_p);
        return v4;
      case 3u:
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, value);
        }
        else
        {
          v40 = a3->buffer_;
          v41 = v5;
          for ( m = (google::protobuf::uint8 *)v40; v41 > 0x7F; *(m - 1) = v43 | 0x80 )
          {
            v43 = v41;
            v41 >>= 7;
            ++m;
          }
          *m = v41;
          v44 = (_DWORD)m + 1 - (_DWORD)v40;
          a3->buffer_size_ -= v44;
          a3->buffer_ += v44;
        }
        v45 = --*(_DWORD *)this[52].gap0 < 0;
        if ( v45
          || !google::protobuf::internal::WireFormatLite::SkipMessage(
                (google::protobuf::io::CodedInputStream *)this,
                a3) )
        {
          return 0;
        }
        v46 = *(_DWORD *)this[52].gap0;
        if ( *(_DWORD *)this[56].gap0 > v46 )
          *(_DWORD *)this[52].gap0 = v46 + 1;
        LOBYTE(v4) = (v5 & 0xFFFFFFF8 | 4) == *(_DWORD *)this[32].gap0;
        return v4;
      case 5u:
        v11 = *(int **)this->gap0;
        if ( *(_DWORD *)this[8].gap0 - *(_DWORD *)this->gap0 <= 3 )
        {
          LOBYTE(v59) = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                          (google::protobuf::io::CodedInputStream *const)this,
                          (google::protobuf::uint32 *)valuea);
          v4 = v59;
          if ( !(_BYTE)v59 )
            return v4;
        }
        else
        {
          v12 = *v11;
          *(_QWORD *)this->gap0 = v11 + 1;
          LODWORD(valuea[0]._M_dataplus._M_p) = v12;
        }
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, value);
        }
        else
        {
          v13 = a3->buffer_;
          v14 = (google::protobuf::uint8 *)v13;
          if ( value > 0x7F )
          {
            do
            {
              v15 = v5;
              v5 >>= 7;
              *v14++ = v15 | 0x80;
            }
            while ( v5 > 0x7F );
          }
          *v14 = v5;
          v16 = (_DWORD)v14 + 1 - (_DWORD)v13;
          a3->buffer_size_ -= v16;
          a3->buffer_ += v16;
        }
        google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
          a3,
          (google::protobuf::uint32)valuea[0]._M_dataplus._M_p);
        result = 1LL;
        break;
      default:
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return result;
};

// Line 230: range 000000000C8EF6D0-000000000C8EF742
bool __fastcall google::protobuf::internal::WireFormatLite::SkipMessage(google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::uint32 TagFallback; // esi
  bool result; // al
  const google::protobuf::uint8 *buffer; // rax

  while ( 1 )
  {
    buffer = input->buffer_;
    if ( input->buffer_ < input->buffer_end_ )
      break;
    TagFallback = 0;
LABEL_2:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    input->last_tag_ = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_3:
    if ( (TagFallback & 7) == 4 )
      return 1;
    result = google::protobuf::internal::WireFormatLite::SkipField(input, TagFallback);
    if ( !result )
      return result;
  }
  TagFallback = *buffer;
  if ( *(char *)buffer < 0 )
    goto LABEL_2;
  input->last_tag_ = TagFallback;
  input->buffer_ = buffer + 1;
  if ( TagFallback )
    goto LABEL_3;
  return 1;
};

// Line 250: range 000000000C8EF960-000000000C8EFA3B
bool __fastcall google::protobuf::internal::WireFormatLite::SkipMessage(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rcx
  google::protobuf::uint32 TagFallback; // esi
  bool result; // al
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint8 *v7; // rcx
  google::protobuf::uint8 *i; // rax
  char v9; // dl
  int v10; // eax

  while ( 1 )
  {
    buffer = input->buffer_;
    if ( input->buffer_ >= input->buffer_end_ )
    {
      TagFallback = 0;
LABEL_2:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      input->last_tag_ = TagFallback;
      if ( !TagFallback )
        return 1;
      goto LABEL_3;
    }
    TagFallback = *buffer;
    if ( *(char *)buffer < 0 )
      goto LABEL_2;
    input->last_tag_ = TagFallback;
    input->buffer_ = buffer + 1;
    if ( !TagFallback )
      return 1;
LABEL_3:
    if ( (TagFallback & 7) == 4 )
      break;
    result = google::protobuf::internal::WireFormatLite::SkipField(
               (google::protobuf::internal::WireFormatLite *)input,
               TagFallback,
               output,
               v2);
    if ( !result )
      return result;
  }
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, TagFallback);
    return 1;
  }
  else
  {
    v7 = output->buffer_;
    for ( i = v7; TagFallback > 0x7F; *(i - 1) = v9 | 0x80 )
    {
      v9 = TagFallback;
      TagFallback >>= 7;
      ++i;
    }
    *i = TagFallback;
    v10 = (_DWORD)i + 1 - (_DWORD)v7;
    output->buffer_size_ -= v10;
    output->buffer_ += v10;
    return 1;
  }
};

// Line 275: range 000000000C8EF950-000000000C8EF953
bool __fastcall google::protobuf::internal::FieldSkipper::SkipMessage(
        google::protobuf::internal::FieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input)
{
  return google::protobuf::internal::WireFormatLite::SkipMessage(input);
};

// Line 282: range 000000000C8EF5F0-000000000C8EF6C8
void __fastcall google::protobuf::internal::FieldSkipper::SkipUnknownEnum(
        google::protobuf::internal::FieldSkipper *const this,
        int a2,
        int a3)
{
  ;
};

// Line 285: range 000000000C8EFF40-000000000C8EFF4C
bool __fastcall google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipField(
        google::protobuf::internal::CodedOutputStreamFieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag)
{
  google::protobuf::io::CodedOutputStream *v3; // rcx

  return google::protobuf::internal::WireFormatLite::SkipField(
           (google::protobuf::internal::WireFormatLite *)input,
           tag,
           this->unknown_fields_,
           v3);
};

// Line 289: range 000000000C8EFF60-000000000C8EFF6A
bool __fastcall google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipMessage(
        google::protobuf::internal::CodedOutputStreamFieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input)
{
  return google::protobuf::internal::WireFormatLite::SkipMessage(input, this->unknown_fields_);
};

// Line 301: range 000000000C8F17F0-000000000C8F191E
bool __fastcall google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(
        google::protobuf::io::CodedInputStream *input,
        bool (*is_valid)(int),
        google::protobuf::RepeatedField<int> *values)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v6; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::io::CodedInputStream::Limit v9; // r14d
  const google::protobuf::uint8 *v10; // rax
  google::protobuf::int64 v11; // r12
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax

  buffer = input->buffer_;
  if ( input->buffer_ >= input->buffer_end_ )
  {
    v6 = 0;
  }
  else
  {
    v6 = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      input->buffer_ = buffer + 1;
      goto LABEL_6;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v6);
  if ( Varint32Fallback < 0 )
    return 0;
  v6 = Varint32Fallback;
LABEL_6:
  v9 = google::protobuf::io::CodedInputStream::PushLimit(input, v6);
LABEL_7:
  if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
  {
    while ( 1 )
    {
      v10 = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
        break;
      LODWORD(v11) = *v10;
      if ( *(char *)v10 < 0 )
        goto LABEL_10;
      input->buffer_ = v10 + 1;
LABEL_11:
      if ( is_valid && !is_valid(v11) )
        goto LABEL_7;
      current_size = values->current_size_;
      if ( (_DWORD)current_size == values->total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(values, current_size + 1);
        current_size = values->current_size_;
      }
      rep = values->rep_;
      values->current_size_ = current_size + 1;
      rep->elements[current_size] = v11;
      if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
        goto LABEL_16;
    }
    LODWORD(v11) = 0;
LABEL_10:
    v11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v11);
    if ( v11 < 0 )
      return 0;
    goto LABEL_11;
  }
LABEL_16:
  google::protobuf::io::CodedInputStream::PopLimit(input, v9);
  return 1;
};

// Line 324: range 000000000C8F1930-000000000C8F1B2A
bool __fastcall google::protobuf::internal::WireFormatLite::ReadPackedEnumPreserveUnknowns(
        google::protobuf::io::CodedInputStream *input,
        int field_number,
        bool (*is_valid)(int),
        google::protobuf::io::CodedOutputStream *unknown_fields_stream,
        google::protobuf::RepeatedField<int> *values)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v10; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::uint32 v13; // r14d
  const google::protobuf::uint8 *v14; // rax
  google::protobuf::int64 v15; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::uint8 *v18; // rsi
  unsigned int v19; // eax
  google::protobuf::uint8 *i; // rdx
  char v21; // cl
  int v22; // edx
  int buffer_size; // eax
  google::protobuf::uint8 *v24; // rcx
  google::protobuf::uint8 *j; // rax
  char v26; // dl
  int v27; // eax
  google::protobuf::io::CodedInputStream::Limit limit; // [rsp+Ch] [rbp-3Ch]

  buffer = input->buffer_;
  if ( input->buffer_ >= input->buffer_end_ )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v10 = *buffer;
  if ( *(char *)buffer < 0 )
  {
LABEL_3:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v10);
    if ( Varint32Fallback < 0 )
      return 0;
    v10 = Varint32Fallback;
    goto LABEL_6;
  }
  input->buffer_ = buffer + 1;
LABEL_6:
  v13 = 8 * field_number;
  limit = google::protobuf::io::CodedInputStream::PushLimit(input, v10);
  while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
  {
    while ( 1 )
    {
      v14 = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
      {
        LODWORD(v15) = 0;
      }
      else
      {
        LODWORD(v15) = *v14;
        if ( *(char *)v14 >= 0 )
        {
          input->buffer_ = v14 + 1;
          goto LABEL_11;
        }
      }
      v15 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v15);
      if ( v15 < 0 )
        return 0;
LABEL_11:
      if ( is_valid && !is_valid(v15) )
        break;
      current_size = values->current_size_;
      if ( (_DWORD)current_size == values->total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(values, current_size + 1);
        current_size = values->current_size_;
      }
      rep = values->rep_;
      values->current_size_ = current_size + 1;
      rep->elements[current_size] = v15;
      if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
        goto LABEL_16;
    }
    if ( unknown_fields_stream->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(unknown_fields_stream, v13);
      buffer_size = unknown_fields_stream->buffer_size_;
    }
    else
    {
      v18 = unknown_fields_stream->buffer_;
      v19 = v13;
      for ( i = v18; v19 > 0x7F; *(i - 1) = v21 | 0x80 )
      {
        v21 = v19;
        v19 >>= 7;
        ++i;
      }
      *i = v19;
      v22 = (_DWORD)i + 1 - (_DWORD)v18;
      unknown_fields_stream->buffer_ += v22;
      buffer_size = unknown_fields_stream->buffer_size_ - v22;
      unknown_fields_stream->buffer_size_ = buffer_size;
    }
    if ( buffer_size <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(unknown_fields_stream, v15);
    }
    else
    {
      v24 = unknown_fields_stream->buffer_;
      for ( j = v24; (unsigned int)v15 > 0x7F; *(j - 1) = v26 | 0x80 )
      {
        v26 = v15;
        LODWORD(v15) = (unsigned int)v15 >> 7;
        ++j;
      }
      *j = v15;
      v27 = (_DWORD)j + 1 - (_DWORD)v24;
      unknown_fields_stream->buffer_size_ -= v27;
      unknown_fields_stream->buffer_ += v27;
    }
  }
LABEL_16:
  google::protobuf::io::CodedInputStream::PopLimit(input, limit);
  return 1;
};

// Line 401: range 000000000C8EFF70-000000000C8EFF80
void __fastcall google::protobuf::internal::WireFormatLite::WriteFloatArray(
        const float *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 4 * n);
};

// Line 406: range 000000000C8EFF90-000000000C8EFFA0
void __fastcall google::protobuf::internal::WireFormatLite::WriteDoubleArray(
        const double *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 8 * n);
};

// Line 411: range 000000000C8EFFB0-000000000C8EFFC0
void __fastcall google::protobuf::internal::WireFormatLite::WriteFixed32Array(
        const google::protobuf::uint32 *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 4 * n);
};

// Line 416: range 000000000C8EFFD0-000000000C8EFFE0
void __fastcall google::protobuf::internal::WireFormatLite::WriteFixed64Array(
        const google::protobuf::uint64 *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 8 * n);
};

// Line 421: range 000000000C8EFFF0-000000000C8F0000
void __fastcall google::protobuf::internal::WireFormatLite::WriteSFixed32Array(
        const google::protobuf::int32 *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 4 * n);
};

// Line 426: range 000000000C8F0010-000000000C8F0020
void __fastcall google::protobuf::internal::WireFormatLite::WriteSFixed64Array(
        const google::protobuf::int64 *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, 8 * n);
};

// Line 431: range 000000000C8F0030-000000000C8F003B
void __fastcall google::protobuf::internal::WireFormatLite::WriteBoolArray(
        const bool *a,
        int n,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(output, a, n);
};

// Line 436: range 000000000C8F0040-000000000C8F010C
void __fastcall google::protobuf::internal::WireFormatLite::WriteInt32(
        int field_number,
        google::protobuf::int32 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  google::protobuf::uint64 v9; // rsi
  int v10; // eax
  int v11; // edi
  google::protobuf::uint8 *v12; // rdx
  google::protobuf::uint8 *j; // rax
  char v14; // cl
  int v15; // eax

  v5 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = value;
    v10 = (_DWORD)i + 1 - (_DWORD)buffer;
    v11 = output->buffer_size_ - v10;
    output->buffer_ += v10;
    output->buffer_size_ = v11;
    if ( v11 > 9 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v9);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  v9 = value;
  if ( output->buffer_size_ <= 9 )
    goto LABEL_9;
LABEL_5:
  v12 = output->buffer_;
  for ( j = v12; v9 > 0x7F; *(j - 1) = v14 | 0x80 )
  {
    v14 = v9;
    v9 >>= 7;
    ++j;
  }
  *j = v9;
  v15 = (_DWORD)j + 1 - (_DWORD)v12;
  output->buffer_size_ -= v15;
  output->buffer_ += v15;
};

// Line 441: range 000000000C8F0120-000000000C8F01F0
void __fastcall google::protobuf::internal::WireFormatLite::WriteInt64(
        int field_number,
        google::protobuf::int64 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi
  unsigned __int64 v11; // rdx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *v13; // rax
  char v14; // si
  int v15; // eax

  v4 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    output->buffer_ += v9;
    v11 = value;
    output->buffer_size_ = v10;
    if ( v10 > 9 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, value);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  v11 = value;
  if ( output->buffer_size_ <= 9 )
    goto LABEL_9;
LABEL_5:
  v12 = output->buffer_;
  v13 = v12;
  if ( (unsigned __int64)value > 0x7F )
  {
    do
    {
      v14 = v11;
      v11 >>= 7;
      *v13++ = v14 | 0x80;
    }
    while ( v11 > 0x7F );
  }
  *v13 = v11;
  v15 = (_DWORD)v13 + 1 - (_DWORD)v12;
  output->buffer_size_ -= v15;
  output->buffer_ += v15;
};

// Line 446: range 000000000C8F0200-000000000C8F02CD
void __fastcall google::protobuf::internal::WireFormatLite::WriteUInt32(
        int field_number,
        google::protobuf::uint32 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint8 *j; // rax
  char v13; // cl
  int v14; // eax

  v4 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    output->buffer_ += v9;
    output->buffer_size_ = v10;
    if ( v10 > 4 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, value);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  if ( output->buffer_size_ <= 4 )
    goto LABEL_9;
LABEL_5:
  v11 = output->buffer_;
  for ( j = v11; value > 0x7F; *(j - 1) = v13 | 0x80 )
  {
    v13 = value;
    value >>= 7;
    ++j;
  }
  *j = value;
  v14 = (_DWORD)j + 1 - (_DWORD)v11;
  output->buffer_size_ -= v14;
  output->buffer_ += v14;
};

// Line 451: range 000000000C8F02E0-000000000C8F03AD
void __fastcall google::protobuf::internal::WireFormatLite::WriteUInt64(
        int field_number,
        google::protobuf::uint64 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint8 *j; // rax
  char v13; // cl
  int v14; // eax

  v4 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    output->buffer_ += v9;
    output->buffer_size_ = v10;
    if ( v10 > 9 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, value);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  if ( output->buffer_size_ <= 9 )
    goto LABEL_9;
LABEL_5:
  v11 = output->buffer_;
  for ( j = v11; value > 0x7F; *(j - 1) = v13 | 0x80 )
  {
    v13 = value;
    value >>= 7;
    ++j;
  }
  *j = value;
  v14 = (_DWORD)j + 1 - (_DWORD)v11;
  output->buffer_size_ -= v14;
  output->buffer_ += v14;
};

// Line 456: range 000000000C8F03C0-000000000C8F0491
void __fastcall google::protobuf::internal::WireFormatLite::WriteSInt32(
        int field_number,
        google::protobuf::int32 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi
  unsigned int v11; // esi
  google::protobuf::uint8 *v12; // rdx
  google::protobuf::uint8 *j; // rax
  char v14; // cl
  int v15; // eax

  v5 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    v11 = (value >> 31) ^ (2 * value);
    output->buffer_ += v9;
    output->buffer_size_ = v10;
    if ( v10 > 4 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v11);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  v11 = (value >> 31) ^ (2 * value);
  if ( output->buffer_size_ <= 4 )
    goto LABEL_9;
LABEL_5:
  v12 = output->buffer_;
  for ( j = v12; v11 > 0x7F; *(j - 1) = v14 | 0x80 )
  {
    v14 = v11;
    v11 >>= 7;
    ++j;
  }
  *j = v11;
  v15 = (_DWORD)j + 1 - (_DWORD)v12;
  output->buffer_size_ -= v15;
  output->buffer_ += v15;
};

// Line 461: range 000000000C8F04A0-000000000C8F057C
void __fastcall google::protobuf::internal::WireFormatLite::WriteSInt64(
        int field_number,
        google::protobuf::int64 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi
  google::protobuf::uint64 v11; // rsi
  google::protobuf::uint8 *v12; // rdx
  google::protobuf::uint8 *j; // rax
  char v14; // cl
  int v15; // eax

  v5 = 8 * field_number;
  if ( output->buffer_size_ > 4 )
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    v11 = (value >> 63) ^ (2 * value);
    output->buffer_ += v9;
    output->buffer_size_ = v10;
    if ( v10 > 9 )
      goto LABEL_5;
LABEL_9:
    google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v11);
    return;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  v11 = (value >> 63) ^ (2 * value);
  if ( output->buffer_size_ <= 9 )
    goto LABEL_9;
LABEL_5:
  v12 = output->buffer_;
  for ( j = v12; v11 > 0x7F; *(j - 1) = v14 | 0x80 )
  {
    v14 = v11;
    v11 >>= 7;
    ++j;
  }
  *j = v11;
  v15 = (_DWORD)j + 1 - (_DWORD)v12;
  output->buffer_size_ -= v15;
  output->buffer_ += v15;
};

// Line 466: range 000000000C8F0590-000000000C8F0608
void __fastcall google::protobuf::internal::WireFormatLite::WriteFixed32(
        int field_number,
        google::protobuf::uint32 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax

  v4 = 8 * field_number + 5;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, value);
};

// Line 471: range 000000000C8F0610-000000000C8F0688
void __fastcall google::protobuf::internal::WireFormatLite::WriteFixed64(
        int field_number,
        google::protobuf::uint64 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax

  v4 = 8 * field_number + 1;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, value);
};

// Line 476: range 000000000C8F0690-000000000C8F0708
void __fastcall google::protobuf::internal::WireFormatLite::WriteSFixed32(
        int field_number,
        google::protobuf::int32 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax

  v4 = 8 * field_number + 5;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, value);
};

// Line 481: range 000000000C8F0710-000000000C8F0788
void __fastcall google::protobuf::internal::WireFormatLite::WriteSFixed64(
        int field_number,
        google::protobuf::int64 value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax

  v4 = 8 * field_number + 1;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, value);
};

// Line 486: range 000000000C8F0790-000000000C8F0808
void __fastcall google::protobuf::internal::WireFormatLite::WriteFloat(
        int field_number,
        __m128i a2,
        float value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // r12d
  google::protobuf::uint32 v6; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v9; // cl
  int v10; // eax

  v4 = _mm_cvtsi128_si32(a2);
  v6 = 8 * field_number + 5;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v6);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v6 > 0x7F; *(i - 1) = v9 | 0x80 )
    {
      v9 = v6;
      v6 >>= 7;
      ++i;
    }
    *i = v6;
    v10 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v10;
    output->buffer_ += v10;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, v4);
};

// Line 491: range 000000000C8F0810-000000000C8F0888
void __fastcall google::protobuf::internal::WireFormatLite::WriteDouble(
        int field_number,
        double a2,
        double value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax

  v5 = 8 * field_number + 1;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, *(google::protobuf::uint64 *)&a2);
};

// Line 496: range 000000000C8F0890-000000000C8F0924
void __fastcall google::protobuf::internal::WireFormatLite::WriteBool(
        int field_number,
        bool value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  int v10; // edi

  v5 = 8 * field_number;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
    if ( output->buffer_size_ > 4 )
    {
LABEL_5:
      *output->buffer_++ = value;
      --output->buffer_size_;
      return;
    }
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    v10 = output->buffer_size_ - v9;
    output->buffer_ += v9;
    output->buffer_size_ = v10;
    if ( v10 > 4 )
      goto LABEL_5;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, value);
};

// Line 507: range 000000000C8F0940-000000000C8F0A84
void __fastcall google::protobuf::internal::WireFormatLite::WriteString(
        int a1,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // edx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *v13; // rax
  char v14; // si
  int v15; // eax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-58h] BYREF

  v5 = 8 * a1 + 2;
  if ( a3->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v5);
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 <= 0x7FFFFFFF )
      goto LABEL_5;
LABEL_11:
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      LOGLEVEL_FATAL_0,
      "google/protobuf/wire_format_lite.cc",
      510);
    v16 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (value.size()) <= (kint32max): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v16);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
    v9 = *(_QWORD *)(a2 + 8);
    v11 = v9;
    if ( a3->buffer_size_ > 4 )
      goto LABEL_6;
LABEL_12:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v9);
    goto LABEL_9;
  }
  buffer = a3->buffer_;
  for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
  {
    v8 = v5;
    v5 >>= 7;
    ++i;
  }
  *i = v5;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (_DWORD)i + 1 - (_DWORD)buffer;
  a3->buffer_size_ -= v10;
  a3->buffer_ += v10;
  if ( v9 > 0x7FFFFFFF )
    goto LABEL_11;
LABEL_5:
  v11 = v9;
  if ( a3->buffer_size_ <= 4 )
    goto LABEL_12;
LABEL_6:
  v12 = a3->buffer_;
  v13 = v12;
  if ( (unsigned int)v9 > 0x7F )
  {
    do
    {
      v14 = v11;
      v11 >>= 7;
      *v13++ = v14 | 0x80;
    }
    while ( v11 > 0x7F );
  }
  *v13 = v11;
  v15 = (_DWORD)v13 + 1 - (_DWORD)v12;
  a3->buffer_size_ -= v15;
  a3->buffer_ += v15;
LABEL_9:
  google::protobuf::io::CodedOutputStream::WriteRaw(a3, *(const void **)a2, *(_DWORD *)(a2 + 8));
};

// Line 510: range 000000000C72D074-000000000C72D081
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::WriteString(
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

// Line 516: range 000000000C8F0A90-000000000C8F0BF8
void __fastcall google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
        int a1,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // edx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *v13; // rax
  char v14; // si
  int v15; // eax
  __int64 v16; // rdx
  const void *v17; // rsi
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogFinisher v19; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+10h] [rbp-58h] BYREF

  v5 = 8 * a1 + 2;
  if ( a3->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v5);
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 <= 0x7FFFFFFF )
      goto LABEL_5;
LABEL_13:
    google::protobuf::internal::LogMessage::LogMessage(
      &v20,
      LOGLEVEL_FATAL_0,
      "google/protobuf/wire_format_lite.cc",
      519);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v20, "CHECK failed: (value.size()) <= (kint32max): ");
    google::protobuf::internal::LogFinisher::operator=(&v19, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v20);
    v9 = *(_QWORD *)(a2 + 8);
    v11 = v9;
    if ( a3->buffer_size_ > 4 )
      goto LABEL_6;
LABEL_14:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v9);
    goto LABEL_9;
  }
  buffer = a3->buffer_;
  for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
  {
    v8 = v5;
    v5 >>= 7;
    ++i;
  }
  *i = v5;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (_DWORD)i + 1 - (_DWORD)buffer;
  a3->buffer_size_ -= v10;
  a3->buffer_ += v10;
  if ( v9 > 0x7FFFFFFF )
    goto LABEL_13;
LABEL_5:
  v11 = v9;
  if ( a3->buffer_size_ <= 4 )
    goto LABEL_14;
LABEL_6:
  v12 = a3->buffer_;
  v13 = v12;
  if ( (unsigned int)v9 > 0x7F )
  {
    do
    {
      v14 = v11;
      v11 >>= 7;
      *v13++ = v14 | 0x80;
    }
    while ( v11 > 0x7F );
  }
  *v13 = v11;
  v15 = (_DWORD)v13 + 1 - (_DWORD)v12;
  a3->buffer_size_ -= v15;
  a3->buffer_ += v15;
LABEL_9:
  v16 = *(_QWORD *)(a2 + 8);
  v17 = *(const void **)a2;
  if ( a3->aliasing_enabled_ )
    google::protobuf::io::CodedOutputStream::WriteAliasedRaw(a3, v17, v16);
  else
    google::protobuf::io::CodedOutputStream::WriteRaw(a3, v17, v16);
};

// Line 519: range 000000000C72D086-000000000C72D093
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
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

// Line 524: range 000000000C8F0C00-000000000C8F0D44
void __fastcall google::protobuf::internal::WireFormatLite::WriteBytes(
        int a1,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // edx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *v13; // rax
  char v14; // si
  int v15; // eax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-58h] BYREF

  v5 = 8 * a1 + 2;
  if ( a3->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v5);
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 <= 0x7FFFFFFF )
      goto LABEL_5;
LABEL_11:
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      LOGLEVEL_FATAL_0,
      "google/protobuf/wire_format_lite.cc",
      526);
    v16 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (value.size()) <= (kint32max): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v16);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
    v9 = *(_QWORD *)(a2 + 8);
    v11 = v9;
    if ( a3->buffer_size_ > 4 )
      goto LABEL_6;
LABEL_12:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v9);
    goto LABEL_9;
  }
  buffer = a3->buffer_;
  for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
  {
    v8 = v5;
    v5 >>= 7;
    ++i;
  }
  *i = v5;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (_DWORD)i + 1 - (_DWORD)buffer;
  a3->buffer_size_ -= v10;
  a3->buffer_ += v10;
  if ( v9 > 0x7FFFFFFF )
    goto LABEL_11;
LABEL_5:
  v11 = v9;
  if ( a3->buffer_size_ <= 4 )
    goto LABEL_12;
LABEL_6:
  v12 = a3->buffer_;
  v13 = v12;
  if ( (unsigned int)v9 > 0x7F )
  {
    do
    {
      v14 = v11;
      v11 >>= 7;
      *v13++ = v14 | 0x80;
    }
    while ( v11 > 0x7F );
  }
  *v13 = v11;
  v15 = (_DWORD)v13 + 1 - (_DWORD)v12;
  a3->buffer_size_ -= v15;
  a3->buffer_ += v15;
LABEL_9:
  google::protobuf::io::CodedOutputStream::WriteRaw(a3, *(const void **)a2, *(_DWORD *)(a2 + 8));
};

// Line 526: range 000000000C72D098-000000000C72D0A5
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::WriteBytes(
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

// Line 532: range 000000000C8F0D50-000000000C8F0EB8
void __fastcall google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
        int a1,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  google::protobuf::uint32 v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // edx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *v13; // rax
  char v14; // si
  int v15; // eax
  __int64 v16; // rdx
  const void *v17; // rsi
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogFinisher v19; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+10h] [rbp-58h] BYREF

  v5 = 8 * a1 + 2;
  if ( a3->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v5);
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 <= 0x7FFFFFFF )
      goto LABEL_5;
LABEL_13:
    google::protobuf::internal::LogMessage::LogMessage(
      &v20,
      LOGLEVEL_FATAL_0,
      "google/protobuf/wire_format_lite.cc",
      534);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v20, "CHECK failed: (value.size()) <= (kint32max): ");
    google::protobuf::internal::LogFinisher::operator=(&v19, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v20);
    v9 = *(_QWORD *)(a2 + 8);
    v11 = v9;
    if ( a3->buffer_size_ > 4 )
      goto LABEL_6;
LABEL_14:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v9);
    goto LABEL_9;
  }
  buffer = a3->buffer_;
  for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
  {
    v8 = v5;
    v5 >>= 7;
    ++i;
  }
  *i = v5;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (_DWORD)i + 1 - (_DWORD)buffer;
  a3->buffer_size_ -= v10;
  a3->buffer_ += v10;
  if ( v9 > 0x7FFFFFFF )
    goto LABEL_13;
LABEL_5:
  v11 = v9;
  if ( a3->buffer_size_ <= 4 )
    goto LABEL_14;
LABEL_6:
  v12 = a3->buffer_;
  v13 = v12;
  if ( (unsigned int)v9 > 0x7F )
  {
    do
    {
      v14 = v11;
      v11 >>= 7;
      *v13++ = v14 | 0x80;
    }
    while ( v11 > 0x7F );
  }
  *v13 = v11;
  v15 = (_DWORD)v13 + 1 - (_DWORD)v12;
  a3->buffer_size_ -= v15;
  a3->buffer_ += v15;
LABEL_9:
  v16 = *(_QWORD *)(a2 + 8);
  v17 = *(const void **)a2;
  if ( a3->aliasing_enabled_ )
    google::protobuf::io::CodedOutputStream::WriteAliasedRaw(a3, v17, v16);
  else
    google::protobuf::io::CodedOutputStream::WriteRaw(a3, v17, v16);
};

// Line 534: range 000000000C72D0AA-000000000C72D0B7
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
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

// Line 542: range 000000000C8F0EC0-000000000C8F0F89
void __fastcall google::protobuf::internal::WireFormatLite::WriteGroup(
        int field_number,
        const google::protobuf::MessageLite *value,
        google::protobuf::io::CodedOutputStream *output)
{
  unsigned int v5; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  unsigned int v10; // ebx
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint8 *j; // rax
  char v13; // cl
  int v14; // eax

  v5 = (8 * field_number) | 3;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v5 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v5;
      v5 >>= 7;
      ++i;
    }
    *i = v5;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  v10 = (8 * field_number) | 4;
  (*((void (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))value->_vptr_MessageLite
   + 13))(
    value,
    output);
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v10);
  }
  else
  {
    v11 = output->buffer_;
    for ( j = v11; v10 > 0x7F; *(j - 1) = v13 | 0x80 )
    {
      v13 = v10;
      v10 >>= 7;
      ++j;
    }
    *j = v10;
    v14 = (_DWORD)j + 1 - (_DWORD)v11;
    output->buffer_size_ -= v14;
    output->buffer_ += v14;
  }
};

// Line 550: range 000000000C8F0F90-000000000C8F1068
void __fastcall google::protobuf::internal::WireFormatLite::WriteMessage(
        int field_number,
        const google::protobuf::MessageLite *value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  google::protobuf::uint32 v10; // esi
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint8 *j; // rax
  char v13; // cl
  int v14; // eax

  v4 = 8 * field_number + 2;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  v10 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))value->_vptr_MessageLite + 15))(value);
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v10);
  }
  else
  {
    v11 = output->buffer_;
    for ( j = v11; v10 > 0x7F; *(j - 1) = v13 | 0x80 )
    {
      v13 = v10;
      v10 >>= 7;
      ++j;
    }
    *j = v10;
    v14 = (_DWORD)j + 1 - (_DWORD)v11;
    output->buffer_size_ -= v14;
    output->buffer_ += v14;
  }
  (*((void (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))value->_vptr_MessageLite
   + 13))(
    value,
    output);
};

// Line 559: range 000000000C8F1070-000000000C8F11A4
void __fastcall google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(
        int field_number,
        const google::protobuf::MessageLite *value,
        google::protobuf::io::CodedOutputStream *output)
{
  int v5; // ebx
  unsigned int v6; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v9; // cl
  int v10; // eax
  int v11; // eax
  int buffer_size; // edx
  google::protobuf::uint8 *v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  int (**vptr_MessageLite)(...); // rax
  int (*v17)(...); // rax
  bool serialization_deterministic_override; // si
  unsigned int v19; // ebx
  google::protobuf::uint8 *v20; // rdx
  google::protobuf::uint8 *j; // rax
  char v22; // cl
  int v23; // eax

  v5 = 8 * field_number;
  v6 = (8 * field_number) | 3;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v6);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v6 > 0x7F; *(i - 1) = v9 | 0x80 )
    {
      v9 = v6;
      v6 >>= 7;
      ++i;
    }
    *i = v6;
    v10 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v10;
    output->buffer_ += v10;
  }
  v11 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))value->_vptr_MessageLite + 15))(value);
  buffer_size = output->buffer_size_;
  if ( v11 > buffer_size )
  {
    vptr_MessageLite = value->_vptr_MessageLite;
  }
  else
  {
    v13 = output->buffer_;
    v14 = v11;
    v15 = buffer_size - v11;
    vptr_MessageLite = value->_vptr_MessageLite;
    output->buffer_size_ = v15;
    output->buffer_ = &v13[v14];
    if ( v13 )
    {
      v17 = vptr_MessageLite[16];
      if ( output->serialization_deterministic_is_overridden_ )
        serialization_deterministic_override = output->serialization_deterministic_override_;
      else
        serialization_deterministic_override = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0;
      v19 = v5 | 4;
      v17(value, serialization_deterministic_override, v13);
      if ( output->buffer_size_ <= 4 )
        goto LABEL_10;
      goto LABEL_13;
    }
  }
  v19 = v5 | 4;
  vptr_MessageLite[13](value, output);
  if ( output->buffer_size_ <= 4 )
  {
LABEL_10:
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v19);
    return;
  }
LABEL_13:
  v20 = output->buffer_;
  for ( j = v20; v19 > 0x7F; *(j - 1) = v22 | 0x80 )
  {
    v22 = v19;
    v19 >>= 7;
    ++j;
  }
  *j = v19;
  v23 = (_DWORD)j + 1 - (_DWORD)v20;
  output->buffer_size_ -= v23;
  output->buffer_ += v23;
};

// Line 575: range 000000000C8F11B0-000000000C8F12EA
void __fastcall google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        int field_number,
        const google::protobuf::MessageLite *value,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v4; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v8; // cl
  int v9; // eax
  google::protobuf::uint32 v10; // eax
  int v11; // ebx
  google::protobuf::uint8 *v12; // rcx
  google::protobuf::uint8 *j; // rdx
  char v14; // si
  int v15; // edx
  int buffer_size; // eax
  int (**vptr_MessageLite)(...); // rcx
  google::protobuf::uint8 *v18; // r8
  int (*v19)(...); // rax

  v4 = 8 * field_number + 2;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v4);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v4 > 0x7F; *(i - 1) = v8 | 0x80 )
    {
      v8 = v4;
      v4 >>= 7;
      ++i;
    }
    *i = v4;
    v9 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v9;
    output->buffer_ += v9;
  }
  v10 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))value->_vptr_MessageLite + 15))(value);
  v11 = v10;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v10);
    buffer_size = output->buffer_size_;
  }
  else
  {
    v12 = output->buffer_;
    for ( j = v12; v10 > 0x7F; *(j - 1) = v14 | 0x80 )
    {
      v14 = v10;
      v10 >>= 7;
      ++j;
    }
    *j = v10;
    v15 = (_DWORD)j + 1 - (_DWORD)v12;
    output->buffer_ += v15;
    buffer_size = output->buffer_size_ - v15;
    output->buffer_size_ = buffer_size;
  }
  vptr_MessageLite = value->_vptr_MessageLite;
  if ( v11 <= buffer_size
    && (v18 = output->buffer_, output->buffer_size_ = buffer_size - v11, output->buffer_ = &v18[v11], v18) )
  {
    v19 = vptr_MessageLite[16];
    if ( output->serialization_deterministic_is_overridden_ )
      v19(value, output->serialization_deterministic_override_, v18);
    else
      v19(value, google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0, v18);
  }
  else
  {
    vptr_MessageLite[13](value, output);
  }
};

// Line 598: range 000000000C8F12F0-000000000C8F139A
bool __fastcall google::protobuf::internal::WireFormatLite::ReadBytes(
        google::protobuf::io::CodedInputStream *input,
        std::string *value)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rcx
  google::protobuf::uint32 v5; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v8; // rax
  int v9; // edx
  size_t v10; // rbx

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  if ( input->buffer_ >= buffer_end )
  {
    v5 = 0;
  }
  else
  {
    v5 = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      v8 = buffer + 1;
      v9 = v5;
      input->buffer_ = v8;
      goto LABEL_6;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5);
  if ( Varint32Fallback < 0 )
    return 0;
  v9 = Varint32Fallback;
  if ( (int)Varint32Fallback < 0 )
    return 0;
  v8 = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_6:
  if ( v9 > (int)buffer_end - (int)v8 )
    return google::protobuf::io::CodedInputStream::ReadStringFallback(input, value, v9);
  v10 = v9;
  std::string::resize(value, v9, 0LL);
  memcpy(value->_M_dataplus._M_p, input->buffer_, v10);
  input->buffer_ += v10;
  return 1;
};

// Line 602: range 000000000C8F13A0-000000000C8F14A1
bool __fastcall google::protobuf::internal::WireFormatLite::ReadBytes(
        google::protobuf::io::CodedInputStream *input,
        std::string **p)
{
  std::string *v2; // r12
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rcx
  google::protobuf::uint32 v5; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v8; // rax
  int v9; // edx
  std::string *v10; // rax
  size_t v11; // rbx

  v2 = *p;
  if ( *p != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( input->buffer_ < buffer_end )
      goto LABEL_3;
LABEL_12:
    v5 = 0;
    goto LABEL_4;
  }
  v10 = (std::string *)operator new(0x20uLL);
  buffer_end = input->buffer_end_;
  v2 = v10;
  v10->_M_dataplus._M_p = v10->_anon_0._M_local_buf;
  buffer = input->buffer_;
  v2->_M_string_length = 0LL;
  v2->_anon_0._M_local_buf[0] = 0;
  *p = v2;
  if ( buffer >= buffer_end )
    goto LABEL_12;
LABEL_3:
  v5 = *buffer;
  if ( *(char *)buffer >= 0 )
  {
    v8 = buffer + 1;
    v9 = v5;
    input->buffer_ = v8;
    goto LABEL_7;
  }
LABEL_4:
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5);
  if ( Varint32Fallback < 0 )
    return 0;
  v9 = Varint32Fallback;
  if ( (int)Varint32Fallback < 0 )
    return 0;
  v8 = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_7:
  if ( v9 > (int)buffer_end - (int)v8 )
    return google::protobuf::io::CodedInputStream::ReadStringFallback(input, v2, v9);
  v11 = v9;
  std::string::resize(v2, v9, 0LL);
  memcpy(v2->_M_dataplus._M_p, input->buffer_, v11);
  input->buffer_ += v11;
  return 1;
};

// Line 612: range 000000000C8F14B0-000000000C8F16BE
__int64 __fastcall google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        google::protobuf::internal::WireFormatLite *this,
        const char *a2,
        int a3,
        const char *a4,
        const char *a5)
{
  unsigned int v7; // eax
  unsigned int v8; // r12d
  const char *v9; // rbp
  void *M_p; // rdi
  const char *filename; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogFinisher v22; // [rsp+Fh] [rbp-89h] BYREF
  std::string value; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 src; // [rsp+30h] [rbp-68h] BYREF

  LOBYTE(v7) = google::protobuf::internal::IsStructurallyValidUTF8(this->gap0, (int)a2);
  v8 = v7;
  if ( (_BYTE)v7 )
    return v8;
  v9 = "parsing";
  if ( a3 )
  {
    v9 = "serializing";
    if ( a3 != 1 )
      v9 = 0LL;
  }
  value._anon_0._M_local_buf[0] = 0;
  value._M_dataplus._M_p = value._anon_0._M_local_buf;
  value._M_string_length = 0LL;
  if ( a4 )
  {
    google::protobuf::StringPrintf[abi:cxx11]((std::string *)&src, " '%s'", a4);
    M_p = value._M_dataplus._M_p;
    filename = src.filename_;
    if ( *(google::protobuf::internal::LogMessage_0 **)&src.level_ == (google::protobuf::internal::LogMessage_0 *)&src.line_ )
    {
      if ( src.filename_ )
      {
        if ( src.filename_ == (const char *)1 )
          *value._M_dataplus._M_p = src.line_;
        else
          memcpy(value._M_dataplus._M_p, &src.line_, (size_t)src.filename_);
        filename = src.filename_;
        M_p = value._M_dataplus._M_p;
      }
      value._M_string_length = (std::string::size_type)filename;
      filename[(_QWORD)M_p] = 0;
      M_p = *(void **)&src.level_;
      goto LABEL_10;
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
    {
      value._M_dataplus._M_p = *(std::string::pointer *)&src.level_;
      value._M_string_length = (std::string::size_type)src.filename_;
      value._anon_0._M_allocated_capacity = *(_QWORD *)&src.line_;
    }
    else
    {
      M_allocated_capacity = value._anon_0._M_allocated_capacity;
      value._M_dataplus._M_p = *(std::string::pointer *)&src.level_;
      value._M_string_length = (std::string::size_type)src.filename_;
      value._anon_0._M_allocated_capacity = *(_QWORD *)&src.line_;
      if ( M_p )
      {
        *(_QWORD *)&src.level_ = M_p;
        *(_QWORD *)&src.line_ = M_allocated_capacity;
        goto LABEL_10;
      }
    }
    *(_QWORD *)&src.level_ = &src.line_;
    M_p = &src.line_;
LABEL_10:
    src.filename_ = 0LL;
    *(_BYTE *)M_p = 0;
    if ( *(google::protobuf::internal::LogMessage_0 **)&src.level_ != (google::protobuf::internal::LogMessage_0 *)&src.line_ )
      operator delete(*(void **)&src.level_);
  }
  google::protobuf::internal::LogMessage::LogMessage(&src, LOGLEVEL_ERROR_0, "google/protobuf/wire_format_lite.cc", 629);
  v13 = google::protobuf::internal::LogMessage::operator<<(&src, "String field");
  v14 = google::protobuf::internal::LogMessage::operator<<(v13, &value);
  v15 = google::protobuf::internal::LogMessage::operator<<(v14, " contains invalid ");
  v16 = google::protobuf::internal::LogMessage::operator<<(v15, "UTF-8 data when ");
  v17 = google::protobuf::internal::LogMessage::operator<<(v16, v9);
  v18 = google::protobuf::internal::LogMessage::operator<<(v17, " a protocol ");
  v19 = google::protobuf::internal::LogMessage::operator<<(
          v18,
          "buffer. Use the 'bytes' type if you intend to send raw ");
  v20 = google::protobuf::internal::LogMessage::operator<<(v19, "bytes. ");
  google::protobuf::internal::LogFinisher::operator=(&v22, v20);
  google::protobuf::internal::LogMessage::~LogMessage(&src);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  return v8;
};

// Line 629: range 000000000C72D0BC-000000000C72D0D6
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  google::protobuf::internal::LogMessage_0 *v10; // r14

  google::protobuf::internal::LogMessage::~LogMessage(v10);
  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 749: range 000000000C8F16D0-000000000C8F172E
size_t __fastcall google::protobuf::internal::WireFormatLite::Int32Size(
        const google::protobuf::RepeatedField<int> *value)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rcx
  size_t v2; // r8
  int *elements; // rdx
  __int64 v4; // rcx
  int v5; // eax

  if ( value->current_size_ <= 0 )
    return 0LL;
  rep = value->rep_;
  v2 = 0LL;
  elements = rep->elements;
  v4 = (__int64)&rep->elements[value->current_size_ - 1 + 1];
  do
  {
    while ( 1 )
    {
      v5 = *elements;
      if ( *elements < 0 )
        break;
      ++elements;
      _BitScanReverse((unsigned int *)&v5, v5 | 1);
      v2 += (unsigned int)(9 * v5 + 73) >> 6;
      if ( elements == (int *)v4 )
        return v2;
    }
    ++elements;
    v2 += 10LL;
  }
  while ( elements != (int *)v4 );
  return v2;
};

// Line 758: range 000000000C8F1730-000000000C8F1776
size_t __fastcall google::protobuf::internal::WireFormatLite::UInt32Size(
        const google::protobuf::RepeatedField<unsigned int> *value)
{
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // rcx
  size_t v2; // r8
  unsigned int *elements; // rdx
  __int64 v4; // rcx
  int v5; // eax

  if ( value->current_size_ <= 0 )
    return 0LL;
  rep = value->rep_;
  v2 = 0LL;
  elements = rep->elements;
  v4 = (__int64)&rep->elements[value->current_size_ - 1 + 1];
  do
  {
    v5 = *elements++;
    _BitScanReverse((unsigned int *)&v5, v5 | 1);
    v2 += (unsigned int)(9 * v5 + 73) >> 6;
  }
  while ( (unsigned int *)v4 != elements );
  return v2;
};

// Line 767: range 000000000C8F1780-000000000C8F17D6
size_t __fastcall google::protobuf::internal::WireFormatLite::SInt32Size(
        const google::protobuf::RepeatedField<int> *value)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  size_t v2; // r8
  int *elements; // rcx
  __int64 v4; // rsi
  int v5; // edx
  unsigned int v6; // eax

  if ( value->current_size_ <= 0 )
    return 0LL;
  rep = value->rep_;
  v2 = 0LL;
  elements = rep->elements;
  v4 = (__int64)&rep->elements[value->current_size_ - 1 + 1];
  do
  {
    v5 = *elements++;
    _BitScanReverse(&v6, (2 * v5) ^ (v5 >> 31) | 1);
    v2 += (9 * v6 + 73) >> 6;
  }
  while ( (int *)v4 != elements );
  return v2;
};

// Line 786: range 000000000C746DF0-000000000C746E11
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal14WireFormatLite23kMessageSetItemStartTagE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
