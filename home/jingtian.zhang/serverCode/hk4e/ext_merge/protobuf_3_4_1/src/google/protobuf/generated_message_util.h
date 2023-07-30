// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/generated_message_util.h

// Line 116: range 000000000C940250-000000000C9402AB
bool __fastcall google::protobuf::internal::AllAreInitialized<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>>(
        const google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto> *t)
{
  int v1; // ebx
  const google::protobuf::FieldOptions *const *v2; // rax
  bool result; // al

  v1 = t->current_size_ - 1;
  if ( v1 < 0 )
    return 1;
  while ( 1 )
  {
    v2 = (const google::protobuf::FieldOptions *const *)t->rep_->elements[v1];
    if ( ((_BYTE)v2[2] & 0x20) != 0 )
    {
      result = google::protobuf::FieldOptions::IsInitialized(v2[8]);
      if ( !result )
        break;
    }
    if ( --v1 == -1 )
      return 1;
  }
  return result;
};
