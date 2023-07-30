// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/message.h

// Line 201: range 000000000C8BD7D0-000000000C8BD7FD
google::protobuf::Message *__fastcall google::protobuf::Message::New(
        const google::protobuf::Message *const this,
        google::protobuf::Arena *arena)
{
  google::protobuf::Message *v2; // rax
  google::protobuf::Message *v3; // r12

  v2 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Message *const))this->_vptr_MessageLite
                                     + 3))(this);
  v3 = v2;
  if ( arena )
    google::protobuf::Arena::Own<google::protobuf::Message>(arena, v2);
  return v3;
};

// Line 341: range 000000000C8AB290-000000000C8AB2A4
const google::protobuf::Message::Reflection *__fastcall google::protobuf::Message::GetReflection(
        const google::protobuf::Message *const this)
{
  const google::protobuf::Message::Reflection *v1; // rdx

  (*((void (__fastcall **)(const google::protobuf::Message *const))this->_vptr_MessageLite + 24))(this);
  return v1;
};

// Line 457: range 000000000C8BC650-000000000C8BC652
bool __fastcall google::protobuf::Reflection::HasOneof(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *a2,
        const google::protobuf::OneofDescriptor *a3)
{
  return 0;
};

// Line 460: range 000000000C8BC660-000000000C8BC672
void __fastcall google::protobuf::Reflection::ClearOneof(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *a2,
        const google::protobuf::OneofDescriptor *a3)
{
  ;
};

// Line 882: range 000000000C8BC680-000000000C8BC682
bool __fastcall google::protobuf::Reflection::SupportsUnknownEnumValues(const google::protobuf::Reflection *const this)
{
  return 0;
};

// Line 913: range 000000000C8BC690-000000000C8BC693
const void *__fastcall google::protobuf::Reflection::GetRawRepeatedField(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::FieldDescriptor::CppType cpptype,
        int ctype,
        const google::protobuf::Descriptor *message_type)
{
  return (const void *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor::CppType, int, const google::protobuf::Descriptor *))this->_vptr_Reflection
                        + 81))(
                         this,
                         message,
                         field,
                         cpptype,
                         ctype,
                         message_type);
};

// Line 970: range 000000000C8BC6A0-000000000C8BC6A2
bool __fastcall google::protobuf::Reflection::ContainsMapKey(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        const google::protobuf::MapKey *a4)
{
  return 0;
};

// Line 980: range 000000000C8BC6B0-000000000C8BC6B2
bool __fastcall google::protobuf::Reflection::InsertOrLookupMapValue(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        const google::protobuf::MapKey *a4,
        google::protobuf::MapValueRef *a5)
{
  return 0;
};

// Line 988: range 000000000C8BC6C0-000000000C8BC6C2
bool __fastcall google::protobuf::Reflection::DeleteMapValue(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        const google::protobuf::MapKey *a4)
{
  return 0;
};

// Line 1009: range 000000000C8BC6D0-000000000C8BC6D2
int __fastcall google::protobuf::Reflection::MapSize(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  return 0;
};

// Line 1016: range 000000000C8BC6E0-000000000C8BC6E2
google::protobuf::internal::MapFieldBase *__fastcall google::protobuf::Reflection::MapData(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  return 0LL;
};
