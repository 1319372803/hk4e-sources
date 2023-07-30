// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/wire_format_lite_inl.h

// Line 317: range 000000000C940720-000000000C94089C
bool __fastcall google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
        int tag_size,
        google::protobuf::uint32 tag,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::RepeatedField<int> *value)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v8; // r12d
  google::protobuf::int64 Varint32Fallback; // rax
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  int v13; // r12d
  const google::protobuf::uint8 *v14; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *v16; // rax
  const google::protobuf::uint8 *v17; // rax
  google::protobuf::uint32 v18; // esi
  google::protobuf::int64 v19; // rax
  __int64 v20; // rax
  google::protobuf::RepeatedField<int>::Rep *v21; // rdx

  buffer = input->buffer_;
  if ( input->buffer_ >= input->buffer_end_ )
  {
    v8 = 0;
  }
  else
  {
    v8 = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      input->buffer_ = buffer + 1;
      goto LABEL_6;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v8);
  v8 = Varint32Fallback;
  if ( Varint32Fallback < 0 )
    return 0;
LABEL_6:
  current_size = value->current_size_;
  if ( (_DWORD)current_size == value->total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(value, current_size + 1);
    current_size = value->current_size_;
  }
  rep = value->rep_;
  value->current_size_ = current_size + 1;
  rep->elements[current_size] = v8;
  v13 = value->total_size_ - value->current_size_;
  if ( v13 > 0 )
  {
    while ( 1 )
    {
      if ( tag > 0x7F )
      {
        if ( tag > 0x3FFF )
          return 1;
        buffer_end = input->buffer_end_;
        v16 = input->buffer_;
        if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 1
          || *v16 != ((unsigned __int8)tag | 0x80)
          || v16[1] != (unsigned __int8)(tag >> 7) )
        {
          return 1;
        }
        v17 = v16 + 2;
        input->buffer_ = v17;
      }
      else
      {
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( input->buffer_ >= buffer_end || tag != *v14 )
          return 1;
        v17 = v14 + 1;
        input->buffer_ = v17;
      }
      if ( buffer_end <= v17 )
        break;
      v18 = *v17;
      if ( *(char *)v17 < 0 )
        goto LABEL_21;
      input->buffer_ = v17 + 1;
LABEL_22:
      v20 = value->current_size_;
      v21 = value->rep_;
      value->current_size_ = v20 + 1;
      v21->elements[v20] = v18;
      if ( !--v13 )
        return 1;
    }
    v18 = 0;
LABEL_21:
    v19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v18);
    v18 = v19;
    if ( v19 < 0 )
      return 0;
    goto LABEL_22;
  }
  return 1;
};

// Line 423: range 000000000C940630-000000000C940713
bool __fastcall google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::RepeatedField<int> *values)
{
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  google::protobuf::io::CodedInputStream::Limit v6; // r13d
  const google::protobuf::uint8 *v7; // rax
  google::protobuf::uint32 v8; // r12d
  google::protobuf::int64 Varint32Fallback; // rax
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax

  buffer = input->buffer_;
  if ( input->buffer_ < input->buffer_end_
    && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
  {
    input->buffer_ = buffer + 1;
  }
  else
  {
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(input);
    if ( VarintSizeAsIntFallback < 0 )
      return 0;
  }
  v6 = google::protobuf::io::CodedInputStream::PushLimit(input, VarintSizeAsIntFallback);
  if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
  {
    while ( 1 )
    {
      v7 = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
        break;
      v8 = *v7;
      if ( *(char *)v7 < 0 )
        goto LABEL_9;
      current_size = values->current_size_;
      input->buffer_ = v7 + 1;
      if ( (_DWORD)current_size == values->total_size_ )
        goto LABEL_14;
LABEL_11:
      rep = values->rep_;
      values->current_size_ = current_size + 1;
      rep->elements[current_size] = v8;
      if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
        goto LABEL_12;
    }
    v8 = 0;
LABEL_9:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v8);
    v8 = Varint32Fallback;
    if ( Varint32Fallback < 0 )
      return 0;
    current_size = values->current_size_;
    if ( (_DWORD)current_size != values->total_size_ )
      goto LABEL_11;
LABEL_14:
    google::protobuf::RepeatedField<int>::Reserve(values, current_size + 1);
    current_size = values->current_size_;
    goto LABEL_11;
  }
LABEL_12:
  google::protobuf::io::CodedInputStream::PopLimit(input, v6);
  return 1;
};
