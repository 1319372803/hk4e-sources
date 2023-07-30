// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/generated_message_reflection.h

// Line 143: range 000000000C8AB4B0-000000000C8AB535
google::protobuf::uint32 __fastcall google::protobuf::internal::ReflectionSchema::GetFieldOffset(
        const google::protobuf::internal::ReflectionSchema *const this,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  int v5; // esi
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->offsets_;
  if ( containing_oneof )
    return offsets[(int)(field->containing_type_->field_count_
                       - 1431655765
                       * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
  if ( !field->is_extension_ )
  {
    v5 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    return offsets[v5];
  }
  extension_scope = field->extension_scope_;
  if ( !extension_scope )
  {
    v5 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return offsets[v5];
  }
  return offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))];
};
