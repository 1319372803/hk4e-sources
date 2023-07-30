// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/generated_message_reflection.cc

// Line 64: range 000000000C8A2FC0-000000000C8A2FE3
bool __fastcall google::protobuf::internal::ParseNamedEnum(
        const google::protobuf::EnumDescriptor *descriptor,
        const std::string *name,
        int *value)
{
  const google::protobuf::EnumValueDescriptor *ValueByName; // rax

  ValueByName = google::protobuf::EnumDescriptor::FindValueByName(descriptor, name);
  if ( !ValueByName )
    return 0;
  *value = ValueByName->number_;
  return 1;
};

// Line 71: range 000000000C8A2FF0-000000000C8A3057
google::protobuf::internal::ExplicitlyConstructed<std::string > *__fastcall google::protobuf::internal::NameOfEnum[abi:cxx11](
        const google::protobuf::EnumDescriptor *a1,
        int a2)
{
  const google::protobuf::EnumValueDescriptor *ValueByNumber; // rax
  google::protobuf::internal::ExplicitlyConstructed<std::string > *result; // rax
  google::protobuf::internal::FunctionClosure0 v4; // [rsp+0h] [rbp-28h] BYREF

  ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(a1, a2);
  if ( ValueByNumber )
    return (google::protobuf::internal::ExplicitlyConstructed<std::string > *)ValueByNumber->name_;
  result = &google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v4._vptr_Closure = (int (**)(...))off_1A16E058;
    v4.function_ = google::protobuf::internal::InitEmptyString;
    v4.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, &v4);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v4);
    return &google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  }
  return result;
};

// Line 84: range 000000000C8A6EE0-000000000C8A6EF8
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::internal::GeneratedMessageReflection::MutableUnknownFields(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // rdi

  v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *)((char *)message + (unsigned int)this->schema_.metadata_offset_);
  if ( ((__int64)v2->ptr_ & 1) != 0 )
    return (google::protobuf::UnknownFieldSet *)((unsigned __int64)v2->ptr_ & 0xFFFFFFFFFFFFFFFELL);
  else
    return google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(v2);
};

// Line 100: range 000000000C8A06C0-000000000C8A0779
void __fastcall google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
        const std::string **this,
        const google::protobuf::Descriptor *a2,
        const google::protobuf::FieldDescriptor *a3,
        const char *a4,
        const char *a5)
{
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    &v16,
    LOGLEVEL_FATAL_0,
    "google/protobuf/generated_message_reflection.cc",
    101);
  v7 = google::protobuf::internal::LogMessage::operator<<(
         &v16,
         "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, (const char *)a3);
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, "\n  Message type: ");
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, this[1]);
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, aField_8);
  v12 = google::protobuf::internal::LogMessage::operator<<(v11, a2->full_name_);
  v13 = google::protobuf::internal::LogMessage::operator<<(v12, &ptr[3]);
  v14 = google::protobuf::internal::LogMessage::operator<<(v13, a4);
  google::protobuf::internal::LogFinisher::operator=(&v15, v14);
  google::protobuf::internal::LogMessage::~LogMessage(&v16);
};

// Line 101: range 000000000C72A840-000000000C72A84D
void __fastcall __noreturn google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
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

// Line 126: range 000000000C8A0780-000000000C8A0870
void __fastcall google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
        const std::string **this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptor *a3,
        const char *a4,
        google::protobuf::FieldDescriptor::CppType a5)
{
  __int64 v6; // rbx
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // r12
  int v16; // eax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogFinisher v18; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v19; // [rsp+10h] [rbp-68h] BYREF

  v6 = (int)a4;
  google::protobuf::internal::LogMessage::LogMessage(
    &v19,
    LOGLEVEL_FATAL_0,
    "google/protobuf/generated_message_reflection.cc",
    127);
  v7 = google::protobuf::internal::LogMessage::operator<<(
         &v19,
         "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, (const char *)a3);
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, "\n  Message type: ");
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, this[1]);
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, aField_8);
  v12 = google::protobuf::internal::LogMessage::operator<<(v11, a2->full_name_);
  v13 = google::protobuf::internal::LogMessage::operator<<(
          v12,
          "\n  Problem     : Field is not the right type for this message:\n    Expected  : ");
  v14 = google::protobuf::internal::LogMessage::operator<<(
          v13,
          google::protobuf::internal::`anonymous namespace'::cpptype_names_[v6]);
  v15 = google::protobuf::internal::LogMessage::operator<<(v14, "\n    Field type: ");
  v16 = google::protobuf::FieldDescriptor::type(a2);
  v17 = google::protobuf::internal::LogMessage::operator<<(
          v15,
          google::protobuf::internal::`anonymous namespace'::cpptype_names_[google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v16]]);
  google::protobuf::internal::LogFinisher::operator=(&v18, v17);
  google::protobuf::internal::LogMessage::~LogMessage(&v19);
};

// Line 127: range 000000000C72A852-000000000C72A85F
void __fastcall __noreturn google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
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

// Line 139: range 000000000C8A0880-000000000C8A095E
void __fastcall google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageEnumTypeError(
        const std::string **this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptor *a3,
        const std::string **a4,
        const google::protobuf::EnumValueDescriptor *a5)
{
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // r12
  const google::protobuf::EnumDescriptor *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogFinisher v18; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v19; // [rsp+10h] [rbp-68h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    &v19,
    LOGLEVEL_FATAL_0,
    "google/protobuf/generated_message_reflection.cc",
    140);
  v7 = google::protobuf::internal::LogMessage::operator<<(
         &v19,
         "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, (const char *)a3);
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, "\n  Message type: ");
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, this[1]);
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, aField_8);
  v12 = google::protobuf::internal::LogMessage::operator<<(v11, a2->full_name_);
  v13 = google::protobuf::internal::LogMessage::operator<<(
          v12,
          "\n  Problem     : Enum value did not match field type:\n    Expected  : ");
  v14 = google::protobuf::FieldDescriptor::enum_type(a2);
  v15 = google::protobuf::internal::LogMessage::operator<<(v13, v14->full_name_);
  v16 = google::protobuf::internal::LogMessage::operator<<(v15, "\n    Actual    : ");
  v17 = google::protobuf::internal::LogMessage::operator<<(v16, a4[1]);
  google::protobuf::internal::LogFinisher::operator=(&v18, v17);
  google::protobuf::internal::LogMessage::~LogMessage(&v19);
};

// Line 140: range 000000000C72A864-000000000C72A871
void __fastcall __noreturn google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageEnumTypeError(
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

// Line 194: range 000000000C8A3060-000000000C8A30C9
__int64 __fastcall google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
        google::protobuf::internal::GeneratedMessageReflection *this,
        const google::protobuf::Descriptor *descriptor,
        const __m128i *a3,
        const google::protobuf::DescriptorPool *a4,
        google::protobuf::MessageFactory *a5)
{
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  int field_count; // eax
  __int64 result; // rax
  const google::protobuf::DescriptorPool *v11; // rax

  v5 = _mm_loadu_si128(a3);
  v6 = _mm_loadu_si128(a3 + 1);
  v7 = _mm_loadu_si128(a3 + 2);
  this->_vptr_Reflection = (int (**)(...))off_1A170880;
  this->descriptor_ = descriptor;
  *(__m128i *)&this->schema_.default_instance_ = v5;
  *(__m128i *)&this->schema_.has_bit_indices_ = v6;
  *(__m128i *)&this->schema_.extensions_offset_ = v7;
  if ( !a4 )
  {
    v11 = (const google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool((google::protobuf::DescriptorPool *)this);
    descriptor = this->descriptor_;
    a4 = v11;
  }
  this->last_non_weak_field_index_ = -1;
  field_count = descriptor->field_count_;
  this->message_factory_ = a5;
  result = (unsigned int)(field_count - 1);
  this->descriptor_pool_ = a4;
  this->last_non_weak_field_index_ = result;
  return result;
};

// Line 194: range 000000000C72A94C-000000000C72A957
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection()
{
  google::protobuf::Reflection *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::Reflection::~Reflection(v0);
  _Unwind_Resume(v1);
};

// Line 198: range 000000000C8A0610-000000000C8A0617
void __fastcall google::protobuf::internal::GeneratedMessageReflection::~GeneratedMessageReflection(
        google::protobuf::internal::GeneratedMessageReflection *const this)
{
  this->_vptr_Reflection = (int (**)(...))off_1A170880;
  google::protobuf::Reflection::~Reflection(this);
};

// Line 198: range 000000000C8A0620-000000000C8A0639
void __fastcall google::protobuf::internal::GeneratedMessageReflection::~GeneratedMessageReflection(
        google::protobuf::internal::GeneratedMessageReflection *const this)
{
  this->_vptr_Reflection = (int (**)(...))off_1A170880;
  google::protobuf::Reflection::~Reflection(this);
  operator delete(this, 0x58uLL);
};

// Line 202: range 000000000C8A0640-000000000C8A0674
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetUnknownFields(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message)
{
  __int64 v2; // rax

  if ( (this->descriptor_->file_->syntax_ != SYNTAX_PROTO3 || google::protobuf::internal::proto3_preserve_unknown_)
    && (v2 = *(__int64 *)((char *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_),
        (v2 & 1) != 0) )
  {
    return (const google::protobuf::UnknownFieldSet *)(v2 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
  }
};

// Line 218: range 000000000C8A79A0-000000000C8A7DF0
size_t __fastcall google::protobuf::internal::GeneratedMessageReflection::SpaceUsedLong(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message)
{
  __int64 object_size; // r14
  const google::protobuf::UnknownFieldSet *UnknownFields; // rax
  size_t v6; // rbx
  __int64 extensions_offset; // rax
  __int64 v8; // rbx
  int v9; // ebp
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  google::protobuf::FieldDescriptor::CppType v11; // eax
  const google::protobuf::Message *v12; // rdi
  const google::protobuf::Descriptor *descriptor; // rax
  google::protobuf::FieldDescriptor *v14; // r14
  int v15; // r13d
  const google::protobuf::internal::ArenaStringPtr *v16; // rax
  const google::protobuf::Descriptor *extension_scope; // rax
  const google::protobuf::RepeatedField<int> *v19; // rax
  __int64 v20; // rdx
  const google::protobuf::RepeatedField<long unsigned int> *v21; // rax
  __int64 v22; // rdx
  const google::protobuf::RepeatedField<double> *v23; // rax
  const google::protobuf::RepeatedField<float> *v24; // rax
  const google::protobuf::RepeatedField<bool> *v25; // rax
  const google::protobuf::RepeatedField<long int> *v26; // rax
  const google::protobuf::RepeatedField<unsigned int> *v27; // rax
  const google::protobuf::internal::RepeatedPtrFieldBase *v28; // rax
  __int64 v29; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v30; // rax
  __int64 v31; // r14
  int v32; // r13d
  __int64 v33; // rdi
  const google::protobuf::RepeatedPtrField<std::string > *v34; // rax
  __int64 v35; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v37; // r13d
  __int64 v38; // rdi
  const google::protobuf::internal::MapFieldBase *v39; // rax
  size_t total_size; // [rsp+8h] [rbp-50h]
  const google::protobuf::Message *default_instance; // [rsp+10h] [rbp-48h]
  const google::protobuf::internal::RepeatedPtrFieldBase *v42; // [rsp+10h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<std::string > *v43; // [rsp+10h] [rbp-48h]
  const google::protobuf::uint32 *offsets; // [rsp+18h] [rbp-40h]

  object_size = (unsigned int)this->schema_.object_size_;
  UnknownFields = google::protobuf::internal::GeneratedMessageReflection::GetUnknownFields(this, message);
  v6 = object_size + google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(UnknownFields);
  extensions_offset = (unsigned int)this->schema_.extensions_offset_;
  total_size = v6;
  if ( (_DWORD)extensions_offset != -1 )
    total_size = google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong((const google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset))
               + v6;
  if ( this->last_non_weak_field_index_ >= 0 )
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      descriptor = this->descriptor_;
      v14 = &descriptor->fields_[v8];
      if ( v14->label_ == LABEL_REPEATED )
        break;
      containing_oneof = v14->containing_oneof_;
      if ( containing_oneof
        && *(_DWORD *)((char *)&message->_vptr_MessageLite
                     + this->schema_.oneof_case_offset_
                     - 1431655764
                     * (unsigned int)(((char *)containing_oneof
                                     - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) != v14->number_ )
      {
        goto LABEL_12;
      }
      v11 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v14)];
      if ( v11 != CPPTYPE_STRING_0 )
      {
        if ( v11 == CPPTYPE_MESSAGE_0 && message != this->schema_.default_instance_ )
        {
          v12 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::Message const*>(
                   this,
                   message,
                   v14);
          if ( v12 )
            total_size += (*((__int64 (__fastcall **)(const google::protobuf::Message *))v12->_vptr_MessageLite + 21))(v12);
        }
        goto LABEL_12;
      }
      if ( v14->is_extension_ )
      {
        extension_scope = v14->extension_scope_;
        v15 = extension_scope
            ? 678152731 * (((char *)v14 - (char *)extension_scope->extensions_) >> 3)
            : 678152731 * (unsigned int)(((char *)v14 - (char *)v14->file_->extensions_) >> 3);
      }
      else
      {
        v15 = 678152731 * (((char *)v14 - (char *)v14->containing_type_->fields_) >> 3);
      }
      offsets = this->schema_.offsets_;
      default_instance = this->schema_.default_instance_;
      v16 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::ArenaStringPtr>(
              this,
              message,
              v14);
      if ( *(int (***)(...))((char *)&default_instance->_vptr_MessageLite + offsets[v15]) == (int (**)(...))v16->ptr_ )
      {
LABEL_12:
        ++v9;
        ++v8;
        if ( this->last_non_weak_field_index_ < v9 )
          return total_size;
      }
      else
      {
        ++v9;
        ++v8;
        total_size += google::protobuf::internal::StringSpaceUsedExcludingSelfLong(v16->ptr_) + 32;
        if ( this->last_non_weak_field_index_ < v9 )
          return total_size;
      }
    }
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(&descriptor->fields_[v8]) )
    {
      case 1u:
        v23 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<double>>(
                this,
                message,
                v14);
        v22 = v23->total_size_;
        if ( v23->rep_ )
          goto LABEL_26;
        break;
      case 2u:
        v24 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<float>>(
                this,
                message,
                v14);
        v20 = v24->total_size_;
        if ( v24->rep_ )
          goto LABEL_23;
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        v26 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<long>>(
                this,
                message,
                v14);
        v22 = v26->total_size_;
        if ( v26->rep_ )
          goto LABEL_26;
        break;
      case 4u:
      case 6u:
        v21 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned long>>(
                this,
                message,
                v14);
        v22 = v21->total_size_;
        if ( v21->rep_ )
LABEL_26:
          total_size += 8 * v22 + 8;
        break;
      case 5u:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        v19 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<int>>(
                this,
                message,
                v14);
        v20 = v19->total_size_;
        if ( v19->rep_ )
          goto LABEL_23;
        break;
      case 7u:
      case 0xDu:
        v27 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned int>>(
                this,
                message,
                v14);
        v20 = v27->total_size_;
        if ( v27->rep_ )
LABEL_23:
          total_size += 4 * v20 + 8;
        break;
      case 8u:
        v25 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<bool>>(
                this,
                message,
                v14);
        if ( v25->rep_ )
          total_size += v25->total_size_ + 8LL;
        break;
      case 9u:
      case 0xCu:
        v34 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedPtrField<std::string>>(
                this,
                message,
                v14);
        v35 = v34->total_size_;
        v43 = v34;
        rep = v34->rep_;
        v31 = 8 * v35;
        if ( !rep )
          goto LABEL_43;
        if ( rep->allocated_size > 0 )
        {
          v37 = 0;
          do
          {
            v38 = v37++;
            v31 += google::protobuf::internal::StringSpaceUsedExcludingSelfLong((const std::string *)rep->elements[v38])
                 + 32;
            rep = v43->rep_;
          }
          while ( rep->allocated_size > v37 );
        }
        goto LABEL_42;
      case 0xAu:
      case 0xBu:
        if ( google::protobuf::FieldDescriptor::is_map(v14) )
        {
          v39 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
                  this,
                  message,
                  v14);
          total_size += google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong(v39);
        }
        else
        {
          v28 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::RepeatedPtrFieldBase>(
                  this,
                  message,
                  v14);
          v29 = v28->total_size_;
          v42 = v28;
          v30 = v28->rep_;
          v31 = 8 * v29;
          if ( v30 )
          {
            if ( v30->allocated_size > 0 )
            {
              v32 = 0;
              do
              {
                v33 = v32++;
                v31 += (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v30->elements[v33] + 168LL))(v30->elements[v33]);
                v30 = v42->rep_;
              }
              while ( v30->allocated_size > v32 );
            }
LABEL_42:
            v31 += 8LL;
          }
LABEL_43:
          total_size += v31;
        }
        break;
      default:
        goto LABEL_12;
    }
    goto LABEL_12;
  }
  return total_size;
};

// Line 333: range 000000000C8A96E0-000000000C8A9E86
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SwapField(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Message *a3,
        google::protobuf::FieldDescriptor *a4)
{
  google::protobuf::uint32 v7; // eax
  int *v8; // rsi
  int *v9; // rdi
  int v10; // eax
  google::protobuf::uint32 v11; // eax
  __int64 *v12; // rsi
  __int64 *v13; // rdi
  __int64 v14; // rax
  google::protobuf::uint32 v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  google::protobuf::uint32 v20; // eax
  __int64 *v21; // r8
  __int64 *v22; // rcx
  google::protobuf::Message *v23; // r15
  __int64 v24; // r9
  google::protobuf::Message v25; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v26)(const google::protobuf::Message *const); // rdx
  __int64 *v27; // rcx
  __int64 *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 metadata_offset; // rax
  google::protobuf::Arena *hint; // rbx
  __int64 v33; // rax
  google::protobuf::Arena *v34; // r15
  google::protobuf::uint32 v35; // eax
  std::forward_iterator_tag v36; // cl
  std::string **v37; // r8
  __int64 *v38; // r12
  std::string *v39; // rdx
  int v40; // eax
  std::string *v41; // r14
  std::string::size_type M_string_length; // rax
  google::protobuf::uint32 v43; // eax
  __int64 *v44; // rsi
  __int64 *v45; // rdi
  __int64 v46; // xmm0_8
  google::protobuf::uint32 v47; // eax
  int *v48; // rsi
  int *v49; // rdi
  int v50; // xmm0_4
  google::protobuf::uint32 v51; // eax
  _BYTE *v52; // rsi
  _BYTE *v53; // rdi
  google::protobuf::internal::LogMessage_0 *v54; // r12
  int v55; // eax
  google::protobuf::internal::LogMessage_0 *v56; // rax
  google::protobuf::uint32 v57; // eax
  google::protobuf::uint32 v58; // eax
  google::protobuf::uint32 FieldOffset; // eax
  google::protobuf::uint32 v60; // eax
  google::protobuf::uint32 v61; // eax
  google::protobuf::uint32 v62; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v63; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase *v64; // rsi
  const google::protobuf::internal::ReflectionSchema *p_schema; // r13
  google::protobuf::uint32 v66; // eax
  google::protobuf::uint32 v67; // eax
  google::protobuf::Message *v68; // rax
  google::protobuf::internal::LogMessage_0 *v69; // r12
  int v70; // eax
  google::protobuf::internal::LogMessage_0 *v71; // rax
  const google::protobuf::Descriptor *extension_scope; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v73; // rax
  int v74; // edx
  int v75; // edx
  __int64 (__fastcall *v76)(google::protobuf::Message *, __int64); // rbx
  google::protobuf::Arena *(__fastcall *v77)(const google::protobuf::MessageLite *const); // rax
  __int64 v78; // rax
  __int64 (__fastcall *v79)(__int64, google::protobuf::Message *); // rbx
  google::protobuf::Arena *(__fastcall *v80)(const google::protobuf::MessageLite *const); // rax
  __int64 v81; // rax
  google::protobuf::uint32 v82; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v83; // r14
  google::protobuf::uint32 v84; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v85; // rsi
  __int64 v86; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 *v92; // [rsp+8h] [rbp-A0h]
  std::string **v93; // [rsp+8h] [rbp-A0h]
  __int64 *v94; // [rsp+8h] [rbp-A0h]
  __int64 *v95; // [rsp+8h] [rbp-A0h]
  __int64 *v96; // [rsp+8h] [rbp-A0h]
  __int64 v97; // [rsp+8h] [rbp-A0h]
  __int64 *v98; // [rsp+10h] [rbp-98h]
  __int64 *v99; // [rsp+10h] [rbp-98h]
  __int64 *v100; // [rsp+10h] [rbp-98h]
  __int64 *v101; // [rsp+10h] [rbp-98h]
  __int64 *v102; // [rsp+10h] [rbp-98h]
  __int64 *v103; // [rsp+18h] [rbp-90h]
  google::protobuf::internal::LogFinisher v104; // [rsp+2Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v105[2]; // [rsp+30h] [rbp-78h] BYREF

  if ( a4->label_ == LABEL_REPEATED )
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a4) )
    {
      case 1u:
        FieldOffset = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<double>::Swap(
          (google::protobuf::RepeatedField<double> *const)((char *)message + FieldOffset),
          (google::protobuf::RepeatedField<double> *)((char *)a3 + FieldOffset));
        break;
      case 2u:
        v60 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<float>::Swap(
          (google::protobuf::RepeatedField<float> *const)((char *)message + v60),
          (google::protobuf::RepeatedField<float> *)((char *)a3 + v60));
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        v57 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<long>::Swap(
          (google::protobuf::RepeatedField<long int> *const)((char *)message + v57),
          (google::protobuf::RepeatedField<long int> *)((char *)a3 + v57));
        break;
      case 4u:
      case 6u:
        v58 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<unsigned long>::Swap(
          (google::protobuf::RepeatedField<long unsigned int> *const)((char *)message + v58),
          (google::protobuf::RepeatedField<long unsigned int> *)((char *)a3 + v58));
        break;
      case 5u:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        v15 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<int>::Swap(
          (google::protobuf::RepeatedField<int> *const)((char *)message + v15),
          (google::protobuf::RepeatedField<int> *)((char *)a3 + v15));
        break;
      case 7u:
      case 0xDu:
        v67 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<unsigned int>::Swap(
          (google::protobuf::RepeatedField<unsigned int> *const)((char *)message + v67),
          (google::protobuf::RepeatedField<unsigned int> *)((char *)a3 + v67));
        break;
      case 8u:
        v61 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        google::protobuf::RepeatedField<bool>::Swap(
          (google::protobuf::RepeatedField<bool> *const)((char *)message + v61),
          (google::protobuf::RepeatedField<bool> *)((char *)a3 + v61));
        break;
      case 9u:
      case 0xCu:
        v62 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v63 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + v62);
        v64 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)a3 + v62);
        if ( v63->arena_ == v64->arena_ )
          goto LABEL_52;
        google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::internal::GenericTypeHandler<std::string>>(
          v63,
          v64);
        break;
      case 0xAu:
      case 0xBu:
        p_schema = &this->schema_;
        if ( google::protobuf::FieldDescriptor::is_map(a4) )
        {
          v82 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(p_schema, a4);
          v83 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v82));
          v84 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(p_schema, a4);
          v85 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)a3 + v84));
          if ( v83->arena_ == v85->arena_ )
          {
            rep = v83->rep_;
            v83->rep_ = v85->rep_;
            current_size = v85->current_size_;
            v85->rep_ = rep;
            LODWORD(rep) = v83->current_size_;
            v83->current_size_ = current_size;
            total_size = v85->total_size_;
            v85->current_size_ = (int)rep;
            LODWORD(rep) = v83->total_size_;
            v83->total_size_ = total_size;
            v85->total_size_ = (int)rep;
          }
          else
          {
            google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
              v83,
              v85);
          }
        }
        else
        {
          v66 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(p_schema, a4);
          v63 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + v66);
          v64 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)a3 + v66);
          if ( v63->arena_ == v64->arena_ )
          {
LABEL_52:
            v73 = v63->rep_;
            v63->rep_ = v64->rep_;
            v74 = v64->current_size_;
            v64->rep_ = v73;
            LODWORD(v73) = v63->current_size_;
            v63->current_size_ = v74;
            v75 = v64->total_size_;
            v64->current_size_ = (int)v73;
            LODWORD(v73) = v63->total_size_;
            v63->total_size_ = v75;
            v64->total_size_ = (int)v73;
          }
          else
          {
            google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
              v63,
              v64);
          }
        }
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          v105,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_reflection.cc",
          377);
        v69 = google::protobuf::internal::LogMessage::operator<<(v105, (const char *)&stru_1A170185.full_name_ + 2);
        v70 = google::protobuf::FieldDescriptor::type(a4);
        v71 = google::protobuf::internal::LogMessage::operator<<(
                v69,
                google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v70]);
        google::protobuf::internal::LogFinisher::operator=(&v104, v71);
LABEL_35:
        google::protobuf::internal::LogMessage::~LogMessage(v105);
        break;
    }
  }
  else
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a4) )
    {
      case 1u:
        v43 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v44 = (__int64 *)((char *)a3 + v43);
        v45 = (__int64 *)((char *)message + v43);
        v46 = *v45;
        *v45 = *v44;
        *v44 = v46;
        break;
      case 2u:
        v47 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v48 = (int *)((char *)a3 + v47);
        v49 = (int *)((char *)message + v47);
        v50 = *v49;
        *v49 = *v48;
        *v48 = v50;
        break;
      case 3u:
      case 4u:
      case 6u:
      case 0x10u:
      case 0x12u:
        v11 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v12 = (__int64 *)((char *)a3 + v11);
        v13 = (__int64 *)((char *)message + v11);
        v14 = *v13;
        *v13 = *v12;
        *v12 = v14;
        break;
      case 5u:
      case 7u:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        v7 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v8 = (int *)((char *)a3 + v7);
        v9 = (int *)((char *)message + v7);
        v10 = *v9;
        *v9 = *v8;
        *v8 = v10;
        break;
      case 8u:
        v51 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v52 = (char *)a3 + v51;
        v53 = (char *)message + v51;
        LOBYTE(v51) = *v53;
        *v53 = *v52;
        *v52 = v51;
        break;
      case 9u:
      case 0xCu:
        metadata_offset = (unsigned int)this->schema_.metadata_offset_;
        hint = (google::protobuf::Arena *)(*(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + metadata_offset) & 0xFFFFFFFFFFFFFFFELL);
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + metadata_offset) & 1) != 0 )
          hint = (google::protobuf::Arena *)hint->impl_.hint_;
        v33 = *(__int64 *)((char *)&a3->_vptr_MessageLite + metadata_offset);
        v34 = (google::protobuf::Arena *)(v33 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v33 & 1) != 0 )
          v34 = (google::protobuf::Arena *)v34->impl_.hint_;
        v35 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v37 = (std::string **)((char *)message + v35);
        v38 = (__int64 *)((char *)a3 + v35);
        v39 = *v37;
        if ( v34 == hint )
        {
          *v37 = (std::string *)*v38;
          *v38 = (__int64)v39;
        }
        else
        {
          if ( a4->is_extension_ )
          {
            extension_scope = a4->extension_scope_;
            if ( extension_scope )
              v40 = 678152731 * (((char *)a4 - (char *)extension_scope->extensions_) >> 3);
            else
              v40 = 678152731 * (((char *)a4 - (char *)a4->file_->extensions_) >> 3);
          }
          else
          {
            v40 = 678152731 * (((char *)a4 - (char *)a4->containing_type_->fields_) >> 3);
          }
          v93 = v37;
          v41 = *(std::string **)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                                + (unsigned int)this->schema_.offsets_[v40]);
          M_string_length = v39->_M_string_length;
          *(_QWORD *)&v105[0].level_ = &v105[0].line_;
          std::string::_M_construct<char *>(
            (std::string *const)v105,
            v39->_M_dataplus._M_p,
            &v39->_M_dataplus._M_p[M_string_length],
            v36);
          if ( v41 == *v93 )
            google::protobuf::internal::ArenaStringPtr::CreateInstance(v93, hint, *v38);
          else
            std::string::_M_assign(*v93, *v38);
          if ( v41 == (std::string *)*v38 )
            google::protobuf::internal::ArenaStringPtr::CreateInstance((std::string **)v38, v34, (__int64)v105);
          else
            std::string::_M_assign(*v38, v105);
          if ( *(google::protobuf::internal::LogMessage_0 **)&v105[0].level_ != (google::protobuf::internal::LogMessage_0 *)&v105[0].line_ )
            operator delete(*(void **)&v105[0].level_);
        }
        break;
      case 0xAu:
      case 0xBu:
        v16 = (unsigned int)this->schema_.metadata_offset_;
        v17 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + v16) & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + v16) & 1) != 0 )
          v17 = *(_QWORD *)(v17 + 8);
        v18 = *(__int64 *)((char *)&a3->_vptr_MessageLite + v16);
        v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v18 & 1) != 0 )
          v19 = *(_QWORD *)(v19 + 8);
        v20 = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, a4);
        v21 = (__int64 *)((char *)message + v20);
        v22 = (__int64 *)((char *)a3 + v20);
        if ( v19 == v17 )
        {
          v68 = (google::protobuf::Message *)*v21;
          *v21 = *v22;
          *v22 = (__int64)v68;
        }
        else
        {
          v23 = (google::protobuf::Message *)*v21;
          v24 = *v22;
          if ( *v21 )
          {
            v25._vptr_MessageLite = v23->_vptr_MessageLite;
            if ( v24 )
            {
              v26 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)v25._vptr_MessageLite + 23);
              v98 = v21;
              v92 = v22;
              if ( v26 == google::protobuf::Message::GetReflection )
              {
                (*((void (__fastcall **)(google::protobuf::Message *))v25._vptr_MessageLite + 24))(v23);
                v27 = v92;
                v28 = v98;
                v30 = v29;
              }
              else
              {
                v86 = (__int64)v26(v23);
                v28 = v98;
                v27 = v92;
                v30 = v86;
              }
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 104LL))(v30, *v28, *v27);
            }
            else
            {
              v76 = (__int64 (__fastcall *)(google::protobuf::Message *, __int64))*((_QWORD *)v25._vptr_MessageLite + 4);
              v77 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)a3->_vptr_MessageLite + 5);
              if ( v77 != google::protobuf::MessageLite::GetArena )
              {
                v101 = v21;
                v96 = v22;
                v90 = (__int64)v77(a3);
                v21 = v101;
                v22 = v96;
                v24 = v90;
              }
              v99 = v21;
              v94 = v22;
              v78 = v76(v23, v24);
              *v94 = v78;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 144LL))(v78, *v99);
              google::protobuf::internal::GeneratedMessageReflection::ClearField(this, message, a4);
            }
          }
          else if ( v24 )
          {
            v79 = *(__int64 (__fastcall **)(__int64, google::protobuf::Message *))(*(_QWORD *)v24 + 32LL);
            v80 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite + 5);
            if ( v80 != google::protobuf::MessageLite::GetArena )
            {
              v103 = v21;
              v102 = v22;
              v97 = *v22;
              v91 = (__int64)v80(message);
              v21 = v103;
              v22 = v102;
              v24 = v97;
              v23 = (google::protobuf::Message *)v91;
            }
            v100 = v21;
            v95 = v22;
            v81 = v79(v24, v23);
            *v100 = v81;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v81 + 144LL))(v81, *v95);
            google::protobuf::internal::GeneratedMessageReflection::ClearField(this, a3, a4);
          }
        }
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          v105,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_reflection.cc",
          446);
        v54 = google::protobuf::internal::LogMessage::operator<<(v105, (const char *)&stru_1A170185.full_name_ + 2);
        v55 = google::protobuf::FieldDescriptor::type(a4);
        v56 = google::protobuf::internal::LogMessage::operator<<(
                v54,
                google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v55]);
        google::protobuf::internal::LogFinisher::operator=(&v104, v56);
        goto LABEL_35;
    }
  }
};

// Line 446: range 000000000C72AAC0-000000000C72AACB
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::SwapField()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r13

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 454: range 000000000C8A9F80-000000000C8AA7D0
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SwapOneofField(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Message *a3,
        const google::protobuf::OneofDescriptor *oneof_descriptor)
{
  google::protobuf::FieldDescriptor *FieldByNumber; // r15
  const google::protobuf::Descriptor *containing_type; // rax
  int oneof_case_offset; // edx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  const int *v13; // rax
  const bool *v14; // rax
  google::protobuf::Message *v15; // rax
  const __int64 *v16; // rax
  const unsigned int *v17; // rax
  const unsigned __int64 *v18; // rax
  const double *v19; // rax
  const float *v20; // rax
  void *M_p; // rdi
  const char *filename; // rdx
  std::string::size_type M_allocated_capacity; // r8
  google::protobuf::internal::LogMessage_0 *v24; // r14
  int v25; // eax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rbp
  int v28; // eax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  int v30; // eax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  int key; // [rsp+8h] [rbp-E0h]
  google::protobuf::FieldDescriptor *keya; // [rsp+8h] [rbp-E0h]
  google::protobuf::Message *sub_message; // [rsp+10h] [rbp-D8h]
  google::protobuf::internal::LogMessage_0 *sub_messagea; // [rsp+10h] [rbp-D8h]
  bool v36; // [rsp+26h] [rbp-C2h] BYREF
  google::protobuf::internal::LogFinisher v37; // [rsp+27h] [rbp-C1h] BYREF
  int v38; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+2Ch] [rbp-BCh] BYREF
  float v40; // [rsp+30h] [rbp-B8h] BYREF
  int v41; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v42; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+40h] [rbp-A8h] BYREF
  google::protobuf::internal::LogFinisher v44[8]; // [rsp+48h] [rbp-A0h] BYREF
  std::string v45; // [rsp+50h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 src[2]; // [rsp+70h] [rbp-78h] BYREF

  FieldByNumber = 0LL;
  containing_type = oneof_descriptor->containing_type_;
  oneof_case_offset = this->schema_.oneof_case_offset_;
  v45._M_string_length = 0LL;
  v10 = (char *)oneof_descriptor - (char *)containing_type->oneof_decls_;
  v45._anon_0._M_local_buf[0] = 0;
  sub_message = 0LL;
  v11 = oneof_case_offset - 1431655764 * (unsigned int)(v10 >> 4);
  v12 = *(_DWORD *)((char *)&message->_vptr_MessageLite + v11);
  key = *(_DWORD *)((char *)&a3->_vptr_MessageLite + v11);
  v45._M_dataplus._M_p = v45._anon_0._M_local_buf;
  if ( v12 )
  {
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                           this->descriptor_,
                                                           v12);
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByNumber) )
    {
      case 1u:
        sub_message = 0LL;
        *(double *)v44[0].gap0 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<double>(
                                    this,
                                    message,
                                    FieldByNumber);
        break;
      case 2u:
        sub_message = 0LL;
        v40 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<float>(this, message, FieldByNumber);
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        sub_message = 0LL;
        v42 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<long>(this, message, FieldByNumber);
        break;
      case 4u:
      case 6u:
        sub_message = 0LL;
        v43 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned long>(
                 this,
                 message,
                 FieldByNumber);
        break;
      case 5u:
      case 0xFu:
      case 0x11u:
        sub_message = 0LL;
        v38 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, message, FieldByNumber);
        break;
      case 7u:
      case 0xDu:
        sub_message = 0LL;
        v39 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned int>(
                 this,
                 message,
                 FieldByNumber);
        break;
      case 8u:
        sub_message = 0LL;
        v36 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<bool>(this, message, FieldByNumber);
        break;
      case 9u:
      case 0xCu:
        google::protobuf::internal::GeneratedMessageReflection::GetString[abi:cxx11](
          (std::string *)src,
          this,
          message,
          FieldByNumber);
        M_p = v45._M_dataplus._M_p;
        filename = src[0].filename_;
        if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ == (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
        {
          if ( src[0].filename_ )
          {
            if ( src[0].filename_ == (const char *)1 )
              *v45._M_dataplus._M_p = src[0].line_;
            else
              memcpy(v45._M_dataplus._M_p, &src[0].line_, (size_t)src[0].filename_);
            filename = src[0].filename_;
            M_p = v45._M_dataplus._M_p;
          }
          v45._M_string_length = (std::string::size_type)filename;
          filename[(_QWORD)M_p] = 0;
          M_p = *(void **)&src[0].level_;
          goto LABEL_41;
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45._M_dataplus._M_p == &v45._anon_0 )
        {
          v45._M_dataplus._M_p = *(std::string::pointer *)&src[0].level_;
          v45._M_string_length = (std::string::size_type)src[0].filename_;
          v45._anon_0._M_allocated_capacity = *(_QWORD *)&src[0].line_;
        }
        else
        {
          M_allocated_capacity = v45._anon_0._M_allocated_capacity;
          v45._M_dataplus._M_p = *(std::string::pointer *)&src[0].level_;
          v45._M_string_length = (std::string::size_type)src[0].filename_;
          v45._anon_0._M_allocated_capacity = *(_QWORD *)&src[0].line_;
          if ( M_p )
          {
            *(_QWORD *)&src[0].level_ = M_p;
            *(_QWORD *)&src[0].line_ = M_allocated_capacity;
            goto LABEL_41;
          }
        }
        *(_QWORD *)&src[0].level_ = &src[0].line_;
        M_p = &src[0].line_;
LABEL_41:
        src[0].filename_ = 0LL;
        *(_BYTE *)M_p = 0;
        if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
          operator delete(*(void **)&src[0].level_);
        goto LABEL_43;
      case 0xAu:
      case 0xBu:
        sub_message = google::protobuf::internal::GeneratedMessageReflection::ReleaseMessage(
                        this,
                        message,
                        FieldByNumber,
                        0LL);
        break;
      case 0xEu:
        sub_message = 0LL;
        v41 = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, message, FieldByNumber);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          src,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_reflection.cc",
          498);
        sub_messagea = google::protobuf::internal::LogMessage::operator<<(
                         src,
                         (const char *)&stru_1A170185.full_name_ + 2);
        v30 = google::protobuf::FieldDescriptor::type(FieldByNumber);
        v31 = google::protobuf::internal::LogMessage::operator<<(
                sub_messagea,
                google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v30]);
        google::protobuf::internal::LogFinisher::operator=(v44, v31);
        google::protobuf::internal::LogMessage::~LogMessage(src);
LABEL_43:
        sub_message = 0LL;
        break;
    }
  }
  if ( key )
  {
    keya = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(this->descriptor_, key);
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(keya) )
    {
      case 1u:
        v19 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<double>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<double>(this, message, keya, v19);
        break;
      case 2u:
        v20 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<float>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<float>(this, message, keya, v20);
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        v16 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<long>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<long>(this, message, keya, v16);
        break;
      case 4u:
      case 6u:
        v18 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned long>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned long>(this, message, keya, v18);
        break;
      case 5u:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        v13 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<int>(this, message, keya, v13);
        break;
      case 7u:
      case 0xDu:
        v17 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned int>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned int>(this, message, keya, v17);
        break;
      case 8u:
        v14 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<bool>(this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetField<bool>(this, message, keya, v14);
        break;
      case 9u:
      case 0xCu:
        google::protobuf::internal::GeneratedMessageReflection::GetString[abi:cxx11]((std::string *)src, this, a3, keya);
        google::protobuf::internal::GeneratedMessageReflection::SetString(this, message, keya, (const std::string *)src);
        if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
          operator delete(*(void **)&src[0].level_);
        break;
      case 0xAu:
      case 0xBu:
        v15 = google::protobuf::internal::GeneratedMessageReflection::ReleaseMessage(this, a3, keya, 0LL);
        google::protobuf::internal::GeneratedMessageReflection::SetAllocatedMessage(this, message, v15, keya);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          src,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_reflection.cc",
          532);
        v24 = google::protobuf::internal::LogMessage::operator<<(src, (const char *)&stru_1A170185.full_name_ + 2);
        v25 = google::protobuf::FieldDescriptor::type(keya);
        v26 = google::protobuf::internal::LogMessage::operator<<(
                v24,
                google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v25]);
        google::protobuf::internal::LogFinisher::operator=(&v37, v26);
        google::protobuf::internal::LogMessage::~LogMessage(src);
        break;
    }
  }
  else
  {
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, oneof_descriptor);
  }
  if ( v12 )
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByNumber) )
    {
      case 1u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<double>(
          this,
          a3,
          FieldByNumber,
          (const double *)v44[0].gap0);
        break;
      case 2u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<float>(this, a3, FieldByNumber, &v40);
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<long>(this, a3, FieldByNumber, &v42);
        break;
      case 4u:
      case 6u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned long>(this, a3, FieldByNumber, &v43);
        break;
      case 5u:
      case 0xFu:
      case 0x11u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<int>(this, a3, FieldByNumber, &v38);
        break;
      case 7u:
      case 0xDu:
        google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned int>(this, a3, FieldByNumber, &v39);
        break;
      case 8u:
        google::protobuf::internal::GeneratedMessageReflection::SetField<bool>(this, a3, FieldByNumber, &v36);
        break;
      case 9u:
      case 0xCu:
        google::protobuf::internal::GeneratedMessageReflection::SetString(this, a3, FieldByNumber, &v45);
        break;
      case 0xAu:
      case 0xBu:
        google::protobuf::internal::GeneratedMessageReflection::SetAllocatedMessage(
          this,
          a3,
          sub_message,
          FieldByNumber);
        break;
      case 0xEu:
        google::protobuf::internal::GeneratedMessageReflection::SetField<int>(this, a3, FieldByNumber, &v41);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          src,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_reflection.cc",
          564);
        v27 = google::protobuf::internal::LogMessage::operator<<(src, (const char *)&stru_1A170185.full_name_ + 2);
        v28 = google::protobuf::FieldDescriptor::type(FieldByNumber);
        v29 = google::protobuf::internal::LogMessage::operator<<(
                v27,
                google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v28]);
        google::protobuf::internal::LogFinisher::operator=(&v37, v29);
        google::protobuf::internal::LogMessage::~LogMessage(src);
        break;
    }
  }
  else
  {
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, a3, oneof_descriptor);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45._M_dataplus._M_p != &v45._anon_0 )
    operator delete(v45._M_dataplus._M_p);
};

// Line 564: range 000000000C72AAF8-000000000C72AB19
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::SwapOneofField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        google::protobuf::internal::LogMessage_0 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(a9);
  if ( a16 != &a18 )
    operator delete(a16);
  _Unwind_Resume(v18);
};

// Line 574: range 000000000C8AA7E0-000000000C8AAC5F
void __fastcall google::protobuf::internal::GeneratedMessageReflection::Swap(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3)
{
  const google::protobuf::Message::Reflection *(__fastcall *v6)(const google::protobuf::Message *const); // rdx
  google::protobuf::internal::GeneratedMessageReflection *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // r14
  __int64 v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rsi
  const google::protobuf::Message::Reflection *(__fastcall *v15)(const google::protobuf::Message *const); // rdx
  google::protobuf::internal::GeneratedMessageReflection *v16; // rdx
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // r14
  __int64 v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // rax
  __int64 metadata_offset; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  google::protobuf::Message *v28; // r13
  unsigned __int64 v29; // rdx
  __int64 has_bits_offset; // rax
  const google::protobuf::Descriptor *descriptor; // rdx
  int field_count; // esi
  google::protobuf::FieldDescriptor *fields; // rdi
  google::protobuf::FieldDescriptor::Label *p_label; // rcx
  __int64 v35; // rdi
  int v36; // esi
  int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // esi
  __int64 v41; // r14
  int v42; // r13d
  google::protobuf::FieldDescriptor *v43; // rcx
  int oneof_decl_count; // eax
  unsigned __int64 v45; // r13
  __int64 v46; // r14
  const google::protobuf::OneofDescriptor *v47; // rcx
  __int64 extensions_offset; // rax
  __int64 v49; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v50; // rdi
  __int64 v51; // rbp
  __int64 *v52; // rbp
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rdx
  google::protobuf::UnknownFieldSet *v56; // rax
  google::protobuf::internal::LogFinisher v57; // [rsp+1h] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v58; // [rsp+2h] [rbp-68h] BYREF

  if ( a2 != a3 )
  {
    v6 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a2->_vptr_MessageLite + 23);
    if ( v6 == google::protobuf::Message::GetReflection )
      (*((void (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
    else
      v7 = (google::protobuf::internal::GeneratedMessageReflection *)v6(a2);
    if ( this != v7 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v58,
        LOGLEVEL_FATAL_0,
        "google/protobuf/generated_message_reflection.cc",
        577);
      v8 = google::protobuf::internal::LogMessage::operator<<(
             &v58,
             "CHECK failed: (message1->GetReflection()) == (this): ");
      v9 = google::protobuf::internal::LogMessage::operator<<(v8, "First argument to Swap() (of type \"");
      v10 = (*((__int64 (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
      v11 = google::protobuf::internal::LogMessage::operator<<(v9, *(const std::string **)(v10 + 8));
      v12 = google::protobuf::internal::LogMessage::operator<<(
              v11,
              "\") is not compatible with this reflection object (which is for type \"");
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, this->descriptor_->full_name_);
      v14 = google::protobuf::internal::LogMessage::operator<<(
              v13,
              "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=(&v57, v14);
      google::protobuf::internal::LogMessage::~LogMessage(&v58);
    }
    v15 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a3->_vptr_MessageLite + 23);
    if ( v15 == google::protobuf::Message::GetReflection )
      (*((void (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite + 24))(a3);
    else
      v16 = (google::protobuf::internal::GeneratedMessageReflection *)v15(a3);
    if ( this != v16 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v58,
        LOGLEVEL_FATAL_0,
        "google/protobuf/generated_message_reflection.cc",
        584);
      v17 = google::protobuf::internal::LogMessage::operator<<(
              &v58,
              "CHECK failed: (message2->GetReflection()) == (this): ");
      v18 = google::protobuf::internal::LogMessage::operator<<(v17, "Second argument to Swap() (of type \"");
      v19 = (*((__int64 (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite + 24))(a3);
      v20 = google::protobuf::internal::LogMessage::operator<<(v18, *(const std::string **)(v19 + 8));
      v21 = google::protobuf::internal::LogMessage::operator<<(
              v20,
              "\") is not compatible with this reflection object (which is for type \"");
      v22 = google::protobuf::internal::LogMessage::operator<<(v21, this->descriptor_->full_name_);
      v23 = google::protobuf::internal::LogMessage::operator<<(
              v22,
              "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=(&v57, v23);
      google::protobuf::internal::LogMessage::~LogMessage(&v58);
    }
    metadata_offset = (unsigned int)this->schema_.metadata_offset_;
    v25 = *(unsigned __int64 *)((_BYTE *)&a2->_vptr_MessageLite + metadata_offset) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(__int64 *)((_BYTE *)&a2->_vptr_MessageLite + metadata_offset) & 1) != 0 )
      v25 = *(_QWORD *)(v25 + 8);
    v26 = *(__int64 *)((char *)&a3->_vptr_MessageLite + metadata_offset);
    v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v26 & 1) != 0 )
      v27 = *(_QWORD *)(v27 + 8);
    if ( v27 == v25 )
    {
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      descriptor = this->descriptor_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        field_count = descriptor->field_count_;
        if ( field_count > 0 )
        {
          fields = descriptor->fields_;
          p_label = &fields->label_;
          v35 = (__int64)&fields[(unsigned int)(field_count - 1) + 1].label_;
          v36 = 0;
          do
          {
            if ( *p_label != LABEL_REPEATED )
              v36 += *(_QWORD *)(p_label + 7) == 0LL;
            p_label += 38;
          }
          while ( (google::protobuf::FieldDescriptor::Label *)v35 != p_label );
          v37 = (v36 + 31) >> 5;
          if ( v37 )
          {
            v38 = has_bits_offset + 4;
            v39 = has_bits_offset + 4 + 4LL * (unsigned int)(v37 - 1);
            while ( 1 )
            {
              v40 = *(_DWORD *)((char *)&a2->_vptr_MessageLite + has_bits_offset);
              *(_DWORD *)((char *)&a2->_vptr_MessageLite + has_bits_offset) = *(_DWORD *)((char *)&a3->_vptr_MessageLite
                                                                                        + has_bits_offset);
              *(_DWORD *)((char *)&a3->_vptr_MessageLite + has_bits_offset) = v40;
              has_bits_offset = v38;
              if ( v39 == v38 )
                break;
              v38 += 4LL;
            }
          }
        }
      }
      if ( this->last_non_weak_field_index_ >= 0 )
      {
        v41 = 0LL;
        v42 = 0;
        do
        {
          v43 = &descriptor->fields_[v41];
          if ( !v43->containing_oneof_ )
          {
            google::protobuf::internal::GeneratedMessageReflection::SwapField(this, a2, a3, v43);
            descriptor = this->descriptor_;
          }
          ++v42;
          ++v41;
        }
        while ( this->last_non_weak_field_index_ >= v42 );
      }
      oneof_decl_count = descriptor->oneof_decl_count_;
      if ( oneof_decl_count > 0 )
      {
        v45 = 0LL;
        v46 = 16 * (3LL * (unsigned int)(oneof_decl_count - 1) + 3);
        while ( 1 )
        {
          v47 = &descriptor->oneof_decls_[v45 / 0x30];
          v45 += 48LL;
          google::protobuf::internal::GeneratedMessageReflection::SwapOneofField(this, a2, a3, v47);
          if ( v46 == v45 )
            break;
          descriptor = this->descriptor_;
        }
      }
      extensions_offset = (unsigned int)this->schema_.extensions_offset_;
      if ( (_DWORD)extensions_offset != -1 )
        google::protobuf::internal::ExtensionSet::Swap(
          (google::protobuf::internal::ExtensionSet *)((char *)a2 + extensions_offset),
          (google::protobuf::internal::ExtensionSet *)((char *)a3 + extensions_offset));
      v49 = (unsigned int)this->schema_.metadata_offset_;
      v50 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *)((char *)a2 + v49);
      v51 = *(__int64 *)((char *)&a2->_vptr_MessageLite + v49);
      if ( (v51 & 1) != 0 )
      {
        v52 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        v56 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(v50);
        v49 = (unsigned int)this->schema_.metadata_offset_;
        v52 = (__int64 *)v56;
      }
      v53 = *(__int64 *)((char *)&a3->_vptr_MessageLite + v49);
      if ( (v53 & 1) != 0 )
        v54 = (__int64 *)(v53 & 0xFFFFFFFFFFFFFFFELL);
      else
        v54 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow((google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const)((char *)a3 + v49));
      v55 = *v52;
      *v52 = *v54;
      *v54 = v55;
    }
    else
    {
      v28 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite
                                          + 4))(a2);
      (*((void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))v28->_vptr_MessageLite + 19))(
        v28,
        a3);
      (*((void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))a3->_vptr_MessageLite + 18))(
        a3,
        a2);
      google::protobuf::internal::GeneratedMessageReflection::Swap(this, a2, v28);
      v29 = *(unsigned __int64 *)((_BYTE *)&a2->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(__int64 *)((_BYTE *)&a2->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
        v29 = *(_QWORD *)(v29 + 8);
      if ( !v29 )
        (*((void (__fastcall **)(google::protobuf::Message *))v28->_vptr_MessageLite + 1))(v28);
    }
  }
};

// Line 577: range 000000000C72AB50-000000000C72AB65
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::Swap()
{
  struct _Unwind_Exception *v0; // rax
  google::protobuf::internal::LogMessage_0 *v1; // r13
  struct _Unwind_Exception *v2; // [rsp+8h] [rbp+8h]

  v2 = v0;
  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v2);
};

// Line 648: range 000000000C8AAC70-000000000C8AB193
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SwapFields(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Message *a3,
        __int64 *a4)
{
  const google::protobuf::Message::Reflection *(__fastcall *v8)(const google::protobuf::Message *const); // rdx
  google::protobuf::internal::GeneratedMessageReflection *v9; // rdx
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // r12
  __int64 v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rsi
  const google::protobuf::Message::Reflection *(__fastcall *v17)(const google::protobuf::Message *const); // rdx
  google::protobuf::internal::GeneratedMessageReflection *v18; // rdx
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // r12
  __int64 v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // rax
  google::protobuf::internal::LogMessage_0 *v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 i; // rbx
  __int64 v30; // rax
  __int64 has_bits_offset; // rsi
  __int64 v32; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rdi
  unsigned int v34; // ecx
  __int64 v35; // r9
  int v36; // esi
  int v37; // eax
  unsigned __int8 v38; // cf
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // r12
  std::_Rb_tree_node<int> *v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  const char **p_filename; // rsi
  int v47; // edx
  google::protobuf::uint32 v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // [rsp+0h] [rbp-98h]
  google::protobuf::internal::LogFinisher v52[4]; // [rsp+1Ch] [rbp-7Ch] BYREF
  google::protobuf::internal::LogMessage_0 v53; // [rsp+20h] [rbp-78h] BYREF

  if ( message != a3 )
  {
    v8 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
    if ( v8 == google::protobuf::Message::GetReflection )
      (*((void (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    else
      v9 = (google::protobuf::internal::GeneratedMessageReflection *)v8(message);
    if ( this != v9 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v53,
        LOGLEVEL_FATAL_0,
        "google/protobuf/generated_message_reflection.cc",
        651);
      v10 = google::protobuf::internal::LogMessage::operator<<(
              &v53,
              "CHECK failed: (message1->GetReflection()) == (this): ");
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, "First argument to SwapFields() (of type \"");
      v12 = (*((__int64 (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
      v13 = google::protobuf::internal::LogMessage::operator<<(v11, *(const std::string **)(v12 + 8));
      v14 = google::protobuf::internal::LogMessage::operator<<(
              v13,
              "\") is not compatible with this reflection object (which is for type \"");
      v15 = google::protobuf::internal::LogMessage::operator<<(v14, this->descriptor_->full_name_);
      v16 = google::protobuf::internal::LogMessage::operator<<(
              v15,
              "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=(v52, v16);
      google::protobuf::internal::LogMessage::~LogMessage(&v53);
    }
    v17 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a3->_vptr_MessageLite + 23);
    if ( v17 == google::protobuf::Message::GetReflection )
      (*((void (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite + 24))(a3);
    else
      v18 = (google::protobuf::internal::GeneratedMessageReflection *)v17(a3);
    if ( this != v18 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v53,
        LOGLEVEL_FATAL_0,
        "google/protobuf/generated_message_reflection.cc",
        658);
      v19 = google::protobuf::internal::LogMessage::operator<<(
              &v53,
              "CHECK failed: (message2->GetReflection()) == (this): ");
      v20 = google::protobuf::internal::LogMessage::operator<<(v19, "Second argument to SwapFields() (of type \"");
      v21 = (*((__int64 (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite + 24))(a3);
      v22 = google::protobuf::internal::LogMessage::operator<<(v20, *(const std::string **)(v21 + 8));
      v23 = google::protobuf::internal::LogMessage::operator<<(
              v22,
              "\") is not compatible with this reflection object (which is for type \"");
      v24 = google::protobuf::internal::LogMessage::operator<<(v23, this->descriptor_->full_name_);
      v25 = google::protobuf::internal::LogMessage::operator<<(
              v24,
              "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=(v52, v25);
      google::protobuf::internal::LogMessage::~LogMessage(&v53);
    }
    v26 = a4[1];
    LODWORD(v53.filename_) = 0;
    v53.message_._M_dataplus._M_p = (std::string::pointer)&v53.filename_;
    v53.message_._M_string_length = (std::string::size_type)&v53.filename_;
    v27 = *a4;
    *(_QWORD *)&v53.line_ = 0LL;
    v53.message_._anon_0._M_allocated_capacity = 0LL;
    v28 = (v26 - v27) >> 3;
    if ( (int)v28 > 0 )
    {
      v51 = 8LL * (unsigned int)(v28 - 1);
      for ( i = 0LL; ; i += 8LL )
      {
        v42 = *(_QWORD *)(v27 + i);
        if ( *(_BYTE *)(v42 + 66) )
        {
          google::protobuf::internal::ExtensionSet::SwapExtension(
            (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
            (google::protobuf::internal::ExtensionSet *)((char *)a3 + (unsigned int)this->schema_.extensions_offset_),
            *(_DWORD *)(v42 + 68));
          if ( v51 == i )
            goto LABEL_27;
        }
        else
        {
          v30 = *(_QWORD *)(v42 + 88);
          if ( v30 )
          {
            v44 = 0xAAAAAAAAAAAAAAABLL * ((v30 - *(_QWORD *)(*(_QWORD *)(v30 + 16) + 48LL)) >> 4);
            v45 = *(_QWORD *)&v53.line_;
            *(_DWORD *)v52[0].gap0 = v44;
            if ( !*(_QWORD *)&v53.line_ )
              goto LABEL_37;
            p_filename = &v53.filename_;
            do
            {
              while ( *(_DWORD *)(v45 + 32) >= (int)v44 )
              {
                p_filename = (const char **)v45;
                v45 = *(_QWORD *)(v45 + 16);
                if ( !v45 )
                  goto LABEL_35;
              }
              v45 = *(_QWORD *)(v45 + 24);
            }
            while ( v45 );
LABEL_35:
            if ( p_filename == &v53.filename_ || *((_DWORD *)p_filename + 8) > (int)v44 )
            {
LABEL_37:
              std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_insert_unique<int const&>(
                (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *const)&v53,
                (const int *)v52[0].gap0);
              google::protobuf::internal::GeneratedMessageReflection::SwapOneofField(
                this,
                message,
                a3,
                *(const google::protobuf::OneofDescriptor **)(v42 + 88));
            }
          }
          else
          {
            if ( *(_DWORD *)(v42 + 60) != 3 )
            {
              has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
              if ( (_DWORD)has_bits_offset != -1 )
              {
                v32 = *(_QWORD *)(v42 + 80);
                has_bit_indices = this->schema_.has_bit_indices_;
                v34 = has_bit_indices[(int)(678152731 * ((v42 - *(_QWORD *)(v32 + 40)) >> 3))];
                v35 = has_bits_offset + 4LL * (v34 >> 5);
                v36 = *(_DWORD *)((char *)&message->_vptr_MessageLite + v35);
                v37 = v36 | (1 << v34);
                if ( ((*(_DWORD *)((char *)&a3->_vptr_MessageLite + v35) >> v34) & 1) == 0 )
                  v37 = v36 & ~(1 << v34);
                v38 = _bittest(&v36, v34);
                *(_DWORD *)((char *)&message->_vptr_MessageLite + v35) = v37;
                v39 = (unsigned int)this->schema_.has_bits_offset_;
                if ( v38 )
                {
                  if ( (_DWORD)v39 != -1 )
                  {
                    if ( *(_BYTE *)(v42 + 66) )
                    {
                      v49 = *(_QWORD *)(v42 + 96);
                      if ( v49 )
                        v40 = 678152731 * ((v42 - *(_QWORD *)(v49 + 80)) >> 3);
                      else
                        v40 = 678152731 * ((v42 - *(_QWORD *)(*(_QWORD *)(v42 + 40) + 128LL)) >> 3);
                    }
                    else
                    {
                      v40 = 678152731 * ((v42 - *(_QWORD *)(v32 + 40)) >> 3);
                    }
                    v41 = v39 + 4LL * (has_bit_indices[v40] >> 5);
                    *(_DWORD *)((char *)&a3->_vptr_MessageLite + v41) |= 1 << has_bit_indices[v40];
                  }
                }
                else if ( (_DWORD)v39 != -1 )
                {
                  if ( *(_BYTE *)(v42 + 66) )
                  {
                    v50 = *(_QWORD *)(v42 + 96);
                    if ( v50 )
                      v47 = 678152731 * ((v42 - *(_QWORD *)(v50 + 80)) >> 3);
                    else
                      v47 = 678152731 * ((v42 - *(_QWORD *)(*(_QWORD *)(v42 + 40) + 128LL)) >> 3);
                  }
                  else
                  {
                    v47 = 678152731 * ((v42 - *(_QWORD *)(v32 + 40)) >> 3);
                  }
                  v48 = has_bit_indices[v47];
                  *(_DWORD *)((char *)&a3->_vptr_MessageLite + 4 * (v48 >> 5) + v39) &= ~(1 << v48);
                }
              }
            }
            google::protobuf::internal::GeneratedMessageReflection::SwapField(
              this,
              message,
              a3,
              (google::protobuf::FieldDescriptor *)v42);
          }
          if ( v51 == i )
          {
LABEL_27:
            v43 = *(std::_Rb_tree_node<int> **)&v53.line_;
            goto LABEL_28;
          }
        }
        v27 = *a4;
      }
    }
    v43 = 0LL;
LABEL_28:
    std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
      (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *const)&v53,
      v43);
  }
};

// Line 700: range 000000000C8A7380-000000000C8A742E
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::HasField(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  const google::protobuf::OneofDescriptor *containing_oneof; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.lowercase_name_ + 3),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.lowercase_name_ + 3),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::Has(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_);
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
    return *(_DWORD *)((char *)&message->_vptr_MessageLite
                     + this->schema_.oneof_case_offset_
                     - 1431655764
                     * (unsigned int)(((char *)containing_oneof
                                     - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == field->number_;
  else
    return google::protobuf::internal::GeneratedMessageReflection::HasBit(this, message, field);
};

// Line 716: range 000000000C8A61B0-000000000C8A6388
int __fastcall google::protobuf::internal::GeneratedMessageReflection::FieldSize(
        google::protobuf::internal::GeneratedMessageReflection *this,
        const google::protobuf::Message *message,
        google::protobuf::Descriptor *a3,
        __int64 a4,
        const char *a5)
{
  google::protobuf::Descriptor *descriptor; // rdi
  int result; // eax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  const google::protobuf::internal::MapFieldBase *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)a3->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.full_name_ + 1),
      "Field does not match message type.",
      a5);
  if ( HIDWORD(a3->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.full_name_ + 1),
      "Field is singular; the method requires a repeated field.",
      a5);
  if ( BYTE2(a3->enum_types_) )
    return google::protobuf::internal::ExtensionSet::ExtensionSize(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             HIDWORD(a3->enum_types_));
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3) )
  {
    case 1u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<double>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 2u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<float>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 3u:
    case 0x10u:
    case 0x12u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<long>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 4u:
    case 6u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned long>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 5u:
    case 0xEu:
    case 0xFu:
    case 0x11u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<int>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 7u:
    case 0xDu:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned int>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 8u:
      result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<bool>>(
                 this,
                 message,
                 (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      break;
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
      if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a3) )
      {
        v10 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
                this,
                message,
                (const google::protobuf::FieldDescriptor *)a3);
        result = google::protobuf::internal::MapFieldBase::GetRepeatedField(v10)->current_size_;
      }
      else
      {
        result = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::RepeatedPtrFieldBase>(
                   this,
                   message,
                   (const google::protobuf::FieldDescriptor *)a3)->current_size_;
      }
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(
        &v12,
        LOGLEVEL_FATAL_0,
        "google/protobuf/generated_message_reflection.cc",
        747);
      v9 = google::protobuf::internal::LogMessage::operator<<(&v12, (const char *)&stru_1A17003B.lowercase_name_ + 3);
      google::protobuf::internal::LogFinisher::operator=(&v11, v9);
      google::protobuf::internal::LogMessage::~LogMessage(&v12);
      result = 0;
      break;
  }
  return result;
};

// Line 747: range 000000000C72AA1A-000000000C72AA27
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::FieldSize(
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

// Line 753: range 000000000C8A7440-000000000C8A7991
void __fastcall google::protobuf::internal::GeneratedMessageReflection::ClearField(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  const google::protobuf::OneofDescriptor *containing_oneof; // rdx
  __int64 has_bits_offset; // rdx
  const google::protobuf::Descriptor *extension_scope; // rax
  int v10; // eax
  google::protobuf::uint32 v11; // ecx
  char *v12; // rsi
  int v13; // edx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  const google::protobuf::internal::ReflectionSchema *p_schema; // rdi
  char *v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  __int64 *v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rdi
  google::protobuf::int64 v25; // rbx
  int v26; // eax
  void **v27; // rbx
  void ***v28; // rbp
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rax
  google::protobuf::uint32 FieldOffset; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v32; // r12
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rbp
  __int64 v36; // rbx
  __int64 v37; // rdi
  const google::protobuf::Descriptor *v38; // rax
  unsigned __int64 v39; // rdx
  void **v40; // r12

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.camelcase_name_ + 4),
      "Field does not match message type.",
      v3);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::ClearExtension(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      field->number_);
  }
  else if ( field->label_ == LABEL_REPEATED )
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
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
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field)) = 0;
        break;
      case 9u:
      case 0xCu:
        v12 = (char *)message + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field);
        v13 = *((_DWORD *)v12 + 2);
        if ( v13 > 0 )
        {
          v14 = *((_QWORD *)v12 + 2);
          v15 = (__int64 *)(v14 + 8);
          v16 = v14 + 8LL * (unsigned int)(v13 - 1) + 16;
          do
          {
            v17 = *v15++;
            *(_QWORD *)(v17 + 8) = 0LL;
            **(_BYTE **)v17 = 0;
          }
          while ( (__int64 *)v16 != v15 );
          *((_DWORD *)v12 + 2) = 0;
        }
        break;
      case 0xAu:
      case 0xBu:
        p_schema = &this->schema_;
        if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
        {
          FieldOffset = google::protobuf::internal::ReflectionSchema::GetFieldOffset(p_schema, field);
          v32 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + FieldOffset));
          current_size = v32->current_size_;
          if ( current_size > 0 )
          {
            rep = v32->rep_;
            elements = rep->elements;
            v36 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
            do
            {
              v37 = (__int64)*elements++;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 56LL))(v37);
            }
            while ( (void **)v36 != elements );
            v32->current_size_ = 0;
          }
        }
        else
        {
          v19 = (char *)message + google::protobuf::internal::ReflectionSchema::GetFieldOffset(p_schema, field);
          v20 = *((_DWORD *)v19 + 2);
          if ( v20 > 0 )
          {
            v21 = *((_QWORD *)v19 + 2);
            v22 = (__int64 *)(v21 + 8);
            v23 = v21 + 8LL * (unsigned int)(v20 - 1) + 16;
            do
            {
              v24 = *v22++;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
            }
            while ( (__int64 *)v23 != v22 );
            *((_DWORD *)v19 + 2) = 0;
          }
        }
        break;
      default:
        return;
    }
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    if ( containing_oneof )
    {
      if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                     + this->schema_.oneof_case_offset_
                     - 1431655764
                     * (unsigned int)(((char *)containing_oneof
                                     - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == field->number_ )
        google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    }
    else if ( google::protobuf::internal::GeneratedMessageReflection::HasBit(this, message, field) )
    {
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        if ( field->is_extension_ )
        {
          extension_scope = field->extension_scope_;
          if ( extension_scope )
            v10 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
          else
            v10 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
        }
        else
        {
          v10 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
        }
        v11 = this->schema_.has_bit_indices_[v10];
        *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v11 >> 5) + has_bits_offset) &= ~(1 << v11);
      }
      switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
      {
        case 1u:
        case 3u:
        case 4u:
        case 6u:
        case 0x10u:
        case 0x12u:
          *(google::protobuf::FieldDescriptor::$D32B373B359FB577D61830A0A620556D *)((char *)message
                                                                                  + google::protobuf::internal::ReflectionSchema::GetFieldOffset(
                                                                                      &this->schema_,
                                                                                      field)) = field->_anon_0;
          break;
        case 2u:
        case 5u:
        case 7u:
        case 0xDu:
        case 0xFu:
        case 0x11u:
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field)) = field->_anon_0.default_value_int32_;
          break;
        case 8u:
          *((_BYTE *)&message->_vptr_MessageLite
          + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field)) = field->_anon_0.default_value_bool_;
          break;
        case 9u:
        case 0xCu:
          if ( field->is_extension_ )
          {
            v38 = field->extension_scope_;
            if ( v38 )
              v26 = 678152731 * (((char *)field - (char *)v38->extensions_) >> 3);
            else
              v26 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
          }
          else
          {
            v26 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v27 = *(void ***)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                          + (unsigned int)this->schema_.offsets_[v26]);
          v28 = (void ***)((char *)message
                         + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field));
          v29 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
          if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
            v29 = *(_QWORD *)(v29 + 8);
          if ( !v29 )
          {
            v40 = *v28;
            if ( *v28 )
            {
              if ( v27 != v40 )
              {
                if ( *v40 != v40 + 2 )
                  operator delete(*v40);
                operator delete(v40, 0x20uLL);
              }
            }
          }
          *v28 = v27;
          break;
        case 0xAu:
        case 0xBu:
          v30 = (int (***)(...))((char *)&message->_vptr_MessageLite
                               + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field));
          if ( this->schema_.has_bits_offset_ == -1 )
          {
            v39 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite
                                      + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
            if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
              v39 = *(_QWORD *)(v39 + 8);
            if ( !v39 && *v30 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 8LL))(*v30);
              v30 = (int (***)(...))((char *)&message->_vptr_MessageLite
                                   + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field));
            }
            *v30 = 0LL;
          }
          else
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 56LL))(*v30);
          }
          break;
        case 0xEu:
          v25 = google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)field);
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field)) = *(_DWORD *)(v25 + 16);
          break;
        default:
          return;
      }
    }
  }
};

// Line 862: range 000000000C8A2CE0-000000000C8A2FB0
void __fastcall google::protobuf::internal::GeneratedMessageReflection::RemoveLast(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v9; // rax
  int v10; // eax
  const google::protobuf::Descriptor *extension_scope; // rax
  signed __int64 v12; // rbp
  const google::protobuf::OneofDescriptor *v13; // rax
  const google::protobuf::uint32 *v14; // rdx
  __int64 v15; // rax
  char *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  void *v19; // rdi
  const google::protobuf::OneofDescriptor *v20; // rax
  const google::protobuf::uint32 *v21; // rcx
  __int64 v22; // rax
  char *v23; // rbx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  google::protobuf::uint32 FieldOffset; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v29; // rax
  int current_size; // ebx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  int v32; // eax
  const google::protobuf::Descriptor *v33; // rax
  signed __int64 v34; // rbp
  const google::protobuf::Descriptor *v35; // rax
  signed __int64 v36; // rbp

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.index_in_oneof_ + 1),
      "Field does not match message type.",
      v3);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.index_in_oneof_ + 1),
      "Field is singular; the method requires a repeated field.",
      v3);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::RemoveLast(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_);
  }
  else
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
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
        containing_oneof = field->containing_oneof_;
        offsets = this->schema_.offsets_;
        if ( containing_oneof )
        {
          v9 = offsets[(int)(field->containing_type_->field_count_
                           - 1431655765
                           * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            extension_scope = field->extension_scope_;
            if ( extension_scope )
              v12 = (char *)field - (char *)extension_scope->extensions_;
            else
              v12 = (char *)field - (char *)field->file_->extensions_;
            v10 = 678152731 * (v12 >> 3);
          }
          else
          {
            v10 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v9 = offsets[v10];
        }
        --*(_DWORD *)((char *)&message->_vptr_MessageLite + v9);
        break;
      case 9u:
      case 0xCu:
        v20 = field->containing_oneof_;
        v21 = this->schema_.offsets_;
        if ( v20 )
        {
          v22 = v21[(int)(field->containing_type_->field_count_
                        - 1431655765 * (((char *)v20 - (char *)v20->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            v33 = field->extension_scope_;
            if ( v33 )
              v34 = (char *)field - (char *)v33->extensions_;
            else
              v34 = (char *)field - (char *)field->file_->extensions_;
            v27 = 678152731 * (v34 >> 3);
          }
          else
          {
            v27 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v22 = v21[v27];
        }
        v23 = (char *)message + v22;
        v24 = *(__int64 *)((char *)&message[2]._vptr_MessageLite + v22);
        v25 = *(_DWORD *)((char *)&message[1]._vptr_MessageLite + v22) - 1;
        *((_DWORD *)v23 + 2) = v25;
        v26 = *(_QWORD *)(v24 + 8LL * v25 + 8);
        *(_QWORD *)(v26 + 8) = 0LL;
        **(_BYTE **)v26 = 0;
        break;
      case 0xAu:
      case 0xBu:
        if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
        {
          FieldOffset = google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, field);
          v29 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + FieldOffset));
          current_size = v29->current_size_;
          rep = v29->rep_;
          v29->current_size_ = current_size - 1;
          v19 = rep->elements[current_size - 1];
        }
        else
        {
          v13 = field->containing_oneof_;
          v14 = this->schema_.offsets_;
          if ( v13 )
          {
            v15 = v14[(int)(field->containing_type_->field_count_
                          - 1431655765 * (((char *)v13 - (char *)v13->containing_type_->oneof_decls_) >> 4))];
          }
          else
          {
            if ( field->is_extension_ )
            {
              v35 = field->extension_scope_;
              if ( v35 )
                v36 = (char *)field - (char *)v35->extensions_;
              else
                v36 = (char *)field - (char *)field->file_->extensions_;
              v32 = 678152731 * (v36 >> 3);
            }
            else
            {
              v32 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
            }
            v15 = v14[v32];
          }
          v16 = (char *)message + v15;
          v17 = *(__int64 *)((char *)&message[2]._vptr_MessageLite + v15);
          v18 = *(_DWORD *)((char *)&message[1]._vptr_MessageLite + v15) - 1;
          *((_DWORD *)v16 + 2) = v18;
          v19 = *(void **)(v17 + 8LL * v18 + 8);
        }
        (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 56LL))(v19);
        break;
      default:
        return;
    }
  }
};

// Line 910: range 000000000C8A8960-000000000C8A8BBD
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::ReleaseLast(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v8; // r8d
  bool v10; // zf
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v13; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase *v14; // rax
  int current_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  int allocated_size; // edi
  google::protobuf::Message **v18; // r8
  int v19; // esi
  google::protobuf::Message *v20; // r12
  google::protobuf::Message *v21; // rbx
  const google::protobuf::uint32 *v22; // rdx
  __int64 v23; // rsi
  char *v24; // rbp
  int v25; // edx
  int *v26; // rax
  int v27; // esi
  google::protobuf::Message **v28; // rdi
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  const google::protobuf::Descriptor *v32; // rax
  __int64 v33; // rbx
  const google::protobuf::Descriptor *extension_scope; // rax
  __int64 v35; // rbx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.message_type_ + 7),
      "Field does not match message type.",
      v3);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.message_type_ + 7),
      "Field is singular; the method requires a repeated field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.message_type_ + 7),
      (const char *)0xA,
      v8);
  if ( field->is_extension_ )
    return (google::protobuf::Message *)google::protobuf::internal::ExtensionSet::ReleaseLast(
                                          (google::protobuf::internal::ExtensionSet *)((char *)message
                                                                                     + (unsigned int)this->schema_.extensions_offset_),
                                          (std::_Rb_tree_color)field->number_);
  v10 = !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field);
  containing_oneof = field->containing_oneof_;
  if ( !v10 )
  {
    offsets = this->schema_.offsets_;
    if ( containing_oneof )
    {
      v13 = offsets[(int)(field->containing_type_->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    }
    else
    {
      if ( field->is_extension_ )
      {
        extension_scope = field->extension_scope_;
        if ( extension_scope )
          v35 = ((char *)field - (char *)extension_scope->extensions_) >> 3;
        else
          v35 = ((char *)field - (char *)field->file_->extensions_) >> 3;
        v31 = 678152731 * v35;
      }
      else
      {
        v31 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v13 = offsets[v31];
    }
    v14 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v13));
    current_size = v14->current_size_;
    rep = v14->rep_;
    v14->current_size_ = current_size - 1;
    allocated_size = rep->allocated_size;
    v18 = (google::protobuf::Message **)rep + current_size;
    v19 = rep->allocated_size - 1;
    v20 = *v18;
    rep->allocated_size = v19;
    if ( current_size < allocated_size )
      *v18 = (google::protobuf::Message *)rep->elements[v19];
    if ( !v14->arena_ )
      return v20;
    goto LABEL_15;
  }
  v22 = this->schema_.offsets_;
  if ( containing_oneof )
  {
    v23 = v22[(int)(field->containing_type_->field_count_
                  - 1431655765
                  * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
  }
  else
  {
    if ( field->is_extension_ )
    {
      v32 = field->extension_scope_;
      if ( v32 )
        v33 = ((char *)field - (char *)v32->extensions_) >> 3;
      else
        v33 = ((char *)field - (char *)field->file_->extensions_) >> 3;
      v30 = 678152731 * v33;
    }
    else
    {
      v30 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v23 = v22[v30];
  }
  v24 = (char *)message + v23;
  v25 = *((_DWORD *)v24 + 2);
  v26 = (int *)*((_QWORD *)v24 + 2);
  *((_DWORD *)v24 + 2) = v25 - 1;
  v27 = *v26;
  v28 = (google::protobuf::Message **)&v26[2 * v25];
  v29 = *v26 - 1;
  v20 = *v28;
  *v26 = v29;
  if ( v25 < v27 )
    *v28 = *(google::protobuf::Message **)&v26[2 * v29 + 2];
  if ( *(_QWORD *)v24 )
  {
LABEL_15:
    v21 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::NewFromPrototype(v20, 0LL);
    google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(v20, v21);
    return v21;
  }
  return v20;
};

// Line 932: range 000000000C8A26F0-000000000C8A2CD6
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SwapElements(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index1,
        int index2)
{
  __int64 v6; // r13
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  const google::protobuf::OneofDescriptor *v10; // rax
  const google::protobuf::uint32 *v11; // rcx
  __int64 v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  char *v14; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  const google::protobuf::OneofDescriptor *v17; // rax
  const google::protobuf::uint32 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  bool v24; // zf
  const google::protobuf::OneofDescriptor *v25; // rax
  const google::protobuf::uint32 *v26; // rdx
  __int64 v27; // rax
  const google::protobuf::OneofDescriptor *v28; // rax
  const google::protobuf::uint32 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // xmm0_4
  const google::protobuf::OneofDescriptor *v35; // rax
  const google::protobuf::uint32 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // dl
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // xmm0_8
  const google::protobuf::Descriptor *v47; // rax
  signed __int64 v48; // rbx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  const google::protobuf::uint32 *v53; // rcx
  __int64 v54; // rdi
  int v55; // eax
  const google::protobuf::Descriptor *v56; // rax
  signed __int64 v57; // rbx
  int v58; // eax
  const google::protobuf::Descriptor *v59; // rax
  signed __int64 v60; // rbx
  const google::protobuf::Descriptor *v61; // rax
  signed __int64 v62; // rbx
  const google::protobuf::Descriptor *extension_scope; // rax
  signed __int64 v64; // rbx
  const google::protobuf::Descriptor *v65; // rax
  signed __int64 v66; // rbx
  int v67; // eax
  const google::protobuf::Descriptor *v68; // rax
  signed __int64 v69; // rbx

  v6 = index1;
  v7 = index2;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FE69.number_,
      "Field does not match message type.",
      *(const char **)&index2);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FE69.number_,
      "Field is singular; the method requires a repeated field.",
      *(const char **)&index2);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SwapElements(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v6,
      v7);
  }
  else
  {
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
    {
      case 1u:
        containing_oneof = field->containing_oneof_;
        offsets = this->schema_.offsets_;
        if ( containing_oneof )
        {
          v42 = offsets[(int)(field->containing_type_->field_count_
                            - 1431655765
                            * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            extension_scope = field->extension_scope_;
            if ( extension_scope )
              v64 = (char *)field - (char *)extension_scope->extensions_;
            else
              v64 = (char *)field - (char *)field->file_->extensions_;
            v52 = 678152731 * (v64 >> 3);
          }
          else
          {
            v52 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v42 = offsets[v52];
        }
        v43 = *(__int64 *)((char *)&message[1]._vptr_MessageLite + v42);
        v44 = v43 + 8 * v6;
        v45 = v43 + 8 * v7;
        v46 = *(_QWORD *)(v44 + 8);
        *(_QWORD *)(v44 + 8) = *(_QWORD *)(v45 + 8);
        *(_QWORD *)(v45 + 8) = v46;
        break;
      case 2u:
        v28 = field->containing_oneof_;
        v29 = this->schema_.offsets_;
        if ( v28 )
        {
          v30 = v29[(int)(field->containing_type_->field_count_
                        - 1431655765 * (((char *)v28 - (char *)v28->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            v59 = field->extension_scope_;
            if ( v59 )
              v60 = (char *)field - (char *)v59->extensions_;
            else
              v60 = (char *)field - (char *)field->file_->extensions_;
            v50 = 678152731 * (v60 >> 3);
          }
          else
          {
            v50 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v30 = v29[v50];
        }
        v31 = *(__int64 *)((char *)&message[1]._vptr_MessageLite + v30);
        v32 = v31 + 4 * v6;
        v33 = v31 + 4 * v7;
        v34 = *(_DWORD *)(v32 + 8);
        *(_DWORD *)(v32 + 8) = *(_DWORD *)(v33 + 8);
        *(_DWORD *)(v33 + 8) = v34;
        break;
      case 3u:
      case 4u:
      case 6u:
      case 0x10u:
      case 0x12u:
        v10 = field->containing_oneof_;
        v11 = this->schema_.offsets_;
        if ( v10 )
        {
          v12 = v11[(int)(field->containing_type_->field_count_
                        - 1431655765 * (((char *)v10 - (char *)v10->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            v56 = field->extension_scope_;
            if ( v56 )
              v57 = (char *)field - (char *)v56->extensions_;
            else
              v57 = (char *)field - (char *)field->file_->extensions_;
            v55 = 678152731 * (v57 >> 3);
          }
          else
          {
            v55 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v12 = v11[v55];
        }
        rep = *(google::protobuf::internal::RepeatedPtrFieldBase::Rep **)((char *)&message[1]._vptr_MessageLite + v12);
        goto LABEL_11;
      case 5u:
      case 7u:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        v17 = field->containing_oneof_;
        v18 = this->schema_.offsets_;
        if ( v17 )
        {
          v19 = v18[(int)(field->containing_type_->field_count_
                        - 1431655765 * (((char *)v17 - (char *)v17->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            v47 = field->extension_scope_;
            if ( v47 )
              v48 = (char *)field - (char *)v47->extensions_;
            else
              v48 = (char *)field - (char *)field->file_->extensions_;
            v49 = 678152731 * (v48 >> 3);
          }
          else
          {
            v49 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v19 = v18[v49];
        }
        v20 = *(__int64 *)((char *)&message[1]._vptr_MessageLite + v19);
        v21 = v20 + 4 * v6;
        v22 = v20 + 4 * v7;
        v23 = *(_DWORD *)(v21 + 8);
        *(_DWORD *)(v21 + 8) = *(_DWORD *)(v22 + 8);
        *(_DWORD *)(v22 + 8) = v23;
        break;
      case 8u:
        v35 = field->containing_oneof_;
        v36 = this->schema_.offsets_;
        if ( v35 )
        {
          v37 = v36[(int)(field->containing_type_->field_count_
                        - 1431655765 * (((char *)v35 - (char *)v35->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            v61 = field->extension_scope_;
            if ( v61 )
              v62 = (char *)field - (char *)v61->extensions_;
            else
              v62 = (char *)field - (char *)field->file_->extensions_;
            v51 = 678152731 * (v62 >> 3);
          }
          else
          {
            v51 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v37 = v36[v51];
        }
        v38 = *(__int64 *)((char *)&message[1]._vptr_MessageLite + v37);
        v39 = *(_BYTE *)(v38 + v6 + 8);
        *(_BYTE *)(v38 + v6 + 8) = *(_BYTE *)(v38 + v7 + 8);
        *(_BYTE *)(v38 + v7 + 8) = v39;
        break;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        v24 = !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field);
        v25 = field->containing_oneof_;
        if ( v24 )
        {
          v26 = this->schema_.offsets_;
          if ( v25 )
          {
            v27 = v26[(int)(field->containing_type_->field_count_
                          - 1431655765 * (((char *)v25 - (char *)v25->containing_type_->oneof_decls_) >> 4))];
          }
          else
          {
            if ( field->is_extension_ )
            {
              v65 = field->extension_scope_;
              if ( v65 )
                v66 = (char *)field - (char *)v65->extensions_;
              else
                v66 = (char *)field - (char *)field->file_->extensions_;
              v58 = 678152731 * (v66 >> 3);
            }
            else
            {
              v58 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
            }
            v27 = v26[v58];
          }
          rep = *(google::protobuf::internal::RepeatedPtrFieldBase::Rep **)((char *)&message[2]._vptr_MessageLite + v27);
        }
        else
        {
          v53 = this->schema_.offsets_;
          if ( v25 )
          {
            v54 = v53[(int)(field->containing_type_->field_count_
                          - 1431655765 * (((char *)v25 - (char *)v25->containing_type_->oneof_decls_) >> 4))];
          }
          else
          {
            if ( field->is_extension_ )
            {
              v68 = field->extension_scope_;
              if ( v68 )
                v69 = (char *)field - (char *)v68->extensions_;
              else
                v69 = (char *)field - (char *)field->file_->extensions_;
              v67 = 678152731 * (v69 >> 3);
            }
            else
            {
              v67 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
            }
            v54 = v53[v67];
          }
          rep = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v54))->rep_;
        }
LABEL_11:
        v14 = (char *)rep + 8 * v6;
        v15 = (char *)rep + 8 * v7;
        v16 = *((_QWORD *)v14 + 1);
        *((_QWORD *)v14 + 1) = *((_QWORD *)v15 + 1);
        *((_QWORD *)v15 + 1) = v16;
        break;
      default:
        return;
    }
  }
};

// Line 990: range 000000000C8A7E00-000000000C8A8174
void __fastcall google::protobuf::internal::GeneratedMessageReflection::ListFields(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        std::vector<const google::protobuf::FieldDescriptor*> *output)
{
  __int64 number; // rcx
  const char *v4; // r8
  const google::protobuf::FieldDescriptor **M_start; // r9
  const google::protobuf::uint32 *v9; // rax
  __int64 oneof_case_offset; // rbx
  unsigned __int64 field_count; // rdx
  __int64 v12; // r14
  google::protobuf::FieldDescriptor *v13; // rdx
  bool v14; // zf
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  google::protobuf::uint32 v16; // eax
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_finish; // rsi
  __int64 extensions_offset; // rdi
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer v19; // rbp
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer v20; // r12
  unsigned __int64 v21; // rax
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer v22; // rbx
  const google::protobuf::FieldDescriptor *v23; // rdi
  const google::protobuf::FieldDescriptor *v24; // rdx
  const google::protobuf::FieldDescriptor **v25; // rax
  int v26; // ecx
  const google::protobuf::FieldDescriptor **v27; // rsi
  const google::protobuf::FieldDescriptor **v28; // rsi
  __int64 v29; // r15
  char *v30; // r14
  void *v31; // rax
  void *v32; // r10
  char *v33; // rdx
  const google::protobuf::FieldDescriptor **v34; // rsi
  void *v35; // rax
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::(anonymous namespace)::FieldNumberSorter> v36; // [rsp+0h] [rbp-68h]
  const google::protobuf::uint32 *has_bits; // [rsp+8h] [rbp-60h]
  const google::protobuf::uint32 *has_bits_indices; // [rsp+10h] [rbp-58h]
  const google::protobuf::FieldDescriptor **v39; // [rsp+18h] [rbp-50h]
  void *v40; // [rsp+18h] [rbp-50h]
  const google::protobuf::FieldDescriptor *field; // [rsp+28h] [rbp-40h] BYREF

  M_start = output->_M_impl._M_start;
  if ( output->_M_impl._M_start != output->_M_impl._M_finish )
    output->_M_impl._M_finish = M_start;
  if ( message == this->schema_.default_instance_ )
    return;
  v9 = 0LL;
  if ( this->schema_.has_bits_offset_ != -1 )
    v9 = (const google::protobuf::uint32 *)((char *)message + (unsigned int)this->schema_.has_bits_offset_);
  oneof_case_offset = (unsigned int)this->schema_.oneof_case_offset_;
  has_bits = v9;
  has_bits_indices = this->schema_.has_bit_indices_;
  field_count = this->descriptor_->field_count_;
  if ( field_count > 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error((const char *)&stru_1A1700D9.json_name_ + 7);
  if ( field_count > output->_M_impl._M_end_of_storage - M_start )
  {
    v29 = 8 * field_count;
    v30 = (char *)((char *)output->_M_impl._M_finish - (char *)M_start);
    if ( this->descriptor_->field_count_ )
    {
      v31 = (void *)operator new(8 * field_count);
      M_start = output->_M_impl._M_start;
      v32 = v31;
      v33 = (char *)((char *)output->_M_impl._M_finish - (char *)output->_M_impl._M_start);
    }
    else
    {
      v33 = (char *)((char *)output->_M_impl._M_finish - (char *)M_start);
      v32 = 0LL;
    }
    if ( (__int64)v33 > 0 )
    {
      v39 = M_start;
      v35 = memmove(v32, M_start, (size_t)v33);
      M_start = v39;
      v32 = v35;
    }
    else if ( !M_start )
    {
LABEL_38:
      output->_M_impl._M_start = (std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer)v32;
      output->_M_impl._M_finish = (std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer)&v30[(_QWORD)v32];
      output->_M_impl._M_end_of_storage = (std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer)((char *)v32 + v29);
      goto LABEL_8;
    }
    v40 = v32;
    operator delete(M_start);
    v32 = v40;
    goto LABEL_38;
  }
LABEL_8:
  v12 = 0LL;
  if ( this->last_non_weak_field_index_ >= 0 )
  {
    while ( 1 )
    {
      v13 = &this->descriptor_->fields_[v12];
      v14 = v13->label_ == LABEL_REPEATED;
      field = v13;
      if ( v14 )
        break;
      containing_oneof = v13->containing_oneof_;
      if ( containing_oneof )
      {
        number = (unsigned int)v13->number_;
        if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                       + 4
                       * (int)(-1431655765
                             * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))
                       + oneof_case_offset) == (_DWORD)number )
          goto LABEL_16;
LABEL_11:
        if ( this->last_non_weak_field_index_ < (int)++v12 )
          goto LABEL_18;
      }
      else
      {
        if ( !has_bits )
        {
          if ( !google::protobuf::internal::GeneratedMessageReflection::HasBit(this, message, v13) )
            goto LABEL_11;
LABEL_27:
          M_finish = output->_M_impl._M_finish;
          if ( M_finish == output->_M_impl._M_end_of_storage )
          {
LABEL_31:
            std::vector<google::protobuf::FieldDescriptor const*>::_M_realloc_insert<google::protobuf::FieldDescriptor const* const&>(
              output,
              (std::vector<const google::protobuf::FieldDescriptor*>::iterator)M_finish,
              &field,
              (const google::protobuf::FieldDescriptor *const *)number);
            goto LABEL_11;
          }
          v28 = M_finish + 1;
          *(v28 - 1) = field;
          output->_M_impl._M_finish = v28;
          goto LABEL_11;
        }
        v16 = has_bits[has_bits_indices[v12] >> 5];
        if ( !_bittest((const int *)&v16, has_bits_indices[v12]) )
          goto LABEL_11;
LABEL_16:
        M_finish = output->_M_impl._M_finish;
        if ( M_finish == output->_M_impl._M_end_of_storage )
          goto LABEL_31;
        *M_finish = v13;
        ++v12;
        output->_M_impl._M_finish = M_finish + 1;
        if ( this->last_non_weak_field_index_ < (int)v12 )
          goto LABEL_18;
      }
    }
    if ( google::protobuf::internal::GeneratedMessageReflection::FieldSize(
           (google::protobuf::internal::GeneratedMessageReflection *)this,
           message,
           (google::protobuf::Descriptor *)v13,
           number,
           v4) <= 0 )
      goto LABEL_11;
    goto LABEL_27;
  }
LABEL_18:
  extensions_offset = (unsigned int)this->schema_.extensions_offset_;
  if ( (_DWORD)extensions_offset == -1 )
  {
    v19 = output->_M_impl._M_finish;
    v20 = output->_M_impl._M_start;
    if ( v20 == v19 )
      return;
  }
  else
  {
    google::protobuf::internal::ExtensionSet::AppendToList(
      (const google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      this->descriptor_,
      this->descriptor_pool_,
      output);
    v19 = output->_M_impl._M_finish;
    v20 = output->_M_impl._M_start;
    if ( v20 == v19 )
      return;
  }
  _BitScanReverse64(&v21, v19 - v20);
  std::__introsort_loop<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,long,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::`anonymous namespace'::FieldNumberSorter>>(
    (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v20,
    (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v19,
    2LL * (int)(63 - (v21 ^ 0x3F)),
    v36);
  if ( (char *)v19 - (char *)v20 <= 128 )
  {
    std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::`anonymous namespace'::FieldNumberSorter>>(
      (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v20,
      (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v19);
  }
  else
  {
    v22 = v20 + 16;
    std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::`anonymous namespace'::FieldNumberSorter>>(
      (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v20,
      (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)(v20 + 16));
    if ( v19 != v20 + 16 )
    {
      do
      {
        while ( 1 )
        {
          v23 = *v22;
          v24 = *(v22 - 1);
          v25 = v22 - 1;
          v26 = (*v22)->number_;
          if ( v24->number_ > v26 )
            break;
          v34 = v22++;
          *v34 = v23;
          if ( v19 == v22 )
            return;
        }
        do
        {
          v25[1] = v24;
          v27 = v25;
          v24 = *--v25;
        }
        while ( v24->number_ > v26 );
        ++v22;
        *v27 = v23;
      }
      while ( v19 != v22 );
    }
  }
};

// Line 1103: range 000000000C8A6960-000000000C8A6A16
google::protobuf::int32 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_type_ + 4),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_type_ + 4),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_type_ + 4),
      (const char *)1,
      v7);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetInt32(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_int32_);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, message, field);
};

// Line 1103: range 000000000C8A54C0-000000000C8A5589
google::protobuf::int32 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.message_type_ + 2),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.message_type_ + 2),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.message_type_ + 2),
      (const char *)1,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedInt32(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<int>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1103: range 000000000C8A6F00-000000000C8A7046
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::int32 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool packed; // r13
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::RepeatedField<int> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.default_value_enum_name_ + 5),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.default_value_enum_name_ + 5),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.default_value_enum_name_ + 5),
      (const char *)1,
      v10);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    packed = field->options_->packed_;
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddInt32(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      field->number_,
      v13,
      packed,
      value,
      field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v17 = (google::protobuf::RepeatedField<int> *)((char *)message
                                                 + offsets[(int)(678152731
                                                               * (((char *)field - (char *)containing_type->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<int>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<int> *)((char *)message
                                               + offsets[(int)(containing_type->field_count_
                                                             - 1431655765
                                                             * (((char *)containing_oneof
                                                               - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1103: range 000000000C8A50A0-000000000C8A530A
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::int32 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v12; // edx
  int v13; // eax
  const google::protobuf::OneofDescriptor *v14; // rdx
  google::protobuf::internal::ExtensionSet *v15; // r12
  google::protobuf::internal::FieldType v16; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v18; // rdx
  __int64 has_bits_offset; // rax
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *extension_scope; // rsi
  const google::protobuf::FileDescriptor *file; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.extension_scope_ + 1),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.extension_scope_ + 1),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.extension_scope_ + 1),
      (const char *)1,
      v10);
  if ( field->is_extension_ )
  {
    v15 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v16 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetInt32(v15, field->number_, v16, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v12 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v13 = -1431655764 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                   + this->schema_.oneof_case_offset_
                   - 1431655764
                   * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == field->number_ )
    {
LABEL_12:
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v12]) = value;
      *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + v13)) = field->number_;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
    v14 = field->containing_oneof_;
    if ( v14 )
    {
      v12 = -1431655765 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
      v13 = 4 * v12;
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
      {
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v18 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        file = field->file_;
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v18 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
  }
  v18 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
  *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v18]) = value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v18] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v18];
  }
};

// Line 1103: range 000000000C8A1EC0-000000000C8A1FB8
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        google::protobuf::int32 value)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.options_ + 4),
      "Field does not match message type.",
      *(const char **)&value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.options_ + 4),
      "Field is singular; the method requires a repeated field.",
      *(const char **)&value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.options_ + 4),
      (const char *)1,
      v10);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedInt32(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v7,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v14 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    (*(_DWORD **)((char *)&message[1]._vptr_MessageLite + v14))[v7 + 2] = value;
  }
};

// Line 1104: range 000000000C8A6B20-000000000C8A6BD6
google::protobuf::int64 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_oneof_ + 5),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_oneof_ + 5),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.containing_oneof_ + 5),
      (const char *)2,
      v7);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetInt64(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_int64_);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<long>(this, message, field);
};

// Line 1104: range 000000000C8A5690-000000000C8A5759
google::protobuf::int64 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02._anon_0,
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02._anon_0,
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02._anon_0,
      (const char *)2,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedInt64(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<long>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1104: range 000000000C8A8420-000000000C8A8566
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::int64 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool packed; // r13
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::RepeatedField<long int> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<long int>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.index_in_oneof_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.index_in_oneof_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.index_in_oneof_ + 3),
      (const char *)2,
      v10);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    packed = field->options_->packed_;
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddInt64(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      field->number_,
      v13,
      packed,
      value,
      field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v17 = (google::protobuf::RepeatedField<long int> *)((char *)message
                                                      + offsets[(int)(678152731
                                                                    * (((char *)field - (char *)containing_type->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<long>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<long int> *)((char *)message
                                                    + offsets[(int)(containing_type->field_count_
                                                                  - 1431655765
                                                                  * (((char *)containing_oneof
                                                                    - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1104: range 000000000C8A4810-000000000C8A4A6F
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::int64 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v12; // eax
  int number; // ecx
  char *v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  __int64 v16; // rdx
  google::protobuf::internal::ExtensionSet *v17; // r12
  google::protobuf::internal::FieldType v18; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 has_bits_offset; // rsi
  __int64 v21; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rax
  google::protobuf::uint32 v23; // ecx
  const google::protobuf::Descriptor *extension_scope; // rdi
  const google::protobuf::FileDescriptor *file; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_ + 3),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_ + 3),
      (const char *)2,
      v10);
  if ( field->is_extension_ )
  {
    v17 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v18 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetInt64(v17, field->number_, v18, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v12 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    number = field->number_;
    v14 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v14 == number )
    {
LABEL_12:
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v12]) = (int (**)(...))value;
      *(_DWORD *)v14 = number;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
    v15 = field->containing_oneof_;
    if ( v15 )
    {
      number = field->number_;
      v16 = this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v12 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v14 = (char *)message + v16;
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
      {
        *(int (***)(...))((char *)&message->_vptr_MessageLite
                        + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = (int (**)(...))value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v21 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        file = field->file_;
        *(int (***)(...))((char *)&message->_vptr_MessageLite
                        + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = (int (**)(...))value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v21 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  }
  v21 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
  *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v21]) = (int (**)(...))value;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    v23 = has_bit_indices[v21];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v23 >> 5) + has_bits_offset) |= 1 << v23;
  }
};

// Line 1104: range 000000000C8A1DC0-000000000C8A1EB8
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        google::protobuf::int64 value)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.message_type_ + 3),
      "Field does not match message type.",
      (const char *)value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.message_type_ + 3),
      "Field is singular; the method requires a repeated field.",
      (const char *)value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_INT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.message_type_ + 3),
      (const char *)2,
      v10);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedInt64(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v7,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v14 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    (*(int (***)(...))((char *)&message[1]._vptr_MessageLite + v14))[v7 + 1] = (int (*)(...))value;
  }
};

// Line 1105: range 000000000C8A5760-000000000C8A5829
google::protobuf::uint32 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedUInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A16FFA3,
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A16FFA3,
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A16FFA3,
      (const char *)3,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned int>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1105: range 000000000C8A6BE0-000000000C8A6C96
google::protobuf::uint32 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetUInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.extension_scope_ + 6),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.extension_scope_ + 6),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.extension_scope_ + 6),
      (const char *)3,
      v7);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetUInt32(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_uint32_);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned int>(this, message, field);
};

// Line 1105: range 000000000C8A8180-000000000C8A82C6
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddUInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::uint32 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool packed; // r13
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::RepeatedField<unsigned int> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.type_once_ + 7),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.type_once_ + 7),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.type_once_ + 7),
      (const char *)3,
      v10);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    packed = field->options_->packed_;
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddUInt32(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      field->number_,
      v13,
      packed,
      value,
      field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v17 = (google::protobuf::RepeatedField<unsigned int> *)((char *)message
                                                          + offsets[(int)(678152731
                                                                        * (((char *)field
                                                                          - (char *)containing_type->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<unsigned int>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<unsigned int> *)((char *)message
                                                        + offsets[(int)(containing_type->field_count_
                                                                      - 1431655765
                                                                      * (((char *)containing_oneof
                                                                        - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1105: range 000000000C8A1BC0-000000000C8A1CB8
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedUInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        google::protobuf::uint32 value)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.number_ + 3),
      "Field does not match message type.",
      *(const char **)&value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.number_ + 3),
      "Field is singular; the method requires a repeated field.",
      *(const char **)&value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.number_ + 3),
      (const char *)3,
      v10);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedUInt32(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v7,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v14 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    (*(_DWORD **)((char *)&message[1]._vptr_MessageLite + v14))[v7 + 2] = value;
  }
};

// Line 1105: range 000000000C8A3DD0-000000000C8A403A
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetUInt32(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::uint32 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v12; // edx
  int v13; // eax
  const google::protobuf::OneofDescriptor *v14; // rdx
  google::protobuf::internal::ExtensionSet *v15; // r12
  google::protobuf::internal::FieldType v16; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v18; // rdx
  __int64 has_bits_offset; // rax
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *extension_scope; // rsi
  const google::protobuf::FileDescriptor *file; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.lowercase_name_ + 4),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.lowercase_name_ + 4),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT32_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.lowercase_name_ + 4),
      (const char *)3,
      v10);
  if ( field->is_extension_ )
  {
    v15 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v16 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetUInt32(v15, field->number_, v16, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v12 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v13 = -1431655764 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                   + this->schema_.oneof_case_offset_
                   - 1431655764
                   * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == field->number_ )
    {
LABEL_12:
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v12]) = value;
      *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + v13)) = field->number_;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
    v14 = field->containing_oneof_;
    if ( v14 )
    {
      v12 = -1431655765 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
      v13 = 4 * v12;
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
      {
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v18 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        file = field->file_;
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v18 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
  }
  v18 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
  *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v18]) = value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v18] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v18];
  }
};

// Line 1106: range 000000000C8A5830-000000000C8A58F9
google::protobuf::uint64 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedUInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.lowercase_name_ + 2),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.lowercase_name_ + 2),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.lowercase_name_ + 2),
      (const char *)4,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned long>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1106: range 000000000C8A6CA0-000000000C8A6D56
google::protobuf::uint64 __fastcall google::protobuf::internal::GeneratedMessageReflection::GetUInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.enum_type_,
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.enum_type_,
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.enum_type_,
      (const char *)4,
      v7);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetUInt64(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_uint64_);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned long>(this, message, field);
};

// Line 1106: range 000000000C8A82D0-000000000C8A8416
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddUInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::uint64 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool packed; // r13
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::RepeatedField<long unsigned int> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<long unsigned int>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A1700D9.has_json_name_,
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A1700D9.has_json_name_,
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A1700D9.has_json_name_,
      (const char *)4,
      v10);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    packed = field->options_->packed_;
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddUInt64(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      field->number_,
      v13,
      packed,
      value,
      field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v17 = (google::protobuf::RepeatedField<long unsigned int> *)((char *)message
                                                               + offsets[(int)(678152731
                                                                             * (((char *)field
                                                                               - (char *)containing_type->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<unsigned long>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<long unsigned int> *)((char *)message
                                                             + offsets[(int)(containing_type->field_count_
                                                                           - 1431655765
                                                                           * (((char *)containing_oneof
                                                                             - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1106: range 000000000C8A1CC0-000000000C8A1DB8
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedUInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        google::protobuf::uint64 value)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.containing_oneof_ + 1),
      "Field does not match message type.",
      (const char *)value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.containing_oneof_ + 1),
      "Field is singular; the method requires a repeated field.",
      (const char *)value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.containing_oneof_ + 1),
      (const char *)4,
      v10);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedUInt64(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v7,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v14 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    (*(int (***)(...))((char *)&message[1]._vptr_MessageLite + v14))[v7 + 1] = (int (*)(...))value;
  }
};

// Line 1106: range 000000000C8A4040-000000000C8A429F
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetUInt64(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::uint64 value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v12; // eax
  int number; // ecx
  char *v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  __int64 v16; // rdx
  google::protobuf::internal::ExtensionSet *v17; // r12
  google::protobuf::internal::FieldType v18; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 has_bits_offset; // rsi
  __int64 v21; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rax
  google::protobuf::uint32 v23; // ecx
  const google::protobuf::Descriptor *extension_scope; // rdi
  const google::protobuf::FileDescriptor *file; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.camelcase_name_ + 6),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.camelcase_name_ + 6),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_UINT64_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.camelcase_name_ + 6),
      (const char *)4,
      v10);
  if ( field->is_extension_ )
  {
    v17 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v18 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetUInt64(v17, field->number_, v18, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v12 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    number = field->number_;
    v14 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v14 == number )
    {
LABEL_12:
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v12]) = (int (**)(...))value;
      *(_DWORD *)v14 = number;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
    v15 = field->containing_oneof_;
    if ( v15 )
    {
      number = field->number_;
      v16 = this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v12 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v14 = (char *)message + v16;
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
      {
        *(int (***)(...))((char *)&message->_vptr_MessageLite
                        + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = (int (**)(...))value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v21 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        file = field->file_;
        *(int (***)(...))((char *)&message->_vptr_MessageLite
                        + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = (int (**)(...))value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v21 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  }
  v21 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
  *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v21]) = (int (**)(...))value;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    v23 = has_bit_indices[v21];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v23 >> 5) + has_bits_offset) |= 1 << v23;
  }
};

// Line 1107: range 000000000C8A6D60-000000000C8A6E16
float __fastcall google::protobuf::internal::GeneratedMessageReflection::GetFloat(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  float v4; // xmm1_4
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v8; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.options_ + 2),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.options_ + 2),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_FLOAT_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.options_ + 2),
      (const char *)6,
      v8);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetFloat(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             v4);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<float>(this, message, field);
};

// Line 1107: range 000000000C8A59D0-000000000C8A5A99
float __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedFloat(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.type_once_ + 6),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.type_once_ + 6),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_FLOAT_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.type_once_ + 6),
      (const char *)6,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedFloat(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<float>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1107: range 000000000C8A8570-000000000C8A86BE
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddFloat(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        float value,
        __int64 a5,
        const char *a6)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool v12; // r12
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *reserved_ranges; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *extensions; // rcx
  google::protobuf::RepeatedField<float> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<float>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_type_ + 4),
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_type_ + 4),
      "Field is singular; the method requires a repeated field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_FLOAT_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_type_ + 4),
      (const char *)6,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    v12 = *(_BYTE *)(*(_QWORD *)&field->extension_range_count_ + 108LL);
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddFloat(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      HIDWORD(field->enum_types_),
      v13,
      v12,
      value,
      (const google::protobuf::FieldDescriptor *)field);
    return;
  }
  reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
  offsets = this->schema_.offsets_;
  extensions = (const google::protobuf::Descriptor *)field->extensions_;
  if ( !reserved_ranges )
  {
    v17 = (google::protobuf::RepeatedField<float> *)((char *)message
                                                   + offsets[(int)(678152731
                                                                 * (((char *)field - (char *)extensions->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<float>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<float> *)((char *)message
                                                 + offsets[(int)(extensions->field_count_
                                                               - 1431655765
                                                               * (((char *)reserved_ranges
                                                                 - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1107: range 000000000C8A42B0-000000000C8A4550
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetFloat(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        float value,
        __int64 a5,
        const char *a6)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *reserved_ranges; // r8
  int v12; // eax
  int enum_types_high; // ecx
  char *v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  google::protobuf::internal::ExtensionSet *v16; // rbp
  google::protobuf::internal::FieldType v17; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 has_bits_offset; // rsi
  __int64 v20; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rax
  google::protobuf::uint32 v22; // ecx
  const google::protobuf::Descriptor *reserved_names; // rdi
  const google::protobuf::FileDescriptor *fields; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.file_,
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) == 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.file_,
      "Field is repeated; the method requires a singular field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_FLOAT_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.file_,
      (const char *)6,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    v16 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v17 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetFloat(
      v16,
      HIDWORD(field->enum_types_),
      v17,
      value,
      (const google::protobuf::FieldDescriptor *)field);
    return;
  }
  reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
  if ( reserved_ranges )
  {
    v12 = -1431655765 * (((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4);
    enum_types_high = HIDWORD(field->enum_types_);
    v14 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v14 == enum_types_high )
    {
LABEL_12:
      *(float *)((char *)&message->_vptr_MessageLite
               + (unsigned int)this->schema_.offsets_[LODWORD(field->extensions_->message_type_) + v12]) = value;
      *(_DWORD *)v14 = enum_types_high;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(
      this,
      message,
      (const google::protobuf::OneofDescriptor *)field->reserved_ranges_);
    v15 = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
    if ( v15 )
    {
      enum_types_high = HIDWORD(field->enum_types_);
      v12 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v14 = (char *)message + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v12);
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( BYTE2(field->enum_types_) )
    {
      reserved_names = (const google::protobuf::Descriptor *)field->reserved_names_;
      if ( reserved_names )
      {
        *(float *)((char *)&message->_vptr_MessageLite
                 + offsets[(int)(678152731 * (((char *)field - (char *)reserved_names->extensions_) >> 3))]) = value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v20 = (int)(678152731 * (((char *)field - (char *)reserved_names->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        fields = (const google::protobuf::FileDescriptor *)field->fields_;
        *(float *)((char *)&message->_vptr_MessageLite
                 + offsets[(int)(678152731 * (((char *)field - (char *)fields->extensions_) >> 3))]) = value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v20 = (int)(678152731 * (((char *)field - (char *)fields->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  }
  v20 = (int)(678152731 * (((char *)field - (char *)field->extensions_->file_) >> 3));
  *(float *)((char *)&message->_vptr_MessageLite + offsets[v20]) = value;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    v22 = has_bit_indices[v20];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v22 >> 5) + has_bits_offset) |= 1 << v22;
  }
};

// Line 1107: range 000000000C8A20E0-000000000C8A21ED
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedFloat(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        int index,
        float value,
        const char *a6)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *reserved_ranges; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *extensions; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      &stru_1A16FE69,
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      &stru_1A16FE69,
      "Field is singular; the method requires a repeated field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_FLOAT_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A16FE69,
      (const char *)6,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedFloat(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      SHIDWORD(field->enum_types_),
      v7,
      value);
  }
  else
  {
    reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
    offsets = this->schema_.offsets_;
    extensions = (const google::protobuf::Descriptor *)field->extensions_;
    if ( reserved_ranges )
      v14 = offsets[(int)(extensions->field_count_
                        - 1431655765
                        * (((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)extensions->fields_) >> 3))];
    (*(float **)((char *)&message[1]._vptr_MessageLite + v14))[v7 + 2] = value;
  }
};

// Line 1108: range 000000000C8A6E20-000000000C8A6ED6
double __fastcall google::protobuf::internal::GeneratedMessageReflection::GetDouble(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  double v4; // xmm1_8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v8; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_name_ + 3),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_name_ + 3),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_DOUBLE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_name_ + 3),
      (const char *)5,
      v8);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetDouble(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             v4);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<double>(this, message, field);
};

// Line 1108: range 000000000C8A5900-000000000C8A59C9
double __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedDouble(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.json_name_ + 4),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.json_name_ + 4),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_DOUBLE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.json_name_ + 4),
      (const char *)5,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedDouble(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<double>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1108: range 000000000C8A86C0-000000000C8A880E
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddDouble(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        double value,
        __int64 a5,
        const char *a6)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool v12; // r12
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *reserved_ranges; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *extensions; // rcx
  google::protobuf::RepeatedField<double> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<double>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_oneof_ + 5),
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_oneof_ + 5),
      "Field is singular; the method requires a repeated field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_DOUBLE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.containing_oneof_ + 5),
      (const char *)5,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    v12 = *(_BYTE *)(*(_QWORD *)&field->extension_range_count_ + 108LL);
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddDouble(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      HIDWORD(field->enum_types_),
      v13,
      v12,
      value,
      (const google::protobuf::FieldDescriptor *)field);
    return;
  }
  reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
  offsets = this->schema_.offsets_;
  extensions = (const google::protobuf::Descriptor *)field->extensions_;
  if ( !reserved_ranges )
  {
    v17 = (google::protobuf::RepeatedField<double> *)((char *)message
                                                    + offsets[(int)(678152731
                                                                  * (((char *)field - (char *)extensions->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<double>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<double> *)((char *)message
                                                  + offsets[(int)(extensions->field_count_
                                                                - 1431655765
                                                                * (((char *)reserved_ranges
                                                                  - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1108: range 000000000C8A4560-000000000C8A4800
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetDouble(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        double value,
        __int64 a5,
        const char *a6)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *reserved_ranges; // r8
  int v12; // eax
  int enum_types_high; // ecx
  char *v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  google::protobuf::internal::ExtensionSet *v16; // rbp
  google::protobuf::internal::FieldType v17; // al
  const google::protobuf::uint32 *offsets; // rcx
  __int64 has_bits_offset; // rsi
  __int64 v20; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rax
  google::protobuf::uint32 v22; // ecx
  const google::protobuf::Descriptor *reserved_names; // rdi
  const google::protobuf::FileDescriptor *fields; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_once_ + 1),
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) == 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_once_ + 1),
      "Field is repeated; the method requires a singular field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_DOUBLE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.type_once_ + 1),
      (const char *)5,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    v16 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v17 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetDouble(
      v16,
      HIDWORD(field->enum_types_),
      v17,
      value,
      (const google::protobuf::FieldDescriptor *)field);
    return;
  }
  reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
  if ( reserved_ranges )
  {
    v12 = -1431655765 * (((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4);
    enum_types_high = HIDWORD(field->enum_types_);
    v14 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v14 == enum_types_high )
    {
LABEL_12:
      *(double *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[LODWORD(field->extensions_->message_type_) + v12]) = value;
      *(_DWORD *)v14 = enum_types_high;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(
      this,
      message,
      (const google::protobuf::OneofDescriptor *)field->reserved_ranges_);
    v15 = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
    if ( v15 )
    {
      enum_types_high = HIDWORD(field->enum_types_);
      v12 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v14 = (char *)message + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v12);
      goto LABEL_12;
    }
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( BYTE2(field->enum_types_) )
    {
      reserved_names = (const google::protobuf::Descriptor *)field->reserved_names_;
      if ( reserved_names )
      {
        *(double *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)reserved_names->extensions_) >> 3))]) = value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v20 = (int)(678152731 * (((char *)field - (char *)reserved_names->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      else
      {
        fields = (const google::protobuf::FileDescriptor *)field->fields_;
        *(double *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)fields->extensions_) >> 3))]) = value;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v20 = (int)(678152731 * (((char *)field - (char *)fields->extensions_) >> 3));
          goto LABEL_18;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  }
  v20 = (int)(678152731 * (((char *)field - (char *)field->extensions_->file_) >> 3));
  *(double *)((char *)&message->_vptr_MessageLite + offsets[v20]) = value;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_18:
    v22 = has_bit_indices[v20];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v22 >> 5) + has_bits_offset) |= 1 << v22;
  }
};

// Line 1108: range 000000000C8A1FC0-000000000C8A20CD
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedDouble(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *field,
        int index,
        double value,
        const char *a6)
{
  __int64 v7; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *reserved_ranges; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *extensions; // rcx
  __int64 v14; // rax

  v7 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)field->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.default_value_enum_name_ + 5),
      "Field does not match message type.",
      a6);
  if ( HIDWORD(field->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.default_value_enum_name_ + 5),
      "Field is singular; the method requires a repeated field.",
      a6);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_DOUBLE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.default_value_enum_name_ + 5),
      (const char *)5,
      v10);
  if ( BYTE2(field->enum_types_) )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedDouble(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      SHIDWORD(field->enum_types_),
      v7,
      value);
  }
  else
  {
    reserved_ranges = (const google::protobuf::OneofDescriptor *)field->reserved_ranges_;
    offsets = this->schema_.offsets_;
    extensions = (const google::protobuf::Descriptor *)field->extensions_;
    if ( reserved_ranges )
      v14 = offsets[(int)(extensions->field_count_
                        - 1431655765
                        * (((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)extensions->fields_) >> 3))];
    *(double *)&(*(int (***)(...))((char *)&message[1]._vptr_MessageLite + v14))[v7 + 1] = value;
  }
};

// Line 1109: range 000000000C8A68A0-000000000C8A6956
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::GetBool(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)(&stru_1A17003B.index_in_oneof_ + 1),
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)(&stru_1A17003B.index_in_oneof_ + 1),
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_BOOL_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)(&stru_1A17003B.index_in_oneof_ + 1),
      (const char *)7,
      v7);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetBool(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_bool_);
  else
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<bool>(this, message, field);
};

// Line 1109: range 000000000C8A5AA0-000000000C8A5B69
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedBool(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.number_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.number_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_BOOL_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.number_ + 3),
      (const char *)7,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedBool(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<bool>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1109: range 000000000C8A8810-000000000C8A8956
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddBool(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        bool value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 extensions_offset; // rsi
  bool packed; // r13
  google::protobuf::internal::FieldType v13; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::RepeatedField<bool> *v17; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<bool>::Rep *rep; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.extension_scope_ + 7),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.extension_scope_ + 7),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_BOOL_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.extension_scope_ + 7),
      (const char *)7,
      v10);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    packed = field->options_->packed_;
    v13 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddBool(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
      field->number_,
      v13,
      packed,
      value,
      field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v17 = (google::protobuf::RepeatedField<bool> *)((char *)message
                                                  + offsets[(int)(678152731
                                                                * (((char *)field - (char *)containing_type->fields_) >> 3))]);
    current_size = v17->current_size_;
    if ( (_DWORD)current_size != v17->total_size_ )
      goto LABEL_11;
LABEL_13:
    google::protobuf::RepeatedField<bool>::Reserve(v17, current_size + 1);
    current_size = v17->current_size_;
    goto LABEL_11;
  }
  v17 = (google::protobuf::RepeatedField<bool> *)((char *)message
                                                + offsets[(int)(containing_type->field_count_
                                                              - 1431655765
                                                              * (((char *)containing_oneof
                                                                - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v17->current_size_;
  if ( (_DWORD)current_size == v17->total_size_ )
    goto LABEL_13;
LABEL_11:
  rep = v17->rep_;
  v17->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1109: range 000000000C8A4A80-000000000C8A4CD5
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetBool(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        bool value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v11; // eax
  int number; // ecx
  char *v13; // rdx
  const google::protobuf::OneofDescriptor *v14; // rax
  __int64 v15; // rdx
  google::protobuf::internal::ExtensionSet *v16; // r12
  google::protobuf::internal::FieldType v17; // al
  const google::protobuf::uint32 *offsets; // rdx
  int v19; // eax
  __int64 has_bits_offset; // rax
  const google::protobuf::Descriptor *v21; // rdx
  int v22; // edx
  google::protobuf::uint32 v23; // ecx
  const google::protobuf::Descriptor *extension_scope; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.number_,
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.number_,
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_BOOL_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A16FF02.number_,
      (const char *)7,
      v9);
  if ( field->is_extension_ )
  {
    v16 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v17 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetBool(v16, field->number_, v17, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( !containing_oneof )
  {
    offsets = this->schema_.offsets_;
LABEL_16:
    v19 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    goto LABEL_17;
  }
  v11 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  number = field->number_;
  v13 = (char *)message
      + this->schema_.oneof_case_offset_
      - 1431655764
      * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)v13 == number )
  {
LABEL_12:
    *((_BYTE *)&message->_vptr_MessageLite
    + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v11]) = value;
    *(_DWORD *)v13 = number;
    return;
  }
  google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
  v14 = field->containing_oneof_;
  if ( v14 )
  {
    number = field->number_;
    v15 = this->schema_.oneof_case_offset_
        - 1431655764 * (unsigned int)(((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
    v11 = -1431655765 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
    v13 = (char *)message + v15;
    goto LABEL_12;
  }
  offsets = this->schema_.offsets_;
  if ( !field->is_extension_ )
    goto LABEL_16;
  extension_scope = field->extension_scope_;
  if ( extension_scope )
    v19 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
  else
    v19 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
LABEL_17:
  *((_BYTE *)&message->_vptr_MessageLite + offsets[v19]) = value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    if ( field->is_extension_ )
    {
      v21 = field->extension_scope_;
      if ( v21 )
        v22 = 678152731 * (((char *)field - (char *)v21->extensions_) >> 3);
      else
        v22 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v22 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v23 = this->schema_.has_bit_indices_[v22];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v23 >> 5) + has_bits_offset) |= 1 << v23;
  }
};

// Line 1109: range 000000000C8A1AC0-000000000C8A1BB9
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedBool(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        bool value)
{
  __int64 v6; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v14; // rax

  v6 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.type_once_ + 7),
      "Field does not match message type.",
      (const char *)value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.type_once_ + 7),
      "Field is singular; the method requires a repeated field.",
      (const char *)value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_BOOL_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.type_once_ + 7),
      (const char *)7,
      v10);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedBool(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      v6,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v14 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v14 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    (*(_BYTE **)((char *)&message[1]._vptr_MessageLite + v14))[v6 + 8] = value;
  }
};

// Line 1115: range 000000000C8A9E90-000000000C8A9F6E
std::string *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetString[abi:cxx11](
        std::string *retstr,
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const std::string *String; // rax
  std::forward_iterator_tag v11; // cl

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.camelcase_name_ + 7),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.camelcase_name_ + 7),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.camelcase_name_ + 7),
      (const char *)9,
      v9);
  if ( field->is_extension_ )
    String = google::protobuf::internal::ExtensionSet::GetString(
               (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                     + (unsigned int)this->schema_.extensions_offset_),
               field->number_,
               field->_anon_0.default_value_string_);
  else
    String = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::ArenaStringPtr>(
               this,
               message,
               field)->ptr_;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    retstr,
    String->_M_dataplus._M_p,
    &String->_M_dataplus._M_p[String->_M_string_length],
    v11);
  return retstr;
};

// Line 1135: range 000000000C8A72C0-000000000C8A7376
const std::string *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetStringReference(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        std::string *scratch)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v8; // r8d

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A1700D9,
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A1700D9,
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A1700D9,
      (const char *)9,
      v8);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetString(
             (const google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                   + (unsigned int)this->schema_.extensions_offset_),
             field->number_,
             field->_anon_0.default_value_string_);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::ArenaStringPtr>(
             this,
             message,
             field)->ptr_;
};

// Line 1156: range 000000000C8A9260-000000000C8A96D3
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetString(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const std::string *value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::Descriptor *containing_type; // rdi
  const google::protobuf::uint32 *offsets; // rsi
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  const google::protobuf::Descriptor *v14; // rdx
  int (**v15)(...); // r14
  int v16; // edx
  int number; // r9d
  char *v18; // rax
  __int64 v19; // rdi
  std::string **v20; // rdi
  google::protobuf::Arena *hint; // rsi
  const google::protobuf::OneofDescriptor *v22; // rax
  int v23; // edx
  google::protobuf::internal::ExtensionSet *v24; // rbp
  google::protobuf::internal::FieldType v25; // al
  std::string *v26; // rdi
  __int64 has_bits_offset; // rax
  const google::protobuf::uint32 *has_bit_indices; // rcx
  bool v29; // r8
  int v30; // edx
  const google::protobuf::Descriptor *v31; // rax
  int v32; // r12d
  bool is_extension; // di
  int v34; // r15d
  google::protobuf::uint32 v35; // ecx
  int v36; // edx
  const google::protobuf::Descriptor *v37; // rdx
  const google::protobuf::Descriptor *v38; // rdx
  const google::protobuf::Descriptor *extension_scope; // rdx
  __int64 v40; // rdx

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A170185,
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A170185,
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A170185,
      (const char *)9,
      v10);
  if ( field->is_extension_ )
  {
    v24 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v25 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    v26 = google::protobuf::internal::ExtensionSet::MutableString[abi:cxx11](v24, field->number_, v25, field);
    std::string::_M_assign(v26, value);
    return;
  }
  containing_type = field->containing_type_;
  offsets = this->schema_.offsets_;
  containing_oneof = field->containing_oneof_;
  v14 = containing_type;
  v15 = *(int (***)(...))((char *)&this->schema_.default_instance_->_vptr_MessageLite
                        + offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))]);
  if ( !containing_oneof )
  {
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( (_DWORD)has_bits_offset == -1 )
      goto LABEL_28;
    has_bit_indices = this->schema_.has_bit_indices_;
    goto LABEL_21;
  }
  v16 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  number = field->number_;
  v18 = (char *)message
      + this->schema_.oneof_case_offset_
      - 1431655764
      * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)v18 != number )
  {
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, field->containing_oneof_);
    v22 = field->containing_oneof_;
    if ( v22 )
    {
      v23 = -1431655765 * (((char *)v22 - (char *)v22->containing_type_->oneof_decls_) >> 4);
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + this->schema_.oneof_case_offset_
                - 1431655764 * (unsigned int)(((char *)v22 - (char *)v22->containing_type_->oneof_decls_) >> 4)) = field->number_;
      offsets = this->schema_.offsets_;
      number = field->number_;
      containing_type = field->containing_type_;
      *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[containing_type->field_count_ + v23]) = v15;
      v16 = -1431655765 * (((char *)v22 - (char *)v22->containing_type_->oneof_decls_) >> 4);
      v18 = (char *)message
          + this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v22 - (char *)v22->containing_type_->oneof_decls_) >> 4);
      goto LABEL_10;
    }
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    is_extension = field->is_extension_;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      if ( is_extension )
      {
        extension_scope = field->extension_scope_;
        if ( extension_scope )
          v40 = ((char *)field - (char *)extension_scope->extensions_) >> 3;
        else
          v40 = ((char *)field - (char *)field->file_->extensions_) >> 3;
        v34 = 678152731 * v40;
      }
      else
      {
        v34 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v35 = this->schema_.has_bit_indices_[v34];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v35 >> 5) + has_bits_offset) |= 1 << v35;
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    }
    offsets = this->schema_.offsets_;
    if ( is_extension )
    {
      v37 = field->extension_scope_;
      if ( v37 )
        v36 = 678152731 * (((char *)field - (char *)v37->extensions_) >> 3);
      else
        v36 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v36 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v29 = is_extension;
    *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v36]) = v15;
    if ( (_DWORD)has_bits_offset == -1 )
      goto LABEL_23;
    has_bit_indices = this->schema_.has_bit_indices_;
    if ( is_extension )
    {
      v38 = field->extension_scope_;
      if ( v38 )
        v30 = 678152731 * (((char *)field - (char *)v38->extensions_) >> 3);
      else
        v30 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
      goto LABEL_22;
    }
    v14 = field->containing_type_;
LABEL_21:
    v29 = 0;
    v30 = 678152731 * (((char *)field - (char *)v14->fields_) >> 3);
LABEL_22:
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v30] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v30];
LABEL_23:
    if ( v29 )
    {
      v31 = field->extension_scope_;
      if ( v31 )
        v32 = 678152731 * (((char *)field - (char *)v31->extensions_) >> 3);
      else
        v32 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
      goto LABEL_26;
    }
    v14 = field->containing_type_;
LABEL_28:
    v32 = 678152731 * (((char *)field - (char *)v14->fields_) >> 3);
LABEL_26:
    v19 = offsets[v32];
    goto LABEL_11;
  }
LABEL_10:
  *(_DWORD *)v18 = number;
  v19 = offsets[containing_type->field_count_ + v16];
LABEL_11:
  v20 = (std::string **)((char *)message + v19);
  hint = (google::protobuf::Arena *)(*(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite
                                                         + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL);
  if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  if ( v15 == (int (**)(...))*v20 )
    google::protobuf::internal::ArenaStringPtr::CreateInstance(v20, hint, (__int64)value);
  else
    std::string::_M_assign(*v20, value);
};

// Line 1181: range 000000000C8AB1A0-000000000C8AB287
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedString[abi:cxx11](
        std::string *retstr,
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  __int64 v6; // r14
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  char **v11; // rax
  std::forward_iterator_tag v12; // cl

  v6 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.file_ + 1),
      "Field does not match message type.",
      *(const char **)&index);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.file_ + 1),
      "Field is singular; the method requires a repeated field.",
      *(const char **)&index);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A170185.file_ + 1),
      (const char *)9,
      v10);
  if ( field->is_extension_ )
    v11 = (char **)google::protobuf::internal::ExtensionSet::GetRepeatedString[abi:cxx11](
                     (__int64)message + (unsigned int)this->schema_.extensions_offset_,
                     field->number_,
                     v6);
  else
    v11 = (char **)google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedPtrField<std::string>>(
                     this,
                     message,
                     field)->rep_->elements[v6];
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(retstr, *v11, &v11[1][(_QWORD)*v11], v12);
  return retstr;
};

// Line 1199: range 000000000C8A5B70-000000000C8A5C39
const std::string *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedStringReference(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        std::string *scratch)
{
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.containing_type_ + 7),
      "Field does not match message type.",
      (const char *)scratch);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.containing_type_ + 7),
      "Field is singular; the method requires a repeated field.",
      (const char *)scratch);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.containing_type_ + 7),
      (const char *)9,
      v9);
  if ( field->is_extension_ )
    return (const std::string *)google::protobuf::internal::ExtensionSet::GetRepeatedString[abi:cxx11](
                                  (__int64)message + (unsigned int)this->schema_.extensions_offset_,
                                  field->number_,
                                  v5);
  else
    return (const std::string *)google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedPtrField<std::string>>(
                                  this,
                                  message,
                                  field)->rep_->elements[v5];
};

// Line 1218: range 000000000C8A2200-000000000C8A2303
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedString(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        const std::string *value)
{
  __int64 v6; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  __int64 v11; // rax
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  __int64 v15; // rax

  v6 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.lowercase_name_ + 1),
      "Field does not match message type.",
      (const char *)value);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.lowercase_name_ + 1),
      "Field is singular; the method requires a repeated field.",
      (const char *)value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.lowercase_name_ + 1),
      (const char *)9,
      v10);
  if ( field->is_extension_ )
  {
    v11 = google::protobuf::internal::ExtensionSet::MutableRepeatedString[abi:cxx11](
            (__int64)message + (unsigned int)this->schema_.extensions_offset_,
            field->number_,
            v6);
    std::string::_M_assign(v11, value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v15 = offsets[(int)(containing_type->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    else
      v15 = offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
    std::string::_M_assign((*(int (***)(...))((char *)&message[2]._vptr_MessageLite + v15))[v6 + 1], value);
  }
};

// Line 1236: range 000000000C8A2310-000000000C8A24E9
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddString(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const std::string *value)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  __int64 extensions_offset; // r13
  google::protobuf::internal::FieldType v11; // al
  std::string *v12; // rdi
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  const google::protobuf::Descriptor *containing_type; // rcx
  google::protobuf::internal::RepeatedPtrFieldBase *v16; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  std::string *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v23; // rdx
  __int64 v24; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.json_name_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.json_name_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_STRING_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.json_name_ + 3),
      (const char *)9,
      v9);
  if ( field->is_extension_ )
  {
    extensions_offset = (unsigned int)this->schema_.extensions_offset_;
    v11 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    v12 = google::protobuf::internal::ExtensionSet::AddString[abi:cxx11](
            (google::protobuf::internal::ExtensionSet *const)((char *)message + extensions_offset),
            field->number_,
            v11,
            field);
    goto LABEL_9;
  }
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( containing_oneof )
  {
    v16 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message
                                                             + offsets[(int)(containing_type->field_count_
                                                                           - 1431655765
                                                                           * (((char *)containing_oneof
                                                                             - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
    rep = v16->rep_;
    if ( rep )
      goto LABEL_12;
  }
  else
  {
    v16 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message
                                                             + offsets[(int)(678152731
                                                                           * (((char *)field
                                                                             - (char *)containing_type->fields_) >> 3))]);
    rep = v16->rep_;
    if ( rep )
    {
LABEL_12:
      current_size = v16->current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size < rep->allocated_size )
      {
        v12 = (std::string *)rep->elements[current_size];
        v16->current_size_ = current_size + 1;
        goto LABEL_9;
      }
      total_size = v16->total_size_;
      if ( allocated_size != total_size )
        goto LABEL_17;
      goto LABEL_16;
    }
  }
  total_size = v16->total_size_;
LABEL_16:
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v16, total_size + 1);
  rep = v16->rep_;
  allocated_size = rep->allocated_size;
LABEL_17:
  arena = v16->arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
    AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                            &arena->impl_,
                                            0x20uLL,
                                            google::protobuf::internal::arena_destruct_object<std::string>);
  }
  else
  {
    AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
  }
  v12 = AlignedAndAddCleanup;
  AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
  v23 = v16->rep_;
  AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
  v24 = v16->current_size_;
  v12->_M_string_length = 0LL;
  v16->current_size_ = v24 + 1;
  v23->elements[v24] = v12;
LABEL_9:
  std::string::_M_assign(v12, value);
};

// Line 1259: range 000000000C8A6AF0-000000000C8A6B17
const google::protobuf::EnumValueDescriptor *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetEnum(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  int EnumValue; // r12d
  google::protobuf::EnumDescriptor *v5; // rax

  EnumValue = google::protobuf::internal::GeneratedMessageReflection::GetEnumValue(this, message, field);
  v5 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field);
  return (const google::protobuf::EnumValueDescriptor *)google::protobuf::EnumDescriptor::FindValueByNumberCreatingIfUnknown(
                                                          v5,
                                                          EnumValue);
};

// Line 1266: range 000000000C8A6A20-000000000C8A6ADE
int __fastcall google::protobuf::internal::GeneratedMessageReflection::GetEnumValue(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v3; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v7; // r8d
  const google::protobuf::internal::ExtensionSet *v9; // r13
  google::protobuf::int64 v10; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A170D44,
      "Field does not match message type.",
      v3);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A170D44,
      "Field is repeated; the method requires a singular field.",
      v3);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_ENUM_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A170D44,
      (const char *)8,
      v7);
  if ( !field->is_extension_ )
    return *google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, message, field);
  v9 = (const google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_);
  v10 = google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)field);
  return google::protobuf::internal::ExtensionSet::GetEnum(v9, field->number_, *(_DWORD *)(v10 + 16));
};

// Line 1281: range 000000000C8A4EF0-000000000C8A4F3D
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetEnum(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::EnumValueDescriptor *value)
{
  const google::protobuf::EnumDescriptor *type; // r14
  const google::protobuf::EnumValueDescriptor *v7; // r8

  type = value->type_;
  if ( type != google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageEnumTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)(&stru_1A16FF02.index_in_oneof_ + 1),
      &value->name_,
      v7);
  google::protobuf::internal::GeneratedMessageReflection::SetEnumValueInternal(this, message, field, value->number_);
};

// Line 1289: range 000000000C8A4F50-000000000C8A5098
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetEnumValue(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *a3,
        int value,
        const char *a5)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const google::protobuf::EnumDescriptor *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)a3->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.containing_type_ + 4),
      "Field does not match message type.",
      a5);
  if ( HIDWORD(a3->nested_types_) == 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.containing_type_ + 4),
      "Field is repeated; the method requires a singular field.",
      a5);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3)] != CPPTYPE_ENUM_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.containing_type_ + 4),
      (const char *)8,
      v9);
  if ( this->descriptor_->file_->syntax_ != SYNTAX_PROTO3 )
  {
    v10 = google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)a3);
    if ( !google::protobuf::EnumDescriptor::FindValueByNumber(v10, value) )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v16,
        LOGLEVEL_ERROR_0,
        "google/protobuf/generated_message_reflection.cc",
        1297);
      v11 = google::protobuf::internal::LogMessage::operator<<(
              &v16,
              "SetEnumValue accepts only valid integer values: value ");
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, value);
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, (const char *)&stru_1A16FE69.extension_scope_ + 4);
      v14 = google::protobuf::internal::LogMessage::operator<<(v13, a3->full_name_);
      google::protobuf::internal::LogFinisher::operator=(&v15, v14);
      google::protobuf::internal::LogMessage::~LogMessage(&v16);
      value = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)a3)
                        + 16);
    }
  }
  google::protobuf::internal::GeneratedMessageReflection::SetEnumValueInternal(
    this,
    message,
    (const google::protobuf::FieldDescriptor *)a3,
    value);
};

// Line 1297: range 000000000C72A984-000000000C72A991
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::SetEnumValue(
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

// Line 1309: range 000000000C8A4CE0-000000000C8A4EE4
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetEnumValueInternal(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int value)
{
  google::protobuf::internal::ExtensionSet *v8; // rbp
  google::protobuf::internal::FieldType v9; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int number; // edi
  int v12; // edx
  int v13; // eax
  const google::protobuf::OneofDescriptor *v14; // rdx
  const google::protobuf::uint32 *offsets; // rcx
  __int64 v16; // rdx
  __int64 has_bits_offset; // rax
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *extension_scope; // rsi
  const google::protobuf::FileDescriptor *file; // rdx

  if ( field->is_extension_ )
  {
    v8 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v9 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::SetEnum(v8, field->number_, v9, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    number = field->number_;
    v12 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v13 = -1431655764 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                   + this->schema_.oneof_case_offset_
                   - 1431655764
                   * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == number )
    {
LABEL_5:
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v12]) = value;
      *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + v13)) = field->number_;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    v14 = field->containing_oneof_;
    if ( v14 )
    {
      v12 = -1431655765 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
      v13 = 4 * v12;
      goto LABEL_5;
    }
    offsets = this->schema_.offsets_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
      {
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v16 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
          goto LABEL_12;
        }
      }
      else
      {
        file = field->file_;
        *(_DWORD *)((char *)&message->_vptr_MessageLite
                  + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = value;
        has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
        if ( (_DWORD)has_bits_offset != -1 )
        {
          has_bit_indices = this->schema_.has_bit_indices_;
          v16 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
          goto LABEL_12;
        }
      }
      return;
    }
  }
  else
  {
    offsets = this->schema_.offsets_;
  }
  v16 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
  *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v16]) = value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
LABEL_12:
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v16] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v16];
  }
};

// Line 1319: range 000000000C8A5660-000000000C8A5687
const google::protobuf::EnumValueDescriptor *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedEnum(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  int RepeatedEnumValue; // r12d
  google::protobuf::EnumDescriptor *v6; // rax

  RepeatedEnumValue = google::protobuf::internal::GeneratedMessageReflection::GetRepeatedEnumValue(
                        this,
                        message,
                        field,
                        index);
  v6 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field);
  return (const google::protobuf::EnumValueDescriptor *)google::protobuf::EnumDescriptor::FindValueByNumberCreatingIfUnknown(
                                                          v6,
                                                          RepeatedEnumValue);
};

// Line 1326: range 000000000C8A5590-000000000C8A5659
int __fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedEnumValue(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.options_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.options_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_ENUM_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FF02.options_ + 3),
      (const char *)8,
      v9);
  if ( field->is_extension_ )
    return google::protobuf::internal::ExtensionSet::GetRepeatedEnum(
             (google::protobuf::internal::ExtensionSet *)((char *)message
                                                        + (unsigned int)this->schema_.extensions_offset_),
             (std::_Rb_tree_color)field->number_,
             v5);
  else
    return google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<int>>(
             this,
             message,
             field)->rep_->elements[v5];
};

// Line 1341: range 000000000C8A3270-000000000C8A32D0
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnum(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        const google::protobuf::EnumValueDescriptor *value)
{
  const google::protobuf::EnumDescriptor *type; // r15
  const google::protobuf::EnumValueDescriptor *v9; // r8

  type = value->type_;
  if ( type != google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageEnumTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.containing_type_ + 4),
      &value->name_,
      v9);
  google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnumValueInternal(
    this,
    message,
    field,
    index,
    value->number_);
};

// Line 1350: range 000000000C8A32E0-000000000C8A3435
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnumValue(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *a3,
        int index,
        const char *value)
{
  int v6; // r13d
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::EnumDescriptor *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-68h] BYREF

  v6 = (int)value;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)a3->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.containing_type_ + 4),
      "Field does not match message type.",
      value);
  if ( HIDWORD(a3->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.containing_type_ + 4),
      "Field is singular; the method requires a repeated field.",
      value);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3)] != CPPTYPE_ENUM_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.containing_type_ + 4),
      (const char *)8,
      v10);
  if ( this->descriptor_->file_->syntax_ != SYNTAX_PROTO3 )
  {
    v11 = google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)a3);
    if ( !google::protobuf::EnumDescriptor::FindValueByNumber(v11, v6) )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v18,
        LOGLEVEL_ERROR_0,
        "google/protobuf/generated_message_reflection.cc",
        1358);
      v12 = google::protobuf::internal::LogMessage::operator<<(
              &v18,
              "SetRepeatedEnumValue accepts only valid integer values: ");
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, "value ");
      v14 = google::protobuf::internal::LogMessage::operator<<(v13, v6);
      v15 = google::protobuf::internal::LogMessage::operator<<(v14, (const char *)&stru_1A16FE69.extension_scope_ + 4);
      v16 = google::protobuf::internal::LogMessage::operator<<(v15, a3->full_name_);
      google::protobuf::internal::LogFinisher::operator=(&v17, v16);
      google::protobuf::internal::LogMessage::~LogMessage(&v18);
      v6 = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)a3)
                     + 16);
    }
  }
  google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnumValueInternal(
    this,
    message,
    (const google::protobuf::FieldDescriptor *)a3,
    index,
    v6);
};

// Line 1358: range 000000000C72A972-000000000C72A97F
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnumValue(
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

// Line 1373: range 000000000C8A31F0-000000000C8A3263
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetRepeatedEnumValueInternal(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index,
        int value)
{
  __int64 v5; // r9
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rcx
  const google::protobuf::Descriptor *containing_type; // rdi
  __int64 v9; // rax

  v5 = index;
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::SetRepeatedEnum(
      (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      (std::_Rb_tree_color)field->number_,
      index,
      value);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    offsets = this->schema_.offsets_;
    containing_type = field->containing_type_;
    if ( containing_oneof )
      v9 = *(__int64 *)((char *)&message[1]._vptr_MessageLite
                      + offsets[(int)(containing_type->field_count_
                                    - 1431655765
                                    * (((char *)containing_oneof
                                      - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
    else
      v9 = *(__int64 *)((char *)&message[1]._vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))]);
    *(_DWORD *)(v9 + 4 * v5 + 8) = value;
  }
};

// Line 1383: range 000000000C8A7120-000000000C8A716D
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddEnum(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::EnumValueDescriptor *value)
{
  const google::protobuf::EnumDescriptor *type; // r14
  const google::protobuf::EnumValueDescriptor *v7; // r8

  type = value->type_;
  if ( type != google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageEnumTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B._anon_0.default_value_double_ + 6),
      &value->name_,
      v7);
  google::protobuf::internal::GeneratedMessageReflection::AddEnumValueInternal(this, message, field, value->number_);
};

// Line 1391: range 000000000C8A7180-000000000C8A72B8
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddEnumValue(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *message,
        google::protobuf::Descriptor *a3,
        int value,
        const char *a5)
{
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const google::protobuf::EnumDescriptor *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != (google::protobuf::Descriptor *)a3->extensions_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B._anon_0.default_value_double_ + 6),
      "Field does not match message type.",
      a5);
  if ( HIDWORD(a3->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B._anon_0.default_value_double_ + 6),
      "Field is singular; the method requires a repeated field.",
      a5);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3)] != CPPTYPE_ENUM_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B._anon_0.default_value_double_ + 6),
      (const char *)8,
      v9);
  if ( this->descriptor_->file_->syntax_ != SYNTAX_PROTO3 )
  {
    v10 = google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)a3);
    if ( !google::protobuf::EnumDescriptor::FindValueByNumber(v10, value) )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v16,
        LOGLEVEL_ERROR_0,
        "google/protobuf/generated_message_reflection.cc",
        1399);
      v11 = google::protobuf::internal::LogMessage::operator<<(
              &v16,
              "AddEnumValue accepts only valid integer values: value ");
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, value);
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, (const char *)&stru_1A16FE69.extension_scope_ + 4);
      v14 = google::protobuf::internal::LogMessage::operator<<(v13, a3->full_name_);
      google::protobuf::internal::LogFinisher::operator=(&v15, v14);
      google::protobuf::internal::LogMessage::~LogMessage(&v16);
      value = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)a3)
                        + 16);
    }
  }
  google::protobuf::internal::GeneratedMessageReflection::AddEnumValueInternal(
    this,
    message,
    (const google::protobuf::FieldDescriptor *)a3,
    value);
};

// Line 1399: range 000000000C72AA2C-000000000C72AA39
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::AddEnumValue(
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

// Line 1411: range 000000000C8A7050-000000000C8A711C
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddEnumValueInternal(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int value)
{
  bool packed; // r13
  google::protobuf::internal::ExtensionSet *v7; // r12
  google::protobuf::internal::FieldType v8; // al
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::Descriptor *containing_type; // rcx
  const google::protobuf::uint32 *offsets; // rdx
  google::protobuf::RepeatedField<int> *v12; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax

  if ( field->is_extension_ )
  {
    packed = field->options_->packed_;
    v7 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v8 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::AddEnum(v7, field->number_, v8, packed, value, field);
    return;
  }
  containing_oneof = field->containing_oneof_;
  containing_type = field->containing_type_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    v12 = (google::protobuf::RepeatedField<int> *)((char *)message
                                                 + offsets[(int)(678152731
                                                               * (((char *)field - (char *)containing_type->fields_) >> 3))]);
    current_size = v12->current_size_;
    if ( (_DWORD)current_size != v12->total_size_ )
      goto LABEL_5;
LABEL_7:
    google::protobuf::RepeatedField<int>::Reserve(v12, current_size + 1);
    current_size = v12->current_size_;
    goto LABEL_5;
  }
  v12 = (google::protobuf::RepeatedField<int> *)((char *)message
                                               + offsets[(int)(containing_type->field_count_
                                                             - 1431655765
                                                             * (((char *)containing_oneof
                                                               - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  current_size = v12->current_size_;
  if ( (_DWORD)current_size == v12->total_size_ )
    goto LABEL_7;
LABEL_5:
  rep = v12->rep_;
  v12->current_size_ = current_size + 1;
  rep->elements[current_size] = value;
};

// Line 1425: range 000000000C8A64A0-000000000C8A65BD
const google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::MessageFactory *factory)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const google::protobuf::Message *result; // rax
  const google::protobuf::internal::ExtensionSet *v11; // r13
  const google::protobuf::Descriptor *v12; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_once_ + 6),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_once_ + 6),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.type_once_ + 6),
      (const char *)0xA,
      v9);
  if ( !factory )
    factory = this->message_factory_;
  if ( field->is_extension_ )
  {
    v11 = (const google::protobuf::internal::ExtensionSet *)((char *)message
                                                           + (unsigned int)this->schema_.extensions_offset_);
    v12 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
    return (const google::protobuf::Message *)google::protobuf::internal::ExtensionSet::GetMessage(
                                                v11,
                                                field->number_,
                                                v12,
                                                factory);
  }
  else
  {
    result = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::Message const*>(
                this,
                message,
                field);
    if ( !result )
      return *(const google::protobuf::Message **)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                                                 + (unsigned int)this->schema_.offsets_[(int)(678152731
                                                                                            * (((char *)field
                                                                                              - (char *)field->containing_type_->fields_) >> 3))]);
  }
  return result;
};

// Line 1445: range 000000000C8A3660-000000000C8A3AC3
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::MutableMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::MessageFactory *factory)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rdx
  const google::protobuf::uint32 *offsets; // rcx
  const google::protobuf::Descriptor *containing_type; // rsi
  google::protobuf::Message **v14; // r13
  google::protobuf::Message *result; // rax
  __int64 v16; // rdx
  __int64 has_bits_offset; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  const google::protobuf::OneofDescriptor *v20; // rax
  bool is_extension; // si
  int v22; // eax
  const google::protobuf::uint32 *v23; // rdx
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64, __int64); // r15
  google::protobuf::Arena *(__fastcall *v29)(const google::protobuf::MessageLite *const); // rax
  int v30; // edx
  __int64 v31; // rbp
  __int64 (__fastcall *v32)(__int64, google::protobuf::Message *); // rbx
  google::protobuf::Arena *(__fastcall *v33)(const google::protobuf::MessageLite *const); // rdx
  const google::protobuf::Descriptor *v34; // rax
  const google::protobuf::Descriptor *v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  google::protobuf::uint32 v38; // ecx
  int v39; // eax
  const google::protobuf::Descriptor *v40; // rax
  const google::protobuf::Descriptor *extension_scope; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.default_value_enum_name_ + 2),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.default_value_enum_name_ + 2),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.default_value_enum_name_ + 2),
      (const char *)0xA,
      v10);
  if ( !factory )
    factory = this->message_factory_;
  if ( field->is_extension_ )
    return (google::protobuf::Message *)google::protobuf::internal::ExtensionSet::MutableMessage(
                                          (google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                                          + (unsigned int)this->schema_.extensions_offset_),
                                          field,
                                          factory);
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  containing_type = field->containing_type_;
  if ( !containing_oneof )
  {
    v16 = (char *)field - (char *)containing_type->fields_;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    v18 = (int)(678152731 * (v16 >> 3));
    v14 = (google::protobuf::Message **)((char *)message + offsets[v18]);
    result = *v14;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      v19 = has_bits_offset + 4LL * (this->schema_.has_bit_indices_[v18] >> 5);
      *(_DWORD *)((char *)&message->_vptr_MessageLite + v19) |= 1 << this->schema_.has_bit_indices_[v18];
    }
LABEL_13:
    if ( result )
      return result;
    goto LABEL_25;
  }
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                 + this->schema_.oneof_case_offset_
                 - 1431655764
                 * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == field->number_ )
  {
    v14 = (google::protobuf::Message **)((char *)message
                                       + offsets[(int)(containing_type->field_count_
                                                     - 1431655765
                                                     * (((char *)containing_oneof
                                                       - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
    result = *v14;
    goto LABEL_13;
  }
  google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
  v20 = field->containing_oneof_;
  if ( v20 )
  {
    is_extension = field->is_extension_;
    v22 = -1431655765 * (((char *)v20 - (char *)v20->containing_type_->oneof_decls_) >> 4);
    *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v22)) = field->number_;
    v23 = this->schema_.offsets_;
    v24 = v23[field->containing_type_->field_count_ + v22];
  }
  else
  {
    v36 = (unsigned int)this->schema_.has_bits_offset_;
    is_extension = field->is_extension_;
    if ( (_DWORD)v36 != -1 )
    {
      if ( is_extension )
      {
        extension_scope = field->extension_scope_;
        if ( extension_scope )
          v37 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
        else
          v37 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
      }
      else
      {
        v37 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v38 = this->schema_.has_bit_indices_[v37];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v38 >> 5) + v36) |= 1 << v38;
    }
    v23 = this->schema_.offsets_;
    if ( is_extension )
    {
      v40 = field->extension_scope_;
      if ( v40 )
        v39 = 678152731 * (((char *)field - (char *)v40->extensions_) >> 3);
      else
        v39 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v39 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v24 = v23[v39];
  }
  v14 = (google::protobuf::Message **)((char *)message + v24);
  if ( is_extension )
  {
    v34 = field->extension_scope_;
    if ( v34 )
      v25 = 678152731 * (((char *)field - (char *)v34->extensions_) >> 3);
    else
      v25 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
  }
  else
  {
    v25 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
  }
  v26 = 0LL;
  v27 = *(__int64 *)((char *)&this->schema_.default_instance_->_vptr_MessageLite + v23[v25]);
  v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL);
  v29 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                             + 5);
  if ( v29 != google::protobuf::MessageLite::GetArena )
    v26 = ((__int64 (__fastcall *)(google::protobuf::Message *, _QWORD))v29)(message, 0LL);
  result = (google::protobuf::Message *)v28(v27, v26);
  *v14 = result;
  if ( !result )
  {
LABEL_25:
    if ( field->is_extension_ )
    {
      v35 = field->extension_scope_;
      if ( v35 )
        v30 = 678152731 * (((char *)field - (char *)v35->extensions_) >> 3);
      else
        v30 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v30 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v31 = *(__int64 *)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                     + (unsigned int)this->schema_.offsets_[v30]);
    v32 = *(__int64 (__fastcall **)(__int64, google::protobuf::Message *))(*(_QWORD *)v31 + 32LL);
    v33 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                               + 5);
    if ( v33 != google::protobuf::MessageLite::GetArena )
      result = (google::protobuf::Message *)v33(message);
    result = (google::protobuf::Message *)v32(v31, result);
    *v14 = result;
  }
  return result;
};

// Line 1481: range 000000000C8A3AD0-000000000C8A3DBC
void __fastcall google::protobuf::internal::GeneratedMessageReflection::UnsafeArenaSetAllocatedMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Message *sub_message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rdx
  const google::protobuf::OneofDescriptor *v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 has_bits_offset; // rdx
  const google::protobuf::Descriptor *containing_type; // rsi
  __int64 v17; // rdx
  google::protobuf::Message **v18; // r12
  unsigned __int64 v19; // rdx
  google::protobuf::internal::ExtensionSet *v20; // rbp
  google::protobuf::internal::FieldType v21; // al
  int v22; // eax
  __int64 v23; // rdx
  const google::protobuf::Descriptor *extension_scope; // rax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A16FF02,
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A16FF02,
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      &stru_1A16FF02,
      (const char *)0xA,
      v10);
  if ( field->is_extension_ )
  {
    v20 = (google::protobuf::internal::ExtensionSet *)((char *)message + (unsigned int)this->schema_.extensions_offset_);
    v21 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field);
    google::protobuf::internal::ExtensionSet::UnsafeArenaSetAllocatedMessage(
      v20,
      field->number_,
      v21,
      field,
      sub_message);
  }
  else
  {
    containing_oneof = field->containing_oneof_;
    if ( containing_oneof )
    {
      if ( sub_message )
      {
        google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
        v12 = field->containing_oneof_;
        if ( v12 )
        {
          v13 = -1431655765 * (((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
          v14 = this->schema_.offsets_[(int)(field->containing_type_->field_count_
                                           - 1431655765
                                           * (((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4))];
        }
        else
        {
          if ( field->is_extension_ )
          {
            extension_scope = field->extension_scope_;
            if ( extension_scope )
              v22 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
            else
              v22 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
          }
          else
          {
            v22 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
          }
          v14 = this->schema_.offsets_[v22];
          v13 = -1431655765 * ((__int64)-*(_QWORD *)(MEMORY[0x10] + 48LL) >> 4);
        }
        *(int (***)(...))((char *)&message->_vptr_MessageLite + v14) = (int (**)(...))sub_message;
        *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v13)) = field->number_;
      }
      else
      {
        google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
      }
    }
    else
    {
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      containing_type = field->containing_type_;
      if ( sub_message )
      {
        if ( (_DWORD)has_bits_offset != -1 )
        {
          v17 = has_bits_offset
              + 4LL
              * (this->schema_.has_bit_indices_[(int)(678152731
                                                    * (((char *)field - (char *)containing_type->fields_) >> 3))] >> 5);
          *(_DWORD *)((char *)&message->_vptr_MessageLite + v17) |= 1 << this->schema_.has_bit_indices_[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))];
        }
      }
      else if ( (_DWORD)has_bits_offset != -1 )
      {
        v23 = has_bits_offset
            + 4LL
            * (this->schema_.has_bit_indices_[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))] >> 5);
        *(_DWORD *)((char *)&message->_vptr_MessageLite + v23) &= ~(1 << this->schema_.has_bit_indices_[(int)(678152731 * (((char *)field - (char *)containing_type->fields_) >> 3))]);
      }
      v18 = (google::protobuf::Message **)((char *)message
                                         + (unsigned int)this->schema_.offsets_[(int)(678152731
                                                                                    * (((char *)field
                                                                                      - (char *)containing_type->fields_) >> 3))]);
      v19 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
        v19 = *(_QWORD *)(v19 + 8);
      if ( !v19 && *v18 )
        (*((void (__fastcall **)(google::protobuf::Message *))(*v18)->_vptr_MessageLite + 1))(*v18);
      *v18 = sub_message;
    }
  }
};

// Line 1515: range 000000000C8A5390-000000000C8A54B8
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetAllocatedMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        google::protobuf::Message *sub_message,
        const google::protobuf::FieldDescriptor *field)
{
  google::protobuf::Arena *(__fastcall *v7)(const google::protobuf::MessageLite *const); // rax
  __int64 v8; // rbx
  google::protobuf::Arena *(__fastcall *v9)(const google::protobuf::MessageLite *const); // rax
  __int64 v10; // rax
  google::protobuf::Arena *(__fastcall *v11)(const google::protobuf::MessageLite *const); // rax
  google::protobuf::Arena *(__fastcall *v12)(const google::protobuf::MessageLite *const); // rax
  google::protobuf::Message *v13; // rax
  google::protobuf::Arena *v14; // rdi
  google::protobuf::Arena *(__fastcall *v15)(const google::protobuf::MessageLite *const); // rax

  if ( !sub_message )
    goto LABEL_13;
  v7 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)sub_message->_vptr_MessageLite
                                                                                            + 5);
  if ( v7 == google::protobuf::MessageLite::GetArena )
  {
    v8 = 0LL;
    v9 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                              + 5);
    if ( v9 == google::protobuf::MessageLite::GetArena )
      goto LABEL_13;
    goto LABEL_4;
  }
  v8 = (__int64)v7(sub_message);
  v9 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                            + 5);
  if ( v9 != google::protobuf::MessageLite::GetArena )
  {
LABEL_4:
    v10 = (__int64)v9(message);
    goto LABEL_5;
  }
  v10 = 0LL;
LABEL_5:
  if ( v10 != v8 )
  {
    v11 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)sub_message->_vptr_MessageLite
                                                                                               + 5);
    if ( v11 != google::protobuf::MessageLite::GetArena && (__int64)v11(sub_message)
      || (v12 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite + 5),
          v12 == google::protobuf::MessageLite::GetArena)
      || !(__int64)v12(message) )
    {
      v13 = google::protobuf::internal::GeneratedMessageReflection::MutableMessage(this, message, field, 0LL);
      (*((void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))v13->_vptr_MessageLite + 18))(
        v13,
        sub_message);
      return;
    }
    v14 = 0LL;
    v15 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                               + 5);
    if ( v15 != google::protobuf::MessageLite::GetArena )
      v14 = v15(message);
    google::protobuf::Arena::Own<google::protobuf::Message>(v14, sub_message);
  }
LABEL_13:
  google::protobuf::internal::GeneratedMessageReflection::UnsafeArenaSetAllocatedMessage(
    this,
    message,
    sub_message,
    field);
};

// Line 1543: range 000000000C8A3440-000000000C8A35F7
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::UnsafeArenaReleaseMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::MessageFactory *factory)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  google::protobuf::Message *v12; // r8
  unsigned __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rsi
  google::protobuf::Message **v16; // rbx
  __int64 v18; // rax
  __int64 has_bits_offset; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.options_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ == LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.options_ + 3),
      "Field is repeated; the method requires a singular field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.options_ + 3),
      (const char *)0xA,
      v10);
  if ( !factory )
    factory = this->message_factory_;
  if ( !field->is_extension_ )
  {
    containing_oneof = field->containing_oneof_;
    if ( field->label_ == LABEL_REPEATED )
    {
      if ( containing_oneof )
        goto LABEL_12;
      v18 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    }
    else
    {
      if ( containing_oneof )
      {
LABEL_12:
        v12 = 0LL;
        v13 = 0xAAAAAAAAAAAAAAABLL
            * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
        v14 = (_DWORD *)((char *)message + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v13));
        if ( *v14 != field->number_ )
          return v12;
        *v14 = 0;
        v15 = this->schema_.offsets_[field->containing_type_->field_count_ + (int)v13];
LABEL_14:
        v16 = (google::protobuf::Message **)((char *)message + v15);
        v12 = *v16;
        *v16 = 0LL;
        return v12;
      }
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      v20 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
      v18 = v20;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        v21 = has_bits_offset + 4LL * (this->schema_.has_bit_indices_[v20] >> 5);
        *(_DWORD *)((char *)&message->_vptr_MessageLite + v21) &= ~(1 << this->schema_.has_bit_indices_[v20]);
      }
    }
    v15 = this->schema_.offsets_[v18];
    goto LABEL_14;
  }
  return (google::protobuf::Message *)google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(
                                        (google::protobuf::internal::ExtensionSet *const)((char *)message
                                                                                        + (unsigned int)this->schema_.extensions_offset_),
                                        field,
                                        factory);
};

// Line 1573: range 000000000C8A3600-000000000C8A365C
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::ReleaseMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::MessageFactory *factory)
{
  google::protobuf::Message *v4; // r12
  unsigned __int64 v5; // rdx
  google::protobuf::Message *v6; // rsi

  v4 = google::protobuf::internal::GeneratedMessageReflection::UnsafeArenaReleaseMessage(this, message, field, factory);
  v5 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
    v5 = *(_QWORD *)(v5 + 8);
  if ( v5 && v4 )
  {
    v6 = v4;
    v4 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(google::protobuf::Message *))v4->_vptr_MessageLite + 3))(v4);
    (*((void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))v4->_vptr_MessageLite + 18))(
      v4,
      v6);
  }
  return v4;
};

// Line 1584: range 000000000C8A6390-000000000C8A6491
const google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRepeatedMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v5; // r13
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  const google::protobuf::internal::MapFieldBase *v11; // rax

  v5 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.json_name_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.json_name_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A17003B.json_name_ + 3),
      (const char *)0xA,
      v9);
  if ( field->is_extension_ )
    return (const google::protobuf::Message *)google::protobuf::internal::ExtensionSet::GetRepeatedMessage(
                                                (google::protobuf::internal::ExtensionSet *)((char *)message
                                                                                           + (unsigned int)this->schema_.extensions_offset_),
                                                (std::_Rb_tree_color)field->number_,
                                                v5);
  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    return (const google::protobuf::Message *)google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::RepeatedPtrFieldBase>(
                                                this,
                                                message,
                                                field)->rep_->elements[v5];
  v11 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
          this,
          message,
          field);
  return (const google::protobuf::Message *)google::protobuf::internal::MapFieldBase::GetRepeatedField(v11)->rep_->elements[v5];
};

// Line 1603: range 000000000C8A24F0-000000000C8A26ED
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::MutableRepeatedMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  const char *v4; // r8
  __int64 v6; // r12
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  bool v11; // zf
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  __int64 v14; // rax
  const google::protobuf::uint32 *v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  const google::protobuf::Descriptor *extension_scope; // rax
  __int64 v19; // rbx
  const google::protobuf::Descriptor *v20; // rax
  __int64 v21; // rbx
  int v22; // eax

  v6 = index;
  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.file_ + 5),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.file_ + 5),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FE69.file_ + 5),
      (const char *)0xA,
      v9);
  if ( field->is_extension_ )
    return (google::protobuf::Message *)google::protobuf::internal::ExtensionSet::MutableRepeatedMessage(
                                          (google::protobuf::internal::ExtensionSet *)((char *)message
                                                                                     + (unsigned int)this->schema_.extensions_offset_),
                                          (std::_Rb_tree_color)field->number_,
                                          v6);
  v11 = !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field);
  containing_oneof = field->containing_oneof_;
  if ( v11 )
  {
    offsets = this->schema_.offsets_;
    if ( containing_oneof )
    {
      v14 = offsets[(int)(field->containing_type_->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    }
    else
    {
      if ( field->is_extension_ )
      {
        extension_scope = field->extension_scope_;
        if ( extension_scope )
          v19 = ((char *)field - (char *)extension_scope->extensions_) >> 3;
        else
          v19 = ((char *)field - (char *)field->file_->extensions_) >> 3;
        v17 = 678152731 * v19;
      }
      else
      {
        v17 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v14 = offsets[v17];
    }
    return (google::protobuf::Message *)(*(int (***)(...))((char *)&message[2]._vptr_MessageLite + v14))[v6 + 1];
  }
  else
  {
    v15 = this->schema_.offsets_;
    if ( containing_oneof )
    {
      v16 = v15[(int)(field->containing_type_->field_count_
                    - 1431655765
                    * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    }
    else
    {
      if ( field->is_extension_ )
      {
        v20 = field->extension_scope_;
        if ( v20 )
          v21 = ((char *)field - (char *)v20->extensions_) >> 3;
        else
          v21 = ((char *)field - (char *)field->file_->extensions_) >> 3;
        v22 = 678152731 * v21;
      }
      else
      {
        v22 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v16 = v15[v22];
    }
    return (google::protobuf::Message *)google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v16))->rep_->elements[v6];
  }
};

// Line 1624: range 000000000C8A65C0-000000000C8A6898
google::protobuf::Message *__fastcall google::protobuf::internal::GeneratedMessageReflection::AddMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::MessageFactory *factory)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  bool is_map; // al
  const google::protobuf::uint32 *offsets; // rdx
  bool v14; // zf
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  __int64 v16; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v17; // r14
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  __int64 current_size; // rax
  google::protobuf::Message *v20; // r15
  int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, __int64); // rbx
  google::protobuf::Arena *(__fastcall *v25)(const google::protobuf::MessageLite *const); // rax
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // rbx
  const google::protobuf::Descriptor *v28; // rax
  const google::protobuf::Descriptor *extension_scope; // rax
  const google::protobuf::Descriptor *v30; // rax
  int v31; // eax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.has_json_name_,
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.has_json_name_,
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)&stru_1A17003B.has_json_name_,
      (const char *)0xA,
      v10);
  if ( !factory )
    factory = this->message_factory_;
  if ( field->is_extension_ )
    return (google::protobuf::Message *)google::protobuf::internal::ExtensionSet::AddMessage(
                                          (google::protobuf::internal::ExtensionSet *)((char *)message
                                                                                     + (unsigned int)this->schema_.extensions_offset_),
                                          (google::protobuf::FieldDescriptor *)field,
                                          factory);
  is_map = google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field);
  offsets = this->schema_.offsets_;
  v14 = !is_map;
  containing_oneof = field->containing_oneof_;
  if ( v14 )
  {
    if ( containing_oneof )
    {
      v16 = offsets[(int)(field->containing_type_->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    }
    else
    {
      if ( field->is_extension_ )
      {
        extension_scope = field->extension_scope_;
        if ( extension_scope )
          v21 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
        else
          v21 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
      }
      else
      {
        v21 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v16 = offsets[v21];
    }
    v17 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + v16);
  }
  else
  {
    if ( containing_oneof )
    {
      v26 = offsets[(int)(field->containing_type_->field_count_
                        - 1431655765
                        * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
    }
    else
    {
      if ( field->is_extension_ )
      {
        v30 = field->extension_scope_;
        if ( v30 )
          v31 = 678152731 * (((char *)field - (char *)v30->extensions_) >> 3);
        else
          v31 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
      }
      else
      {
        v31 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      }
      v26 = offsets[v31];
    }
    v17 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v26));
  }
  rep = v17->rep_;
  current_size = v17->current_size_;
  if ( !rep || rep->allocated_size <= (int)current_size )
    goto LABEL_23;
  v20 = (google::protobuf::Message *)rep->elements[current_size];
  v17->current_size_ = current_size + 1;
  if ( !v20 )
  {
    LODWORD(current_size) = current_size + 1;
LABEL_23:
    if ( (_DWORD)current_size )
    {
      v22 = (__int64)rep->elements[0];
    }
    else
    {
      v27 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
      v28 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
      v22 = v27(factory, v28);
    }
    v23 = 0LL;
    v24 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL);
    v25 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                               + 5);
    if ( v25 != google::protobuf::MessageLite::GetArena )
      v23 = ((__int64 (__fastcall *)(google::protobuf::Message *, _QWORD))v25)(message, 0LL);
    v20 = (google::protobuf::Message *)v24(v22, v23);
    google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
      v17,
      v20);
  }
  return v20;
};

// Line 1666: range 000000000C8A8BD0-000000000C8A8E4D
void __fastcall google::protobuf::internal::GeneratedMessageReflection::AddAllocatedMessage(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::Message *new_entry)
{
  const char *v4; // r8
  google::protobuf::Descriptor *descriptor; // rdi
  google::protobuf::FieldDescriptor::CppType v9; // r8d
  bool v10; // zf
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  __int64 v13; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v14; // rbp
  google::protobuf::Arena *MaybeArenaPointer; // rax
  google::protobuf::Arena *arena; // r13
  google::protobuf::Arena *v17; // rax
  const google::protobuf::uint32 *v18; // rcx
  __int64 v19; // rdi
  int v20; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v21; // rax
  __int64 allocated_size; // rdx
  int *elements; // rax
  __int64 current_size; // rcx
  google::protobuf::Message **v25; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  const google::protobuf::Descriptor *extension_scope; // rax
  __int64 v28; // rbp
  const google::protobuf::Descriptor *v29; // rax
  __int64 v30; // rbp
  int v31; // eax

  descriptor = (google::protobuf::Descriptor *)this->descriptor_;
  if ( descriptor != field->containing_type_ )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &descriptor->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.options_ + 3),
      "Field does not match message type.",
      v4);
  if ( field->label_ != LABEL_REPEATED )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.options_ + 3),
      "Field is singular; the method requires a repeated field.",
      v4);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] != CPPTYPE_MESSAGE_0 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A1700D9.options_ + 3),
      (const char *)0xA,
      v9);
  if ( field->is_extension_ )
  {
    google::protobuf::internal::ExtensionSet::AddAllocatedMessage(
      (google::protobuf::internal::ExtensionSet *const)((char *)message + (unsigned int)this->schema_.extensions_offset_),
      field,
      new_entry);
  }
  else
  {
    v10 = !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field);
    containing_oneof = field->containing_oneof_;
    if ( v10 )
    {
      offsets = this->schema_.offsets_;
      if ( containing_oneof )
      {
        v13 = offsets[(int)(field->containing_type_->field_count_
                          - 1431655765
                          * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
      }
      else
      {
        if ( field->is_extension_ )
        {
          extension_scope = field->extension_scope_;
          if ( extension_scope )
            v28 = ((char *)field - (char *)extension_scope->extensions_) >> 3;
          else
            v28 = ((char *)field - (char *)field->file_->extensions_) >> 3;
          v20 = 678152731 * v28;
        }
        else
        {
          v20 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
        }
        v13 = offsets[v20];
      }
      v14 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + v13);
    }
    else
    {
      v18 = this->schema_.offsets_;
      if ( containing_oneof )
      {
        v19 = v18[(int)(field->containing_type_->field_count_
                      - 1431655765
                      * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
      }
      else
      {
        if ( field->is_extension_ )
        {
          v29 = field->extension_scope_;
          if ( v29 )
            v30 = ((char *)field - (char *)v29->extensions_) >> 3;
          else
            v30 = ((char *)field - (char *)field->file_->extensions_) >> 3;
          v31 = 678152731 * v30;
        }
        else
        {
          v31 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
        }
        v19 = v18[v31];
      }
      v14 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)message + v19));
    }
    MaybeArenaPointer = (google::protobuf::Arena *)google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetMaybeArenaPointer(new_entry);
    arena = v14->arena_;
    if ( v14->arena_ == MaybeArenaPointer
      && (v21 = v14->rep_) != 0LL
      && (allocated_size = v21->allocated_size, (int)allocated_size < v14->total_size_) )
    {
      elements = (int *)v21->elements;
      current_size = v14->current_size_;
      v25 = (google::protobuf::Message **)&elements[2 * current_size];
      if ( (int)allocated_size > (int)current_size )
        *(_QWORD *)&elements[2 * allocated_size] = *v25;
      *v25 = new_entry;
      rep = v14->rep_;
      v14->current_size_ = current_size + 1;
      ++rep->allocated_size;
    }
    else
    {
      v17 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetArena(new_entry);
      google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
        v14,
        new_entry,
        v17,
        arena);
    }
  }
};

// Line 1686: range 000000000C8A11F0-000000000C8A14B2
google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::GeneratedMessageReflection::MutableRawRepeatedField(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Descriptor *a3,
        unsigned int a4,
        const char *a5,
        const google::protobuf::Descriptor *a6)
{
  int v8; // r13d
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::ExtensionSet *v13; // rbp
  bool is_packed; // r12
  google::protobuf::internal::FieldType v15; // al
  const google::protobuf::Descriptor *v17; // rdx
  int v18; // ebx
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  int v21; // eax
  const google::protobuf::Descriptor *reserved_names; // rax
  __int64 v23; // rbx
  google::protobuf::internal::LogFinisher v24; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v25; // [rsp+10h] [rbp-78h] BYREF

  v8 = (int)a5;
  if ( HIDWORD(a3->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      &stru_1A16FD2D,
      "Field is singular; the method requires a repeated field.",
      a5);
  if ( a4 != google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3)] )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FD2D.camelcase_name_ + 2),
      (const char *)a4,
      v10);
  if ( v8 >= 0 && v8 != *(_DWORD *)(*(_QWORD *)&a3->extension_range_count_ + 104LL) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v25,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      1692);
    v19 = google::protobuf::internal::LogMessage::operator<<(
            &v25,
            "CHECK failed: (field->options().ctype()) == (ctype): ");
    v20 = google::protobuf::internal::LogMessage::operator<<(v19, (const char *)&stru_1A16FD2D.type_once_ + 2);
    google::protobuf::internal::LogFinisher::operator=(&v24, v20);
    google::protobuf::internal::LogMessage::~LogMessage(&v25);
  }
  if ( a6 && a6 != google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a3) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v25,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      1694);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v25, "CHECK failed: (field->message_type()) == (desc): ");
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, (const char *)&stru_1A16FD2D.is_extension_ + 1);
    google::protobuf::internal::LogFinisher::operator=(&v24, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v25);
  }
  if ( BYTE2(a3->enum_types_) )
  {
    v13 = (google::protobuf::internal::ExtensionSet *)((char *)a2 + (unsigned int)this->schema_.extensions_offset_);
    is_packed = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)a3);
    v15 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3);
    return (google::protobuf::internal::RepeatedPtrFieldBase *)google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
                                                                 v13,
                                                                 HIDWORD(a3->enum_types_),
                                                                 v15,
                                                                 is_packed,
                                                                 (const google::protobuf::FieldDescriptor *)a3);
  }
  else if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a3) )
  {
    if ( BYTE2(a3->enum_types_) )
    {
      reserved_names = (const google::protobuf::Descriptor *)a3->reserved_names_;
      if ( reserved_names )
        v23 = ((char *)a3 - (char *)reserved_names->extensions_) >> 3;
      else
        v23 = ((char *)a3 - (char *)a3->fields_->type_name_) >> 3;
      v21 = 678152731 * v23;
    }
    else
    {
      v21 = 678152731 * (((char *)a3 - (char *)a3->extensions_->file_) >> 3);
    }
    return google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)((char *)a2 + (unsigned int)this->schema_.offsets_[v21]));
  }
  else
  {
    if ( BYTE2(a3->enum_types_) )
    {
      v17 = (const google::protobuf::Descriptor *)a3->reserved_names_;
      if ( v17 )
        v18 = 678152731 * (((char *)a3 - (char *)v17->extensions_) >> 3);
      else
        v18 = 678152731 * (((char *)a3 - (char *)a3->fields_->type_name_) >> 3);
    }
    else
    {
      v18 = 678152731 * (((char *)a3 - (char *)a3->extensions_->file_) >> 3);
    }
    return (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)a2 + (unsigned int)this->schema_.offsets_[v18]);
  }
};

// Line 1692: range 000000000C72A8E6-000000000C72A8F1
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::MutableRawRepeatedField()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r13

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 1711: range 000000000C8A14C0-000000000C8A1782
const google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRawRepeatedField(
        google::protobuf::internal::GeneratedMessageReflection *this,
        const google::protobuf::Message *a2,
        google::protobuf::Descriptor *a3,
        unsigned int a4,
        const char *a5,
        const google::protobuf::Descriptor *a6)
{
  int v8; // r13d
  google::protobuf::FieldDescriptor::CppType v10; // r8d
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::ExtensionSet *v13; // rbp
  bool is_packed; // r12
  google::protobuf::internal::FieldType v15; // al
  const google::protobuf::Descriptor *v17; // rdx
  int v18; // ebx
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  int v21; // eax
  const google::protobuf::Descriptor *reserved_names; // rax
  __int64 v23; // rbx
  google::protobuf::internal::LogFinisher v24; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v25; // [rsp+10h] [rbp-78h] BYREF

  v8 = (int)a5;
  if ( HIDWORD(a3->nested_types_) != 3 )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FD2D.containing_oneof_ + 1),
      "Field is singular; the method requires a repeated field.",
      a5);
  if ( a4 != google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3)] )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageTypeError(
      &this->descriptor_->name_,
      (google::protobuf::FieldDescriptor *)a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FD2D.message_type_ + 7),
      (const char *)a4,
      v10);
  if ( v8 >= 0 && v8 != *(_DWORD *)(*(_QWORD *)&a3->extension_range_count_ + 104LL) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v25,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      1717);
    v19 = google::protobuf::internal::LogMessage::operator<<(
            &v25,
            "CHECK failed: (field->options().ctype()) == (ctype): ");
    v20 = google::protobuf::internal::LogMessage::operator<<(v19, (const char *)&stru_1A16FD2D.type_once_ + 2);
    google::protobuf::internal::LogFinisher::operator=(&v24, v20);
    google::protobuf::internal::LogMessage::~LogMessage(&v25);
  }
  if ( a6 && a6 != google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a3) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v25,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      1719);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v25, "CHECK failed: (field->message_type()) == (desc): ");
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, (const char *)&stru_1A16FD2D.is_extension_ + 1);
    google::protobuf::internal::LogFinisher::operator=(&v24, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v25);
  }
  if ( BYTE2(a3->enum_types_) )
  {
    v13 = (google::protobuf::internal::ExtensionSet *)((char *)a2 + (unsigned int)this->schema_.extensions_offset_);
    is_packed = google::protobuf::FieldDescriptor::is_packed((google::protobuf::FieldDescriptor *)a3);
    v15 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)a3);
    return (const google::protobuf::internal::RepeatedPtrFieldBase *)google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
                                                                       v13,
                                                                       HIDWORD(a3->enum_types_),
                                                                       v15,
                                                                       is_packed,
                                                                       (const google::protobuf::FieldDescriptor *)a3);
  }
  else if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a3) )
  {
    if ( BYTE2(a3->enum_types_) )
    {
      reserved_names = (const google::protobuf::Descriptor *)a3->reserved_names_;
      if ( reserved_names )
        v23 = ((char *)a3 - (char *)reserved_names->extensions_) >> 3;
      else
        v23 = ((char *)a3 - (char *)a3->fields_->type_name_) >> 3;
      v21 = 678152731 * v23;
    }
    else
    {
      v21 = 678152731 * (((char *)a3 - (char *)a3->extensions_->file_) >> 3);
    }
    return google::protobuf::internal::MapFieldBase::GetRepeatedField((const google::protobuf::internal::MapFieldBase *const)((char *)a2 + (unsigned int)this->schema_.offsets_[v21]));
  }
  else
  {
    if ( BYTE2(a3->enum_types_) )
    {
      v17 = (const google::protobuf::Descriptor *)a3->reserved_names_;
      if ( v17 )
        v18 = 678152731 * (((char *)a3 - (char *)v17->extensions_) >> 3);
      else
        v18 = 678152731 * (((char *)a3 - (char *)a3->fields_->type_name_) >> 3);
    }
    else
    {
      v18 = 678152731 * (((char *)a3 - (char *)a3->extensions_->file_) >> 3);
    }
    return (const google::protobuf::internal::RepeatedPtrFieldBase *)((char *)a2
                                                                    + (unsigned int)this->schema_.offsets_[v18]);
  }
};

// Line 1717: range 000000000C72A906-000000000C72A911
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::GetRawRepeatedField()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r13

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 1750: range 000000000C8A5C40-000000000C8A5CA6
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::ContainsMapKey(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::MapKey *key)
{
  const char *v6; // r8
  const google::protobuf::internal::MapFieldBase *v7; // rax

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.enum_type_ + 2),
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v6);
  v7 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
         this,
         message,
         field);
  return (*((__int64 (__fastcall **)(const google::protobuf::internal::MapFieldBase *, const google::protobuf::MapKey *))v7->_vptr_MapFieldBase
          + 2))(
           v7,
           key);
};

// Line 1761: range 000000000C8A1960-000000000C8A1ABA
__int64 __fastcall google::protobuf::internal::GeneratedMessageReflection::InsertOrLookupMapValue(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Descriptor *a3,
        const google::protobuf::MapKey *a4,
        google::protobuf::MapValueRef *a5)
{
  const char *v9; // r8
  const google::protobuf::Descriptor *v10; // rax
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v12; // eax
  std::string *M_p; // rdi
  const google::protobuf::OneofDescriptor *reserved_ranges; // rax
  const google::protobuf::uint32 *offsets; // rdx
  __int64 v16; // rdi
  int v18; // ebx
  const google::protobuf::Descriptor *reserved_names; // rax
  std::string v20[2]; // [rsp+0h] [rbp-58h] BYREF

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a3) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      a3,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.camelcase_name_ + 6),
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v9);
  v10 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a3);
  v20[0]._M_dataplus._M_p = v20[0]._anon_0._M_local_buf;
  strcpy(v20[0]._anon_0._M_local_buf, "value");
  v20[0]._M_string_length = 5LL;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v10, v20);
  v12 = google::protobuf::FieldDescriptor::type(FieldByName);
  M_p = (std::string *)v20[0]._M_dataplus._M_p;
  a5->type_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v12];
  if ( M_p != (std::string *)&v20[0]._anon_0 )
    operator delete(M_p);
  reserved_ranges = (const google::protobuf::OneofDescriptor *)a3->reserved_ranges_;
  offsets = this->schema_.offsets_;
  if ( reserved_ranges )
  {
    v16 = offsets[(int)(LODWORD(a3->extensions_->message_type_)
                      - 1431655765
                      * (((char *)reserved_ranges - (char *)reserved_ranges->containing_type_->oneof_decls_) >> 4))];
  }
  else
  {
    if ( BYTE2(a3->enum_types_) )
    {
      reserved_names = (const google::protobuf::Descriptor *)a3->reserved_names_;
      if ( reserved_names )
        v18 = 678152731 * (((char *)a3 - (char *)reserved_names->extensions_) >> 3);
      else
        v18 = 678152731 * (((char *)a3 - (char *)a3->fields_->type_name_) >> 3);
    }
    else
    {
      v18 = 678152731 * (((char *)a3 - (char *)a3->extensions_->file_) >> 3);
    }
    v16 = offsets[v18];
  }
  return (*(__int64 (__fastcall ***)(char *, const google::protobuf::MapKey *, google::protobuf::MapValueRef *))((char *)&a2->_vptr_MessageLite + v16))[3](
           (char *)a2 + v16,
           a4,
           a5);
};

// Line 1773: range 000000000C8A1870-000000000C8A1955
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::DeleteMapValue(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::MapKey *key)
{
  const char *v6; // r8
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  __int64 v9; // rdi
  int v11; // ebx
  const google::protobuf::Descriptor *extension_scope; // rax

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FDCA.full_name_ + 5),
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v6);
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( containing_oneof )
  {
    v9 = offsets[(int)(field->containing_type_->field_count_
                     - 1431655765
                     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))];
  }
  else
  {
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
        v11 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
      else
        v11 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v11 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v9 = offsets[v11];
  }
  return (*(__int64 (__fastcall ***)(char *, const google::protobuf::MapKey *))((char *)&message->_vptr_MessageLite + v9))[4](
           (char *)message + v9,
           key);
};

// Line 1782: range 000000000C8A5D10-000000000C8A5F55
google::protobuf::internal::GeneratedMessageReflection *__fastcall google::protobuf::internal::GeneratedMessageReflection::MapBegin(
        google::protobuf::internal::GeneratedMessageReflection *this,
        const google::protobuf::internal::GeneratedMessageReflection *a2,
        const google::protobuf::Message *a3,
        google::protobuf::Descriptor *a4)
{
  const char *v7; // r8
  const std::string *vptr_MessageLite; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v9)(const google::protobuf::Message *const); // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  const google::protobuf::Descriptor *v12; // rax
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v14; // eax
  int offsets; // edx
  google::protobuf::FieldDescriptor::CppType v16; // r15d
  const google::protobuf::Descriptor *v17; // rax
  google::protobuf::FieldDescriptor *v18; // rax
  int v19; // eax
  std::string *M_p; // rdi
  const google::protobuf::internal::MapFieldBase *v21; // rax
  google::protobuf::Message *default_instance; // r8
  __int64 v24; // rax
  const google::protobuf::Message *v25; // [rsp+8h] [rbp-60h]
  std::string key; // [rsp+10h] [rbp-58h] BYREF

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a4) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &a2->descriptor_->name_,
      a4,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.default_value_enum_name_ + 5),
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v7);
  this->schema_.has_bit_indices_ = 0LL;
  vptr_MessageLite = (const std::string *)a3->_vptr_MessageLite;
  LODWORD(this->schema_.offsets_) = 0;
  this->schema_.has_bits_offset_ = 0;
  v9 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&vptr_MessageLite[5]._anon_0._M_allocated_capacity + 1);
  if ( v9 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(const google::protobuf::Message *))vptr_MessageLite[6]._M_dataplus._M_p)(a3);
    v11 = v10;
  }
  else
  {
    v11 = (__int64)v9(a3);
  }
  this->descriptor_ = (const google::protobuf::Descriptor *const)(*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::Descriptor *))(*(_QWORD *)v11 + 728LL))(
                                                                   v11,
                                                                   a3,
                                                                   a4);
  v12 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a4);
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  *(_DWORD *)key._anon_0._M_local_buf = 7955819;
  key._M_string_length = 3LL;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v12, &key);
  v14 = google::protobuf::FieldDescriptor::type(FieldByName);
  offsets = (int)this->schema_.offsets_;
  v16 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v14];
  if ( offsets != v16 )
  {
    if ( offsets != 9 || (default_instance = (google::protobuf::Message *)this->schema_.default_instance_) == 0LL )
    {
      LODWORD(this->schema_.offsets_) = v16;
      if ( v16 != CPPTYPE_STRING_0 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( (google::protobuf::Message *)default_instance->_vptr_MessageLite != &default_instance[2] )
    {
      v25 = this->schema_.default_instance_;
      operator delete(default_instance->_vptr_MessageLite);
      default_instance = (google::protobuf::Message *)v25;
    }
    operator delete(default_instance, 0x20uLL);
    LODWORD(this->schema_.offsets_) = v16;
    if ( v16 == CPPTYPE_STRING_0 )
    {
LABEL_17:
      v24 = operator new(0x20uLL);
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)v24 = v24 + 16;
      *(_BYTE *)(v24 + 16) = 0;
      this->schema_.default_instance_ = (const google::protobuf::Message *)v24;
    }
  }
LABEL_8:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p != &key._anon_0 )
    operator delete(key._M_dataplus._M_p);
  v17 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a4);
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  strcpy(key._anon_0._M_local_buf, "value");
  key._M_string_length = 5LL;
  v18 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v17, &key);
  v19 = google::protobuf::FieldDescriptor::type(v18);
  M_p = (std::string *)key._M_dataplus._M_p;
  this->schema_.has_bits_offset_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v19];
  if ( M_p != (std::string *)&key._anon_0 )
    operator delete(M_p);
  ((void (__fastcall *)(const google::protobuf::Descriptor *const, google::protobuf::internal::GeneratedMessageReflection *))this->descriptor_->name_[3]._M_dataplus._M_p)(
    this->descriptor_,
    this);
  v21 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
          a2,
          a3,
          (const google::protobuf::FieldDescriptor *)a4);
  (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, google::protobuf::internal::GeneratedMessageReflection *))v21->_vptr_MapFieldBase
   + 6))(
    v21,
    this);
  return this;
};

// Line 1793: range 000000000C8A5F60-000000000C8A61A5
google::protobuf::internal::GeneratedMessageReflection *__fastcall google::protobuf::internal::GeneratedMessageReflection::MapEnd(
        google::protobuf::internal::GeneratedMessageReflection *this,
        const google::protobuf::internal::GeneratedMessageReflection *a2,
        const google::protobuf::Message *a3,
        google::protobuf::Descriptor *a4)
{
  const char *v7; // r8
  const std::string *vptr_MessageLite; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v9)(const google::protobuf::Message *const); // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  const google::protobuf::Descriptor *v12; // rax
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v14; // eax
  int offsets; // edx
  google::protobuf::FieldDescriptor::CppType v16; // r15d
  const google::protobuf::Descriptor *v17; // rax
  google::protobuf::FieldDescriptor *v18; // rax
  int v19; // eax
  std::string *M_p; // rdi
  const google::protobuf::internal::MapFieldBase *v21; // rax
  google::protobuf::Message *default_instance; // r8
  __int64 v24; // rax
  const google::protobuf::Message *v25; // [rsp+8h] [rbp-60h]
  std::string key; // [rsp+10h] [rbp-58h] BYREF

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)a4) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &a2->descriptor_->name_,
      a4,
      &stru_1A17003B,
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v7);
  this->schema_.has_bit_indices_ = 0LL;
  vptr_MessageLite = (const std::string *)a3->_vptr_MessageLite;
  LODWORD(this->schema_.offsets_) = 0;
  this->schema_.has_bits_offset_ = 0;
  v9 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&vptr_MessageLite[5]._anon_0._M_allocated_capacity + 1);
  if ( v9 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(const google::protobuf::Message *))vptr_MessageLite[6]._M_dataplus._M_p)(a3);
    v11 = v10;
  }
  else
  {
    v11 = (__int64)v9(a3);
  }
  this->descriptor_ = (const google::protobuf::Descriptor *const)(*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::Descriptor *))(*(_QWORD *)v11 + 728LL))(
                                                                   v11,
                                                                   a3,
                                                                   a4);
  v12 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a4);
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  *(_DWORD *)key._anon_0._M_local_buf = 7955819;
  key._M_string_length = 3LL;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v12, &key);
  v14 = google::protobuf::FieldDescriptor::type(FieldByName);
  offsets = (int)this->schema_.offsets_;
  v16 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v14];
  if ( offsets != v16 )
  {
    if ( offsets != 9 || (default_instance = (google::protobuf::Message *)this->schema_.default_instance_) == 0LL )
    {
      LODWORD(this->schema_.offsets_) = v16;
      if ( v16 != CPPTYPE_STRING_0 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( (google::protobuf::Message *)default_instance->_vptr_MessageLite != &default_instance[2] )
    {
      v25 = this->schema_.default_instance_;
      operator delete(default_instance->_vptr_MessageLite);
      default_instance = (google::protobuf::Message *)v25;
    }
    operator delete(default_instance, 0x20uLL);
    LODWORD(this->schema_.offsets_) = v16;
    if ( v16 == CPPTYPE_STRING_0 )
    {
LABEL_17:
      v24 = operator new(0x20uLL);
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)v24 = v24 + 16;
      *(_BYTE *)(v24 + 16) = 0;
      this->schema_.default_instance_ = (const google::protobuf::Message *)v24;
    }
  }
LABEL_8:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p != &key._anon_0 )
    operator delete(key._M_dataplus._M_p);
  v17 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a4);
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  strcpy(key._anon_0._M_local_buf, "value");
  key._M_string_length = 5LL;
  v18 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v17, &key);
  v19 = google::protobuf::FieldDescriptor::type(v18);
  M_p = (std::string *)key._M_dataplus._M_p;
  this->schema_.has_bits_offset_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v19];
  if ( M_p != (std::string *)&key._anon_0 )
    operator delete(M_p);
  ((void (__fastcall *)(const google::protobuf::Descriptor *const, google::protobuf::internal::GeneratedMessageReflection *))this->descriptor_->name_[3]._M_dataplus._M_p)(
    this->descriptor_,
    this);
  v21 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
          a2,
          a3,
          (const google::protobuf::FieldDescriptor *)a4);
  (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, google::protobuf::internal::GeneratedMessageReflection *))v21->_vptr_MapFieldBase
   + 7))(
    v21,
    this);
  return this;
};

// Line 1804: range 000000000C8A5CB0-000000000C8A5D06
int __fastcall google::protobuf::internal::GeneratedMessageReflection::MapSize(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v4; // r8
  const google::protobuf::internal::MapFieldBase *v5; // rax

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      (const google::protobuf::FieldDescriptor *)((char *)&stru_1A16FFA3.type_name_ + 3),
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v4);
  v5 = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
         this,
         message,
         field);
  return (*((__int64 (__fastcall **)(const google::protobuf::internal::MapFieldBase *))v5->_vptr_MapFieldBase + 8))(v5);
};

// Line 1814: range 000000000C8A09E0-000000000C8A0AAE
const google::protobuf::FieldDescriptor *__fastcall google::protobuf::internal::GeneratedMessageReflection::FindKnownExtensionByName(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const std::string *name)
{
  google::protobuf::FieldDescriptor *ExtensionByName; // r12
  const google::protobuf::Descriptor *descriptor; // rax
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  const google::protobuf::Descriptor *v5; // r13
  int extension_count; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r14

  if ( this->schema_.extensions_offset_ == -1 )
    return 0LL;
  ExtensionByName = (google::protobuf::FieldDescriptor *)google::protobuf::DescriptorPool::FindExtensionByName(
                                                           this->descriptor_pool_,
                                                           name);
  descriptor = this->descriptor_;
  if ( ExtensionByName && descriptor == ExtensionByName->containing_type_ )
    return ExtensionByName;
  if ( !descriptor->options_->message_set_wire_format_ )
    return 0LL;
  MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(this->descriptor_pool_, name);
  v5 = MessageTypeByName;
  if ( !MessageTypeByName )
    return 0LL;
  extension_count = MessageTypeByName->extension_count_;
  if ( extension_count <= 0 )
    return 0LL;
  v7 = 0LL;
  v8 = 152 * ((unsigned int)(extension_count - 1) + 1LL);
  while ( 1 )
  {
    ExtensionByName = &v5->extensions_[v7 / 0x98];
    if ( ExtensionByName->containing_type_ == this->descriptor_
      && (unsigned int)google::protobuf::FieldDescriptor::type(&v5->extensions_[v7 / 0x98]) == 11
      && ExtensionByName->label_ == LABEL_OPTIONAL
      && v5 == google::protobuf::FieldDescriptor::message_type(ExtensionByName) )
    {
      break;
    }
    v7 += 152LL;
    if ( v7 == v8 )
      return 0LL;
  }
  return ExtensionByName;
};

// Line 1846: range 000000000C8A0970-000000000C8A098A
const google::protobuf::FieldDescriptor *__fastcall google::protobuf::internal::GeneratedMessageReflection::FindKnownExtensionByNumber(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        int number)
{
  if ( this->schema_.extensions_offset_ == -1 )
    return 0LL;
  else
    return (const google::protobuf::FieldDescriptor *)google::protobuf::DescriptorPool::FindExtensionByNumber(
                                                        (google::protobuf::DescriptorPool *)this->descriptor_pool_,
                                                        this->descriptor_,
                                                        number);
};

// Line 1851: range 000000000C8A05F0-000000000C8A05FF
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::SupportsUnknownEnumValues(
        const google::protobuf::internal::GeneratedMessageReflection *const this)
{
  return this->descriptor_->file_->syntax_ == SYNTAX_PROTO3;
};

// Line 1877: range 000000000C8AD600-000000000C8AD6B5
const __int64 *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<long>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const __int64 *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const __int64 *)((char *)message + offsets[v6]);
  }
  return (const __int64 *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AD480-000000000C8AD535
const bool *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<bool>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const bool *)message + offsets[v6];
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const bool *)message + offsets[v6];
  }
  return (const bool *)message + offsets[field->containing_type_->field_count_ + (int)v5];
};

// Line 1877: range 000000000C8AD900-000000000C8AD9B5
const double *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<double>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const double *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const double *)((char *)message + offsets[v6]);
  }
  return (const double *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AD840-000000000C8AD8F5
const float *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<float>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const float *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const float *)((char *)message + offsets[v6]);
  }
  return (const float *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AC000-000000000C8AC0B5
const google::protobuf::Message *const *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::Message const*>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::Message *const *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::Message *const *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::Message *const *)((char *)message
                                                  + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABD00-000000000C8ABDB5
const google::protobuf::RepeatedField<bool> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<bool>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<bool> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<bool> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<bool> *)((char *)message
                                                       + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABB80-000000000C8ABC35
const google::protobuf::RepeatedField<double> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<double>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<double> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<double> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<double> *)((char *)message
                                                         + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABC40-000000000C8ABCF5
const google::protobuf::RepeatedField<float> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<float>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<float> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<float> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<float> *)((char *)message
                                                        + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AB880-000000000C8AB935
const google::protobuf::RepeatedField<int> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<int>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<int> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<int> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<int> *)((char *)message
                                                      + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AB940-000000000C8AB9F5
const google::protobuf::RepeatedField<long int> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<long>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<long int> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<long int> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<long int> *)((char *)message
                                                           + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABAC0-000000000C8ABB75
const google::protobuf::RepeatedField<long unsigned int> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned long>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<long unsigned int> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<long unsigned int> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<long unsigned int> *)((char *)message
                                                                    + offsets[field->containing_type_->field_count_
                                                                            + (int)v5]);
};

// Line 1877: range 000000000C8ABA00-000000000C8ABAB5
const google::protobuf::RepeatedField<unsigned int> *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedField<unsigned int>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedField<unsigned int> *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedField<unsigned int> *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedField<unsigned int> *)((char *)message
                                                               + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABDC0-000000000C8ABE75
const google::protobuf::RepeatedPtrField<std::string > *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::RepeatedPtrField<std::string>>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::RepeatedPtrField<std::string > *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::RepeatedPtrField<std::string > *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::RepeatedPtrField<std::string > *)((char *)message
                                                                  + offsets[field->containing_type_->field_count_
                                                                          + (int)v5]);
};

// Line 1877: range 000000000C8ADDE0-000000000C8ADE95
const google::protobuf::internal::ArenaStringPtr *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::ArenaStringPtr>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::internal::ArenaStringPtr *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::internal::ArenaStringPtr *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::internal::ArenaStringPtr *)((char *)message
                                                            + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABE80-000000000C8ABF35
const google::protobuf::internal::MapFieldBase *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::MapFieldBase>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::internal::MapFieldBase *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::internal::MapFieldBase *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::internal::MapFieldBase *)((char *)message
                                                          + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8ABF40-000000000C8ABFF5
const google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::RepeatedPtrFieldBase>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message + offsets[v6]);
  }
  return (const google::protobuf::internal::RepeatedPtrFieldBase *)((char *)message
                                                                  + offsets[field->containing_type_->field_count_
                                                                          + (int)v5]);
};

// Line 1877: range 000000000C8AD540-000000000C8AD5F5
const int *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const int *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const int *)((char *)message + offsets[v6]);
  }
  return (const int *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AD780-000000000C8AD835
const unsigned __int64 *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned long>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const unsigned __int64 *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const unsigned __int64 *)((char *)message + offsets[v6]);
  }
  return (const unsigned __int64 *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1877: range 000000000C8AD6C0-000000000C8AD775
const unsigned int *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned int>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // rcx
  const google::protobuf::uint32 *offsets; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  const google::protobuf::Descriptor *extension_scope; // rax

  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( !containing_oneof )
  {
    if ( !field->is_extension_ )
      goto LABEL_4;
    goto LABEL_8;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL
     * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
  if ( *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + 4 * v5)) != field->number_ )
  {
    message = this->schema_.default_instance_;
    if ( !field->is_extension_ )
    {
LABEL_4:
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
      return (const unsigned int *)((char *)message + offsets[v6]);
    }
LABEL_8:
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    return (const unsigned int *)((char *)message + offsets[v6]);
  }
  return (const unsigned int *)((char *)message + offsets[field->containing_type_->field_count_ + (int)v5]);
};

// Line 1952: range 000000000C8ADEA0-000000000C8AE114
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::HasBit(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  __int64 has_bits_offset; // rax
  const google::protobuf::Descriptor *extension_scope; // rcx
  int v6; // r12d
  _BOOL4 v7; // eax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v10; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v11; // [rsp+10h] [rbp-58h] BYREF

  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset == -1 )
  {
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field)] == CPPTYPE_MESSAGE_0 )
    {
      LOBYTE(v7) = 0;
      if ( message != this->schema_.default_instance_ )
        LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::Message const*>(
                        this,
                        message,
                        field) != 0LL;
    }
    else
    {
      switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
      {
        case 1u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<double>(this, message, field) != 0.0;
          break;
        case 2u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<float>(this, message, field) != 0.0;
          break;
        case 3u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<long>(this, message, field) != 0;
          break;
        case 4u:
        case 6u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned long>(
                          this,
                          message,
                          field) != 0;
          break;
        case 5u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<int>(this, message, field) != 0;
          break;
        case 7u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<unsigned int>(
                          this,
                          message,
                          field) != 0;
          break;
        case 8u:
          LOBYTE(v7) = *google::protobuf::internal::GeneratedMessageReflection::GetRaw<bool>(this, message, field);
          break;
        case 9u:
          LOBYTE(v7) = google::protobuf::internal::GeneratedMessageReflection::GetRaw<google::protobuf::internal::ArenaStringPtr>(
                         this,
                         message,
                         field)->ptr_->_M_string_length != 0;
          break;
        default:
          google::protobuf::internal::LogMessage::LogMessage(
            &v11,
            LOGLEVEL_FATAL_0,
            "google/protobuf/generated_message_reflection.cc",
            2002);
          v8 = google::protobuf::internal::LogMessage::operator<<(&v11, "Reached impossible case in HasBit().");
          google::protobuf::internal::LogFinisher::operator=(&v10, v8);
          google::protobuf::internal::LogMessage::~LogMessage(&v11);
          LOBYTE(v7) = 0;
          break;
      }
    }
  }
  else
  {
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
        v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
      else
        v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    return (*(_DWORD *)((char *)&message->_vptr_MessageLite
                      + 4 * (this->schema_.has_bit_indices_[v6] >> 5)
                      + has_bits_offset) >> this->schema_.has_bit_indices_[v6]) & 1;
  }
  return v7;
};

// Line 2010: range 000000000C8AB5B0-000000000C8AB625
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetBit(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  __int64 has_bits_offset; // rax
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *extension_scope; // rdi
  int v6; // edx

  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    has_bit_indices = this->schema_.has_bit_indices_;
    if ( field->is_extension_ )
    {
      extension_scope = field->extension_scope_;
      if ( extension_scope )
        v6 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
      else
        v6 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
    }
    else
    {
      v6 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v6] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v6];
  }
};

// Line 2071: range 000000000C8AB630-000000000C8AB832
void __fastcall google::protobuf::internal::GeneratedMessageReflection::ClearOneof(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::OneofDescriptor *oneof_descriptor)
{
  int v5; // esi
  google::protobuf::FieldDescriptor *FieldByNumber; // r13
  unsigned __int64 v8; // rdx
  google::protobuf::FieldDescriptor::CppType v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  void **v12; // r14
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  unsigned __int64 v14; // rdx
  void **v15; // r13
  const google::protobuf::Descriptor *extension_scope; // rax

  v5 = *(_DWORD *)((char *)&message->_vptr_MessageLite
                 + this->schema_.oneof_case_offset_
                 - 1431655764
                 * (unsigned int)(((char *)oneof_descriptor - (char *)oneof_descriptor->containing_type_->oneof_decls_) >> 4));
  if ( v5 )
  {
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                           this->descriptor_,
                                                           v5);
    v8 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
      v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
    {
      v9 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByNumber)];
      if ( v9 == CPPTYPE_STRING_0 )
      {
        if ( FieldByNumber->is_extension_ )
        {
          extension_scope = FieldByNumber->extension_scope_;
          if ( extension_scope )
            v11 = 678152731 * (((char *)FieldByNumber - (char *)extension_scope->extensions_) >> 3);
          else
            v11 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->file_->extensions_) >> 3);
        }
        else
        {
          v11 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->containing_type_->fields_) >> 3);
        }
        v12 = *(void ***)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                        + (unsigned int)this->schema_.offsets_[v11]);
        containing_oneof = FieldByNumber->containing_oneof_;
        if ( containing_oneof )
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + this->schema_.oneof_case_offset_
                    - 1431655764
                    * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) = FieldByNumber->number_;
        else
          google::protobuf::internal::GeneratedMessageReflection::SetBit(this, message, FieldByNumber);
        v14 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
          v14 = *(_QWORD *)(v14 + 8);
        if ( !v14 )
        {
          v15 = *(void ***)((char *)&message->_vptr_MessageLite
                          + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
          if ( v15 )
          {
            if ( v12 != v15 )
            {
              if ( *v15 != v15 + 2 )
                operator delete(*v15);
              operator delete(v15, 0x20uLL);
            }
          }
        }
      }
      else if ( v9 == CPPTYPE_MESSAGE_0 )
      {
        v10 = *(__int64 *)((char *)&message->_vptr_MessageLite
                         + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    *(_DWORD *)((char *)&message->_vptr_MessageLite
              + this->schema_.oneof_case_offset_
              - 1431655764
              * (unsigned int)(((char *)oneof_descriptor - (char *)oneof_descriptor->containing_type_->oneof_decls_) >> 4)) = 0;
  }
};

// Line 2116: range 000000000C8AD220-000000000C8AD3C5
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<bool>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const bool *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v7; // eax
  int number; // ecx
  char *v9; // rdx
  const google::protobuf::OneofDescriptor *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 has_bits_offset; // rdx
  int v14; // eax
  google::protobuf::uint32 v15; // ecx
  const google::protobuf::Descriptor *extension_scope; // rax
  const google::protobuf::Descriptor *v17; // rax
  __int64 v18; // rbx

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v7 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    number = field->number_;
    v9 = (char *)message
       + this->schema_.oneof_case_offset_
       - 1431655764
       * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v9 == number )
    {
LABEL_3:
      *((_BYTE *)&message->_vptr_MessageLite
      + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v7]) = *value;
      *(_DWORD *)v9 = number;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    v10 = field->containing_oneof_;
    if ( v10 )
    {
      number = field->number_;
      v11 = this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v10 - (char *)v10->containing_type_->oneof_decls_) >> 4);
      v7 = -1431655765 * (((char *)v10 - (char *)v10->containing_type_->oneof_decls_) >> 4);
      v9 = (char *)message + v11;
      goto LABEL_3;
    }
  }
  if ( field->is_extension_ )
  {
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v12 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v12 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
  }
  else
  {
    v12 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
  }
  *((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.offsets_[v12]) = *value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( (_DWORD)has_bits_offset != -1 )
  {
    if ( field->is_extension_ )
    {
      v17 = field->extension_scope_;
      if ( v17 )
        v18 = ((char *)field - (char *)v17->extensions_) >> 3;
      else
        v18 = ((char *)field - (char *)field->file_->extensions_) >> 3;
      v14 = 678152731 * v18;
    }
    else
    {
      v14 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
    }
    v15 = this->schema_.has_bit_indices_[v14];
    *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v15 >> 5) + has_bits_offset) |= 1 << v15;
  }
};

// Line 2116: range 000000000C8ACE30-000000000C8AD21B
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<double>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const double *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r13
  int v9; // edx
  int *v10; // rcx
  int number; // esi
  int v12; // r8d
  google::protobuf::FieldDescriptor *FieldByNumber; // r15
  unsigned __int64 v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  const google::protobuf::uint32 *offsets; // rcx
  int (**v17)(...); // xmm0_8
  __int64 has_bits_offset; // rsi
  __int64 v19; // rax
  const google::protobuf::uint32 *has_bit_indices; // rdx
  google::protobuf::uint32 v21; // ecx
  const google::protobuf::Descriptor *v22; // rdi
  const google::protobuf::FileDescriptor *file; // rax
  google::protobuf::FieldDescriptor::CppType v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  void **v27; // rcx
  const google::protobuf::OneofDescriptor *v28; // rax
  unsigned __int64 v29; // rdx
  void **v30; // r15
  const google::protobuf::Descriptor *extension_scope; // rax
  void **v32; // [rsp+8h] [rbp-40h]
  void **v33; // [rsp+8h] [rbp-40h]

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v9 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v10 = (int *)((char *)message
                + this->schema_.oneof_case_offset_
                - 1431655764
                * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4));
    number = field->number_;
    v12 = *v10;
    if ( *v10 == number || !v12 )
      goto LABEL_4;
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                           this->descriptor_,
                                                           v12);
    v14 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
      v14 = *(_QWORD *)(v14 + 8);
    if ( !v14 )
    {
      v24 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByNumber)];
      if ( v24 == CPPTYPE_STRING_0 )
      {
        if ( FieldByNumber->is_extension_ )
        {
          extension_scope = FieldByNumber->extension_scope_;
          if ( extension_scope )
            v26 = 678152731 * (((char *)FieldByNumber - (char *)extension_scope->extensions_) >> 3);
          else
            v26 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->file_->extensions_) >> 3);
        }
        else
        {
          v26 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->containing_type_->fields_) >> 3);
        }
        v27 = *(void ***)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                        + (unsigned int)this->schema_.offsets_[v26]);
        v28 = FieldByNumber->containing_oneof_;
        if ( v28 )
        {
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + this->schema_.oneof_case_offset_
                    - 1431655764 * (unsigned int)(((char *)v28 - (char *)v28->containing_type_->oneof_decls_) >> 4)) = FieldByNumber->number_;
        }
        else
        {
          v33 = v27;
          google::protobuf::internal::GeneratedMessageReflection::SetBit(this, message, FieldByNumber);
          v27 = v33;
        }
        v29 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
          v29 = *(_QWORD *)(v29 + 8);
        if ( !v29 )
        {
          v32 = v27;
          v30 = *(void ***)((char *)&message->_vptr_MessageLite
                          + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
          if ( v32 != v30 )
          {
            if ( v30 )
            {
              if ( *v30 != v30 + 2 )
                operator delete(*v30);
              operator delete(v30, 0x20uLL);
            }
          }
        }
      }
      else if ( v24 == CPPTYPE_MESSAGE_0 )
      {
        v25 = *(__int64 *)((char *)&message->_vptr_MessageLite
                         + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    *(_DWORD *)((char *)&message->_vptr_MessageLite
              + this->schema_.oneof_case_offset_
              - 1431655764
              * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) = 0;
    v15 = field->containing_oneof_;
    if ( v15 )
    {
      number = field->number_;
      v9 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v10 = (int *)((char *)message
                  + this->schema_.oneof_case_offset_
                  - 1431655764 * (unsigned int)(((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4));
LABEL_4:
      *(google::protobuf::Message *)((char *)message
                                   + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v9]) = *(google::protobuf::Message *)value;
      *v10 = number;
      return;
    }
  }
  offsets = this->schema_.offsets_;
  v17 = *(int (***)(...))value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( field->is_extension_ )
  {
    v22 = field->extension_scope_;
    if ( v22 )
    {
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)v22->extensions_) >> 3))]) = v17;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v19 = (int)(678152731 * (((char *)field - (char *)v22->extensions_) >> 3));
        goto LABEL_13;
      }
    }
    else
    {
      file = field->file_;
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v17;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v19 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_13;
      }
    }
  }
  else
  {
    v19 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v19]) = v17;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_13:
      v21 = has_bit_indices[v19];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v21 >> 5) + has_bits_offset) |= 1 << v21;
    }
  }
};

// Line 2116: range 000000000C8ACC50-000000000C8ACE21
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<float>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const float *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v9; // eax
  int number; // ecx
  char *v11; // rdx
  const google::protobuf::OneofDescriptor *v12; // rax
  __int64 v13; // rdx
  const google::protobuf::uint32 *offsets; // rcx
  int v15; // xmm0_4
  __int64 has_bits_offset; // rsi
  __int64 v17; // rax
  const google::protobuf::uint32 *has_bit_indices; // rdx
  google::protobuf::uint32 v19; // ecx
  const google::protobuf::Descriptor *extension_scope; // rdi
  const google::protobuf::FileDescriptor *file; // rax

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v9 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    number = field->number_;
    v11 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v11 == number )
    {
LABEL_3:
      *(float *)((char *)&message->_vptr_MessageLite
               + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v9]) = *value;
      *(_DWORD *)v11 = number;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    v12 = field->containing_oneof_;
    if ( v12 )
    {
      number = field->number_;
      v13 = this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
      v9 = -1431655765 * (((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
      v11 = (char *)message + v13;
      goto LABEL_3;
    }
  }
  offsets = this->schema_.offsets_;
  v15 = *(_DWORD *)value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( field->is_extension_ )
  {
    extension_scope = field->extension_scope_;
    if ( extension_scope )
    {
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = v15;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
        goto LABEL_10;
      }
    }
    else
    {
      file = field->file_;
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v15;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_10;
      }
    }
  }
  else
  {
    v17 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v17]) = v15;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_10:
      v19 = has_bit_indices[v17];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v19 >> 5) + has_bits_offset) |= 1 << v19;
    }
  }
};

// Line 2116: range 000000000C8AC0C0-000000000C8AC4A0
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<int>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const int *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r14
  int v9; // edx
  int v10; // eax
  int v11; // esi
  google::protobuf::FieldDescriptor *FieldByNumber; // r15
  unsigned __int64 v13; // rdx
  const google::protobuf::OneofDescriptor *v14; // rax
  const google::protobuf::uint32 *offsets; // rsi
  int v16; // ecx
  __int64 v17; // rax
  __int64 has_bits_offset; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *v20; // rdi
  const google::protobuf::FileDescriptor *file; // rax
  google::protobuf::FieldDescriptor::CppType v22; // eax
  __int64 v23; // rdi
  int v24; // eax
  void **v25; // rcx
  const google::protobuf::OneofDescriptor *v26; // rax
  unsigned __int64 v27; // rdx
  void **v28; // r15
  const google::protobuf::Descriptor *extension_scope; // rax
  void **v30; // [rsp+8h] [rbp-40h]
  void **v31; // [rsp+8h] [rbp-40h]

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v9 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v10 = -1431655764 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v11 = *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + this->schema_.oneof_case_offset_
                    - 1431655764
                    * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4));
    if ( field->number_ == v11 || !v11 )
      goto LABEL_4;
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                           this->descriptor_,
                                                           v11);
    v13 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
      v13 = *(_QWORD *)(v13 + 8);
    if ( !v13 )
    {
      v22 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByNumber)];
      if ( v22 == CPPTYPE_STRING_0 )
      {
        if ( FieldByNumber->is_extension_ )
        {
          extension_scope = FieldByNumber->extension_scope_;
          if ( extension_scope )
            v24 = 678152731 * (((char *)FieldByNumber - (char *)extension_scope->extensions_) >> 3);
          else
            v24 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->file_->extensions_) >> 3);
        }
        else
        {
          v24 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->containing_type_->fields_) >> 3);
        }
        v25 = *(void ***)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                        + (unsigned int)this->schema_.offsets_[v24]);
        v26 = FieldByNumber->containing_oneof_;
        if ( v26 )
        {
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + this->schema_.oneof_case_offset_
                    - 1431655764 * (unsigned int)(((char *)v26 - (char *)v26->containing_type_->oneof_decls_) >> 4)) = FieldByNumber->number_;
        }
        else
        {
          v31 = v25;
          google::protobuf::internal::GeneratedMessageReflection::SetBit(this, message, FieldByNumber);
          v25 = v31;
        }
        v27 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
          v27 = *(_QWORD *)(v27 + 8);
        if ( !v27 )
        {
          v30 = v25;
          v28 = *(void ***)((char *)&message->_vptr_MessageLite
                          + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
          if ( v30 != v28 )
          {
            if ( v28 )
            {
              if ( *v28 != v28 + 2 )
                operator delete(*v28);
              operator delete(v28, 0x20uLL);
            }
          }
        }
      }
      else if ( v22 == CPPTYPE_MESSAGE_0 )
      {
        v23 = *(__int64 *)((char *)&message->_vptr_MessageLite
                         + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    *(_DWORD *)((char *)&message->_vptr_MessageLite
              + this->schema_.oneof_case_offset_
              - 1431655764
              * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) = 0;
    v14 = field->containing_oneof_;
    if ( v14 )
    {
      v9 = -1431655765 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
      v10 = -1431655764 * (((char *)v14 - (char *)v14->containing_type_->oneof_decls_) >> 4);
LABEL_4:
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v9]) = *value;
      *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + v10)) = field->number_;
      return;
    }
  }
  offsets = this->schema_.offsets_;
  v16 = *value;
  if ( field->is_extension_ )
  {
    v20 = field->extension_scope_;
    if ( v20 )
    {
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)v20->extensions_) >> 3))]) = v16;
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)v20->extensions_) >> 3));
        goto LABEL_13;
      }
    }
    else
    {
      file = field->file_;
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v16;
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_13;
      }
    }
  }
  else
  {
    v17 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v17]) = v16;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_13:
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v17] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v17];
    }
  }
};

// Line 2116: range 000000000C8AC4B0-000000000C8AC66F
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<long>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const __int64 *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int v9; // eax
  int number; // ecx
  char *v11; // rdx
  const google::protobuf::OneofDescriptor *v12; // rax
  __int64 v13; // rdx
  const google::protobuf::uint32 *offsets; // rcx
  int (**v15)(...); // rdi
  __int64 has_bits_offset; // rsi
  __int64 v17; // rax
  const google::protobuf::uint32 *has_bit_indices; // rdx
  google::protobuf::uint32 v19; // ecx
  const google::protobuf::Descriptor *extension_scope; // r8
  const google::protobuf::FileDescriptor *file; // rax

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v9 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    number = field->number_;
    v11 = (char *)message
        + this->schema_.oneof_case_offset_
        - 1431655764
        * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)v11 == number )
    {
LABEL_3:
      *(google::protobuf::Message *)((char *)message
                                   + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v9]) = *(google::protobuf::Message *)value;
      *(_DWORD *)v11 = number;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    v12 = field->containing_oneof_;
    if ( v12 )
    {
      number = field->number_;
      v13 = this->schema_.oneof_case_offset_
          - 1431655764 * (unsigned int)(((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
      v9 = -1431655765 * (((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
      v11 = (char *)message + v13;
      goto LABEL_3;
    }
  }
  offsets = this->schema_.offsets_;
  v15 = (int (**)(...))*value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( field->is_extension_ )
  {
    extension_scope = field->extension_scope_;
    if ( extension_scope )
    {
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = v15;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
        goto LABEL_10;
      }
    }
    else
    {
      file = field->file_;
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v15;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v17 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_10;
      }
    }
  }
  else
  {
    v17 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v17]) = v15;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_10:
      v19 = has_bit_indices[v17];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v19 >> 5) + has_bits_offset) |= 1 << v19;
    }
  }
};

// Line 2116: range 000000000C8AC680-000000000C8AC865
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned int>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const unsigned int *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r8
  int number; // edi
  int v10; // edx
  int v11; // eax
  const google::protobuf::OneofDescriptor *v12; // rdx
  const google::protobuf::uint32 *offsets; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 has_bits_offset; // rdx
  const google::protobuf::uint32 *has_bit_indices; // rcx
  const google::protobuf::Descriptor *extension_scope; // rdi
  const google::protobuf::FileDescriptor *file; // rax

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    number = field->number_;
    v10 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v11 = -1431655764 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    if ( *(_DWORD *)((char *)&message->_vptr_MessageLite
                   + this->schema_.oneof_case_offset_
                   - 1431655764
                   * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) == number )
    {
LABEL_3:
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v10]) = *value;
      *(_DWORD *)((char *)&message->_vptr_MessageLite + (unsigned int)(this->schema_.oneof_case_offset_ + v11)) = field->number_;
      return;
    }
    google::protobuf::internal::GeneratedMessageReflection::ClearOneof(this, message, containing_oneof);
    v12 = field->containing_oneof_;
    if ( v12 )
    {
      v10 = -1431655765 * (((char *)v12 - (char *)v12->containing_type_->oneof_decls_) >> 4);
      v11 = 4 * v10;
      goto LABEL_3;
    }
  }
  offsets = this->schema_.offsets_;
  v14 = *value;
  if ( field->is_extension_ )
  {
    extension_scope = field->extension_scope_;
    if ( extension_scope )
    {
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3))]) = v14;
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v15 = (int)(678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3));
        goto LABEL_10;
      }
    }
    else
    {
      file = field->file_;
      *(_DWORD *)((char *)&message->_vptr_MessageLite
                + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v14;
      has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v15 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_10;
      }
    }
  }
  else
  {
    v15 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(_DWORD *)((char *)&message->_vptr_MessageLite + offsets[v15]) = v14;
    has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_10:
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (has_bit_indices[v15] >> 5) + has_bits_offset) |= 1 << has_bit_indices[v15];
    }
  }
};

// Line 2116: range 000000000C8AC870-000000000C8ACC4B
void __fastcall google::protobuf::internal::GeneratedMessageReflection::SetField<unsigned long>(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        const unsigned __int64 *value)
{
  const google::protobuf::OneofDescriptor *containing_oneof; // r13
  int v9; // edx
  int *v10; // rcx
  int number; // esi
  int v12; // r8d
  google::protobuf::FieldDescriptor *FieldByNumber; // r15
  unsigned __int64 v14; // rdx
  const google::protobuf::OneofDescriptor *v15; // rax
  const google::protobuf::uint32 *offsets; // rcx
  int (**v17)(...); // rdi
  __int64 has_bits_offset; // rsi
  __int64 v19; // rax
  const google::protobuf::uint32 *has_bit_indices; // rdx
  google::protobuf::uint32 v21; // ecx
  const google::protobuf::Descriptor *v22; // r8
  const google::protobuf::FileDescriptor *file; // rax
  google::protobuf::FieldDescriptor::CppType v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  void **v27; // rcx
  const google::protobuf::OneofDescriptor *v28; // rax
  unsigned __int64 v29; // rdx
  void **v30; // r15
  const google::protobuf::Descriptor *extension_scope; // rax
  void **v32; // [rsp+8h] [rbp-40h]
  void **v33; // [rsp+8h] [rbp-40h]

  containing_oneof = field->containing_oneof_;
  if ( containing_oneof )
  {
    v9 = -1431655765 * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
    v10 = (int *)((char *)message
                + this->schema_.oneof_case_offset_
                - 1431655764
                * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4));
    number = field->number_;
    v12 = *v10;
    if ( *v10 == number || !v12 )
      goto LABEL_4;
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(
                                                           this->descriptor_,
                                                           v12);
    v14 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
      v14 = *(_QWORD *)(v14 + 8);
    if ( !v14 )
    {
      v24 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByNumber)];
      if ( v24 == CPPTYPE_STRING_0 )
      {
        if ( FieldByNumber->is_extension_ )
        {
          extension_scope = FieldByNumber->extension_scope_;
          if ( extension_scope )
            v26 = 678152731 * (((char *)FieldByNumber - (char *)extension_scope->extensions_) >> 3);
          else
            v26 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->file_->extensions_) >> 3);
        }
        else
        {
          v26 = 678152731 * (((char *)FieldByNumber - (char *)FieldByNumber->containing_type_->fields_) >> 3);
        }
        v27 = *(void ***)((char *)&this->schema_.default_instance_->_vptr_MessageLite
                        + (unsigned int)this->schema_.offsets_[v26]);
        v28 = FieldByNumber->containing_oneof_;
        if ( v28 )
        {
          *(_DWORD *)((char *)&message->_vptr_MessageLite
                    + this->schema_.oneof_case_offset_
                    - 1431655764 * (unsigned int)(((char *)v28 - (char *)v28->containing_type_->oneof_decls_) >> 4)) = FieldByNumber->number_;
        }
        else
        {
          v33 = v27;
          google::protobuf::internal::GeneratedMessageReflection::SetBit(this, message, FieldByNumber);
          v27 = v33;
        }
        v29 = *(unsigned __int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(__int64 *)((_BYTE *)&message->_vptr_MessageLite + (unsigned int)this->schema_.metadata_offset_) & 1) != 0 )
          v29 = *(_QWORD *)(v29 + 8);
        if ( !v29 )
        {
          v32 = v27;
          v30 = *(void ***)((char *)&message->_vptr_MessageLite
                          + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
          if ( v32 != v30 )
          {
            if ( v30 )
            {
              if ( *v30 != v30 + 2 )
                operator delete(*v30);
              operator delete(v30, 0x20uLL);
            }
          }
        }
      }
      else if ( v24 == CPPTYPE_MESSAGE_0 )
      {
        v25 = *(__int64 *)((char *)&message->_vptr_MessageLite
                         + google::protobuf::internal::ReflectionSchema::GetFieldOffset(&this->schema_, FieldByNumber));
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    *(_DWORD *)((char *)&message->_vptr_MessageLite
              + this->schema_.oneof_case_offset_
              - 1431655764
              * (unsigned int)(((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)) = 0;
    v15 = field->containing_oneof_;
    if ( v15 )
    {
      number = field->number_;
      v9 = -1431655765 * (((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4);
      v10 = (int *)((char *)message
                  + this->schema_.oneof_case_offset_
                  - 1431655764 * (unsigned int)(((char *)v15 - (char *)v15->containing_type_->oneof_decls_) >> 4));
LABEL_4:
      *(google::protobuf::Message *)((char *)message
                                   + (unsigned int)this->schema_.offsets_[field->containing_type_->field_count_ + v9]) = *(google::protobuf::Message *)value;
      *v10 = number;
      return;
    }
  }
  offsets = this->schema_.offsets_;
  v17 = (int (**)(...))*value;
  has_bits_offset = (unsigned int)this->schema_.has_bits_offset_;
  if ( field->is_extension_ )
  {
    v22 = field->extension_scope_;
    if ( v22 )
    {
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)v22->extensions_) >> 3))]) = v17;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v19 = (int)(678152731 * (((char *)field - (char *)v22->extensions_) >> 3));
        goto LABEL_13;
      }
    }
    else
    {
      file = field->file_;
      *(int (***)(...))((char *)&message->_vptr_MessageLite
                      + offsets[(int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3))]) = v17;
      if ( (_DWORD)has_bits_offset != -1 )
      {
        has_bit_indices = this->schema_.has_bit_indices_;
        v19 = (int)(678152731 * (((char *)field - (char *)file->extensions_) >> 3));
        goto LABEL_13;
      }
    }
  }
  else
  {
    v19 = (int)(678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3));
    *(int (***)(...))((char *)&message->_vptr_MessageLite + offsets[v19]) = v17;
    if ( (_DWORD)has_bits_offset != -1 )
    {
      has_bit_indices = this->schema_.has_bit_indices_;
LABEL_13:
      v21 = has_bit_indices[v19];
      *(_DWORD *)((char *)&message->_vptr_MessageLite + 4 * (v21 >> 5) + has_bits_offset) |= 1 << v21;
    }
  }
};

// Line 2176: range 000000000C8A0600-000000000C8A0604
google::protobuf::MessageFactory *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetMessageFactory(
        const google::protobuf::internal::GeneratedMessageReflection *const this)
{
  return this->message_factory_;
};

// Line 2182: range 000000000C8A0FB0-000000000C8A11EA
char *__fastcall google::protobuf::internal::GeneratedMessageReflection::RepeatedFieldData(
        google::protobuf::internal::GeneratedMessageReflection *this,
        google::protobuf::Message *a2,
        google::protobuf::FieldDescriptor *a3,
        google::protobuf::FieldDescriptor::CppType a4,
        const google::protobuf::Descriptor *a5)
{
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::ExtensionSet *v15; // rbp
  bool is_packed; // r12
  google::protobuf::internal::FieldType v17; // al
  google::protobuf::internal::LogFinisher v18; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v19; // [rsp+20h] [rbp-78h] BYREF

  if ( a3->label_ != LABEL_REPEATED )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v19,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      2183);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v19, "CHECK failed: field->is_repeated(): ");
    google::protobuf::internal::LogFinisher::operator=(&v18, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(a3)] != a4
    && (google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(a3)] != CPPTYPE_ENUM_0
     || a4 != CPPTYPE_INT32_0) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v19,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      2184);
    v10 = google::protobuf::internal::LogMessage::operator<<(
            &v19,
            "CHECK failed: field->cpp_type() == cpp_type || (field->cpp_type() == FieldDescriptor::CPPTYPE_ENUM && cpp_ty"
            "pe == FieldDescriptor::CPPTYPE_INT32): ");
    v11 = google::protobuf::internal::LogMessage::operator<<(
            v10,
            "The type parameter T in RepeatedFieldRef<T> API doesn't match ");
    v12 = google::protobuf::internal::LogMessage::operator<<(
            v11,
            "the actual field type (for enums T should be the generated enum ");
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, "type or int32).");
    google::protobuf::internal::LogFinisher::operator=(&v18, v13);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
  }
  if ( a5 && a5 != google::protobuf::FieldDescriptor::message_type(a3) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v19,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      2191);
    v8 = google::protobuf::internal::LogMessage::operator<<(
           &v19,
           "CHECK failed: (message_type) == (field->message_type()): ");
    google::protobuf::internal::LogFinisher::operator=(&v18, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
  }
  if ( !a3->is_extension_ )
    return (char *)a2
         + (unsigned int)this->schema_.offsets_[(int)(678152731
                                                    * (((char *)a3 - (char *)a3->containing_type_->fields_) >> 3))];
  v15 = (google::protobuf::internal::ExtensionSet *)((char *)a2 + (unsigned int)this->schema_.extensions_offset_);
  is_packed = google::protobuf::FieldDescriptor::is_packed(a3);
  v17 = google::protobuf::FieldDescriptor::type(a3);
  return (char *)google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(v15, a3->number_, v17, is_packed, a3);
};

// Line 2191: range 000000000C72A8AC-000000000C72A8B7
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::RepeatedFieldData()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r13

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 2202: range 000000000C8A1790-000000000C8A1865
google::protobuf::internal::MapFieldBase *__fastcall google::protobuf::internal::GeneratedMessageReflection::MapData(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  const char *v4; // r8
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  const google::protobuf::uint32 *offsets; // rdx
  int v8; // ebx
  const google::protobuf::Descriptor *extension_scope; // rax

  if ( !google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    google::protobuf::internal::`anonymous namespace'::ReportReflectionUsageError(
      &this->descriptor_->name_,
      (const google::protobuf::Descriptor *)field,
      &stru_1A16FDCA,
      (const char *)&stru_1A16FD2D.type_name_ + 3,
      v4);
  containing_oneof = field->containing_oneof_;
  offsets = this->schema_.offsets_;
  if ( containing_oneof )
    return (google::protobuf::internal::MapFieldBase *)((char *)message
                                                      + offsets[(int)(field->containing_type_->field_count_
                                                                    - 1431655765
                                                                    * (((char *)containing_oneof
                                                                      - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4))]);
  if ( field->is_extension_ )
  {
    extension_scope = field->extension_scope_;
    if ( extension_scope )
      v8 = 678152731 * (((char *)field - (char *)extension_scope->extensions_) >> 3);
    else
      v8 = 678152731 * (((char *)field - (char *)field->file_->extensions_) >> 3);
  }
  else
  {
    v8 = 678152731 * (((char *)field - (char *)field->containing_type_->fields_) >> 3);
  }
  return (google::protobuf::internal::MapFieldBase *)((char *)message + offsets[v8]);
};

// Line 2216: range 000000000C8A0990-000000000C8A09DC
// local variable allocation has failed, the output may be wrong!
google::protobuf::internal::ReflectionSchema *__fastcall google::protobuf::internal::`anonymous namespace'::MigrationToReflectionSchema(
        google::protobuf::internal::ReflectionSchema *retstr,
        const google::protobuf::Message *const *default_instance,
        const google::protobuf::uint32 *offsets,
        google::protobuf::internal::MigrationSchema migration_schema)
{
  google::protobuf::internal::ReflectionSchema *result; // rax
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx

  retstr->default_instance_ = (const google::protobuf::Message *)default_instance;
  result = retstr;
  v5 = 4LL * migration_schema.offsets_index + 20;
  retstr->object_size_ = migration_schema.object_size;
  retstr->has_bit_indices_ = &offsets[migration_schema.has_bit_indices_index];
  v6 = offsets[migration_schema.offsets_index];
  retstr->offsets_ = (const google::protobuf::uint32 *)((char *)offsets + v5);
  retstr->has_bits_offset_ = v6;
  retstr->metadata_offset_ = *(const google::protobuf::uint32 *)((char *)offsets + v5 - 16);
  retstr->extensions_offset_ = *(const google::protobuf::uint32 *)((char *)offsets + v5 - 12);
  v7 = *(const google::protobuf::uint32 *)((char *)offsets + v5 - 8);
  v8 = *(const google::protobuf::uint32 *)((char *)offsets + v5 - 4);
  retstr->oneof_case_offset_ = v7;
  retstr->weak_field_map_offset_ = v8;
  return result;
};

// Line 2246: range 000000000C8A30D0-000000000C8A31E0
const google::protobuf::Message *const **__fastcall google::protobuf::internal::`anonymous namespace'::AssignDescriptorsHelper<google::protobuf::internal::MigrationSchema>::AssignMessageDescriptor(
        __int64 a1,
        const google::protobuf::Descriptor *a2)
{
  __int64 i; // rbx
  __int64 v5; // rsi
  const google::protobuf::Descriptor **v6; // rcx
  const google::protobuf::Message *const **v7; // rax
  bool v8; // zf
  const google::protobuf::Message *const **result; // rax
  const google::protobuf::DescriptorPool *v10; // r14
  google::protobuf::internal::GeneratedMessageReflection *v11; // r13
  int enum_type_count; // edx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  google::protobuf::EnumDescriptor *v16; // rsi
  _BYTE v17[88]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; a2->nested_type_count_ > (int)i; ++i )
  {
    v5 = i;
    google::protobuf::internal::`anonymous namespace'::AssignDescriptorsHelper<google::protobuf::internal::MigrationSchema>::AssignMessageDescriptor(
      a1,
      &a2->nested_types_[v5]);
  }
  v6 = *(const google::protobuf::Descriptor ***)(a1 + 8);
  v7 = *(const google::protobuf::Message *const ***)(a1 + 32);
  v8 = !a2->options_->map_entry_;
  *v6 = a2;
  if ( v8 )
  {
    google::protobuf::internal::`anonymous namespace'::MigrationToReflectionSchema(
      (google::protobuf::internal::ReflectionSchema *)v17,
      *v7,
      *(const google::protobuf::uint32 **)(a1 + 40),
      *(google::protobuf::internal::MigrationSchema *)*(_QWORD *)(a1 + 24));
    v10 = (const google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool((google::protobuf::DescriptorPool *)v17);
    v11 = (google::protobuf::internal::GeneratedMessageReflection *)operator new(0x58uLL);
    google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
      v11,
      a2,
      (const __m128i *)v17,
      v10,
      *(google::protobuf::MessageFactory **)a1);
    v6 = *(const google::protobuf::Descriptor ***)(a1 + 8);
    enum_type_count = a2->enum_type_count_;
    v6[1] = (const google::protobuf::Descriptor *)v11;
    if ( enum_type_count > 0 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v14 = v13 + 8LL * (unsigned int)(enum_type_count - 1) + 8;
      v15 = 0LL;
      do
      {
        v13 += 8LL;
        v16 = &a2->enum_types_[v15++];
        *(_QWORD *)(v13 - 8) = v16;
      }
      while ( v13 != v14 );
      *(_QWORD *)(a1 + 16) = v13;
    }
    *(_QWORD *)(a1 + 24) += 12LL;
    v7 = *(const google::protobuf::Message *const ***)(a1 + 32);
  }
  result = v7 + 1;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 8) = v6 + 2;
  return result;
};

// Line 2255: range 000000000C72A95C-000000000C72A96C
void __fastcall __noreturn google::protobuf::internal::`anonymous namespace'::AssignDescriptorsHelper<google::protobuf::internal::MigrationSchema>::AssignMessageDescriptor()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x58uLL);
  _Unwind_Resume(v0);
};

// Line 2311: range 000000000C8A0E80-000000000C8A0FA1
void __fastcall google::protobuf::internal::`anonymous namespace'::MetadataOwner::DeleteMetadata(
        google::protobuf::internal::_anonymous_namespace_::MetadataOwner *this,
        void (*a2)(void))
{
  google::protobuf::internal::Mutex *v2; // rbp
  google::protobuf::internal::Mutex::Internal *mInternal; // rdi
  unsigned __int64 v4; // r12
  unsigned __int64 i; // rbx
  __int64 v6; // r8

  if ( (_BYTE)`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res
    || !__cxa_guard_acquire(&`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res) )
  {
    v2 = google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res;
    if ( !google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res )
      return;
  }
  else
  {
    v2 = (google::protobuf::internal::Mutex *)operator new(0x20uLL);
    google::protobuf::internal::Mutex::Mutex(v2);
    v2[1].mInternal = 0LL;
    v2[2].mInternal = 0LL;
    v2[3].mInternal = 0LL;
    google::protobuf::internal::OnShutdown(
      (google::protobuf::internal *)google::protobuf::internal::`anonymous namespace'::MetadataOwner::DeleteMetadata,
      a2);
    google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res = v2;
    __cxa_guard_release(&`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res);
  }
  mInternal = v2[1].mInternal;
  if ( v2[2].mInternal != mInternal )
  {
    v4 = 0LL;
    do
    {
      for ( i = *(_QWORD *)&mInternal->mutex.__size[16 * v4];
            *(_QWORD *)&mInternal->mutex.__size[16 * v4 + 8] > i;
            i += 16LL )
      {
        v6 = *(_QWORD *)(i + 8);
        if ( v6 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(i + 8));
          mInternal = v2[1].mInternal;
        }
      }
      ++v4;
    }
    while ( ((char *)v2[2].mInternal - (char *)mInternal) >> 4 > v4 );
  }
  if ( mInternal )
    operator delete(mInternal);
  google::protobuf::internal::Mutex::~Mutex(v2);
  operator delete(v2, 0x20uLL);
};

// Line 2328: range 000000000C8A8E50-000000000C8A91CE
__int64 __fastcall google::protobuf::internal::AssignDescriptors(
        google::protobuf::DescriptorPool *a1,
        google::protobuf::internal::MigrationSchema *a2,
        __int64 a3,
        google::protobuf::uint32 *a4,
        google::protobuf::MessageFactory *a5,
        google::protobuf::internal::Mutex *a6,
        __int64 a7,
        __int64 a8)
{
  std::string *v13; // rsi
  google::protobuf::DescriptorPool *v14; // rdi
  std::__detail::_Node_iterator_base<std::pair<char const* const,const google::protobuf::FileDescriptor*>,true>::__node_type *FileByName; // r12
  int v16; // edx
  __int64 v17; // rbp
  __int64 v18; // r14
  const google::protobuf::Descriptor *v19; // rbx
  __int64 v20; // rsi
  google::protobuf::DescriptorDatabase *v21; // rax
  const google::protobuf::Message *const **v22; // rsi
  bool v23; // zf
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v30; // rsi
  std::string *v31; // rax
  std::size_t v32; // rcx
  google::protobuf::internal::Mutex *v33; // rbp
  google::protobuf::DescriptorDatabase *v34; // rbx
  std::pair<const google::protobuf::Metadata*,const google::protobuf::Metadata*> *v35; // rcx
  google::protobuf::internal::Mutex::Internal *mInternal; // rsi
  google::protobuf::internal::Mutex::Internal *v37; // rsi
  const google::protobuf::DescriptorPool *v39; // r15
  google::protobuf::internal::GeneratedMessageReflection *v40; // r14
  int enum_type_count; // ecx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  google::protobuf::EnumDescriptor *v45; // rsi
  google::protobuf::MessageFactory *v46; // [rsp+0h] [rbp-A8h] BYREF
  google::protobuf::DescriptorDatabase *v47; // [rsp+8h] [rbp-A0h]
  __int64 v48; // [rsp+10h] [rbp-98h]
  google::protobuf::internal::MigrationSchema *v49; // [rsp+18h] [rbp-90h]
  const google::protobuf::Message *const **v50; // [rsp+20h] [rbp-88h]
  google::protobuf::uint32 *offsets; // [rsp+28h] [rbp-80h]
  google::protobuf::DescriptorPool v52; // [rsp+30h] [rbp-78h] BYREF

  v13 = (std::string *)a1;
  v14 = (google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool(a1);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v14, v13);
  if ( FileByName )
  {
    if ( a5 )
      goto LABEL_3;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)&v52,
      LOGLEVEL_FATAL_0,
      "google/protobuf/generated_message_reflection.cc",
      2331);
    v13 = (std::string *)google::protobuf::internal::LogMessage::operator<<(
                           (google::protobuf::internal::LogMessage_0 *const)&v52,
                           (const char *)&stru_1A1700D9.default_value_enum_name_ + 7);
    google::protobuf::internal::LogFinisher::operator=(
      (google::protobuf::internal::LogFinisher *const)&v46,
      (google::protobuf::internal::LogMessage_0 *)v13);
    v14 = &v52;
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&v52);
    if ( a5 )
      goto LABEL_3;
  }
  a5 = (google::protobuf::MessageFactory *)google::protobuf::MessageFactory::generated_factory((google::protobuf::MessageFactory *)v14);
LABEL_3:
  v16 = *(_DWORD *)&FileByName[1]._M_storage._M_storage.gap0[4];
  offsets = a4;
  v17 = 0LL;
  v46 = a5;
  v47 = (google::protobuf::DescriptorDatabase *)a6;
  v48 = a7;
  v49 = a2;
  v50 = (const google::protobuf::Message *const **)a3;
  if ( v16 > 0 )
  {
    do
    {
      v18 = 0LL;
      v19 = (const google::protobuf::Descriptor *)(*(_QWORD *)FileByName[3]._M_storage._M_storage.__data + 144 * v17);
      if ( v19->nested_type_count_ > 0 )
      {
        do
        {
          v20 = v18++;
          google::protobuf::internal::`anonymous namespace'::AssignDescriptorsHelper<google::protobuf::internal::MigrationSchema>::AssignMessageDescriptor(
            (__int64)&v46,
            &v19->nested_types_[v20]);
        }
        while ( v19->nested_type_count_ > (int)v18 );
      }
      v21 = v47;
      v22 = v50;
      v23 = !v19->options_->map_entry_;
      v47->_vptr_DescriptorDatabase = (int (**)(...))v19;
      if ( v23 )
      {
        google::protobuf::internal::`anonymous namespace'::MigrationToReflectionSchema(
          (google::protobuf::internal::ReflectionSchema *)&v52,
          *v22,
          offsets,
          *v49);
        v39 = (const google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool(&v52);
        v40 = (google::protobuf::internal::GeneratedMessageReflection *)operator new(0x58uLL);
        google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
          v40,
          v19,
          (const __m128i *)&v52,
          v39,
          v46);
        v21 = v47;
        enum_type_count = v19->enum_type_count_;
        v47[1]._vptr_DescriptorDatabase = (int (**)(...))v40;
        if ( enum_type_count > 0 )
        {
          v42 = v48;
          v43 = v48 + 8LL * (unsigned int)(enum_type_count - 1) + 8;
          v44 = 0LL;
          do
          {
            v42 += 8LL;
            v45 = &v19->enum_types_[v44++];
            *(_QWORD *)(v42 - 8) = v45;
          }
          while ( v42 != v43 );
          v48 = v42;
        }
        ++v49;
        v22 = v50;
      }
      v13 = (std::string *)(v22 + 1);
      ++v17;
      v50 = (const google::protobuf::Message *const **)v13;
      v47 = v21 + 2;
    }
    while ( *(_DWORD *)&FileByName[1]._M_storage._M_storage.gap0[4] > (int)v17 );
  }
  v24 = *((_DWORD *)&FileByName[1]._M_storage._M_storage.1 + 2);
  if ( v24 > 0 )
  {
    v25 = v48;
    v13 = (std::string *)(v48 + 8LL * (unsigned int)(v24 - 1) + 8);
    v26 = 0LL;
    do
    {
      v25 += 8LL;
      v27 = v26 + *((_QWORD *)&FileByName[3]._M_storage._M_storage.1 + 1);
      v26 += 56LL;
      *(_QWORD *)(v25 - 8) = v27;
    }
    while ( (std::string *)v25 != v13 );
    v48 = v25;
  }
  if ( *(_BYTE *)(*(_QWORD *)FileByName[4]._M_storage._M_storage.__data + 172LL) )
  {
    v28 = *((_DWORD *)&FileByName[1]._M_storage._M_storage.1 + 3);
    if ( v28 > 0 )
    {
      v30 = 3LL * (unsigned int)(v28 - 1) + 3;
      v31 = 0LL;
      v13 = (std::string *)(16 * v30);
      do
      {
        a8 += 8LL;
        v32 = (std::size_t)v31 + FileByName[3]._M_hash_code;
        v31 = (std::string *)((char *)v31 + 48);
        *(_QWORD *)(a8 - 8) = v32;
      }
      while ( v13 != v31 );
    }
  }
  if ( (_BYTE)`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res
    || !__cxa_guard_acquire(&`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res) )
  {
    v33 = google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res;
  }
  else
  {
    v33 = (google::protobuf::internal::Mutex *)operator new(0x20uLL);
    google::protobuf::internal::Mutex::Mutex(v33);
    v33[1].mInternal = 0LL;
    v33[2].mInternal = 0LL;
    v33[3].mInternal = 0LL;
    google::protobuf::internal::OnShutdown(
      (google::protobuf::internal *)google::protobuf::internal::`anonymous namespace'::MetadataOwner::DeleteMetadata,
      (void (*)(void))v13);
    google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res = v33;
    __cxa_guard_release(&`guard variable for'google::protobuf::internal::`anonymous namespace'::MetadataOwner::Instance(void)::res);
  }
  v34 = v47;
  google::protobuf::internal::Mutex::Lock(v33);
  v52.mutex_ = a6;
  mInternal = v33[2].mInternal;
  v52.fallback_database_ = v34;
  if ( mInternal == v33[3].mInternal )
  {
    std::vector<std::pair<google::protobuf::Metadata const*,google::protobuf::Metadata const*>>::_M_realloc_insert<std::pair<google::protobuf::Metadata const*,google::protobuf::Metadata const*>>(
      (std::vector<std::pair<const google::protobuf::Metadata*,const google::protobuf::Metadata*>> *const)&v33[1],
      (std::vector<std::pair<const google::protobuf::Metadata*,const google::protobuf::Metadata*>>::iterator)mInternal,
      (std::pair<const google::protobuf::Metadata*,const google::protobuf::Metadata*> *)&v52,
      v35);
  }
  else
  {
    mInternal->mutex.__align = (__int64)a6;
    v37 = (google::protobuf::internal::Mutex::Internal *)(&mInternal->mutex.__align + 2);
    v37[-1].mutex.__data.__list.__next = (__pthread_internal_list *)v34;
    v33[2].mInternal = v37;
  }
  return google::protobuf::internal::Mutex::Unlock(v33);
};

// Line 2356: range 000000000C8A5310-000000000C8A5358
void __fastcall google::protobuf::internal::RegisterAllTypes(
        const google::protobuf::Metadata *file_level_metadata,
        int size)
{
  const google::protobuf::Message *v2; // rdx
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code *v3; // rbx
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v4; // rax

  if ( size > 0 )
  {
    v3 = (std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code *)file_level_metadata;
    do
    {
      v4 = v3[1];
      if ( v4 )
        google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
          *v3,
          *(const google::protobuf::Descriptor **)(v4 + 16),
          v2);
      v3 += 2;
    }
    while ( v3 != (std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code *)&file_level_metadata[(unsigned int)(size - 1) + 1] );
  }
};

// Line 2376: range 000000000C8A5360-000000000C8A5380
void __fastcall google::protobuf::internal::UnknownFieldSetSerializer(
        const google::protobuf::uint8 *base,
        google::protobuf::uint32 offset,
        google::protobuf::uint32 tag,
        google::protobuf::uint32 has_offset,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v5; // rdi

  v5 = *(_QWORD *)&base[offset];
  if ( (v5 & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 2387: range 000000000C746A30-000000000C746A51
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal14ParseNamedEnumEPKNS0_14EnumDescriptorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPi()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
