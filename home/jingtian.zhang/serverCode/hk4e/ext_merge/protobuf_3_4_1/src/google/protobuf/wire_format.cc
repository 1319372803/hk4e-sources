// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/wire_format.cc

// Line 71: range 000000000C8D16F0-000000000C8D16FC
bool __fastcall google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipField(
        google::protobuf::internal::UnknownFieldSetFieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag)
{
  return google::protobuf::internal::WireFormat::SkipField(input, tag, this->unknown_fields_);
};

// Line 75: range 000000000C8D1450-000000000C8D145A
bool __fastcall google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipMessage(
        google::protobuf::internal::UnknownFieldSetFieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input)
{
  return google::protobuf::internal::WireFormat::SkipMessage(input, this->unknown_fields_);
};

// Line 81: range 000000000C8D07E0-000000000C8D07E7
void __fastcall google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipUnknownEnum(
        google::protobuf::internal::UnknownFieldSetFieldSkipper *const this,
        int field_number,
        int value)
{
  google::protobuf::UnknownFieldSet::AddVarint(this->unknown_fields_, field_number, value);
};

// Line 85: range 000000000C8D1460-000000000C8D16DF
bool __fastcall google::protobuf::internal::WireFormat::SkipField(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 tag,
        google::protobuf::UnknownFieldSet *unknown_fields)
{
  int v3; // r13d
  google::protobuf::UnknownFieldSet *v4; // r12
  const google::protobuf::uint8 *buffer; // rax
  unsigned __int64 first; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  bool second; // r8
  bool result; // al
  const google::protobuf::uint8 *v10; // rax
  google::protobuf::uint32 v11; // edx
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint64 v13; // rdx
  const google::protobuf::uint8 *v14; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  signed int v16; // r14d
  google::protobuf::int64 Varint32Fallback; // rax
  std::string *v18; // rax
  int recursion_budget; // eax
  const google::protobuf::uint8 *v21; // rax
  __int64 v22; // rsi
  int v23; // edx
  google::protobuf::uint64 v24[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = tag >> 3;
  if ( tag >> 3 )
  {
    v4 = unknown_fields;
    switch ( tag & 7 )
    {
      case 0u:
        buffer = input->buffer_;
        if ( input->buffer_ < input->buffer_end_ && (first = *buffer, (first & 0x80u) == 0LL) )
        {
          input->buffer_ = buffer + 1;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
          second = Varint64Fallback.second;
          first = Varint64Fallback.first;
          if ( !second )
            return 0;
        }
        result = 1;
        if ( v4 )
        {
          google::protobuf::UnknownFieldSet::AddVarint(v4, v3, first);
          return 1;
        }
        return result;
      case 1u:
        v12 = input->buffer_;
        if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 7 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v24);
          if ( !result )
            return result;
        }
        else
        {
          v13 = *(_QWORD *)v12;
          input->buffer_ = v12 + 8;
          v24[0] = v13;
        }
        result = 1;
        if ( v4 )
        {
          google::protobuf::UnknownFieldSet::AddFixed64(v4, v3, v24[0]);
          return 1;
        }
        return result;
      case 2u:
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( input->buffer_ >= buffer_end )
        {
          v16 = 0;
        }
        else
        {
          v16 = *v14;
          if ( *(char *)v14 >= 0 )
          {
            v21 = v14 + 1;
            input->buffer_ = v21;
            if ( v4 )
            {
LABEL_20:
              v18 = google::protobuf::UnknownFieldSet::AddLengthDelimited[abi:cxx11](v4, v3);
              return google::protobuf::io::CodedInputStream::ReadString(input, v18, v16);
            }
            v22 = v16;
            goto LABEL_33;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
        v16 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0;
        if ( v4 )
          goto LABEL_20;
        v22 = (int)Varint32Fallback;
        if ( (int)Varint32Fallback >= 0 )
        {
          v21 = input->buffer_;
          buffer_end = input->buffer_end_;
LABEL_33:
          v23 = (_DWORD)buffer_end - (_DWORD)v21;
          if ( (int)v22 > v23 )
            return google::protobuf::io::CodedInputStream::SkipFallback(input, v22, v23);
          input->buffer_ = &v21[v22];
          return 1;
        }
        break;
      case 3u:
        if ( --input->recursion_budget_ < 0 )
          return 0;
        if ( unknown_fields )
          v4 = google::protobuf::UnknownFieldSet::AddGroup(unknown_fields, v3);
        if ( !google::protobuf::internal::WireFormat::SkipMessage(input, v4) )
          return 0;
        recursion_budget = input->recursion_budget_;
        if ( input->recursion_limit_ > recursion_budget )
          input->recursion_budget_ = recursion_budget + 1;
        return (tag & 0xFFFFFFF8 | 4) == input->last_tag_;
      case 5u:
        v10 = input->buffer_;
        if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                     input,
                     (google::protobuf::uint32 *)v24);
          if ( !result )
            return result;
        }
        else
        {
          v11 = *(_DWORD *)v10;
          input->buffer_ = v10 + 4;
          LODWORD(v24[0]) = v11;
        }
        result = 1;
        if ( v4 )
        {
          google::protobuf::UnknownFieldSet::AddFixed32(v4, v3, v24[0]);
          return 1;
        }
        return result;
      default:
        return 0;
    }
  }
  return 0;
};

// Line 147: range 000000000C8D13D0-000000000C8D1442
bool __fastcall google::protobuf::internal::WireFormat::SkipMessage(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::UnknownFieldSet *unknown_fields)
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
    result = google::protobuf::internal::WireFormat::SkipField(input, TagFallback, unknown_fields);
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

// Line 170: range 000000000C8D3AD0-000000000C8D3C1A
bool __fastcall google::protobuf::internal::WireFormat::ReadPackedEnumPreserveUnknowns(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 field_number,
        bool (*is_valid)(int),
        google::protobuf::UnknownFieldSet *unknown_fields,
        google::protobuf::RepeatedField<int> *values)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v10; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v13; // rax
  signed int v14; // r15d
  google::protobuf::int64 v15; // rax
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
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
  limit = google::protobuf::io::CodedInputStream::PushLimit(input, v10);
  while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
  {
    while ( 1 )
    {
      v13 = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
      {
        v14 = 0;
      }
      else
      {
        v14 = *v13;
        if ( *(char *)v13 >= 0 )
        {
          input->buffer_ = v13 + 1;
          goto LABEL_12;
        }
      }
      v15 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( v15 < 0 )
        return 0;
      v14 = v15;
LABEL_12:
      if ( is_valid && !is_valid(v14) )
        break;
      current_size = values->current_size_;
      if ( (_DWORD)current_size == values->total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(values, current_size + 1);
        current_size = values->current_size_;
      }
      rep = values->rep_;
      values->current_size_ = current_size + 1;
      rep->elements[current_size] = v14;
      if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
        goto LABEL_17;
    }
    google::protobuf::UnknownFieldSet::AddVarint(unknown_fields, field_number, v14);
  }
LABEL_17:
  google::protobuf::io::CodedInputStream::PopLimit(input, limit);
  return 1;
};

// Line 193: range 000000000C8D1710-000000000C8D1B49
void __fastcall google::protobuf::internal::WireFormat::SerializeUnknownFields(
        const google::protobuf::UnknownFieldSet *unknown_fields,
        google::protobuf::io::CodedOutputStream *output)
{
  std::vector<google::protobuf::UnknownField> *fields; // rdx
  __int64 v3; // r13
  google::protobuf::UnknownField *v6; // rbx
  google::protobuf::uint32 v7; // esi
  google::protobuf::uint8 *v8; // rcx
  google::protobuf::uint8 *n; // rax
  char v10; // dl
  int v11; // eax
  int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // eax
  google::protobuf::uint8 *v15; // rdi
  google::protobuf::uint8 *v16; // rdx
  char v17; // cl
  int v18; // edx
  google::protobuf::uint64 v19; // rax
  __int64 v20; // rdx
  const void *v21; // rsi
  google::protobuf::uint32 v22; // esi
  google::protobuf::uint8 *v23; // rcx
  google::protobuf::uint8 *m; // rax
  char v25; // dl
  int v26; // eax
  google::protobuf::uint32 v27; // esi
  google::protobuf::uint8 *v28; // rcx
  google::protobuf::uint8 *k; // rax
  char v30; // dl
  int v31; // eax
  google::protobuf::uint32 v32; // esi
  google::protobuf::uint8 *v33; // rcx
  google::protobuf::uint8 *j; // rax
  char v35; // dl
  int v36; // eax
  int v37; // edi
  google::protobuf::uint64 varint; // rsi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v41; // dl
  int v42; // eax
  google::protobuf::uint32 v43; // esi
  google::protobuf::uint8 *v44; // rcx
  google::protobuf::uint8 *ii; // rax
  char v46; // dl
  int v47; // eax
  char v48; // dl

  fields = unknown_fields->fields_;
  if ( unknown_fields->fields_ )
  {
    v3 = 0LL;
    while ( 2 )
    {
      if ( (int)(fields->_M_impl._M_finish - fields->_M_impl._M_start) > (int)v3 )
      {
        v6 = &fields->_M_impl._M_start[v3];
        switch ( v6->type_ )
        {
          case 0u:
            v32 = 8 * v6->number_;
            if ( output->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v32);
              varint = v6->data_.varint_;
              if ( output->buffer_size_ > 9 )
              {
LABEL_32:
                buffer = output->buffer_;
                for ( i = buffer; varint > 0x7F; *(i - 1) = v41 | 0x80 )
                {
                  v41 = varint;
                  varint >>= 7;
                  ++i;
                }
                goto LABEL_34;
              }
            }
            else
            {
              v33 = output->buffer_;
              for ( j = v33; v32 > 0x7F; *(j - 1) = v35 | 0x80 )
              {
                v35 = v32;
                v32 >>= 7;
                ++j;
              }
              *j = v32;
              v36 = (_DWORD)j + 1 - (_DWORD)v33;
              v37 = output->buffer_size_ - v36;
              output->buffer_ += v36;
              output->buffer_size_ = v37;
              varint = v6->data_.varint_;
              if ( v37 > 9 )
                goto LABEL_32;
            }
            ++v3;
            google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, varint);
            fields = unknown_fields->fields_;
            if ( unknown_fields->fields_ )
              continue;
            break;
          case 1u:
            v27 = 8 * v6->number_ + 5;
            if ( output->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v27);
            }
            else
            {
              v28 = output->buffer_;
              for ( k = v28; v27 > 0x7F; *(k - 1) = v30 | 0x80 )
              {
                v30 = v27;
                v27 >>= 7;
                ++k;
              }
              *k = v27;
              v31 = (_DWORD)k + 1 - (_DWORD)v28;
              output->buffer_size_ -= v31;
              output->buffer_ += v31;
            }
            ++v3;
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, v6->data_.fixed32_);
            fields = unknown_fields->fields_;
            if ( unknown_fields->fields_ )
              continue;
            return;
          case 2u:
            v22 = 8 * v6->number_ + 1;
            if ( output->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v22);
            }
            else
            {
              v23 = output->buffer_;
              for ( m = v23; v22 > 0x7F; *(m - 1) = v25 | 0x80 )
              {
                v25 = v22;
                v22 >>= 7;
                ++m;
              }
              *m = v22;
              v26 = (_DWORD)m + 1 - (_DWORD)v23;
              output->buffer_size_ -= v26;
              output->buffer_ += v26;
            }
            ++v3;
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, v6->data_.varint_);
            fields = unknown_fields->fields_;
            if ( unknown_fields->fields_ )
              continue;
            return;
          case 3u:
            v7 = 8 * v6->number_ + 2;
            if ( output->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v7);
              v13 = *(_QWORD *)(v6->data_.varint_ + 8);
              v14 = v13;
              if ( output->buffer_size_ <= 4 )
                goto LABEL_50;
            }
            else
            {
              v8 = output->buffer_;
              for ( n = v8; v7 > 0x7F; *(n - 1) = v10 | 0x80 )
              {
                v10 = v7;
                v7 >>= 7;
                ++n;
              }
              *n = v7;
              v11 = (_DWORD)n + 1 - (_DWORD)v8;
              output->buffer_ += v11;
              v12 = output->buffer_size_ - v11;
              output->buffer_size_ = v12;
              v13 = *(_QWORD *)(v6->data_.varint_ + 8);
              v14 = v13;
              if ( v12 <= 4 )
              {
LABEL_50:
                google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v13);
                goto LABEL_12;
              }
            }
            v15 = output->buffer_;
            v16 = v15;
            if ( (unsigned int)v13 > 0x7F )
            {
              do
              {
                v17 = v14;
                v14 >>= 7;
                *v16++ = v17 | 0x80;
              }
              while ( v14 > 0x7F );
            }
            *v16 = v14;
            v18 = (_DWORD)v16 + 1 - (_DWORD)v15;
            output->buffer_size_ -= v18;
            output->buffer_ += v18;
LABEL_12:
            v19 = v6->data_.varint_;
            v20 = *(_QWORD *)(v19 + 8);
            v21 = *(const void **)v19;
            if ( output->aliasing_enabled_ )
            {
              google::protobuf::io::CodedOutputStream::WriteAliasedRaw(output, v21, v20);
              fields = unknown_fields->fields_;
LABEL_14:
              ++v3;
              if ( !fields )
                return;
            }
            else
            {
              google::protobuf::io::CodedOutputStream::WriteRaw(output, v21, v20);
              fields = unknown_fields->fields_;
              ++v3;
              if ( !unknown_fields->fields_ )
                return;
            }
            continue;
          case 4u:
            v43 = 8 * v6->number_ + 3;
            if ( output->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v43);
            }
            else
            {
              v44 = output->buffer_;
              for ( ii = v44; v43 > 0x7F; *(ii - 1) = v46 | 0x80 )
              {
                v46 = v43;
                v43 >>= 7;
                ++ii;
              }
              *ii = v43;
              v47 = (_DWORD)ii + 1 - (_DWORD)v44;
              output->buffer_size_ -= v47;
              output->buffer_ += v47;
            }
            google::protobuf::internal::WireFormat::SerializeUnknownFields(v6->data_.group_, output);
            LODWORD(varint) = 8 * v6->number_ + 4;
            if ( output->buffer_size_ <= 4 )
            {
              ++v3;
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, varint);
              fields = unknown_fields->fields_;
              if ( !unknown_fields->fields_ )
                return;
            }
            else
            {
              buffer = output->buffer_;
              for ( i = buffer; (unsigned int)varint > 0x7F; *(i - 1) = v48 | 0x80 )
              {
                v48 = varint;
                LODWORD(varint) = (unsigned int)varint >> 7;
                ++i;
              }
LABEL_34:
              *i = varint;
              ++v3;
              v42 = (_DWORD)i + 1 - (_DWORD)buffer;
              output->buffer_size_ -= v42;
              output->buffer_ += v42;
              fields = unknown_fields->fields_;
              if ( !unknown_fields->fields_ )
                return;
            }
            continue;
          default:
            goto LABEL_14;
        }
      }
      break;
    }
  }
};

// Line 232: range 000000000C8D1B50-000000000C8D1D50
google::protobuf::uint8 *__fastcall google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        const google::protobuf::UnknownFieldSet *unknown_fields,
        google::protobuf::uint8 *target)
{
  std::vector<google::protobuf::UnknownField> *fields; // rcx
  google::protobuf::uint8 *result; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  const std::string *v7; // rdi
  unsigned int n; // edx
  char v9; // cl
  __int64 v10; // rsi
  unsigned int m; // edx
  char v12; // cl
  int v13; // esi
  unsigned int k; // edx
  char v15; // cl
  unsigned __int64 v16; // rcx
  unsigned int i; // edx
  char v18; // si
  google::protobuf::uint8 *j; // rax
  char v20; // dl
  unsigned int ii; // edx
  char v22; // cl
  google::protobuf::uint8 *v23; // rax
  unsigned int jj; // edx
  char v25; // cl

  fields = unknown_fields->fields_;
  result = target;
  if ( unknown_fields->fields_ )
  {
    v5 = 0LL;
    while ( 2 )
    {
      if ( (int)(fields->_M_impl._M_finish - fields->_M_impl._M_start) > (int)v5 )
      {
        v6 = (__int64)&fields->_M_impl._M_start[v5];
        switch ( *(_DWORD *)(v6 + 4) )
        {
          case 0:
            v16 = *(_QWORD *)(v6 + 8);
            for ( i = 8 * *(_DWORD *)v6; i > 0x7F; *(result - 1) = v18 | 0x80 )
            {
              v18 = i;
              i >>= 7;
              ++result;
            }
            *result = i;
            for ( j = result + 1; v16 > 0x7F; *(j - 1) = v20 | 0x80 )
            {
              v20 = v16;
              v16 >>= 7;
              ++j;
            }
            *j = v16;
            result = j + 1;
            fields = unknown_fields->fields_;
            goto LABEL_25;
          case 1:
            v13 = *(_DWORD *)(v6 + 8);
            for ( k = 8 * *(_DWORD *)v6 + 5; k > 0x7F; *(result - 1) = v15 | 0x80 )
            {
              v15 = k;
              k >>= 7;
              ++result;
            }
            *result = k;
            result += 5;
            *((_DWORD *)result - 1) = v13;
            fields = unknown_fields->fields_;
            goto LABEL_25;
          case 2:
            v10 = *(_QWORD *)(v6 + 8);
            for ( m = 8 * *(_DWORD *)v6 + 1; m > 0x7F; *(result - 1) = v12 | 0x80 )
            {
              v12 = m;
              m >>= 7;
              ++result;
            }
            *result = m;
            result += 9;
            *((_QWORD *)result - 1) = v10;
            fields = unknown_fields->fields_;
            goto LABEL_25;
          case 3:
            v7 = *(const std::string **)(v6 + 8);
            for ( n = 8 * *(_DWORD *)v6 + 2; n > 0x7F; *(result - 1) = v9 | 0x80 )
            {
              v9 = n;
              n >>= 7;
              ++result;
            }
            *result = n;
            ++v5;
            result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, result + 1);
            fields = unknown_fields->fields_;
            if ( unknown_fields->fields_ )
              continue;
            return result;
          case 4:
            for ( ii = 8 * *(_DWORD *)v6 + 3; ii > 0x7F; *(result - 1) = v22 | 0x80 )
            {
              v22 = ii;
              ii >>= 7;
              ++result;
            }
            *result = ii;
            v23 = google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                    *(const google::protobuf::UnknownFieldSet **)(v6 + 8),
                    result + 1);
            for ( jj = 8 * *(_DWORD *)v6 + 4; jj > 0x7F; *(v23 - 1) = v25 | 0x80 )
            {
              v25 = jj;
              jj >>= 7;
              ++v23;
            }
            *v23 = jj;
            fields = unknown_fields->fields_;
            result = v23 + 1;
            goto LABEL_25;
          default:
LABEL_25:
            ++v5;
            if ( !fields )
              return result;
            continue;
        }
      }
      break;
    }
  }
  return result;
};

// Line 267: range 000000000C8D1D60-000000000C8D1F20
void __fastcall google::protobuf::internal::WireFormat::SerializeUnknownMessageSetItems(
        const google::protobuf::UnknownFieldSet *unknown_fields,
        google::protobuf::io::CodedOutputStream *output)
{
  std::vector<google::protobuf::UnknownField> *fields; // rdx
  __int64 i; // r13
  const google::protobuf::UnknownField *v6; // rbp
  int v7; // eax
  int buffer_size; // eax
  int v9; // eax
  int v10; // eax
  google::protobuf::uint32 number; // esi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *j; // rax
  char v14; // dl
  int v15; // eax
  int v16; // edi

  fields = unknown_fields->fields_;
  if ( unknown_fields->fields_ )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (int)(fields->_M_impl._M_finish - fields->_M_impl._M_start) <= (int)i )
        return;
      v6 = &fields->_M_impl._M_start[i];
      if ( v6->type_ == 3 )
        break;
LABEL_5:
      if ( !fields )
        return;
    }
    if ( output->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xBu);
      buffer_size = output->buffer_size_;
    }
    else
    {
      *output->buffer_ = 11;
      v7 = output->buffer_size_;
      ++output->buffer_;
      buffer_size = v7 - 1;
      output->buffer_size_ = buffer_size;
    }
    if ( buffer_size <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0x10u);
      v10 = output->buffer_size_;
    }
    else
    {
      *output->buffer_ = 16;
      v9 = output->buffer_size_;
      ++output->buffer_;
      v10 = v9 - 1;
      output->buffer_size_ = v10;
    }
    number = v6->number_;
    if ( v10 <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, number);
      if ( output->buffer_size_ > 4 )
      {
LABEL_15:
        *output->buffer_++ = 26;
        --output->buffer_size_;
        goto LABEL_16;
      }
    }
    else
    {
      buffer = output->buffer_;
      for ( j = buffer; number > 0x7F; *(j - 1) = v14 | 0x80 )
      {
        v14 = number;
        number >>= 7;
        ++j;
      }
      *j = number;
      v15 = (_DWORD)j + 1 - (_DWORD)buffer;
      v16 = output->buffer_size_ - v15;
      output->buffer_ += v15;
      output->buffer_size_ = v16;
      if ( v16 > 4 )
        goto LABEL_15;
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0x1Au);
LABEL_16:
    google::protobuf::UnknownField::SerializeLengthDelimitedNoTag(v6, output);
    if ( output->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xCu);
      fields = unknown_fields->fields_;
    }
    else
    {
      *output->buffer_ = 12;
      fields = unknown_fields->fields_;
      ++output->buffer_;
      --output->buffer_size_;
    }
    goto LABEL_5;
  }
};

// Line 292: range 000000000C8D1F30-000000000C8D1FD0
google::protobuf::uint8 *__fastcall google::protobuf::internal::WireFormat::SerializeUnknownMessageSetItemsToArray(
        const google::protobuf::UnknownFieldSet *unknown_fields,
        google::protobuf::uint8 *target)
{
  std::vector<google::protobuf::UnknownField> *fields; // rcx
  google::protobuf::uint8 *result; // rax
  __int64 v4; // rbp
  const google::protobuf::UnknownField *v6; // rdi
  google::protobuf::uint8 *v7; // rsi
  unsigned int i; // eax
  char v9; // dl
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::uint8 *v11; // rax

  fields = unknown_fields->fields_;
  result = target;
  if ( unknown_fields->fields_ )
  {
    v4 = 0LL;
    do
    {
      if ( (int)(fields->_M_impl._M_finish - fields->_M_impl._M_start) <= (int)v4 )
        break;
      v6 = &fields->_M_impl._M_start[v4];
      if ( v6->type_ == 3 )
      {
        v7 = result + 2;
        *(_WORD *)result = 4107;
        for ( i = v6->number_; i > 0x7F; *(v7 - 1) = v9 | 0x80 )
        {
          v9 = i;
          i >>= 7;
          ++v7;
        }
        *v7 = i;
        v10 = v7 + 2;
        *(v10 - 1) = 26;
        v11 = google::protobuf::UnknownField::SerializeLengthDelimitedNoTagToArray(v6, v10);
        *v11 = 12;
        result = v11 + 1;
        fields = unknown_fields->fields_;
      }
      ++v4;
    }
    while ( fields );
  }
  return result;
};

// Line 323: range 000000000C8D1FE0-000000000C8D2149
size_t __fastcall google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        const google::protobuf::UnknownFieldSet *unknown_fields)
{
  size_t v1; // r12
  std::vector<google::protobuf::UnknownField> *fields; // rax
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rbx
  int v4; // ebp
  __int64 v5; // r13
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // eax

  v1 = 0LL;
  fields = unknown_fields->fields_;
  if ( unknown_fields->fields_ )
  {
    M_start = fields->_M_impl._M_start;
    v4 = 0;
    v5 = fields->_M_impl._M_finish - fields->_M_impl._M_start;
    while ( (int)v5 > v4 )
    {
      switch ( M_start->type_ )
      {
        case 0u:
          _BitScanReverse64(&v8, M_start->data_.varint_ | 1);
          v9 = (unsigned int)(9 * v8 + 73) >> 6;
          _BitScanReverse((unsigned int *)&v8, 8 * M_start->number_ + 1);
          v1 += v9 + ((unsigned int)(9 * v8 + 73) >> 6);
          break;
        case 1u:
          _BitScanReverse(&v13, 8 * M_start->number_ + 5);
          v1 += ((9 * v13 + 73) >> 6) + 4LL;
          break;
        case 2u:
          _BitScanReverse(&v12, 8 * M_start->number_ + 1);
          v1 += ((9 * v12 + 73) >> 6) + 8LL;
          break;
        case 3u:
          _BitScanReverse(&v6, 8 * M_start->number_ + 3);
          v7 = (9 * v6 + 73) >> 6;
          _BitScanReverse(&v6, *(_QWORD *)(M_start->data_.varint_ + 8) | 1);
          v1 += *(_QWORD *)(M_start->data_.varint_ + 8) + v7 + ((9 * v6 + 73) >> 6);
          break;
        case 4u:
          v10 = 8 * M_start->number_;
          _BitScanReverse(&v11, v10 | 5);
          _BitScanReverse((unsigned int *)&v10, v10 | 3);
          v1 += ((unsigned int)(9 * v10 + 73) >> 6)
              + google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(M_start->data_.group_)
              + ((9 * v11 + 73) >> 6);
          break;
        default:
          break;
      }
      ++v4;
      ++M_start;
    }
  }
  return v1;
};

// Line 373: range 000000000C8D2150-000000000C8D21C2
size_t __fastcall google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(
        const google::protobuf::UnknownFieldSet *unknown_fields)
{
  std::vector<google::protobuf::UnknownField> *fields; // rdx
  size_t result; // rax
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rsi
  int i; // edi
  unsigned int v5; // ecx
  int v6; // r11d
  size_t v7; // r10
  unsigned int v8; // eax

  fields = unknown_fields->fields_;
  result = 0LL;
  if ( unknown_fields->fields_ )
  {
    M_start = fields->_M_impl._M_start;
    for ( i = 0; (int)(fields->_M_impl._M_finish - fields->_M_impl._M_start) > i; ++i )
    {
      if ( M_start->type_ == 3 )
      {
        _BitScanReverse(&v5, M_start->number_ | 1);
        v6 = *(_QWORD *)(M_start->data_.varint_ + 8);
        v7 = google::protobuf::internal::WireFormatLite::kMessageSetItemTagsSize + result + v6;
        _BitScanReverse(&v8, v6 | 1);
        result = v7 + ((9 * v5 + 73) >> 6) + ((9 * v8 + 73) >> 6);
      }
      ++M_start;
    }
  }
  return result;
};

// Line 394: range 000000000C8D36A0-000000000C8D381D
bool __fastcall google::protobuf::internal::WireFormat::ParseAndMergePartial(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::Message *message)
{
  const google::protobuf::Descriptor *v4; // r12
  const google::protobuf::Message::Reflection *(__fastcall *v5)(const google::protobuf::Message *const); // rdx
  google::protobuf::io::CodedInputStream *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // r15d
  google::protobuf::FieldDescriptor *FieldByNumber; // rsi
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // ebp
  google::protobuf::Message *v14; // rdx
  google::protobuf::DescriptorPool *extension_pool; // rdi

  v4 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite
                                              + 24))(message);
  v5 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v5 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    v8 = v7;
  }
  else
  {
    v8 = (__int64)v5(message);
  }
  do
  {
    while ( 1 )
    {
      buffer = input->buffer_;
      if ( input->buffer_end_ <= input->buffer_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( *(char *)buffer >= 0 )
        {
          input->last_tag_ = TagFallback;
          input->buffer_ = buffer + 1;
          if ( !TagFallback )
            return 1;
          goto LABEL_8;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      input->last_tag_ = TagFallback;
      if ( !TagFallback )
        return 1;
LABEL_8:
      if ( (TagFallback & 7) == 4 )
        return 1;
      if ( v4 )
      {
        v9 = TagFallback >> 3;
        FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                               v4,
                                                               TagFallback >> 3);
        if ( FieldByNumber )
          goto LABEL_4;
        if ( google::protobuf::Descriptor::FindExtensionRangeContainingNumber(v4, v9) )
        {
          extension_pool = (google::protobuf::DescriptorPool *)input->extension_pool_;
          FieldByNumber = extension_pool
                        ? (google::protobuf::FieldDescriptor *)google::protobuf::DescriptorPool::FindExtensionByNumber(
                                                                 extension_pool,
                                                                 v4,
                                                                 v9)
                        : (google::protobuf::FieldDescriptor *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 624LL))(
                                                                 v8,
                                                                 v9);
          if ( FieldByNumber )
            goto LABEL_4;
        }
        if ( v4->options_->message_set_wire_format_ && TagFallback == 11 )
          break;
      }
      FieldByNumber = 0LL;
LABEL_4:
      if ( !(unsigned __int8)google::protobuf::internal::WireFormat::ParseAndMergeField(
                               TagFallback,
                               FieldByNumber,
                               (const google::protobuf::FieldDescriptor *)message,
                               (google::protobuf::Message *)input,
                               v6) )
        return 0;
    }
  }
  while ( (unsigned __int8)google::protobuf::internal::WireFormat::ParseAndMergeMessageSetItem(
                             (google::protobuf::internal::WireFormat *)input,
                             (google::protobuf::io::CodedInputStream *)message,
                             v14) );
  return 0;
};

// Line 447: range 000000000C8D21D0-000000000C8D2253
bool __fastcall google::protobuf::internal::WireFormat::SkipMessageSetField(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::uint32 field_number,
        google::protobuf::UnknownFieldSet *unknown_fields)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v5; // r12d
  google::protobuf::int64 Varint32Fallback; // rax
  std::string *v8; // rax

  buffer = input->buffer_;
  if ( input->buffer_ >= input->buffer_end_ )
  {
    v5 = 0;
  }
  else
  {
    v5 = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      input->buffer_ = buffer + 1;
      goto LABEL_6;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5);
  if ( Varint32Fallback < 0 )
    return 0;
  v5 = Varint32Fallback;
LABEL_6:
  v8 = google::protobuf::UnknownFieldSet::AddLengthDelimited[abi:cxx11](unknown_fields, field_number);
  return google::protobuf::io::CodedInputStream::ReadString(input, v8, v5);
};

// Line 457: range 000000000C8D2260-000000000C8D23D7
bool __fastcall google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField(
        google::protobuf::uint32 field_number,
        google::protobuf::FieldDescriptor *this,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::io::CodedInputStream *a4,
        google::protobuf::io::CodedInputStream *a5)
{
  const std::string *name; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v10)(const google::protobuf::Message *const); // rdx
  __int64 v11; // rdx
  __int64 v12; // r13
  google::protobuf::internal::LogMessage_0 *v13; // rax
  __int64 v15; // rbp
  int (**buffer)(...); // rax
  int VarintSizeAsIntFallback; // esi
  google::protobuf::UnknownFieldSet *v18; // rax
  std::pair<int,int> v19; // r13
  google::protobuf::internal::LogFinisher v20; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v21; // [rsp+10h] [rbp-68h] BYREF

  name = a3->name_;
  v10 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&a3->name_[5]._anon_0._M_allocated_capacity + 1);
  if ( v10 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedInputStream *, google::protobuf::io::CodedInputStream *))name[6]._M_dataplus._M_p)(
      a3,
      this,
      v10,
      a4,
      a5);
    v12 = v11;
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedInputStream *, google::protobuf::io::CodedInputStream *))v10)(
            a3,
            this,
            v10,
            a4,
            a5);
  }
  if ( this )
  {
    if ( this->label_ == LABEL_REPEATED || (unsigned int)google::protobuf::FieldDescriptor::type(this) != 11 )
    {
      google::protobuf::internal::LogMessage::LogMessage(&v21, LOGLEVEL_ERROR_0, "google/protobuf/wire_format.cc", 467);
      v13 = google::protobuf::internal::LogMessage::operator<<(
              &v21,
              "Extensions of MessageSets must be optional messages.");
      google::protobuf::internal::LogFinisher::operator=(&v20, v13);
      google::protobuf::internal::LogMessage::~LogMessage(&v21);
      return 0;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, google::protobuf::MessageFactory *))(*(_QWORD *)v12 + 312LL))(
            v12,
            a3,
            this,
            a4->extension_factory_);
    buffer = (int (**)(...))a4->buffer_;
    if ( a4->buffer_ < a4->buffer_end_
      && (VarintSizeAsIntFallback = *(unsigned __int8 *)buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
    {
      a4->buffer_ = (const google::protobuf::uint8 *)buffer + 1;
    }
    else
    {
      VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a4);
      if ( VarintSizeAsIntFallback < 0 )
        return 0;
    }
    v19 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a4, VarintSizeAsIntFallback);
    if ( v19.second < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)v15 + 88LL))(
            v15,
            a4) )
    {
      return 0;
    }
    return google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a4, v19.first);
  }
  else
  {
    v18 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v12 + 24LL))(
                                                 v12,
                                                 a3);
    return google::protobuf::internal::WireFormat::SkipMessageSetField(a4, field_number, v18);
  }
};

// Line 467: range 000000000C72C118-000000000C72C125
void __fastcall __noreturn google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField(
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

// Line 484: range 000000000C8D23E0-000000000C8D327E
__int64 __fastcall google::protobuf::internal::WireFormat::ParseAndMergeField(
        google::protobuf::uint32 tag,
        google::protobuf::FieldDescriptor *this,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::io::CodedInputStream *a4,
        google::protobuf::io::CodedInputStream *a5)
{
  const std::string *name; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v11)(const google::protobuf::Message *const); // rdx
  __int64 v12; // rdx
  __int64 v13; // r13
  google::protobuf::uint32 v14; // ebx
  google::protobuf::UnknownFieldSet *v15; // rax
  google::protobuf::uint32 v16; // eax
  google::protobuf::uint32 v18; // eax
  char *v19; // rcx
  int (**v20)(...); // rax
  int v21; // ecx
  int (**v22)(...); // rax
  unsigned __int64 v23; // xmm0_8
  int (**v24)(...); // rax
  std::string::pointer v25; // rcx
  int (**v26)(...); // rax
  std::string::pointer v27; // xmm0_8
  int (**v28)(...); // rax
  __int64 v29; // rcx
  int (**v30)(...); // rax
  std::pair<long unsigned int,bool> v31; // rax
  int (**v32)(...); // rax
  google::protobuf::uint32 v33; // esi
  google::protobuf::int64 v34; // rax
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  int (**v38)(...); // rax
  __int64 M_p_low; // rcx
  __int64 v40; // rax
  int (**v41)(...); // rax
  google::protobuf::uint32 v42; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  int (**v44)(...); // rax
  int (**v45)(...); // rax
  int v46; // ecx
  __int64 v47; // rax
  int (**v48)(...); // rcx
  __int64 v49; // rax
  __int64 v50; // rbp
  int (**v51)(...); // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v53; // rbx
  google::protobuf::uint32 v54; // eax
  google::protobuf::FileDescriptor::Syntax syntax; // eax
  google::protobuf::uint32 v56; // eax
  const char *v57; // r8
  __int64 v58; // rax
  google::protobuf::uint32 v59; // eax
  __int64 v60; // rax
  _BOOL8 v61; // rcx
  int (**extension_factory)(...); // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  bool v65; // sf
  int recursion_budget; // eax
  google::protobuf::uint32 v67; // eax
  __int64 v68; // rax
  google::protobuf::uint32 v69; // eax
  google::protobuf::uint32 v70; // eax
  unsigned int v71; // r14d
  __int64 v72; // rax
  google::protobuf::uint32 v73; // eax
  __int64 v74; // rax
  google::protobuf::uint32 v75; // eax
  __int64 v76; // rax
  int (**buffer)(...); // rax
  std::string::pointer M_p; // rdx
  __int64 v79; // rax
  int (**v80)(...); // rax
  char *v81; // rcx
  __int64 v82; // rax
  int (**v83)(...); // rax
  unsigned int v84; // edx
  double v85; // xmm0_8
  __int64 v86; // rax
  google::protobuf::uint32 v87; // eax
  __int64 v88; // rax
  int v89; // r15d
  const google::protobuf::EnumDescriptor *v90; // rax
  const google::protobuf::EnumValueDescriptor *v91; // rcx
  __int64 v92; // rax
  google::protobuf::UnknownFieldSet *v93; // rax
  const google::protobuf::EnumDescriptor *v94; // rax
  const google::protobuf::EnumValueDescriptor *ValueByNumber; // rcx
  __int64 v96; // rax
  google::protobuf::uint32 v97; // eax
  google::protobuf::UnknownFieldSet *v98; // rax
  google::protobuf::uint32 v99; // eax
  google::protobuf::uint32 v100; // eax
  google::protobuf::uint32 v101; // eax
  google::protobuf::uint32 v102; // eax
  google::protobuf::uint32 v103; // eax
  google::protobuf::io::CodedInputStream::Limit limit; // [rsp+0h] [rbp-78h]
  int number; // [rsp+Ch] [rbp-6Ch]
  google::protobuf::uint32 numbera; // [rsp+Ch] [rbp-6Ch]
  google::protobuf::uint32 value; // [rsp+1Ch] [rbp-5Ch] BYREF
  std::string v108[2]; // [rsp+20h] [rbp-58h] BYREF

  name = a3->name_;
  v11 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&a3->name_[5]._anon_0._M_allocated_capacity + 1);
  if ( v11 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedInputStream *, google::protobuf::io::CodedInputStream *))name[6]._M_dataplus._M_p)(
      a3,
      this,
      v11,
      a4,
      a5);
    v13 = v12;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedInputStream *, google::protobuf::io::CodedInputStream *))v11)(
            a3,
            this,
            v11,
            a4,
            a5);
  }
  if ( !this )
    goto LABEL_6;
  v14 = tag & 7;
  if ( v14 == google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[(int)google::protobuf::FieldDescriptor::type(this)] )
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(this) )
    {
      case 1u:
        buffer = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) <= 7 )
        {
          LOBYTE(v99) = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                          a4,
                          (google::protobuf::uint64 *)v108);
          v14 = v99;
          if ( !(_BYTE)v99 )
            return v14;
          M_p = v108[0]._M_dataplus._M_p;
        }
        else
        {
          M_p = (std::string::pointer)*buffer;
          a4->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
        }
        v79 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(v79 + 560))(
            v13,
            a3,
            this,
            *(double *)&M_p);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(v79 + 272))(
            v13,
            a3,
            this,
            *(double *)&M_p);
        return 1;
      case 2u:
        v83 = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) <= 3 )
        {
          LOBYTE(v100) = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                           a4,
                           (google::protobuf::uint32 *)v108);
          v14 = v100;
          if ( !(_BYTE)v100 )
            return v14;
          v84 = (unsigned int)v108[0]._M_dataplus._M_p;
        }
        else
        {
          v84 = *(_DWORD *)v83;
          a4->buffer_ = (const google::protobuf::uint8 *)v83 + 4;
        }
        *(_QWORD *)&v85 = _mm_cvtsi32_si128(v84).m128i_u64[0];
        v86 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(v86 + 552))(
            v13,
            a3,
            this,
            v85);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(v86 + 264))(
            v13,
            a3,
            this,
            v85);
        return 1;
      case 3u:
        LOBYTE(v73) = google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108);
        v14 = v73;
        if ( (_BYTE)v73 )
        {
          v74 = *(_QWORD *)v13;
          if ( this->label_ == LABEL_REPEATED )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(v74 + 528))(
              v13,
              a3,
              this,
              v108[0]._M_dataplus._M_p);
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(v74 + 240))(
              v13,
              a3,
              this,
              v108[0]._M_dataplus._M_p);
        }
        return v14;
      case 4u:
        LOBYTE(v87) = google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108);
        v14 = v87;
        if ( (_BYTE)v87 )
        {
          v88 = *(_QWORD *)v13;
          if ( this->label_ == LABEL_REPEATED )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(v88 + 544))(
              v13,
              a3,
              this,
              v108[0]._M_dataplus._M_p);
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(v88 + 256))(
              v13,
              a3,
              this,
              v108[0]._M_dataplus._M_p);
        }
        return v14;
      case 5u:
        LOBYTE(v75) = google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108);
        v14 = v75;
        if ( (_BYTE)v75 )
        {
          v76 = *(_QWORD *)v13;
          if ( this->label_ == LABEL_REPEATED )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v76 + 520))(
              v13,
              a3,
              this,
              LODWORD(v108[0]._M_dataplus._M_p));
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v76 + 232))(
              v13,
              a3,
              this,
              LODWORD(v108[0]._M_dataplus._M_p));
        }
        return v14;
      case 6u:
        v80 = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) <= 7 )
        {
          LOBYTE(v103) = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                           a4,
                           (google::protobuf::uint64 *)v108);
          v14 = v103;
          if ( !(_BYTE)v103 )
            return v14;
        }
        else
        {
          v81 = (char *)*v80;
          a4->buffer_ = (const google::protobuf::uint8 *)(v80 + 1);
          v108[0]._M_dataplus._M_p = v81;
        }
        v82 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v82 + 544))(
            v13,
            a3,
            this);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v82 + 256))(
            v13,
            a3,
            this);
        return 1;
      case 7u:
        v45 = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) <= 3 )
        {
          LOBYTE(v97) = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                          a4,
                          (google::protobuf::uint32 *)v108);
          v14 = v97;
          if ( !(_BYTE)v97 )
            return v14;
        }
        else
        {
          v46 = *(_DWORD *)v45;
          a4->buffer_ = (const google::protobuf::uint8 *)v45 + 4;
          LODWORD(v108[0]._M_dataplus._M_p) = v46;
        }
        v47 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v47 + 536))(
            v13,
            a3,
            this);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v47 + 248))(
            v13,
            a3,
            this);
        return 1;
      case 8u:
        LOBYTE(v59) = google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108);
        v14 = v59;
        if ( (_BYTE)v59 )
        {
          v60 = *(_QWORD *)v13;
          v61 = v108[0]._M_dataplus._M_p != 0LL;
          if ( this->label_ == LABEL_REPEATED )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _BOOL8))(v60 + 568))(
              v13,
              a3,
              this,
              v61);
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _BOOL8))(v60 + 280))(
              v13,
              a3,
              this,
              v61);
        }
        return v14;
      case 9u:
        syntax = this->file_->syntax_;
        v108[0]._anon_0._M_local_buf[0] = 0;
        v108[0]._M_string_length = 0LL;
        number = syntax;
        v108[0]._M_dataplus._M_p = v108[0]._anon_0._M_local_buf;
        LOBYTE(v56) = google::protobuf::internal::WireFormatLite::ReadBytes(a4, v108);
        v14 = v56;
        if ( (_BYTE)v56
          && (number != 3
           || (unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)v108[0]._M_dataplus._M_p,
                                 (const char *)LODWORD(v108[0]._M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)this->full_name_->_M_dataplus._M_p,
                                 v57)) )
        {
          v58 = *(_QWORD *)v13;
          if ( this->label_ == LABEL_REPEATED )
LABEL_192:
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string *))(v58 + 576))(
              v13,
              a3,
              this,
              v108);
          else
LABEL_119:
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string *))(v58 + 288))(
              v13,
              a3,
              this,
              v108);
LABEL_120:
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v108[0]._M_dataplus._M_p != &v108[0]._anon_0 )
            operator delete(v108[0]._M_dataplus._M_p);
        }
        else
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v108[0]._M_dataplus._M_p == &v108[0]._anon_0 )
            return 0;
          operator delete(v108[0]._M_dataplus._M_p);
          return 0;
        }
        return v14;
      case 0xAu:
        extension_factory = (int (**)(...))a4->extension_factory_;
        v63 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          v64 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, int (**)(...)))(v63 + 600))(
                  v13,
                  a3,
                  this,
                  extension_factory);
        else
          v64 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, int (**)(...)))(v63 + 312))(
                  v13,
                  a3,
                  this,
                  extension_factory);
        v65 = --a4->recursion_budget_ < 0;
        if ( v65
          || !(*(unsigned __int8 (__fastcall **)(__int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)v64 + 88LL))(
                v64,
                a4) )
        {
          return 0;
        }
        recursion_budget = a4->recursion_budget_;
        if ( a4->recursion_limit_ > recursion_budget )
          a4->recursion_budget_ = recursion_budget + 1;
        LOBYTE(v14) = (tag & 0xFFFFFFF8 | 4) == a4->last_tag_;
        return v14;
      case 0xBu:
        v48 = (int (**)(...))a4->extension_factory_;
        v49 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          v50 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, int (**)(...)))(v49 + 600))(
                  v13,
                  a3,
                  this,
                  v48);
        else
          v50 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, int (**)(...)))(v49 + 312))(
                  v13,
                  a3,
                  this,
                  v48);
        v51 = (int (**)(...))a4->buffer_;
        if ( a4->buffer_ < a4->buffer_end_
          && (VarintSizeAsIntFallback = *(unsigned __int8 *)v51, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a4->buffer_ = (const google::protobuf::uint8 *)v51 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a4);
          if ( VarintSizeAsIntFallback < 0 )
            return 0;
        }
        v53 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a4, VarintSizeAsIntFallback);
        if ( v53.second < 0
          || !(*(unsigned __int8 (__fastcall **)(__int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)v50 + 88LL))(
                v50,
                a4) )
        {
          return 0;
        }
        LOBYTE(v54) = google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a4, v53.first);
        return v54;
      case 0xCu:
        v108[0]._M_string_length = 0LL;
        v108[0]._M_dataplus._M_p = v108[0]._anon_0._M_local_buf;
        v108[0]._anon_0._M_local_buf[0] = 0;
        LOBYTE(v69) = google::protobuf::internal::WireFormatLite::ReadBytes(a4, v108);
        v14 = v69;
        if ( !(_BYTE)v69 )
          goto LABEL_120;
        v58 = *(_QWORD *)v13;
        if ( this->label_ != LABEL_REPEATED )
          goto LABEL_119;
        goto LABEL_192;
      case 0xDu:
        LOBYTE(v67) = google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108);
        v14 = v67;
        if ( (_BYTE)v67 )
        {
          v68 = *(_QWORD *)v13;
          if ( this->label_ == LABEL_REPEATED )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v68 + 536))(
              v13,
              a3,
              this,
              LODWORD(v108[0]._M_dataplus._M_p));
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v68 + 248))(
              v13,
              a3,
              this,
              LODWORD(v108[0]._M_dataplus._M_p));
        }
        return v14;
      case 0xEu:
        LOBYTE(v70) = google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108);
        v14 = v70;
        if ( (_BYTE)v70 )
        {
          v71 = (unsigned int)v108[0]._M_dataplus._M_p;
          if ( *(_DWORD *)(*(_QWORD *)(((__int64 (__fastcall *)(const google::protobuf::FieldDescriptor *))a3->name_[6]._M_dataplus._M_p)(a3)
                                     + 16)
                         + 60LL) == 3 )
          {
            v72 = *(_QWORD *)v13;
            if ( this->label_ == LABEL_REPEATED )
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v72 + 592))(
                v13,
                a3,
                this,
                v71);
            else
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(v72 + 304))(
                v13,
                a3,
                this,
                v71);
          }
          else
          {
            v94 = google::protobuf::FieldDescriptor::enum_type(this);
            ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(v94, v71);
            v96 = *(_QWORD *)v13;
            if ( ValueByNumber )
            {
              if ( this->label_ == LABEL_REPEATED )
                (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v96 + 584))(
                  v13,
                  a3,
                  this);
              else
                (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v96 + 296))(
                  v13,
                  a3,
                  this);
            }
            else
            {
              v98 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *))(v96 + 24))(
                                                           v13,
                                                           a3);
              google::protobuf::UnknownFieldSet::AddVarint(v98, tag >> 3, (int)v71);
            }
          }
        }
        return v14;
      case 0xFu:
        v38 = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 3 )
        {
          M_p_low = *(unsigned int *)v38;
          a4->buffer_ = (const google::protobuf::uint8 *)v38 + 4;
          goto LABEL_93;
        }
        LOBYTE(v101) = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                         a4,
                         (google::protobuf::uint32 *)v108);
        v14 = v101;
        if ( !(_BYTE)v101 )
          return v14;
        M_p_low = LODWORD(v108[0]._M_dataplus._M_p);
        goto LABEL_93;
      case 0x10u:
        v44 = (int (**)(...))a4->buffer_;
        if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 7 )
        {
          v36 = (unsigned __int64)*v44;
          a4->buffer_ = (const google::protobuf::uint8 *)(v44 + 1);
          goto LABEL_88;
        }
        LOBYTE(v102) = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                         a4,
                         (google::protobuf::uint64 *)v108);
        v14 = v102;
        if ( !(_BYTE)v102 )
          return v14;
        v36 = (unsigned __int64)v108[0]._M_dataplus._M_p;
        goto LABEL_88;
      case 0x11u:
        v41 = (int (**)(...))a4->buffer_;
        if ( a4->buffer_ >= a4->buffer_end_ )
        {
          v42 = 0;
        }
        else
        {
          v42 = *(unsigned __int8 *)v41;
          if ( *(char *)v41 >= 0 )
          {
            a4->buffer_ = (const google::protobuf::uint8 *)v41 + 1;
            goto LABEL_100;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a4, v42);
        if ( Varint32Fallback < 0 )
          return 0;
        v42 = Varint32Fallback;
LABEL_100:
        M_p_low = (v42 >> 1) ^ -(v42 & 1);
LABEL_93:
        v40 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, __int64))(v40 + 520))(
            v13,
            a3,
            this,
            M_p_low);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, __int64))(v40 + 232))(
            v13,
            a3,
            this,
            M_p_low);
        return 1;
      case 0x12u:
        *(_QWORD *)&Varint64Fallback.second = a4->buffer_;
        if ( a4->buffer_ < a4->buffer_end_
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a4->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a4);
          if ( !Varint64Fallback.second )
            return 0;
        }
        v36 = (Varint64Fallback.first >> 1) ^ -(__int64)(Varint64Fallback.first & 1);
LABEL_88:
        v37 = *(_QWORD *)v13;
        if ( this->label_ == LABEL_REPEATED )
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, unsigned __int64))(v37 + 528))(
            v13,
            a3,
            this,
            v36);
        else
          (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, unsigned __int64))(v37 + 240))(
            v13,
            a3,
            this,
            v36);
        return 1;
      default:
        return 1;
    }
  }
  if ( this->label_ == LABEL_REPEATED && (unsigned int)google::protobuf::FieldDescriptor::type(this) - 9 > 3 && v14 == 2 )
  {
    LOBYTE(v18) = google::protobuf::io::CodedInputStream::ReadVarint32(a4, &value);
    v14 = v18;
    if ( (_BYTE)v18 )
    {
      limit = google::protobuf::io::CodedInputStream::PushLimit(a4, value);
      switch ( (unsigned int)google::protobuf::FieldDescriptor::type(this) )
      {
        case 1u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v28 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 7 )
            {
              v27 = (std::string::pointer)*v28;
              a4->buffer_ = (const google::protobuf::uint8 *)(v28 + 1);
LABEL_39:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(*(_QWORD *)v13 + 560LL))(
                v13,
                a3,
                this,
                *(double *)&v27);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a4, (google::protobuf::uint64 *)v108) )
          {
            v27 = v108[0]._M_dataplus._M_p;
            goto LABEL_39;
          }
          return 0;
        case 2u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v24 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 3 )
            {
              v23 = _mm_cvtsi32_si128(*(_DWORD *)v24).m128i_u64[0];
              a4->buffer_ = (const google::protobuf::uint8 *)v24 + 4;
LABEL_27:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, double))(*(_QWORD *)v13 + 552LL))(
                v13,
                a3,
                this,
                *(double *)&v23);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a4, (google::protobuf::uint32 *)v108) )
          {
            v23 = _mm_cvtsi32_si128((unsigned int)v108[0]._M_dataplus._M_p).m128i_u64[0];
            goto LABEL_27;
          }
          return 0;
        case 3u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            if ( google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108) )
            {
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(*(_QWORD *)v13 + 528LL))(
                v13,
                a3,
                this,
                v108[0]._M_dataplus._M_p);
              continue;
            }
            return 0;
          }
        case 4u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            if ( google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108) )
            {
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(*(_QWORD *)v13 + 544LL))(
                v13,
                a3,
                this,
                v108[0]._M_dataplus._M_p);
              continue;
            }
            return 0;
          }
        case 5u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            if ( google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108) )
            {
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v13 + 520LL))(
                v13,
                a3,
                this,
                LODWORD(v108[0]._M_dataplus._M_p));
              continue;
            }
            return 0;
          }
        case 6u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v20 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 7 )
            {
              v19 = (char *)*v20;
              a4->buffer_ = (const google::protobuf::uint8 *)(v20 + 1);
              v108[0]._M_dataplus._M_p = v19;
LABEL_15:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v13 + 544LL))(
                v13,
                a3,
                this);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a4, (google::protobuf::uint64 *)v108) )
            goto LABEL_15;
          return 0;
        case 7u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v22 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 3 )
            {
              v21 = *(_DWORD *)v22;
              a4->buffer_ = (const google::protobuf::uint8 *)v22 + 4;
              LODWORD(v108[0]._M_dataplus._M_p) = v21;
LABEL_21:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v13 + 536LL))(
                v13,
                a3,
                this);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a4, (google::protobuf::uint32 *)v108) )
            goto LABEL_21;
          return 0;
        case 8u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            if ( google::protobuf::io::CodedInputStream::ReadVarint64(a4, (google::protobuf::uint64 *)v108) )
            {
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, bool))(*(_QWORD *)v13 + 568LL))(
                v13,
                a3,
                this,
                v108[0]._M_dataplus._M_p != 0LL);
              continue;
            }
            return 0;
          }
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          return 0;
        case 0xDu:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            if ( google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108) )
            {
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v13 + 536LL))(
                v13,
                a3,
                this,
                LODWORD(v108[0]._M_dataplus._M_p));
              continue;
            }
            return 0;
          }
        case 0xEu:
          numbera = tag >> 3;
LABEL_166:
          if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
            goto LABEL_57;
          while ( google::protobuf::io::CodedInputStream::ReadVarint32(a4, (google::protobuf::uint32 *)v108) )
          {
            v89 = (int)v108[0]._M_dataplus._M_p;
            if ( *(_DWORD *)(*(_QWORD *)(((__int64 (__fastcall *)(const google::protobuf::FieldDescriptor *))a3->name_[6]._M_dataplus._M_p)(a3)
                                       + 16)
                           + 60LL) != 3 )
            {
              v90 = google::protobuf::FieldDescriptor::enum_type(this);
              v91 = google::protobuf::EnumDescriptor::FindValueByNumber(v90, v89);
              v92 = *(_QWORD *)v13;
              if ( v91 )
              {
                (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *))(v92 + 584))(
                  v13,
                  a3,
                  this);
              }
              else
              {
                v93 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *))(v92 + 24))(
                                                             v13,
                                                             a3);
                google::protobuf::UnknownFieldSet::AddVarint(v93, numbera, v89);
              }
              goto LABEL_166;
            }
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v13 + 592LL))(
              v13,
              a3,
              this,
              (unsigned int)v89);
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
            {
LABEL_57:
              google::protobuf::io::CodedInputStream::PopLimit(a4, limit);
              return v14;
            }
          }
          return 0;
        case 0xFu:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v30 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 3 )
            {
              v29 = *(unsigned int *)v30;
              a4->buffer_ = (const google::protobuf::uint8 *)v30 + 4;
LABEL_45:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, __int64))(*(_QWORD *)v13 + 520LL))(
                v13,
                a3,
                this,
                v29);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a4, (google::protobuf::uint32 *)v108) )
          {
            v29 = LODWORD(v108[0]._M_dataplus._M_p);
            goto LABEL_45;
          }
          return 0;
        case 0x10u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v26 = (int (**)(...))a4->buffer_;
            if ( LODWORD(a4->buffer_end_) - LODWORD(a4->buffer_) > 7 )
            {
              v25 = (std::string::pointer)*v26;
              a4->buffer_ = (const google::protobuf::uint8 *)(v26 + 1);
LABEL_33:
              (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, std::string::pointer))(*(_QWORD *)v13 + 528LL))(
                v13,
                a3,
                this,
                v25);
              continue;
            }
            break;
          }
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a4, (google::protobuf::uint64 *)v108) )
          {
            v25 = v108[0]._M_dataplus._M_p;
            goto LABEL_33;
          }
          return 0;
        case 0x11u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            v32 = (int (**)(...))a4->buffer_;
            if ( a4->buffer_ >= a4->buffer_end_ )
            {
              v33 = 0;
            }
            else
            {
              v33 = *(unsigned __int8 *)v32;
              if ( *(char *)v32 >= 0 )
              {
                a4->buffer_ = (const google::protobuf::uint8 *)v32 + 1;
                goto LABEL_78;
              }
            }
            v34 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a4, v33);
            v33 = v34;
            if ( v34 < 0 )
              return 0;
LABEL_78:
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v13 + 520LL))(
              v13,
              a3,
              this,
              (v33 >> 1) ^ -(v33 & 1));
            continue;
          }
        case 0x12u:
          while ( 2 )
          {
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a4) <= 0 )
              goto LABEL_57;
            *(_QWORD *)&v31.second = a4->buffer_;
            if ( a4->buffer_ < a4->buffer_end_
              && (v31.first = (unsigned __int8)**(_BYTE **)&v31.second, SLOBYTE(v31.first) >= 0) )
            {
              a4->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&v31.second + 1LL);
            }
            else
            {
              v31 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a4);
              if ( !v31.second )
                return 0;
            }
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor *, unsigned __int64))(*(_QWORD *)v13 + 528LL))(
              v13,
              a3,
              this,
              (v31.first >> 1) ^ -(__int64)(v31.first & 1));
            continue;
          }
        default:
          goto LABEL_57;
      }
    }
    return 0;
  }
  else
  {
LABEL_6:
    v15 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v13 + 24LL))(
                                                 v13,
                                                 a3);
    LOBYTE(v16) = google::protobuf::internal::WireFormat::SkipField(a4, tag, v15);
    return v16;
  }
};

// Line 721: range 000000000C8D3290-000000000C8D368E
__int64 __fastcall google::protobuf::internal::WireFormat::ParseAndMergeMessageSetItem(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        google::protobuf::Message *a3)
{
  const google::protobuf::Message::Reflection *(__fastcall *v4)(const google::protobuf::Message *const); // rdx
  google::protobuf::io::CodedInputStream *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r14
  google::protobuf::uint32 v8; // r13d
  char *v9; // rax
  google::protobuf::uint32 TagFallback; // esi
  bool v11; // al
  unsigned int v12; // ebp
  char *v14; // rax
  google::protobuf::uint32 v15; // ebp
  google::protobuf::int64 v16; // rax
  int buffer_end; // ecx
  google::protobuf::uint8 *i; // rax
  char v19; // dl
  int v20; // eax
  char *v21; // rax
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::io::CodedInputStream *v23; // r8
  unsigned int v24; // eax
  google::protobuf::FieldDescriptor *v25; // [rsp+8h] [rbp-E0h]
  google::protobuf::io::StringOutputStream v26; // [rsp+10h] [rbp-D8h] BYREF
  std::string target; // [rsp+20h] [rbp-C8h] BYREF
  std::string buffer; // [rsp+40h] [rbp-A8h] BYREF
  google::protobuf::io::CodedInputStream v29; // [rsp+60h] [rbp-88h] BYREF

  v4 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&a2->name_[5]._anon_0._M_allocated_capacity + 1);
  if ( v4 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(const google::protobuf::FieldDescriptor *))a2->name_[6]._M_dataplus._M_p)(a2);
    v7 = v6;
  }
  else
  {
    v7 = (__int64)v4((const google::protobuf::Message *const)a2);
  }
  target._anon_0._M_local_buf[0] = 0;
  v8 = 0;
  target._M_dataplus._M_p = target._anon_0._M_local_buf;
  target._M_string_length = 0LL;
  v25 = 0LL;
LABEL_4:
  v9 = *(char **)this->gap0;
  if ( *(_QWORD *)this[8].gap0 <= *(_QWORD *)this->gap0 )
    goto LABEL_29;
  while ( 1 )
  {
    TagFallback = (unsigned __int8)*v9;
    if ( *v9 < 0 )
      goto LABEL_6;
    *(_QWORD *)this->gap0 = v9 + 1;
LABEL_7:
    *(_DWORD *)this[32].gap0 = TagFallback;
    if ( !TagFallback )
      goto LABEL_13;
    if ( TagFallback == 16 )
    {
      v21 = *(char **)this->gap0;
      if ( *(_QWORD *)this->gap0 < *(_QWORD *)this[8].gap0 )
      {
        v8 = (unsigned __int8)*v21;
        if ( *v21 >= 0 )
        {
          *(_QWORD *)this->gap0 = v21 + 1;
        }
        else
        {
LABEL_32:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
                               (google::protobuf::io::CodedInputStream *const)this,
                               v8);
          v8 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            goto LABEL_13;
        }
        v25 = (google::protobuf::FieldDescriptor *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 624LL))(
                                                     v7,
                                                     v8);
        if ( target._M_string_length )
        {
          google::protobuf::io::ArrayInputStream::ArrayInputStream(
            (google::protobuf::io::ArrayInputStream *const)&buffer,
            target._M_dataplus._M_p,
            target._M_string_length,
            -1);
          v29.buffer_ = 0LL;
          *(_WORD *)&v29.legitimate_message_end_ = 0;
          v29.buffer_end_ = 0LL;
          v29.input_ = (google::protobuf::io::ZeroCopyInputStream *)&buffer;
          *(_QWORD *)&v29.total_bytes_read_ = 0LL;
          v29.last_tag_ = 0;
          *(_QWORD *)&v29.current_limit_ = 0x7FFFFFFFLL;
          v29.total_bytes_limit_ = 0x7FFFFFFF;
          v29.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
          v29.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
          v29.disable_strict_correctness_enforcement_ = 1;
          v29.extension_pool_ = 0LL;
          v29.extension_factory_ = 0LL;
          google::protobuf::io::CodedInputStream::Refresh(&v29);
          LOBYTE(v24) = google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField(v8, v25, a2, &v29, v23);
          v12 = v24;
          if ( !(_BYTE)v24 )
          {
            google::protobuf::io::CodedInputStream::~CodedInputStream(&v29);
            goto LABEL_15;
          }
          target._M_string_length = 0LL;
          *target._M_dataplus._M_p = 0;
          google::protobuf::io::CodedInputStream::~CodedInputStream(&v29);
        }
        goto LABEL_4;
      }
      v8 = 0;
      goto LABEL_32;
    }
    if ( TagFallback != 26 )
    {
      if ( TagFallback == 12 )
      {
        v12 = 1;
        goto LABEL_15;
      }
      v11 = google::protobuf::internal::WireFormat::SkipField(
              (google::protobuf::io::CodedInputStream *)this,
              TagFallback,
              0LL);
LABEL_12:
      if ( !v11 )
        goto LABEL_13;
      goto LABEL_4;
    }
    if ( v8 )
    {
      v11 = google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField(
              v8,
              v25,
              a2,
              (google::protobuf::io::CodedInputStream *)this,
              v5);
      goto LABEL_12;
    }
    buffer._anon_0._M_local_buf[0] = 0;
    buffer._M_dataplus._M_p = buffer._anon_0._M_local_buf;
    v14 = *(char **)this->gap0;
    buffer._M_string_length = 0LL;
    if ( (unsigned __int64)v14 >= *(_QWORD *)this[8].gap0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = (unsigned __int8)*v14;
      if ( *v14 >= 0 )
      {
        *(_QWORD *)this->gap0 = v14 + 1;
        goto LABEL_22;
      }
    }
    v16 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
            (google::protobuf::io::CodedInputStream *const)this,
            v15);
    v15 = v16;
    if ( v16 < 0 )
      break;
LABEL_22:
    if ( !google::protobuf::io::CodedInputStream::ReadString(
            (google::protobuf::io::CodedInputStream *const)this,
            &buffer,
            v15) )
      break;
    google::protobuf::io::StringOutputStream::StringOutputStream(&v26, &target);
    google::protobuf::io::CodedOutputStream::CodedOutputStream(
      (google::protobuf::io::CodedOutputStream *const)&v29,
      &v26);
    if ( SLODWORD(v29.input_) <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(
        (google::protobuf::io::CodedOutputStream *const)&v29,
        v15);
    }
    else
    {
      buffer_end = (int)v29.buffer_end_;
      for ( i = (google::protobuf::uint8 *)v29.buffer_end_; v15 > 0x7F; *(i - 1) = v19 | 0x80 )
      {
        v19 = v15;
        v15 >>= 7;
        ++i;
      }
      *i = v15;
      v20 = (_DWORD)i + 1 - buffer_end;
      LODWORD(v29.input_) -= v20;
      v29.buffer_end_ += v20;
    }
    google::protobuf::io::CodedOutputStream::WriteRaw(
      (google::protobuf::io::CodedOutputStream *const)&v29,
      buffer._M_dataplus._M_p,
      buffer._M_string_length);
    google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *const)&v29);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p == &buffer._anon_0 )
      goto LABEL_4;
    operator delete(buffer._M_dataplus._M_p);
    v9 = *(char **)this->gap0;
    if ( *(_QWORD *)this[8].gap0 <= *(_QWORD *)this->gap0 )
    {
LABEL_29:
      TagFallback = 0;
LABEL_6:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(
                      (google::protobuf::io::CodedInputStream *const)this,
                      TagFallback);
      goto LABEL_7;
    }
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p == &buffer._anon_0 )
  {
LABEL_13:
    v12 = 0;
  }
  else
  {
    operator delete(buffer._M_dataplus._M_p);
    v12 = 0;
  }
LABEL_15:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)target._M_dataplus._M_p != &target._anon_0 )
    operator delete(target._M_dataplus._M_p);
  return v12;
};

// Line 754: range 000000000C72C15A-000000000C72C179
void __fastcall __noreturn google::protobuf::internal::WireFormat::ParseAndMergeMessageSetItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  struct _Unwind_Exception *v12; // rbp
  google::protobuf::io::CodedInputStream *v13; // r15

  google::protobuf::io::CodedInputStream::~CodedInputStream(v13);
  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v12);
};

// Line 802: range 000000000C8D5970-000000000C8D5B7D
void __fastcall google::protobuf::internal::WireFormat::SerializeWithCachedSizes(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::Message *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v5; // r13
  __int64 (*v6)(void); // rdx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rbx
  google::protobuf::io::CodedOutputStream *v12; // rcx
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // rdx
  unsigned __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, google::protobuf::internal::WireFormat *); // rdx
  const google::protobuf::UnknownFieldSet *v16; // rax
  const google::protobuf::UnknownFieldSet *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  int v20; // [rsp+Ch] [rbp-ACh]
  google::protobuf::internal::LogFinisher v21; // [rsp+1Fh] [rbp-99h] BYREF
  std::vector<const google::protobuf::FieldDescriptor*> v22; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v23; // [rsp+40h] [rbp-78h] BYREF

  v5 = (*(__int64 (__fastcall **)(google::protobuf::internal::WireFormat *, const google::protobuf::Message *, __int64, google::protobuf::io::CodedOutputStream *))(*(_QWORD *)this->gap0 + 192LL))(
         this,
         a2,
         a3,
         a4);
  v6 = *(__int64 (**)(void))(*(_QWORD *)this->gap0 + 184LL);
  if ( (char *)v6 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this->gap0 + 192LL))();
    v8 = v7;
  }
  else
  {
    v8 = v6();
  }
  v9 = *(_QWORD *)(v5 + 32);
  v10 = *(_DWORD *)(a3 + 20) + (_DWORD)a2;
  memset(&v22, 0, sizeof(v22));
  v20 = v10 - *(_DWORD *)(a3 + 16);
  if ( *(_BYTE *)(v9 + 107) )
  {
    if ( *(int *)(v5 + 104) <= 0 )
      goto LABEL_12;
    v11 = 0LL;
    do
    {
      *(_QWORD *)&v23.level_ = *(_QWORD *)(v5 + 40) + 152 * v11;
      std::vector<google::protobuf::FieldDescriptor const*>::emplace_back<google::protobuf::FieldDescriptor const*>(
        &v22,
        (const google::protobuf::FieldDescriptor **)&v23,
        (const google::protobuf::FieldDescriptor **)(19 * v11++));
    }
    while ( *(_DWORD *)(v5 + 104) > (int)v11 );
  }
  else
  {
    (*(void (__fastcall **)(__int64, google::protobuf::internal::WireFormat *, std::vector<const google::protobuf::FieldDescriptor*> *))(*(_QWORD *)v8 + 128LL))(
      v8,
      this,
      &v22);
  }
  M_start = v22._M_impl._M_start;
  v14 = 0LL;
  if ( v22._M_impl._M_finish != v22._M_impl._M_start )
  {
    do
    {
      google::protobuf::internal::WireFormat::SerializeFieldWithCachedSizes(
        (google::protobuf::internal::WireFormat *)M_start[v14],
        (const google::protobuf::FieldDescriptor *)this,
        (const google::protobuf::Message *)a3,
        v12);
      M_start = v22._M_impl._M_start;
      ++v14;
    }
    while ( v22._M_impl._M_finish - v22._M_impl._M_start > v14 );
  }
  v9 = *(_QWORD *)(v5 + 32);
LABEL_12:
  v15 = *(__int64 (__fastcall **)(__int64, google::protobuf::internal::WireFormat *))(*(_QWORD *)v8 + 16LL);
  if ( *(_BYTE *)(v9 + 104) )
  {
    v16 = (const google::protobuf::UnknownFieldSet *)v15(v8, this);
    google::protobuf::internal::WireFormat::SerializeUnknownMessageSetItems(
      v16,
      (google::protobuf::io::CodedOutputStream *)a3);
    if ( v20 == *(_DWORD *)(a3 + 20) - *(_DWORD *)(a3 + 16) )
      goto LABEL_14;
  }
  else
  {
    v17 = (const google::protobuf::UnknownFieldSet *)v15(v8, this);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v17, (google::protobuf::io::CodedOutputStream *)a3);
    if ( v20 == *(_DWORD *)(a3 + 20) - *(_DWORD *)(a3 + 16) )
      goto LABEL_14;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v23, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 830);
  v18 = google::protobuf::internal::LogMessage::operator<<(
          &v23,
          "CHECK failed: (output->ByteCount()) == (expected_endpoint): ");
  v19 = google::protobuf::internal::LogMessage::operator<<(
          v18,
          ": Protocol message serialized to a size different from what was originally expected.  Perhaps it was modified "
          "by another thread during serialization?");
  google::protobuf::internal::LogFinisher::operator=(&v21, v19);
  google::protobuf::internal::LogMessage::~LogMessage(&v23);
LABEL_14:
  if ( v22._M_impl._M_start )
    operator delete(v22._M_impl._M_start);
};

// Line 830: range 000000000C72C29A-000000000C72C2B4
void __fastcall __noreturn google::protobuf::internal::WireFormat::SerializeWithCachedSizes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbx
  google::protobuf::internal::LogMessage_0 *v11; // r14

  google::protobuf::internal::LogMessage::~LogMessage(v11);
  if ( a10 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 920: range 000000000C8D6CF0-000000000C8D70FA
bool __fastcall google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()(
        const google::protobuf::internal::MapKeySorter::MapKeyComparator *const this,
        const google::protobuf::MapKey *a,
        const google::protobuf::MapKey *b)
{
  google::protobuf::internal::LogMessage_0 *v4; // rax
  _BOOL4 v5; // eax
  google::protobuf::int32 Int32Value; // ebp
  google::protobuf::int64 Int64Value; // rbp
  google::protobuf::uint32 UInt32Value; // ebp
  google::protobuf::uint64 UInt64Value; // rbp
  bool BoolValue; // bp
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // r14
  google::protobuf::FieldDescriptor::CppType v19; // eax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  int v21; // eax
  google::protobuf::MapKey::KeyValue v22; // rbx
  google::protobuf::internal::LogMessage_0 *v23; // rax
  google::protobuf::internal::LogMessage_0 *v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // r12
  google::protobuf::FieldDescriptor::CppType v30; // eax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  size_t v32; // r12
  size_t v33; // rbp
  size_t v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rbp
  google::protobuf::internal::LogMessage_0 *v37; // rax
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  google::protobuf::internal::LogMessage_0 *v40; // rax
  google::protobuf::internal::LogMessage_0 *v41; // rax
  google::protobuf::internal::LogMessage_0 *v42; // rax
  google::protobuf::internal::LogFinisher v44; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v45; // [rsp+10h] [rbp-68h] BYREF

  switch ( google::protobuf::MapKey::type(a) )
  {
    case CPPTYPE_INT32_0:
      Int32Value = google::protobuf::MapKey::GetInt32Value(a);
      LOBYTE(v5) = Int32Value < google::protobuf::MapKey::GetInt32Value(b);
      break;
    case CPPTYPE_INT64_0:
      Int64Value = google::protobuf::MapKey::GetInt64Value(a);
      LOBYTE(v5) = Int64Value < google::protobuf::MapKey::GetInt64Value(b);
      break;
    case CPPTYPE_UINT32_0:
      UInt32Value = google::protobuf::MapKey::GetUInt32Value(a);
      LOBYTE(v5) = UInt32Value < google::protobuf::MapKey::GetUInt32Value(b);
      break;
    case CPPTYPE_UINT64_0:
      UInt64Value = google::protobuf::MapKey::GetUInt64Value(a);
      LOBYTE(v5) = UInt64Value < google::protobuf::MapKey::GetUInt64Value(b);
      break;
    case CPPTYPE_BOOL_0:
      BoolValue = google::protobuf::MapKey::GetBoolValue(a);
      LOBYTE(v5) = (unsigned __int8)BoolValue < (unsigned __int8)google::protobuf::MapKey::GetBoolValue(b);
      break;
    case CPPTYPE_STRING_0:
      type = b->type_;
      if ( !type )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v45, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
        v40 = google::protobuf::internal::LogMessage::operator<<(&v45, "Protocol Buffer map usage error:\n");
        v41 = google::protobuf::internal::LogMessage::operator<<(v40, "MapKey::type MapKey is not initialized. ");
        v42 = google::protobuf::internal::LogMessage::operator<<(v41, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=(&v44, v42);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
        type = b->type_;
      }
      if ( type != 9 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v45, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 428);
        v12 = google::protobuf::internal::LogMessage::operator<<(&v45, "Protocol Buffer map usage error:\n");
        v13 = google::protobuf::internal::LogMessage::operator<<(v12, "MapKey::GetStringValue");
        v14 = google::protobuf::internal::LogMessage::operator<<(v13, " type does not match\n");
        v15 = google::protobuf::internal::LogMessage::operator<<(v14, "  Expected : ");
        v16 = google::protobuf::internal::LogMessage::operator<<(
                v15,
                google::protobuf::FieldDescriptor::kCppTypeToName[9]);
        v17 = google::protobuf::internal::LogMessage::operator<<(v16, "\n");
        v18 = google::protobuf::internal::LogMessage::operator<<(v17, "  Actual   : ");
        v19 = google::protobuf::MapKey::type(b);
        v20 = google::protobuf::internal::LogMessage::operator<<(
                v18,
                google::protobuf::FieldDescriptor::kCppTypeToName[v19]);
        google::protobuf::internal::LogFinisher::operator=(&v44, v20);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
      }
      v21 = a->type_;
      v22.string_value_ = (std::string *)b->val_;
      if ( !v21 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v45, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
        v37 = google::protobuf::internal::LogMessage::operator<<(&v45, "Protocol Buffer map usage error:\n");
        v38 = google::protobuf::internal::LogMessage::operator<<(v37, "MapKey::type MapKey is not initialized. ");
        v39 = google::protobuf::internal::LogMessage::operator<<(v38, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=(&v44, v39);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
        v21 = a->type_;
      }
      if ( v21 != 9 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v45, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 428);
        v23 = google::protobuf::internal::LogMessage::operator<<(&v45, "Protocol Buffer map usage error:\n");
        v24 = google::protobuf::internal::LogMessage::operator<<(v23, "MapKey::GetStringValue");
        v25 = google::protobuf::internal::LogMessage::operator<<(v24, " type does not match\n");
        v26 = google::protobuf::internal::LogMessage::operator<<(v25, "  Expected : ");
        v27 = google::protobuf::internal::LogMessage::operator<<(
                v26,
                google::protobuf::FieldDescriptor::kCppTypeToName[9]);
        v28 = google::protobuf::internal::LogMessage::operator<<(v27, "\n");
        v29 = google::protobuf::internal::LogMessage::operator<<(v28, "  Actual   : ");
        v30 = google::protobuf::MapKey::type(a);
        v31 = google::protobuf::internal::LogMessage::operator<<(
                v29,
                google::protobuf::FieldDescriptor::kCppTypeToName[v30]);
        google::protobuf::internal::LogFinisher::operator=(&v44, v31);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
      }
      v32 = *(_QWORD *)(v22.int64_value_ + 8);
      v33 = *(_QWORD *)(a->val_.int64_value_ + 8);
      v34 = v32;
      if ( v33 <= v32 )
        v34 = *(_QWORD *)(a->val_.int64_value_ + 8);
      if ( v34 && (v35 = memcmp(a->val_.string_value_->_M_dataplus._M_p, v22.string_value_->_M_dataplus._M_p, v34)) != 0 )
      {
        v5 = v35 >> 31;
      }
      else
      {
        v36 = v33 - v32;
        LOBYTE(v5) = 0;
        if ( v36 <= 0x7FFFFFFF )
        {
          if ( v36 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_3;
          LOBYTE(v5) = (int)v36 < 0;
        }
      }
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(&v45, LOGLEVEL_ERROR_0, "google/protobuf/wire_format.cc", 936);
      v4 = google::protobuf::internal::LogMessage::operator<<(&v45, "Invalid key for map field.");
      google::protobuf::internal::LogFinisher::operator=(&v44, v4);
      google::protobuf::internal::LogMessage::~LogMessage(&v45);
LABEL_3:
      LOBYTE(v5) = 1;
      break;
  }
  return v5;
};

// Line 945: range 000000000C8D0C10-000000000C8D13CB
void __fastcall google::protobuf::internal::SerializeMapEntry(
        google::protobuf::FieldDescriptor *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::io::CodedOutputStream *output,
        google::protobuf::io::CodedOutputStream *a5,
        double a6,
        double a7)
{
  google::protobuf::FieldDescriptor *fields; // r15
  const google::protobuf::Descriptor *v11; // rax
  google::protobuf::uint32 v12; // esi
  google::protobuf::internal *v13; // r13
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v16; // cl
  int v17; // eax
  const google::protobuf::MapKey *v18; // rdx
  int v19; // ebx
  const google::protobuf::MapValueRef *v20; // rdx
  google::protobuf::uint32 v21; // esi
  unsigned int v22; // edx
  google::protobuf::uint8 *v23; // rcx
  google::protobuf::uint8 *v24; // rax
  char v25; // si
  int v26; // eax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  const google::protobuf::Message *MessageValue; // rax
  google::protobuf::int64 Int64Value; // rax
  google::protobuf::uint64 UInt64Value; // rax
  google::protobuf::int32 Int32Value; // eax
  google::protobuf::uint64 v32; // rax
  google::protobuf::uint32 UInt32Value; // eax
  bool BoolValue; // al
  const std::string *v35; // rax
  google::protobuf::uint32 v36; // eax
  google::protobuf::int32 v37; // eax
  google::protobuf::int64 v38; // rax
  google::protobuf::int32 v39; // eax
  google::protobuf::int64 v40; // rax
  google::protobuf::int32 v41; // eax
  google::protobuf::uint64 v42; // rax
  const google::protobuf::Message *v43; // rax
  const std::string *v44; // rax
  google::protobuf::uint32 v45; // eax
  int EnumValue; // eax
  google::protobuf::int32 v47; // eax
  google::protobuf::int64 v48; // rax
  google::protobuf::int32 v49; // eax
  google::protobuf::int64 v50; // rax
  google::protobuf::uint32 v51; // eax
  const std::string *v52; // rax
  google::protobuf::int64 v53; // rax
  google::protobuf::uint64 v54; // rax
  google::protobuf::internal::LogMessage_0 *v55; // rax
  google::protobuf::internal::LogMessage_0 *v56; // rax
  google::protobuf::internal::LogMessage_0 *v57; // rax
  google::protobuf::internal::LogMessage_0 *v58; // rax
  google::protobuf::internal::LogMessage_0 *v59; // rax
  google::protobuf::internal::LogMessage_0 *v60; // rax
  google::protobuf::internal::LogMessage_0 *v61; // r13
  google::protobuf::FieldDescriptor::CppType v62; // eax
  google::protobuf::internal::LogMessage_0 *v63; // rax
  google::protobuf::internal::LogMessage_0 *v64; // rax
  google::protobuf::internal::LogMessage_0 *v65; // rax
  google::protobuf::internal::LogMessage_0 *v66; // rax
  google::protobuf::internal::LogMessage_0 *v67; // rax
  google::protobuf::internal::LogMessage_0 *v68; // rax
  google::protobuf::internal::LogMessage_0 *v69; // rax
  google::protobuf::internal::LogMessage_0 *v70; // r13
  google::protobuf::FieldDescriptor::CppType v71; // eax
  google::protobuf::internal::LogMessage_0 *v72; // rax
  google::protobuf::internal::LogMessage_0 *v73; // rax
  google::protobuf::internal::LogMessage_0 *v74; // rax
  google::protobuf::internal::LogMessage_0 *v75; // rax
  google::protobuf::internal::LogMessage_0 *v76; // rax
  google::protobuf::internal::LogMessage_0 *v77; // rax
  google::protobuf::internal::LogMessage_0 *v78; // rax
  google::protobuf::internal::LogMessage_0 *v79; // r13
  google::protobuf::FieldDescriptor::CppType v80; // eax
  google::protobuf::internal::LogMessage_0 *v81; // rax
  google::protobuf::internal::LogFinisher v82; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v83; // [rsp+10h] [rbp-78h] BYREF

  fields = google::protobuf::FieldDescriptor::message_type(this)->fields_;
  v11 = google::protobuf::FieldDescriptor::message_type(this);
  v12 = 8 * this->number_ + 2;
  v13 = (google::protobuf::internal *)&v11->fields_[1];
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v12);
  }
  else
  {
    buffer = output->buffer_;
    for ( i = buffer; v12 > 0x7F; *(i - 1) = v16 | 0x80 )
    {
      v16 = v12;
      v12 >>= 7;
      ++i;
    }
    *i = v12;
    v17 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v17;
    v18 = (const google::protobuf::MapKey *)v17;
    output->buffer_ += v17;
  }
  v19 = google::protobuf::internal::MapKeyDataOnlyByteSize((google::protobuf::internal *)fields, a2, v18);
  v21 = v19 + google::protobuf::internal::MapValueRefDataOnlyByteSize(v13, a3, v20) + 2;
  v22 = v21;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v21);
  }
  else
  {
    v23 = output->buffer_;
    v24 = v23;
    if ( v21 > 0x7F )
    {
      do
      {
        v25 = v22;
        v22 >>= 7;
        *v24++ = v25 | 0x80;
      }
      while ( v22 > 0x7F );
    }
    *v24 = v22;
    v26 = (_DWORD)v24 + 1 - (_DWORD)v23;
    output->buffer_size_ -= v26;
    output->buffer_ += v26;
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(fields) )
  {
    case 1u:
    case 2u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xEu:
      google::protobuf::internal::LogMessage::LogMessage(&v83, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 846);
      v27 = google::protobuf::internal::LogMessage::operator<<(&v83, "Unsupported");
      google::protobuf::internal::LogFinisher::operator=(&v82, v27);
      google::protobuf::internal::LogMessage::~LogMessage(&v83);
      break;
    case 3u:
      Int64Value = google::protobuf::MapKey::GetInt64Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteInt64(1, Int64Value, output);
      break;
    case 4u:
      UInt64Value = google::protobuf::MapKey::GetUInt64Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteUInt64(1, UInt64Value, output);
      break;
    case 5u:
      Int32Value = google::protobuf::MapKey::GetInt32Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteInt32(1, Int32Value, output);
      break;
    case 6u:
      v32 = google::protobuf::MapKey::GetUInt64Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteFixed64(1, v32, output);
      break;
    case 7u:
      UInt32Value = google::protobuf::MapKey::GetUInt32Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteFixed32(1, UInt32Value, output);
      break;
    case 8u:
      BoolValue = google::protobuf::MapKey::GetBoolValue((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteBool(1, BoolValue, output);
      break;
    case 9u:
      v35 = google::protobuf::MapKey::GetStringValue[abi:cxx11]((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteString(1LL, v35, output);
      break;
    case 0xDu:
      v36 = google::protobuf::MapKey::GetUInt32Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteUInt32(1, v36, output);
      break;
    case 0xFu:
      v37 = google::protobuf::MapKey::GetInt32Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteSFixed32(1, v37, output);
      break;
    case 0x10u:
      v38 = google::protobuf::MapKey::GetInt64Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteSFixed64(1, v38, output);
      break;
    case 0x11u:
      v39 = google::protobuf::MapKey::GetInt32Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteSInt32(1, v39, output);
      break;
    case 0x12u:
      v40 = google::protobuf::MapKey::GetInt64Value((const google::protobuf::MapKey *const)a2);
      google::protobuf::internal::WireFormatLite::WriteSInt64(1, v40, output);
      break;
    default:
      break;
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v13) )
  {
    case 1u:
      if ( google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3) != CPPTYPE_DOUBLE_0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v83, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 645);
        v64 = google::protobuf::internal::LogMessage::operator<<(&v83, "Protocol Buffer map usage error:\n");
        v65 = google::protobuf::internal::LogMessage::operator<<(v64, "MapValueRef::GetDoubleValue");
        v66 = google::protobuf::internal::LogMessage::operator<<(v65, " type does not match\n");
        v67 = google::protobuf::internal::LogMessage::operator<<(v66, "  Expected : ");
        v68 = google::protobuf::internal::LogMessage::operator<<(
                v67,
                google::protobuf::FieldDescriptor::kCppTypeToName[5]);
        v69 = google::protobuf::internal::LogMessage::operator<<(v68, "\n");
        v70 = google::protobuf::internal::LogMessage::operator<<(v69, "  Actual   : ");
        v71 = google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3);
        v72 = google::protobuf::internal::LogMessage::operator<<(
                v70,
                google::protobuf::FieldDescriptor::kCppTypeToName[v71]);
        google::protobuf::internal::LogFinisher::operator=(&v82, v72);
        google::protobuf::internal::LogMessage::~LogMessage(&v83);
      }
      google::protobuf::internal::WireFormatLite::WriteDouble(2, a7, output);
      break;
    case 2u:
      if ( google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3) != CPPTYPE_FLOAT_0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v83, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 640);
        v55 = google::protobuf::internal::LogMessage::operator<<(&v83, "Protocol Buffer map usage error:\n");
        v56 = google::protobuf::internal::LogMessage::operator<<(v55, "MapValueRef::GetFloatValue");
        v57 = google::protobuf::internal::LogMessage::operator<<(v56, " type does not match\n");
        v58 = google::protobuf::internal::LogMessage::operator<<(v57, "  Expected : ");
        v59 = google::protobuf::internal::LogMessage::operator<<(
                v58,
                google::protobuf::FieldDescriptor::kCppTypeToName[6]);
        v60 = google::protobuf::internal::LogMessage::operator<<(v59, "\n");
        v61 = google::protobuf::internal::LogMessage::operator<<(v60, "  Actual   : ");
        v62 = google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3);
        v63 = google::protobuf::internal::LogMessage::operator<<(
                v61,
                google::protobuf::FieldDescriptor::kCppTypeToName[v62]);
        google::protobuf::internal::LogFinisher::operator=(&v82, v63);
        google::protobuf::internal::LogMessage::~LogMessage(&v83);
      }
      google::protobuf::internal::WireFormatLite::WriteFloat(2, *(float *)&a7, output);
      break;
    case 3u:
      v53 = google::protobuf::MapValueRef::GetInt64Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteInt64(2, v53, output);
      break;
    case 4u:
      v54 = google::protobuf::MapValueRef::GetUInt64Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteUInt64(2, v54, output);
      break;
    case 5u:
      v41 = google::protobuf::MapValueRef::GetInt32Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteInt32(2, v41, output);
      break;
    case 6u:
      v42 = google::protobuf::MapValueRef::GetUInt64Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteFixed64(2, v42, output);
      break;
    case 7u:
      v51 = google::protobuf::MapValueRef::GetUInt32Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteFixed32(2, v51, output);
      break;
    case 8u:
      if ( google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3) != CPPTYPE_BOOL_0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v83, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 625);
        v73 = google::protobuf::internal::LogMessage::operator<<(&v83, "Protocol Buffer map usage error:\n");
        v74 = google::protobuf::internal::LogMessage::operator<<(v73, "MapValueRef::GetBoolValue");
        v75 = google::protobuf::internal::LogMessage::operator<<(v74, " type does not match\n");
        v76 = google::protobuf::internal::LogMessage::operator<<(v75, "  Expected : ");
        v77 = google::protobuf::internal::LogMessage::operator<<(
                v76,
                google::protobuf::FieldDescriptor::kCppTypeToName[7]);
        v78 = google::protobuf::internal::LogMessage::operator<<(v77, "\n");
        v79 = google::protobuf::internal::LogMessage::operator<<(v78, "  Actual   : ");
        v80 = google::protobuf::MapValueRef::type((const google::protobuf::MapValueRef *const)a3);
        v81 = google::protobuf::internal::LogMessage::operator<<(
                v79,
                google::protobuf::FieldDescriptor::kCppTypeToName[v80]);
        google::protobuf::internal::LogFinisher::operator=(&v82, v81);
        google::protobuf::internal::LogMessage::~LogMessage(&v83);
      }
      google::protobuf::internal::WireFormatLite::WriteBool(2, (bool)a3->name_->_M_dataplus._M_p, output);
      break;
    case 9u:
      v52 = google::protobuf::MapValueRef::GetStringValue[abi:cxx11]((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteString(2LL, v52, output);
      break;
    case 0xAu:
      MessageValue = google::protobuf::MapValueRef::GetMessageValue((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteGroup(2, MessageValue, output);
      break;
    case 0xBu:
      v43 = google::protobuf::MapValueRef::GetMessageValue((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteMessage(2, v43, output);
      break;
    case 0xCu:
      v44 = google::protobuf::MapValueRef::GetStringValue[abi:cxx11]((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteBytes(2LL, v44, output);
      break;
    case 0xDu:
      v45 = google::protobuf::MapValueRef::GetUInt32Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteUInt32(2, v45, output);
      break;
    case 0xEu:
      EnumValue = google::protobuf::MapValueRef::GetEnumValue((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteEnum(2, EnumValue, output);
      break;
    case 0xFu:
      v47 = google::protobuf::MapValueRef::GetInt32Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteSFixed32(2, v47, output);
      break;
    case 0x10u:
      v48 = google::protobuf::MapValueRef::GetInt64Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteSFixed64(2, v48, output);
      break;
    case 0x11u:
      v49 = google::protobuf::MapValueRef::GetInt32Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteSInt32(2, v49, output);
      break;
    case 0x12u:
      v50 = google::protobuf::MapValueRef::GetInt64Value((const google::protobuf::MapValueRef *const)a3);
      google::protobuf::internal::WireFormatLite::WriteSInt64(2, v50, output);
      break;
    default:
      return;
  }
};

// Line 962: range 000000000C8D4890-000000000C8D5962
void __fastcall google::protobuf::internal::WireFormat::SerializeFieldWithCachedSizes(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::Message *message,
        google::protobuf::io::CodedOutputStream *output,
        google::protobuf::io::CodedOutputStream *a4,
        __m128i a5,
        double a6)
{
  const google::protobuf::FieldDescriptor *v7; // r12
  google::protobuf::internal::WireFormat *v8; // rbp
  const google::protobuf::Message::Reflection *(__fastcall *v9)(const google::protobuf::Message *const); // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  const google::protobuf::internal::MapFieldBase *v12; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v13)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rax
  google::protobuf::internal::AtomicWord serialization_deterministic_override; // rax
  void (__fastcall *v15)(google::protobuf::MapIterator *, __int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *); // r8
  google::protobuf::io::CodedOutputStream *v16; // r8
  int v17; // r13d
  bool is_packed; // al
  google::protobuf::internal::AtomicWord v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  google::protobuf::int64 v27; // rax
  unsigned __int64 v28; // rsi
  int (**v29)(...); // rcx
  int (**j)(...); // rax
  char v31; // dl
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  google::protobuf::int32 v35; // eax
  __int64 v36; // rax
  google::protobuf::int64 v37; // rax
  google::protobuf::uint64 v38; // rsi
  __int64 v39; // rax
  google::protobuf::int32 v40; // eax
  google::protobuf::uint32 v41; // esi
  __int64 v42; // rax
  google::protobuf::uint32 v43; // esi
  __int64 v44; // rax
  const google::protobuf::MessageLite *v45; // rsi
  __int64 v46; // rax
  const google::protobuf::MessageLite *v47; // rsi
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  const char *v51; // r8
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // dl
  __int64 v56; // rax
  google::protobuf::uint32 v57; // eax
  __int64 v58; // rax
  google::protobuf::uint64 v59; // rax
  char v60; // dl
  __int64 v61; // rax
  google::protobuf::int64 v62; // rax
  unsigned __int64 v63; // rdx
  int (**buffer)(...); // rsi
  int (**i)(...); // rax
  char v66; // cl
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  google::protobuf::uint64 v71; // rax
  __int64 v72; // rax
  google::protobuf::int32 v73; // eax
  char v74; // dl
  __int64 v75; // rax
  google::protobuf::uint32 v76; // eax
  const google::protobuf::Message *v77; // rdx
  google::protobuf::uint32 v78; // eax
  const google::protobuf::MapKey *v79; // rcx
  google::protobuf::MapKey *M_finish; // rdi
  signed __int64 v81; // r14
  const google::protobuf::Message **v82; // rax
  const google::protobuf::Message **v83; // rdx
  const void *(__fastcall *v84)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor::CppType, int, const google::protobuf::Descriptor *); // r10
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  google::protobuf::FieldDescriptor *fields; // r8
  google::protobuf::FieldDescriptor *v94; // r12
  google::protobuf::internal::WireFormat *v95; // r15
  __int64 v96; // rbp
  __int64 v97; // rbx
  const google::protobuf::Message **v98; // rax
  const google::protobuf::Message **v99; // r14
  __int64 v100; // rcx
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator> v101; // r8
  std::_Vector_base<google::protobuf::MapKey>::pointer M_start; // r14
  unsigned __int64 v103; // rax
  google::protobuf::io::CodedOutputStream *v104; // r8
  __gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> > v105; // r14
  __int64 v106; // rax
  bool (__fastcall *v107)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, const google::protobuf::MapKey *, google::protobuf::MapValueRef *); // rax
  std::_Vector_base<google::protobuf::MapKey>::pointer v108; // rbx
  google::protobuf::MapKey *v109; // rdi
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator> __compe; // [rsp+0h] [rbp-E8h]
  __int64 __comp; // [rsp+0h] [rbp-E8h]
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator> __compf; // [rsp+0h] [rbp-E8h]
  const google::protobuf::FieldDescriptor *__compa; // [rsp+0h] [rbp-E8h]
  __gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> > __compb; // [rsp+0h] [rbp-E8h]
  google::protobuf::MapKey *__compc; // [rsp+0h] [rbp-E8h]
  const google::protobuf::FieldDescriptor *__compd; // [rsp+0h] [rbp-E8h]
  bool v117; // [rsp+8h] [rbp-E0h]
  const google::protobuf::Message *v118; // [rsp+8h] [rbp-E0h]
  __gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> > v119; // [rsp+8h] [rbp-E0h]
  const google::protobuf::Message **__first; // [rsp+10h] [rbp-D8h]
  __gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> > __last; // [rsp+20h] [rbp-C8h]
  int v122; // [rsp+2Ch] [rbp-BCh]
  std::vector<google::protobuf::MapKey> v123; // [rsp+30h] [rbp-B8h] BYREF
  google::protobuf::MapIterator v124; // [rsp+50h] [rbp-98h] BYREF
  google::protobuf::MapKey v125; // [rsp+80h] [rbp-68h] BYREF
  google::protobuf::MapKey v126; // [rsp+90h] [rbp-58h] BYREF

  v7 = (const google::protobuf::FieldDescriptor *)message;
  v8 = this;
  v9 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v9 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *, const google::protobuf::Message *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedOutputStream *))message->_vptr_MessageLite
     + 24))(
      message,
      message,
      v9,
      a4);
    v11 = v10;
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(const google::protobuf::Message *, const google::protobuf::Message *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), google::protobuf::io::CodedOutputStream *))v9)(
            message,
            message,
            v9,
            a4);
  }
  if ( this[66].gap0[0]
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this[80].gap0 + 32LL) + 104LL)
    && google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)this)] == CPPTYPE_MESSAGE_0
    && *(_DWORD *)this[60].gap0 != 3 )
  {
    google::protobuf::internal::WireFormat::SerializeMessageSetItemWithCachedSizes(
      (const google::protobuf::FieldDescriptor *)this,
      message,
      output);
    return;
  }
  if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)this) )
  {
    v12 = 0LL;
    v13 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v11 + 728LL);
    if ( v13 != google::protobuf::Reflection::MapData )
      v12 = v13(
              (const google::protobuf::Reflection *const)v11,
              (google::protobuf::Message *)message,
              (const google::protobuf::FieldDescriptor *)v8);
    if ( google::protobuf::internal::MapFieldBase::IsMapValid(v12) )
    {
      serialization_deterministic_override = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
      if ( output->serialization_deterministic_is_overridden_ )
        serialization_deterministic_override = output->serialization_deterministic_override_;
      v15 = *(void (__fastcall **)(google::protobuf::MapIterator *, __int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v11 + 704LL);
      if ( serialization_deterministic_override )
      {
        memset(&v123, 0, sizeof(v123));
        v15(&v124, v11, message, v8);
        while ( 1 )
        {
          (*(void (__fastcall **)(google::protobuf::MapKey *, __int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v11 + 712LL))(
            &v125,
            v11,
            message,
            v8);
          __compf._M_comp.gap0[0] = (*((unsigned __int8 (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *, google::protobuf::MapKey *))v124.map_->_vptr_MapFieldBase
                                     + 5))(
                                      v124.map_,
                                      &v124,
                                      &v125);
          (*(void (__fastcall **)(_QWORD, google::protobuf::MapKey *))(**(_QWORD **)&v125.type_ + 104LL))(
            *(_QWORD *)&v125.type_,
            &v125);
          google::protobuf::MapKey::~MapKey(&v126);
          if ( __compf._M_comp.gap0[0] )
            break;
          M_finish = v123._M_impl._M_finish;
          if ( v123._M_impl._M_finish == v123._M_impl._M_end_of_storage )
          {
            std::vector<google::protobuf::MapKey>::_M_realloc_insert<google::protobuf::MapKey const&>(
              &v123,
              (std::vector<google::protobuf::MapKey>::iterator)v123._M_impl._M_finish,
              &v124.key_,
              v79);
          }
          else
          {
            v123._M_impl._M_finish->type_ = 0;
            google::protobuf::MapKey::CopyFrom(M_finish, &v124.key_);
            ++v123._M_impl._M_finish;
          }
          (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v124.map_->_vptr_MapFieldBase
           + 15))(
            v124.map_,
            &v124);
        }
        (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v124.map_->_vptr_MapFieldBase
         + 13))(
          v124.map_,
          &v124);
        google::protobuf::MapKey::~MapKey(&v124.key_);
        M_start = v123._M_impl._M_start;
        if ( v123._M_impl._M_finish != v123._M_impl._M_start )
        {
          v119._M_current = (google::protobuf::MapKey *)((char *)v123._M_impl._M_finish - (char *)v123._M_impl._M_start);
          _BitScanReverse64(&v103, v123._M_impl._M_finish - v123._M_impl._M_start);
          std::__introsort_loop<__gnu_cxx::__normal_iterator<google::protobuf::MapKey *,std::vector<google::protobuf::MapKey>>,long,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>>(
            (__gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> >)v123._M_impl._M_start,
            (__gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> >)v123._M_impl._M_finish,
            2LL * (int)(63 - (v103 ^ 0x3F)),
            (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>)v123._M_impl._M_finish);
          if ( (__int64)v119._M_current <= 256 )
          {
            std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::MapKey *,std::vector<google::protobuf::MapKey>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>>(
              (__gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> >)M_start,
              __compb,
              (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>)__compb._M_current);
          }
          else
          {
            std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::MapKey *,std::vector<google::protobuf::MapKey>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>>(
              (__gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> >)M_start,
              (__gnu_cxx::__normal_iterator<google::protobuf::MapKey*,std::vector<google::protobuf::MapKey> >)&M_start[16],
              (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>)__compb._M_current);
            for ( v105._M_current = M_start + 16; __compc != v105._M_current; ++v105._M_current )
              std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<google::protobuf::MapKey *,std::vector<google::protobuf::MapKey>>,__gnu_cxx::__ops::_Val_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>>(
                v105,
                (__gnu_cxx::__ops::_Val_comp_iter<google::protobuf::internal::MapKeySorter::MapKeyComparator>)__compc);
          }
          M_start = v123._M_impl._M_start;
          if ( v123._M_impl._M_start != v123._M_impl._M_finish )
          {
            __compd = (const google::protobuf::FieldDescriptor *)v123._M_impl._M_start;
            do
            {
              v125.val_.int64_value_ = 0LL;
              v106 = *(_QWORD *)v11;
              v125.type_ = 0;
              v107 = *(bool (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, const google::protobuf::MapKey *, google::protobuf::MapValueRef *))(v106 + 688);
              if ( v107 != google::protobuf::Reflection::InsertOrLookupMapValue )
                v107(
                  (const google::protobuf::Reflection *const)v11,
                  (google::protobuf::Message *)message,
                  (const google::protobuf::FieldDescriptor *)v8,
                  (const google::protobuf::MapKey *)__compd,
                  (google::protobuf::MapValueRef *)&v125);
              google::protobuf::internal::SerializeMapEntry(
                (google::protobuf::FieldDescriptor *)v8,
                __compd,
                (const google::protobuf::FieldDescriptor *)&v125,
                output,
                v104,
                *(double *)a5.m128i_i64,
                a6);
              __compd = (const google::protobuf::FieldDescriptor *)((char *)__compd + 16);
            }
            while ( (const google::protobuf::FieldDescriptor *)v123._M_impl._M_finish != __compd );
            M_start = v123._M_impl._M_start;
            if ( __compd != (const google::protobuf::FieldDescriptor *)v123._M_impl._M_start )
            {
              v108 = v123._M_impl._M_finish;
              do
              {
                v109 = M_start++;
                google::protobuf::MapKey::~MapKey(v109);
              }
              while ( v108 != M_start );
              M_start = v123._M_impl._M_start;
            }
          }
        }
        if ( M_start )
          operator delete(M_start);
      }
      else
      {
        v15(&v124, v11, message, v8);
        while ( 1 )
        {
          (*(void (__fastcall **)(google::protobuf::MapKey *, __int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v11 + 712LL))(
            &v125,
            v11,
            message,
            v8);
          __compe._M_comp.gap0[0] = (*((unsigned __int8 (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *, google::protobuf::MapKey *))v124.map_->_vptr_MapFieldBase
                                     + 5))(
                                      v124.map_,
                                      &v124,
                                      &v125);
          (*(void (__fastcall **)(_QWORD, google::protobuf::MapKey *))(**(_QWORD **)&v125.type_ + 104LL))(
            *(_QWORD *)&v125.type_,
            &v125);
          google::protobuf::MapKey::~MapKey(&v126);
          if ( __compe._M_comp.gap0[0] )
            break;
          google::protobuf::internal::SerializeMapEntry(
            (google::protobuf::FieldDescriptor *)v8,
            (const google::protobuf::FieldDescriptor *)&v124.key_,
            (const google::protobuf::FieldDescriptor *)&v124.value_,
            output,
            v16,
            *(double *)a5.m128i_i64,
            a6);
          (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v124.map_->_vptr_MapFieldBase
           + 15))(
            v124.map_,
            &v124);
        }
        google::protobuf::MapIterator::~MapIterator(&v124);
      }
      return;
    }
  }
  if ( *(_DWORD *)v8[60].gap0 != 3 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v8[80].gap0 + 32LL) + 107LL) )
    {
      is_packed = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)v8);
      v117 = is_packed;
      v17 = 1;
      goto LABEL_21;
    }
    v17 = (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v11 + 40LL))(
            v11,
            message,
            v8);
LABEL_20:
    v117 = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)v8);
    is_packed = v117 && v17 > 0;
LABEL_21:
    if ( !is_packed )
    {
      if ( v17 <= 0 )
        return;
      __first = 0LL;
      __last._M_current = 0LL;
      goto LABEL_36;
    }
    __last._M_current = 0LL;
    __first = 0LL;
    goto LABEL_131;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v11 + 48LL))(
          v11,
          message,
          v8);
  if ( v17 <= 1 )
    goto LABEL_20;
  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)v8) )
    goto LABEL_34;
  v19 = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
  if ( output->serialization_deterministic_is_overridden_ )
    v19 = output->serialization_deterministic_override_;
  if ( v19 )
  {
    v81 = v17;
    v82 = (const google::protobuf::Message **)operator new(v81 * 8);
    v83 = &v82[v81];
    __first = v82;
    __last._M_current = &v82[v81];
    do
      *v82++ = 0LL;
    while ( v82 != v83 );
    v84 = *(const void *(__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor::CppType, int, const google::protobuf::Descriptor *))(*(_QWORD *)v11 + 656LL);
    if ( v84 == google::protobuf::Reflection::GetRawRepeatedField )
      v85 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 648LL))(
              v11,
              message,
              v8,
              10LL,
              0xFFFFFFFFLL,
              0LL);
    else
      v85 = (__int64)v84(
                       (const google::protobuf::Reflection *const)v11,
                       message,
                       (const google::protobuf::FieldDescriptor *)v8,
                       CPPTYPE_MESSAGE_0,
                       -1,
                       0LL);
    v86 = *(_QWORD *)(v85 + 16);
    v87 = *(int *)(v85 + 8);
    if ( v86 )
      v86 += 8LL;
    v88 = 8 * v87;
    v89 = v86 + v88;
    v90 = (unsigned __int64)(v88 - 8) >> 3;
    v91 = 0LL;
    if ( v86 != v89 )
    {
      do
      {
        v92 = v91++;
        __first[v91 - 1] = *(const google::protobuf::Message **)(v86 + 8 * v91 - 8);
      }
      while ( v92 != v90 );
    }
    fields = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v8)->fields_;
    if ( v81 > 0 )
    {
      __compa = v7;
      v94 = fields;
      v118 = (const google::protobuf::Message *)output;
      v95 = v8;
      v96 = v11;
      v97 = (v81 * 8) >> 3;
      do
      {
        v98 = (const google::protobuf::Message **)operator new(8 * v97, &std::nothrow);
        v99 = v98;
        if ( v98 )
        {
          v100 = v97;
          v101._M_comp.field_ = v94;
          v11 = v96;
          v7 = __compa;
          v8 = v95;
          output = (google::protobuf::io::CodedOutputStream *)v118;
          std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<google::protobuf::Message const**,std::vector<google::protobuf::Message const*>>,google::protobuf::Message const**,long,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>>(
            (__gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> >)__first,
            __last,
            v98,
            v100,
            v101);
          goto LABEL_162;
        }
        v97 >>= 1;
      }
      while ( v97 );
      v11 = v96;
      fields = v94;
      v8 = v95;
      v7 = __compa;
      output = (google::protobuf::io::CodedOutputStream *)v118;
    }
    std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<google::protobuf::Message const**,std::vector<google::protobuf::Message const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>>(
      (__gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> >)__first,
      __last,
      (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>)fields);
    v99 = 0LL;
LABEL_162:
    operator delete(v99);
    v117 = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)v8);
  }
  else
  {
LABEL_34:
    v117 = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)v8);
    __last._M_current = 0LL;
    __first = 0LL;
  }
  if ( !v117 )
    goto LABEL_36;
LABEL_131:
  google::protobuf::io::CodedOutputStream::WriteVarint32(output, 8 * *(_DWORD *)v8[68].gap0 + 2);
  v78 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(v8, v7, v77);
  google::protobuf::io::CodedOutputStream::WriteVarint32(output, v78);
  if ( v17 > 0 )
  {
LABEL_36:
    v20 = (unsigned int)(v17 - 1);
    v21 = 0LL;
    __comp = v20;
    while ( 1 )
    {
      switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v8) )
      {
        case 1u:
          v69 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v69 + 376))(
              v11,
              v7,
              v8,
              (unsigned int)v21);
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v69 + 176))(
              v11,
              v7,
              v8);
          if ( v117 )
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, a5.m128i_u64[0]);
          else
            google::protobuf::internal::WireFormatLite::WriteDouble(*(_DWORD *)v8[68].gap0, a6, output);
          goto LABEL_43;
        case 2u:
          v68 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v68 + 368))(
              v11,
              v7,
              v8,
              (unsigned int)v21);
          else
            (*(void (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v68 + 168))(
              v11,
              v7,
              v8);
          if ( v117 )
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, _mm_cvtsi128_si32(a5));
          else
            google::protobuf::internal::WireFormatLite::WriteFloat(*(_DWORD *)v8[68].gap0, *(float *)&a6, output);
          goto LABEL_43;
        case 3u:
          v61 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v62 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v61 + 344))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v62 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v61 + 144))(
                    v11,
                    v7,
                    v8);
          v28 = v62;
          if ( v117 )
          {
            v63 = v62;
            if ( output->buffer_size_ <= 9 )
              goto LABEL_163;
            buffer = (int (**)(...))output->buffer_;
            for ( i = buffer; v63 > 0x7F; *((_BYTE *)i - 1) = v66 | 0x80 )
            {
              v66 = v63;
              v63 >>= 7;
              i = (int (**)(...))((char *)i + 1);
            }
            *(_BYTE *)i = v63;
            v67 = (_DWORD)i + 1 - (_DWORD)buffer;
            output->buffer_size_ -= v67;
            output->buffer_ += v67;
          }
          else
          {
            google::protobuf::internal::WireFormatLite::WriteInt64(*(_DWORD *)v8[68].gap0, v62, output);
          }
          goto LABEL_43;
        case 4u:
          v58 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v59 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v58 + 360))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v59 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v58 + 160))(
                    v11,
                    v7,
                    v8);
          v28 = v59;
          if ( !v117 )
          {
            google::protobuf::internal::WireFormatLite::WriteUInt64(*(_DWORD *)v8[68].gap0, v59, output);
            goto LABEL_43;
          }
          if ( output->buffer_size_ <= 9 )
            goto LABEL_163;
          v29 = (int (**)(...))output->buffer_;
          for ( j = v29; v28 > 0x7F; *((_BYTE *)j - 1) = v60 | 0x80 )
          {
            v60 = v28;
            v28 >>= 7;
            j = (int (**)(...))((char *)j + 1);
          }
          break;
        case 5u:
          v72 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v73 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v72 + 336))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v73 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v72 + 136))(
                    v11,
                    v7,
                    v8);
          v28 = v73;
          if ( !v117 )
          {
            google::protobuf::internal::WireFormatLite::WriteInt32(*(_DWORD *)v8[68].gap0, v73, output);
            goto LABEL_43;
          }
          if ( output->buffer_size_ <= 9 )
          {
LABEL_163:
            google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v28);
LABEL_43:
            v25 = v21 + 1;
            if ( __comp == v21 )
              goto LABEL_52;
            goto LABEL_44;
          }
          v29 = (int (**)(...))output->buffer_;
          for ( j = v29; v28 > 0x7F; *((_BYTE *)j - 1) = v74 | 0x80 )
          {
            v74 = v28;
            v28 >>= 7;
            j = (int (**)(...))((char *)j + 1);
          }
          break;
        case 6u:
          v70 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v71 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v70 + 360))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v71 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v70 + 160))(
                    v11,
                    v7,
                    v8);
          v38 = v71;
          if ( v117 )
            goto LABEL_61;
          google::protobuf::internal::WireFormatLite::WriteFixed64(*(_DWORD *)v8[68].gap0, v71, output);
          goto LABEL_43;
        case 7u:
          v75 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v76 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v75 + 352))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v76 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v75 + 152))(
                    v11,
                    v7,
                    v8);
          v41 = v76;
          if ( v117 )
            goto LABEL_65;
          google::protobuf::internal::WireFormatLite::WriteFixed32(*(_DWORD *)v8[68].gap0, v76, output);
          goto LABEL_43;
        case 8u:
          v42 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
          {
            v43 = (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v42 + 384))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
            if ( v117 )
            {
LABEL_68:
              google::protobuf::io::CodedOutputStream::WriteVarint32(output, v43);
              goto LABEL_43;
            }
          }
          else
          {
            v43 = (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v42 + 184))(
                    v11,
                    v7,
                    v8);
            if ( v117 )
              goto LABEL_68;
          }
          google::protobuf::internal::WireFormatLite::WriteBool(*(_DWORD *)v8[68].gap0, v43, output);
          goto LABEL_43;
        case 9u:
          v22 = *(_DWORD *)v8[60].gap0 == 3;
          v48 = *(_DWORD *)(*(_QWORD *)v8[40].gap0 + 60LL);
          v126.val_.bool_value_ = 0;
          *(_QWORD *)&v125.type_ = 0LL;
          v122 = v48;
          v125.val_.int64_value_ = (google::protobuf::int64)&v126;
          v49 = *(_QWORD *)v11;
          if ( v22 )
            v50 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD, google::protobuf::MapKey *))(v49 + 424))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21,
                    &v125);
          else
            v50 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, google::protobuf::MapKey *))(v49 + 224))(
                    v11,
                    v7,
                    v8,
                    &v125);
          v52 = v50;
          if ( v122 == 3 )
            google::protobuf::internal::WireFormatLite::VerifyUtf8String(
              *(google::protobuf::internal::WireFormatLite **)v50,
              (const char *)*(unsigned int *)(v50 + 8),
              1,
              (google::protobuf::internal::WireFormatLite::Operation)**(_QWORD **)v8[8].gap0,
              v51);
          google::protobuf::internal::WireFormatLite::WriteString(*(unsigned int *)v8[68].gap0, v52, output);
          goto LABEL_41;
        case 0xAu:
          if ( *(_DWORD *)v8[60].gap0 != 3 )
          {
            v46 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v11 + 216LL))(
                    v11,
                    v7,
                    v8,
                    0LL);
LABEL_75:
            v47 = (const google::protobuf::MessageLite *)v46;
            goto LABEL_76;
          }
          if ( __last._M_current == __first )
          {
            v46 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v11 + 416LL))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
            goto LABEL_75;
          }
          v47 = __first[v21];
LABEL_76:
          google::protobuf::internal::WireFormatLite::WriteGroup(*(_DWORD *)v8[68].gap0, v47, output);
          goto LABEL_43;
        case 0xBu:
          if ( *(_DWORD *)v8[60].gap0 != 3 )
          {
            v44 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v11 + 216LL))(
                    v11,
                    v7,
                    v8,
                    0LL);
LABEL_71:
            v45 = (const google::protobuf::MessageLite *)v44;
            goto LABEL_72;
          }
          if ( __last._M_current == __first )
          {
            v44 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v11 + 416LL))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
            goto LABEL_71;
          }
          v45 = __first[v21];
LABEL_72:
          google::protobuf::internal::WireFormatLite::WriteMessage(*(_DWORD *)v8[68].gap0, v45, output);
          goto LABEL_43;
        case 0xCu:
          v22 = *(_DWORD *)v8[60].gap0 == 3;
          v126.val_.bool_value_ = 0;
          v125.val_.int64_value_ = (google::protobuf::int64)&v126;
          v23 = *(_QWORD *)v11;
          *(_QWORD *)&v125.type_ = 0LL;
          if ( v22 )
            v24 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD, google::protobuf::MapKey *))(v23 + 424))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21,
                    &v125);
          else
            v24 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, google::protobuf::MapKey *))(v23 + 224))(
                    v11,
                    v7,
                    v8,
                    &v125);
          google::protobuf::internal::WireFormatLite::WriteBytes(*(unsigned int *)v8[68].gap0, v24, output);
LABEL_41:
          if ( (google::protobuf::MapKey *)v125.val_.string_value_ != &v126 )
            operator delete(v125.val_.string_value_);
          goto LABEL_43;
        case 0xDu:
          v56 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v57 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v56 + 352))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v57 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v56 + 152))(
                    v11,
                    v7,
                    v8);
          v43 = v57;
          if ( v117 )
            goto LABEL_68;
          google::protobuf::internal::WireFormatLite::WriteUInt32(*(_DWORD *)v8[68].gap0, v57, output);
          goto LABEL_43;
        case 0xEu:
          v53 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v54 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v53 + 400))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v54 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v53 + 200))(
                    v11,
                    v7,
                    v8);
          v28 = *(int *)(v54 + 16);
          if ( !v117 )
          {
            google::protobuf::internal::WireFormatLite::WriteEnum(*(_DWORD *)v8[68].gap0, v28, output);
            goto LABEL_43;
          }
          if ( output->buffer_size_ <= 9 )
            goto LABEL_163;
          v29 = (int (**)(...))output->buffer_;
          for ( j = v29; v28 > 0x7F; *((_BYTE *)j - 1) = v55 | 0x80 )
          {
            v55 = v28;
            v28 >>= 7;
            j = (int (**)(...))((char *)j + 1);
          }
          break;
        case 0xFu:
          v39 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v40 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v39 + 336))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v40 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v39 + 136))(
                    v11,
                    v7,
                    v8);
          v41 = v40;
          if ( v117 )
LABEL_65:
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(output, v41);
          else
            google::protobuf::internal::WireFormatLite::WriteSFixed32(*(_DWORD *)v8[68].gap0, v40, output);
          goto LABEL_43;
        case 0x10u:
          v36 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v37 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v36 + 344))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v37 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v36 + 144))(
                    v11,
                    v7,
                    v8);
          v38 = v37;
          if ( v117 )
LABEL_61:
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(output, v38);
          else
            google::protobuf::internal::WireFormatLite::WriteSFixed64(*(_DWORD *)v8[68].gap0, v37, output);
          goto LABEL_43;
        case 0x11u:
          v34 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v35 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v34 + 336))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v35 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v34 + 136))(
                    v11,
                    v7,
                    v8);
          if ( v117 )
            google::protobuf::io::CodedOutputStream::WriteVarint32(output, (2 * v35) ^ (v35 >> 31));
          else
            google::protobuf::internal::WireFormatLite::WriteSInt32(*(_DWORD *)v8[68].gap0, v35, output);
          goto LABEL_43;
        case 0x12u:
          v26 = *(_QWORD *)v11;
          if ( *(_DWORD *)v8[60].gap0 == 3 )
            v27 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *, _QWORD))(v26 + 344))(
                    v11,
                    v7,
                    v8,
                    (unsigned int)v21);
          else
            v27 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::FieldDescriptor *, google::protobuf::internal::WireFormat *))(v26 + 144))(
                    v11,
                    v7,
                    v8);
          if ( !v117 )
          {
            google::protobuf::internal::WireFormatLite::WriteSInt64(*(_DWORD *)v8[68].gap0, v27, output);
            goto LABEL_43;
          }
          v28 = (v27 >> 63) ^ (2 * v27);
          if ( output->buffer_size_ <= 9 )
            goto LABEL_163;
          v29 = (int (**)(...))output->buffer_;
          for ( j = v29; v28 > 0x7F; *((_BYTE *)j - 1) = v31 | 0x80 )
          {
            v31 = v28;
            v28 >>= 7;
            j = (int (**)(...))((char *)j + 1);
          }
          break;
        default:
          goto LABEL_43;
      }
      *(_BYTE *)j = v28;
      v32 = (_DWORD)j + 1 - (_DWORD)v29;
      output->buffer_size_ -= v32;
      v33 = v32;
      v25 = v21 + 1;
      output->buffer_ += v33;
      if ( __comp == v21 )
        break;
LABEL_44:
      v21 = v25;
    }
  }
LABEL_52:
  if ( __first )
    operator delete(__first);
};

// Line 1142: range 000000000C8D3830-000000000C8D3A35
void __fastcall google::protobuf::internal::WireFormat::SerializeMessageSetItemWithCachedSizes(
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::Message *message,
        google::protobuf::io::CodedOutputStream *output)
{
  const google::protobuf::Message::Reflection *(__fastcall *v5)(const google::protobuf::Message *const); // rdx
  __int64 v6; // rdx
  __int64 v7; // r14
  int v8; // eax
  int buffer_size; // eax
  unsigned int number; // esi
  google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint8 *i; // rdx
  char v13; // cl
  int v14; // edx
  int v15; // eax
  __int64 v16; // r12
  google::protobuf::uint32 v17; // esi
  google::protobuf::uint8 *v18; // rdx
  google::protobuf::uint8 *j; // rax
  char v20; // cl
  int v21; // eax

  v5 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v5 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    v7 = v6;
  }
  else
  {
    v7 = (__int64)v5(message);
  }
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xBu);
    if ( output->buffer_size_ > 4 )
    {
LABEL_5:
      *output->buffer_ = 16;
      buffer_size = output->buffer_size_;
      ++output->buffer_;
      output->buffer_size_ = --buffer_size;
      number = field->number_;
      if ( buffer_size > 4 )
        goto LABEL_6;
      goto LABEL_18;
    }
  }
  else
  {
    *output->buffer_ = 11;
    v8 = output->buffer_size_;
    ++output->buffer_;
    output->buffer_size_ = --v8;
    if ( v8 > 4 )
      goto LABEL_5;
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0x10u);
  number = field->number_;
  if ( output->buffer_size_ > 4 )
  {
LABEL_6:
    buffer = output->buffer_;
    for ( i = buffer; number > 0x7F; *(i - 1) = v13 | 0x80 )
    {
      v13 = number;
      number >>= 7;
      ++i;
    }
    *i = number;
    v14 = (_DWORD)i + 1 - (_DWORD)buffer;
    output->buffer_ += v14;
    v15 = output->buffer_size_ - v14;
    output->buffer_size_ = v15;
    if ( v15 > 4 )
      goto LABEL_9;
    goto LABEL_19;
  }
LABEL_18:
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, number);
  if ( output->buffer_size_ > 4 )
  {
LABEL_9:
    *output->buffer_++ = 26;
    --output->buffer_size_;
    goto LABEL_10;
  }
LABEL_19:
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0x1Au);
LABEL_10:
  v16 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v7 + 216LL))(
          v7,
          message,
          field,
          0LL);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 120LL))(v16);
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v17);
  }
  else
  {
    v18 = output->buffer_;
    for ( j = v18; v17 > 0x7F; *(j - 1) = v20 | 0x80 )
    {
      v20 = v17;
      v17 >>= 7;
      ++j;
    }
    *j = v17;
    v21 = (_DWORD)j + 1 - (_DWORD)v18;
    output->buffer_size_ -= v21;
    output->buffer_ += v21;
  }
  (*(void (__fastcall **)(__int64, google::protobuf::io::CodedOutputStream *))(*(_QWORD *)v16 + 104LL))(v16, output);
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xCu);
  }
  else
  {
    *output->buffer_++ = 12;
    --output->buffer_size_;
  }
};

// Line 1165: range 000000000C8D4710-000000000C8D4881
size_t __fastcall google::protobuf::internal::WireFormat::ByteSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // r13
  __int64 (*v3)(void); // rdx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  size_t v11; // rax
  __int64 (__fastcall *v12)(__int64, google::protobuf::internal::WireFormat *); // rdx
  const google::protobuf::UnknownFieldSet *v13; // rax
  size_t v14; // r12
  const google::protobuf::UnknownFieldSet *v16; // rax
  google::protobuf::FieldDescriptor *v17; // [rsp+8h] [rbp-50h] BYREF
  std::vector<const google::protobuf::FieldDescriptor*> v18; // [rsp+10h] [rbp-48h] BYREF

  v2 = (*(__int64 (__fastcall **)(google::protobuf::internal::WireFormat *, const google::protobuf::Message *))(*(_QWORD *)this->gap0 + 192LL))(
         this,
         a2);
  v3 = *(__int64 (**)(void))(*(_QWORD *)this->gap0 + 184LL);
  if ( (char *)v3 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this->gap0 + 192LL))();
    v5 = v4;
  }
  else
  {
    v5 = v3();
  }
  memset(&v18, 0, sizeof(v18));
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(_BYTE *)(v6 + 107) )
  {
    if ( *(int *)(v2 + 104) <= 0 )
    {
      v10 = 0LL;
      goto LABEL_12;
    }
    v7 = 0LL;
    do
    {
      v17 = (google::protobuf::FieldDescriptor *)(*(_QWORD *)(v2 + 40) + 152 * v7);
      std::vector<google::protobuf::FieldDescriptor const*>::emplace_back<google::protobuf::FieldDescriptor const*>(
        &v18,
        (const google::protobuf::FieldDescriptor **)&v17,
        (const google::protobuf::FieldDescriptor **)(19 * v7++));
    }
    while ( *(_DWORD *)(v2 + 104) > (int)v7 );
  }
  else
  {
    (*(void (__fastcall **)(__int64, google::protobuf::internal::WireFormat *, std::vector<const google::protobuf::FieldDescriptor*> *))(*(_QWORD *)v5 + 128LL))(
      v5,
      this,
      &v18);
  }
  M_start = v18._M_impl._M_start;
  v9 = 0LL;
  v10 = 0LL;
  if ( v18._M_impl._M_start != v18._M_impl._M_finish )
  {
    do
    {
      v11 = google::protobuf::internal::WireFormat::FieldByteSize(M_start[v9], (const google::protobuf::Message *)this);
      M_start = v18._M_impl._M_start;
      v10 += v11;
      ++v9;
    }
    while ( v18._M_impl._M_finish - v18._M_impl._M_start > v9 );
  }
  v6 = *(_QWORD *)(v2 + 32);
LABEL_12:
  v12 = *(__int64 (__fastcall **)(__int64, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(v6 + 104) )
  {
    v13 = (const google::protobuf::UnknownFieldSet *)v12(v5, this);
    v14 = google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(v13) + v10;
  }
  else
  {
    v16 = (const google::protobuf::UnknownFieldSet *)v12(v5, this);
    v14 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v16) + v10;
  }
  if ( v18._M_impl._M_start )
    operator delete(v18._M_impl._M_start);
  return v14;
};

// Line 1199: range 000000000C8D4580-000000000C8D4700
size_t __fastcall google::protobuf::internal::WireFormat::FieldByteSize(
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::Message *message)
{
  const google::protobuf::Message::Reflection *(__fastcall *v2)(const google::protobuf::Message *const); // rdx
  const google::protobuf::Message *v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rbx
  size_t v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rax

  v2 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v2 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    v4 = (__int64)v3;
  }
  else
  {
    v4 = (__int64)v2(message);
  }
  if ( field->is_extension_
    && field->containing_type_->options_->message_set_wire_format_
    && google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] == CPPTYPE_MESSAGE_0 )
  {
    if ( field->label_ != LABEL_REPEATED )
      return google::protobuf::internal::WireFormat::MessageSetItemByteSize(field, message);
  }
  else if ( field->label_ != LABEL_REPEATED )
  {
    v5 = 1LL;
    if ( !field->containing_type_->options_->map_entry_ )
      v5 = (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v4 + 40LL))(
             v4,
             message,
             field);
    goto LABEL_8;
  }
  v5 = (*(unsigned int (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v4 + 48LL))(
         v4,
         message,
         field);
LABEL_8:
  v6 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(
         (google::protobuf::internal::WireFormat *)field,
         (const google::protobuf::FieldDescriptor *)message,
         v3);
  if ( google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)field) )
  {
    if ( v6 )
    {
      _BitScanReverse(&v7, v6 | 1);
      v8 = (9 * v7 + 73) >> 6;
      _BitScanReverse(&v7, 8 * field->number_ + 1);
      v6 += v8 + ((9 * v7 + 73) >> 6);
    }
    return v6;
  }
  else
  {
    v10 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    _BitScanReverse(&v11, 8 * field->number_ + 1);
    v12 = (9 * v11 + 73) >> 6;
    if ( v10 == 10 )
      v12 *= 2LL;
    return v5 * v12 + v6;
  }
};

// Line 1236: range 000000000C8D07F0-000000000C8D09CA
__int64 __fastcall google::protobuf::internal::MapKeyDataOnlyByteSize(
        google::protobuf::FieldDescriptor *this,
        const google::protobuf::MapKey *a2,
        const google::protobuf::MapKey *a3)
{
  google::protobuf::internal::LogMessage_0 *v3; // rax
  __int64 result; // rax
  const std::string *v5; // rax
  unsigned int v6; // edx
  int Int32Value; // eax
  google::protobuf::int64 Int64Value; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  google::protobuf::int32 v11; // eax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+10h] [rbp-58h] BYREF

  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(this) )
  {
    case 1u:
    case 2u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xEu:
      google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 1245);
      v3 = google::protobuf::internal::LogMessage::operator<<(&v14, "Unsupported");
      google::protobuf::internal::LogFinisher::operator=(&v13, v3);
      goto LABEL_3;
    case 3u:
      _BitScanReverse64(&v9, google::protobuf::MapKey::GetInt64Value(a2) | 1);
      return (unsigned int)(9 * v9 + 73) >> 6;
    case 4u:
      _BitScanReverse64(&v10, google::protobuf::MapKey::GetUInt64Value(a2) | 1);
      return (unsigned int)(9 * v10 + 73) >> 6;
    case 5u:
      Int32Value = google::protobuf::MapKey::GetInt32Value(a2);
      if ( Int32Value >= 0 )
        goto LABEL_9;
      result = 10LL;
      break;
    case 6u:
    case 0x10u:
      return 8LL;
    case 7u:
    case 0xFu:
      return 4LL;
    case 8u:
      return 1LL;
    case 9u:
      v5 = google::protobuf::MapKey::GetStringValue[abi:cxx11](a2);
      _BitScanReverse(&v6, v5->_M_string_length | 1);
      return v5->_M_string_length + ((9 * v6 + 73) >> 6);
    case 0xDu:
      Int32Value = google::protobuf::MapKey::GetUInt32Value(a2);
LABEL_9:
      _BitScanReverse((unsigned int *)&Int32Value, Int32Value | 1);
      result = (unsigned int)(9 * Int32Value + 73) >> 6;
      break;
    case 0x11u:
      v11 = google::protobuf::MapKey::GetInt32Value(a2);
      _BitScanReverse((unsigned int *)&v11, (v11 >> 31) ^ (2 * v11) | 1);
      result = (unsigned int)(9 * v11 + 73) >> 6;
      break;
    case 0x12u:
      Int64Value = google::protobuf::MapKey::GetInt64Value(a2);
      _BitScanReverse64((unsigned __int64 *)&Int64Value, (Int64Value >> 63) ^ (2 * Int64Value) | 1);
      result = (unsigned int)(9 * Int64Value + 73) >> 6;
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 1272);
      v12 = google::protobuf::internal::LogMessage::operator<<(&v14, "Cannot get here");
      google::protobuf::internal::LogFinisher::operator=(&v13, v12);
LABEL_3:
      google::protobuf::internal::LogMessage::~LogMessage(&v14);
      result = 0LL;
      break;
  }
  return result;
};

// Line 1245: range 000000000C72C098-000000000C72C0A3
void __fastcall __noreturn google::protobuf::internal::MapKeyDataOnlyByteSize()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 1277: range 000000000C8D09D0-000000000C8D0BFF
__int64 __fastcall google::protobuf::internal::MapValueRefDataOnlyByteSize(
        google::protobuf::FieldDescriptor *this,
        const google::protobuf::MapValueRef *a2,
        const google::protobuf::MapValueRef *a3)
{
  __int64 result; // rax
  const std::string *v4; // rax
  unsigned int v5; // edx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  const google::protobuf::Message *MessageValue; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int Int32Value; // eax
  google::protobuf::int32 v13; // eax
  google::protobuf::int64 Int64Value; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogFinisher v16; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+10h] [rbp-58h] BYREF

  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(this) )
  {
    case 1u:
    case 6u:
    case 0x10u:
      return 8LL;
    case 2u:
    case 7u:
    case 0xFu:
      return 4LL;
    case 3u:
      _BitScanReverse64(&v10, google::protobuf::MapValueRef::GetInt64Value(a2) | 1);
      return (unsigned int)(9 * v10 + 73) >> 6;
    case 4u:
      _BitScanReverse64(&v11, google::protobuf::MapValueRef::GetUInt64Value(a2) | 1);
      return (unsigned int)(9 * v11 + 73) >> 6;
    case 5u:
      Int32Value = google::protobuf::MapValueRef::GetInt32Value(a2);
      if ( Int32Value >= 0 )
        goto LABEL_15;
      goto LABEL_12;
    case 8u:
      return 1LL;
    case 9u:
    case 0xCu:
      v4 = google::protobuf::MapValueRef::GetStringValue[abi:cxx11](a2);
      _BitScanReverse(&v5, v4->_M_string_length | 1);
      return v4->_M_string_length + ((9 * v5 + 73) >> 6);
    case 0xAu:
      google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 1280);
      v6 = google::protobuf::internal::LogMessage::operator<<(&v17, "Unsupported");
      google::protobuf::internal::LogFinisher::operator=(&v16, v6);
      goto LABEL_7;
    case 0xBu:
      MessageValue = google::protobuf::MapValueRef::GetMessageValue(a2);
      v8 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))MessageValue->_vptr_MessageLite + 12))(MessageValue);
      _BitScanReverse(&v9, v8 | 1);
      return v8 + ((9 * v9 + 73) >> 6);
    case 0xDu:
      Int32Value = google::protobuf::MapValueRef::GetUInt32Value(a2);
      goto LABEL_15;
    case 0xEu:
      Int32Value = google::protobuf::MapValueRef::GetEnumValue(a2);
      if ( Int32Value >= 0 )
      {
LABEL_15:
        _BitScanReverse((unsigned int *)&Int32Value, Int32Value | 1);
        result = (unsigned int)(9 * Int32Value + 73) >> 6;
      }
      else
      {
LABEL_12:
        result = 10LL;
      }
      break;
    case 0x11u:
      v13 = google::protobuf::MapValueRef::GetInt32Value(a2);
      _BitScanReverse((unsigned int *)&v13, (v13 >> 31) ^ (2 * v13) | 1);
      result = (unsigned int)(9 * v13 + 73) >> 6;
      break;
    case 0x12u:
      Int64Value = google::protobuf::MapValueRef::GetInt64Value(a2);
      _BitScanReverse64((unsigned __int64 *)&Int64Value, (Int64Value >> 63) ^ (2 * Int64Value) | 1);
      result = (unsigned int)(9 * Int64Value + 73) >> 6;
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/wire_format.cc", 1312);
      v15 = google::protobuf::internal::LogMessage::operator<<(&v17, "Cannot get here");
      google::protobuf::internal::LogFinisher::operator=(&v16, v15);
LABEL_7:
      google::protobuf::internal::LogMessage::~LogMessage(&v17);
      result = 0LL;
      break;
  }
  return result;
};

// Line 1280: range 000000000C72C0B8-000000000C72C0C3
void __fastcall __noreturn google::protobuf::internal::MapValueRefDataOnlyByteSize()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 1318: range 000000000C8D3C20-000000000C8D456C
unsigned __int64 __fastcall google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(
        google::protobuf::internal::WireFormat *this,
        google::protobuf::Message *message,
        const google::protobuf::Message *a3)
{
  const google::protobuf::Message::Reflection *(__fastcall *v3)(const google::protobuf::Message *const); // rdx
  __int64 v4; // rdx
  __int64 v5; // rbp
  const google::protobuf::internal::MapFieldBase *v6; // r13
  google::protobuf::internal::MapFieldBase *(__fastcall *v7)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rax
  unsigned __int64 v8; // rbx
  google::protobuf::FieldDescriptor *fields; // rbx
  google::protobuf::FieldDescriptor *v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r12
  const google::protobuf::MapValueRef *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  const google::protobuf::MapKey *v16; // rdx
  __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // r15d
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r15d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // r15d
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // r15d
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // r15d
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // r15d
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // [rsp+8h] [rbp-A0h]
  google::protobuf::MapIterator v61; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::MapIterator v62; // [rsp+40h] [rbp-68h] BYREF

  v3 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v3 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    v5 = v4;
  }
  else
  {
    v5 = (__int64)v3(message);
  }
  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)this) )
    goto LABEL_6;
  v6 = 0LL;
  v7 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v5 + 728LL);
  if ( v7 != google::protobuf::Reflection::MapData )
  {
    v6 = v7((const google::protobuf::Reflection *const)v5, message, (const google::protobuf::FieldDescriptor *)this);
    if ( !google::protobuf::internal::MapFieldBase::IsMapValid(v6) )
      goto LABEL_6;
LABEL_13:
    google::protobuf::MapIterator::MapIterator(&v61, message, (const google::protobuf::FieldDescriptor *)this);
    google::protobuf::MapIterator::MapIterator(&v62, message, (const google::protobuf::FieldDescriptor *)this);
    fields = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)this)->fields_;
    v10 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)this)->fields_ + 1;
    (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v6->_vptr_MapFieldBase
     + 6))(
      v6,
      &v61);
    (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v6->_vptr_MapFieldBase
     + 7))(
      v6,
      &v62);
    v11 = 0LL;
    while ( !(*((unsigned __int8 (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *, google::protobuf::MapIterator *))v61.map_->_vptr_MapFieldBase
              + 5))(
               v61.map_,
               &v61,
               &v62) )
    {
      v12 = google::protobuf::internal::MapKeyDataOnlyByteSize(fields, &v61.key_, v16) + 2;
      v14 = google::protobuf::internal::MapValueRefDataOnlyByteSize(v10, &v61.value_, v13);
      v15 = v12 + v14;
      _BitScanReverse((unsigned int *)&v14, (v12 + v14) | 1);
      v11 += v15 + ((unsigned int)(9 * v14 + 73) >> 6);
      (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v61.map_->_vptr_MapFieldBase
       + 15))(
        v61.map_,
        &v61);
    }
    (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *))v62.map_->_vptr_MapFieldBase
     + 13))(
      v62.map_,
      &v62);
    google::protobuf::MapKey::~MapKey(&v62.key_);
    google::protobuf::MapIterator::~MapIterator(&v61);
    return v11;
  }
  if ( google::protobuf::internal::MapFieldBase::IsMapValid(0LL) )
    goto LABEL_13;
LABEL_6:
  if ( *(_DWORD *)this[60].gap0 == 3 )
  {
    v8 = (*(unsigned int (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 48LL))(
           v5,
           message,
           this);
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)this[80].gap0 + 32LL) + 107LL) )
  {
    v8 = (*(unsigned __int8 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 40LL))(
           v5,
           message,
           this);
LABEL_9:
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)this) )
    {
      case 1u:
      case 6u:
      case 0x10u:
        return 8 * v8;
      case 2u:
      case 7u:
      case 0xFu:
        return 4 * v8;
      case 3u:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_39;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_58;
      case 4u:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_47;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_63;
      case 5u:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_51;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_68;
      case 8u:
        goto LABEL_34;
      case 9u:
      case 0xCu:
        if ( v8 )
          goto LABEL_24;
        goto LABEL_22;
      case 0xAu:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_41;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_102;
      case 0xBu:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_43;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_80;
      case 0xDu:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_45;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_85;
      case 0xEu:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_36;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_90;
      case 0x11u:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_54;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_97;
      case 0x12u:
        if ( *(_DWORD *)this[60].gap0 != 3 )
          goto LABEL_49;
        v11 = 0LL;
        if ( !v8 )
          return v11;
        goto LABEL_75;
      default:
        goto LABEL_22;
    }
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)this) )
  {
    case 1u:
    case 6u:
    case 0x10u:
      v11 = 8LL;
      break;
    case 2u:
    case 7u:
    case 0xFu:
      v11 = 4LL;
      break;
    case 3u:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_58:
        v31 = 0;
        v11 = 0LL;
        do
        {
          v32 = v31++;
          _BitScanReverse64(
            &v33,
            (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 344LL))(
              v5,
              message,
              this,
              v32) | 1);
          v11 += (unsigned int)(9 * v33 + 73) >> 6;
        }
        while ( (_DWORD)v8 != v31 );
      }
      else
      {
LABEL_39:
        _BitScanReverse64(
          &v23,
          (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 144LL))(
            v5,
            message,
            this) | 1);
        v11 = (unsigned int)(9 * v23 + 73) >> 6;
      }
      break;
    case 4u:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_63:
        v34 = 0;
        v11 = 0LL;
        do
        {
          v35 = v34++;
          _BitScanReverse64(
            &v36,
            (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 360LL))(
              v5,
              message,
              this,
              v35) | 1);
          v11 += (unsigned int)(9 * v36 + 73) >> 6;
        }
        while ( v34 != (_DWORD)v8 );
      }
      else
      {
LABEL_47:
        _BitScanReverse64(
          &v28,
          (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 160LL))(
            v5,
            message,
            this) | 1);
        v11 = (unsigned int)(9 * v28 + 73) >> 6;
      }
      break;
    case 5u:
      if ( *(_DWORD *)this[60].gap0 != 3 )
      {
LABEL_51:
        v22 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 136LL))(
                v5,
                message,
                this);
        if ( v22 >= 0 )
          goto LABEL_37;
        goto LABEL_52;
      }
      LODWORD(v8) = 1;
LABEL_68:
      v37 = 0;
      v11 = 0LL;
      do
      {
        v39 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v5 + 336LL))(
                v5,
                message,
                this,
                v37);
        if ( v39 >= 0 )
        {
          _BitScanReverse((unsigned int *)&v39, v39 | 1);
          v38 = (unsigned int)(9 * v39 + 73) >> 6;
        }
        else
        {
          v38 = 10LL;
        }
        ++v37;
        v11 += v38;
      }
      while ( v37 != (_DWORD)v8 );
      break;
    case 8u:
      v8 = 1LL;
LABEL_34:
      v11 = v8;
      break;
    case 9u:
    case 0xCu:
      v8 = 1LL;
LABEL_24:
      v60 = 0LL;
      v11 = 0LL;
      do
      {
        v20 = *(_DWORD *)this[60].gap0 == 3;
        v62.key_.val_.bool_value_ = 0;
        v62.iter_ = &v62.key_;
        v21 = *(_QWORD *)v5;
        v62.map_ = 0LL;
        if ( v20 )
          v18 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, _QWORD, google::protobuf::MapIterator *))(v21 + 424))(
                  v5,
                  message,
                  this,
                  (unsigned int)v60,
                  &v62);
        else
          v18 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, google::protobuf::MapIterator *))(v21 + 224))(
                  v5,
                  message,
                  this,
                  &v62);
        _BitScanReverse(&v19, *(_QWORD *)(v18 + 8) | 1);
        v11 += *(_QWORD *)(v18 + 8) + ((9 * v19 + 73) >> 6);
        if ( v62.iter_ != &v62.key_ )
          operator delete(v62.iter_);
        ++v60;
      }
      while ( v8 > v60 );
      break;
    case 0xAu:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_102:
        v57 = 0;
        v11 = 0LL;
        do
        {
          v58 = v57++;
          v59 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 416LL))(
                  v5,
                  message,
                  this,
                  v58);
          v11 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 96LL))(v59);
        }
        while ( v57 != (_DWORD)v8 );
      }
      else
      {
LABEL_41:
        v24 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v5 + 216LL))(
                v5,
                message,
                this,
                0LL);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 96LL))(v24);
      }
      break;
    case 0xBu:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_80:
        v43 = 0;
        v11 = 0LL;
        do
        {
          v44 = v43++;
          v45 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 416LL))(
                  v5,
                  message,
                  this,
                  v44);
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 96LL))(v45);
          _BitScanReverse(&v47, v46 | 1);
          v11 += v46 + ((9 * v47 + 73) >> 6);
        }
        while ( (_DWORD)v8 != v43 );
      }
      else
      {
LABEL_43:
        v25 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v5 + 216LL))(
                v5,
                message,
                this,
                0LL);
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 96LL))(v25);
        _BitScanReverse(&v27, v26 | 1);
        v11 = v26 + ((9 * v27 + 73) >> 6);
      }
      break;
    case 0xDu:
      if ( *(_DWORD *)this[60].gap0 != 3 )
      {
LABEL_45:
        v22 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 152LL))(
                v5,
                message,
                this);
        goto LABEL_37;
      }
      LODWORD(v8) = 1;
LABEL_85:
      v48 = 0;
      v11 = 0LL;
      do
      {
        v49 = v48++;
        _BitScanReverse(
          &v50,
          (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 352LL))(
            v5,
            message,
            this,
            v49) | 1);
        v11 += (9 * v50 + 73) >> 6;
      }
      while ( v48 != (_DWORD)v8 );
      break;
    case 0xEu:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_90:
        v51 = 0;
        v11 = 0LL;
        do
        {
          v53 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, _QWORD))(*(_QWORD *)v5 + 400LL))(
                              v5,
                              message,
                              this,
                              v51)
                          + 16);
          if ( v53 >= 0 )
          {
            _BitScanReverse((unsigned int *)&v53, v53 | 1);
            v52 = (unsigned int)(9 * v53 + 73) >> 6;
          }
          else
          {
            v52 = 10LL;
          }
          ++v51;
          v11 += v52;
        }
        while ( v51 != (_DWORD)v8 );
      }
      else
      {
LABEL_36:
        v22 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 200LL))(
                            v5,
                            message,
                            this)
                        + 16);
        if ( v22 < 0 )
        {
LABEL_52:
          v11 = 10LL;
        }
        else
        {
LABEL_37:
          _BitScanReverse((unsigned int *)&v22, v22 | 1);
          v11 = (unsigned int)(9 * v22 + 73) >> 6;
        }
      }
      break;
    case 0x11u:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_97:
        v54 = 0;
        v11 = 0LL;
        do
        {
          v55 = v54++;
          v56 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 336LL))(
                  v5,
                  message,
                  this,
                  v55);
          _BitScanReverse((unsigned int *)&v56, (v56 >> 31) ^ (2 * v56) | 1);
          v11 += (unsigned int)(9 * v56 + 73) >> 6;
        }
        while ( v54 != (_DWORD)v8 );
      }
      else
      {
LABEL_54:
        v30 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 136LL))(
                v5,
                message,
                this);
        _BitScanReverse((unsigned int *)&v30, (v30 >> 31) ^ (2 * v30) | 1);
        v11 = (unsigned int)(9 * v30 + 73) >> 6;
      }
      break;
    case 0x12u:
      if ( *(_DWORD *)this[60].gap0 == 3 )
      {
        LODWORD(v8) = 1;
LABEL_75:
        v40 = 0;
        v11 = 0LL;
        do
        {
          v41 = v40++;
          v42 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *, __int64))(*(_QWORD *)v5 + 344LL))(
                  v5,
                  message,
                  this,
                  v41);
          _BitScanReverse64((unsigned __int64 *)&v42, (v42 >> 63) ^ (2 * v42) | 1);
          v11 += (unsigned int)(9 * v42 + 73) >> 6;
        }
        while ( v40 != (_DWORD)v8 );
      }
      else
      {
LABEL_49:
        v29 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, google::protobuf::internal::WireFormat *))(*(_QWORD *)v5 + 144LL))(
                v5,
                message,
                this);
        _BitScanReverse64((unsigned __int64 *)&v29, (v29 >> 63) ^ (2 * v29) | 1);
        v11 = (unsigned int)(9 * v29 + 73) >> 6;
      }
      break;
    default:
LABEL_22:
      v11 = 0LL;
      break;
  }
  return v11;
};

// Line 1328: range 000000000C72C19C-000000000C72C1B1
void __fastcall __noreturn google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::MapIterator a8)
{
  struct _Unwind_Exception *v8; // rbp
  google::protobuf::MapIterator *v9; // r15

  google::protobuf::MapIterator::~MapIterator(v9);
  google::protobuf::MapIterator::~MapIterator(&a8);
  _Unwind_Resume(v8);
};

// Line 1428: range 000000000C8D3A40-000000000C8D3AC5
size_t __fastcall google::protobuf::internal::WireFormat::MessageSetItemByteSize(
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::Message *message)
{
  const google::protobuf::Message::Reflection *(__fastcall *v3)(const google::protobuf::Message *const); // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  int number; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx

  v3 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v3 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    v5 = v4;
  }
  else
  {
    v5 = (__int64)v3(message);
  }
  number = field->number_;
  v7 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v5 + 216LL))(
         v5,
         message,
         field,
         0LL);
  _BitScanReverse((unsigned int *)&number, number | 1);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
  v9 = google::protobuf::internal::WireFormatLite::kMessageSetItemTagsSize + v8 + ((unsigned int)(9 * number + 73) >> 6);
  _BitScanReverse((unsigned int *)&v8, v8 | 1);
  return v9 + ((unsigned int)(9 * v8 + 73) >> 6);
};

// Line 1448: range 000000000C746B50-000000000C746B71
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal27UnknownFieldSetFieldSkipper9SkipFieldEPNS0_2io16CodedInputStreamEj()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
